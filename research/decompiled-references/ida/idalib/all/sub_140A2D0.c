void __fastcall sub_140A2D0(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__m128i *, __m128i *))
{
  __int64 v6; // r13
  __int64 v7; // r12
  __m128i *v8; // rbx
  __m128i *v9; // r14
  unsigned __int64 v10; // rdx
  signed __int64 i; // r15
  __int64 v12; // rbp
  __m128i *v13; // rbp
  __int64 v14; // rcx
  signed __int64 v15; // rbp
  __m128i *v16; // r12
  __m128i *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r12
  __m128i *v21; // [rsp+8h] [rbp-70h]
  __m128i *v22; // [rsp+10h] [rbp-68h]
  __int64 v23; // [rsp+18h] [rbp-60h]
  __int64 v24; // [rsp+18h] [rbp-60h]
  __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+30h] [rbp-48h]

  v21 = a1;
  v22 = a2;
  if ( a4 )
  {
    v6 = a5;
    if ( a5 )
    {
      v7 = a4;
      if ( a5 + a4 == 2 )
      {
        v13 = a1;
        v8 = a2;
LABEL_16:
        if ( a6(v8, v13) )
          sub_14097C0(v13, v8);
      }
      else
      {
        while ( 1 )
        {
          if ( v6 >= v7 )
          {
            v25 = v6 / 2;
            v9 = v21;
            v14 = 72 * (v6 / 2);
            v26 = v14;
            v8 = (__m128i *)((char *)v22 + v14);
            v15 = 0x8E38E38E38E38E39LL * (((char *)v22 - (char *)v21) >> 3);
            if ( (char *)v22 - (char *)v21 > 0 )
            {
              v24 = v7;
              v16 = (__m128i *)((char *)v22 + v14);
              v17 = v21;
              while ( 1 )
              {
                v18 = v15 >> 1;
                if ( a6(v16, (__m128i *)((char *)v17 + 72 * (v15 >> 1))) )
                {
                  if ( !v18 )
                  {
LABEL_24:
                    v9 = v17;
                    v8 = v16;
                    v19 = v24;
                    v23 = 0x8E38E38E38E38E39LL * (((char *)v9 - (char *)v21) >> 3);
                    v7 = v19 - v23;
                    goto LABEL_25;
                  }
                }
                else
                {
                  v17 = (__m128i *)((char *)v17 + 72 * (v15 >> 1) + 72);
                  v18 = v15 - v18 - 1;
                  if ( v18 <= 0 )
                    goto LABEL_24;
                }
                v15 = v18;
              }
            }
            v23 = 0;
LABEL_25:
            v6 -= v6 / 2;
            v13 = (__m128i *)((char *)v9 + v26);
          }
          else
          {
            v8 = v22;
            v23 = v7 / 2;
            v9 = (__m128i *)((char *)v21 + 72 * (v7 / 2));
            v10 = 0x8E38E38E38E38E39LL * ((a3 - (__int64)v22) >> 3);
            if ( a3 - (__int64)v22 > 0 )
            {
              for ( i = 0x8E38E38E38E38E39LL * ((a3 - (__int64)v22) >> 3); ; i = v12 )
              {
                v12 = i >> 1;
                if ( ((unsigned __int8 (__fastcall *)(char *, __m128i *, unsigned __int64))a6)(
                       (char *)v8 + 72 * (i >> 1),
                       v9,
                       v10) )
                {
                  v8 = (__m128i *)((char *)v8 + 72 * (i >> 1) + 72);
                  v12 = i - v12 - 1;
                  if ( v12 <= 0 )
                    goto LABEL_11;
                }
                else if ( !v12 )
                {
LABEL_11:
                  v13 = (__m128i *)((char *)v9 + (char *)v8 - (char *)v22);
                  v25 = 0x8E38E38E38E38E39LL * (((char *)v8 - (char *)v22) >> 3);
                  v6 -= v25;
                  goto LABEL_12;
                }
              }
            }
            v25 = 0;
            v13 = (__m128i *)((char *)v21 + 72 * (v7 / 2));
LABEL_12:
            v7 -= v7 / 2;
          }
          sub_14098F0(v9, v22, v8);
          sub_140A2D0(v21, v9, v13, v23, v25, a6);
          if ( !v7 || !v6 )
            break;
          v22 = v8;
          v21 = v13;
          if ( v6 + v7 == 2 )
            goto LABEL_16;
        }
      }
    }
  }
}
