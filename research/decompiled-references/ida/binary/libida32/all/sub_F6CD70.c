void __fastcall sub_F6CD70(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, __m128i *a5)
{
  __int64 v5; // r12
  __m128i *v6; // r15
  __int64 v7; // r14
  __m128i *v8; // rbp
  __m128i *v9; // r13
  __int64 v10; // r15
  __int64 v11; // rbx
  __m128i *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __m128i *v15; // r14
  __int64 v16; // r13
  __m128i *v17; // [rsp+8h] [rbp-C0h] BYREF
  __m128i *v18; // [rsp+10h] [rbp-B8h]
  __m128i *v19; // [rsp+18h] [rbp-B0h]
  __int64 **v20; // [rsp+20h] [rbp-A8h]
  _QWORD *v21; // [rsp+28h] [rbp-A0h]
  __m128 v22; // [rsp+30h] [rbp-98h] BYREF
  __m128 v23; // [rsp+40h] [rbp-88h] BYREF
  __int8 *v24; // [rsp+50h] [rbp-78h] BYREF
  __int64 v25; // [rsp+58h] [rbp-70h]
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  __m128 si128; // [rsp+70h] [rbp-58h] BYREF
  _OWORD v29[4]; // [rsp+80h] [rbp-48h] BYREF

  v18 = a1;
  v19 = a2;
  v27 = a3;
  v17 = a5;
  if ( a5 )
  {
    v5 = a4;
    if ( a4 )
    {
      if ( &a5->m128i_i8[a4] == (char *)&dword_0 + 2 )
      {
        v12 = a1;
        v6 = a2;
LABEL_17:
        v17 = v12;
        si128 = _mm_loadh_ps((const double *)&v17);
        v17 = v6;
        v29[0] = _mm_loadh_ps((const double *)&v17);
        if ( (unsigned __int8)sub_F58800(v29, (__int64 **)&si128) )
          sub_F685E0(v12, v6);
      }
      else
      {
        v20 = (__int64 **)&si128;
        v21 = v29;
        while ( 1 )
        {
          if ( (__int64)v17 >= v5 )
          {
            v8 = v18;
            v25 = (__int64)v17 / 2;
            v22.m128_u64[0] = (__int64)v17 / 2;
            v13 = 56 * ((__int64)v17 / 2);
            v26 = v13;
            v6 = (__m128i *)((char *)v19 + v13);
            v14 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v19 - (char *)v18) >> 3);
            if ( (char *)v19 - (char *)v18 > 0 )
            {
              v15 = v18;
              v24 = &v19->m128i_i8[v13];
              v23 = _mm_loadh_ps((const double *)&v24);
              while ( 1 )
              {
                v16 = v14 >> 1;
                v29[0] = _mm_load_si128((const __m128i *)&v23);
                v24 = &v15->m128i_i8[56 * (v14 >> 1)];
                si128 = _mm_loadh_ps((const double *)&v24);
                if ( (unsigned __int8)sub_F58800(v21, v20) )
                {
                  if ( !v16 )
                  {
LABEL_25:
                    v8 = v15;
                    v7 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v15 - (char *)v18) >> 3);
                    v5 -= v7;
                    goto LABEL_26;
                  }
                }
                else
                {
                  v15 = (__m128i *)((char *)v15 + 56 * (v14 >> 1) + 56);
                  v16 = v14 - v16 - 1;
                  if ( v16 <= 0 )
                    goto LABEL_25;
                }
                v14 = v16;
              }
            }
            v7 = 0;
LABEL_26:
            v17 = (__m128i *)((char *)v17 - v25);
            v12 = (__m128i *)((char *)v8 + v26);
          }
          else
          {
            v6 = v19;
            v23.m128_u64[0] = v5 / 2;
            v7 = v5 / 2;
            v8 = (__m128i *)((char *)v18 + 56 * (v5 / 2));
            if ( v27 - (__int64)v19 > 0 )
            {
              v9 = v19;
              v25 = (__int64)&v18->m128i_i64[7 * (v5 / 2)];
              v10 = 0x6DB6DB6DB6DB6DB7LL * ((v27 - (__int64)v19) >> 3);
              v24 = (__int8 *)v25;
              v22 = _mm_loadh_ps((const double *)&v24);
              while ( 1 )
              {
                v11 = v10 >> 1;
                si128 = (__m128)_mm_load_si128((const __m128i *)&v22);
                v24 = &v9->m128i_i8[56 * (v10 >> 1)];
                v29[0] = _mm_loadh_ps((const double *)&v24);
                if ( (unsigned __int8)sub_F58800(v21, v20) )
                {
                  v9 = (__m128i *)((char *)v9 + 56 * (v10 >> 1) + 56);
                  v11 = v10 - v11 - 1;
                  if ( v11 <= 0 )
                    goto LABEL_12;
                }
                else if ( !v11 )
                {
LABEL_12:
                  v8 = (__m128i *)v25;
                  v6 = v9;
                  v12 = (__m128i *)(v25 + (char *)v9 - (char *)v19);
                  v17 = (__m128i *)((char *)v17 - 0x6DB6DB6DB6DB6DB7LL * (((char *)v9 - (char *)v19) >> 3));
                  v22.m128_u64[0] = 0x6DB6DB6DB6DB6DB7LL * (((char *)v9 - (char *)v19) >> 3);
                  goto LABEL_13;
                }
                v10 = v11;
              }
            }
            v22.m128_u64[0] = 0;
            v12 = (__m128i *)((char *)v18 + 56 * (v5 / 2));
LABEL_13:
            v5 -= v23.m128_u64[0];
          }
          sub_F6BF00(v8, v19, v6);
          sub_F6CD70(v18, v8, v12, v7, v22.m128_u64[0]);
          if ( !v5 || !v17 )
            break;
          v19 = v6;
          v18 = v12;
          if ( &v17->m128i_i8[v5] == (char *)&dword_0 + 2 )
            goto LABEL_17;
        }
      }
    }
  }
}

