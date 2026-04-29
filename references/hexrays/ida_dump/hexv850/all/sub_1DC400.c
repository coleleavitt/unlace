unsigned __int64 __fastcall sub_1DC400(const __m128i *a1, __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  int v6; // edx
  char v7; // al
  __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm4
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 *v25; // rax
  __m128i v26; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v27; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v28[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v29; // [rsp+30h] [rbp-88h] BYREF
  __m128i v30; // [rsp+38h] [rbp-80h]
  __m128i v31; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v32[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a1[1].m128i_i8[8] && (!(unsigned __int8)sub_5FE00(a2) || a2[3]) )
  {
    v4 = a1->m128i_i64[1];
    if ( v4 )
    {
      if ( a1[1].m128i_i64[0] )
      {
        v5 = *(_QWORD **)(v4 + 8);
        if ( (_QWORD *)v4 != v5 )
        {
          v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4B24C8), (__m128i)(unsigned __int64)off_4B24C0);
          do
          {
            v29 = 0;
            v30 = 0;
            v6 = *((_DWORD *)v5 + 11);
            v28[1] = 0;
            v7 = *((_BYTE *)v5 + 32);
            v28[0] = 0;
            v8 = v5[3];
            if ( v7 == 1 )
            {
              v31 = 0u;
              sub_5F400(v31.m128i_i64, v8, v6);
              memset(v32, 0, sizeof(v32));
            }
            else if ( v7 == 5 )
            {
              v9 = *(_QWORD *)(a1->m128i_i64[0] + 1440) + v8;
              v31 = 0u;
              memset(v32, 0, sizeof(v32));
              if ( v6 + v9 - 1 >= v9 )
              {
                v27.m128i_i64[0] = v6;
                v23 = qvector_reserve(v32, 0, 1, 16);
                v24 = v27.m128i_i64[0];
                *(_QWORD *)v32 = v23;
                v25 = (unsigned __int64 *)(16LL * *(_QWORD *)&v32[8] + v23);
                *v25 = v9;
                v25[1] = v24;
                ++*(_QWORD *)&v32[8];
              }
            }
            else
            {
              v31 = 0u;
              memset(v32, 0, sizeof(v32));
            }
            sub_5FE50(v28, v31.m128i_i64);
            v10 = *(_QWORD *)v32;
            memset(v32, 0, sizeof(v32));
            v11 = _mm_loadu_si128((const __m128i *)&v32[8]);
            if ( v29 )
            {
              v27 = v11;
              v30.m128i_i64[0] = 0;
              qfree(v29);
              v12 = _mm_load_si128(&v27);
              v29 = v10;
              v30 = v12;
              if ( *(_QWORD *)v32 )
              {
                *(_QWORD *)&v32[8] = 0;
                qfree(*(_QWORD *)v32);
              }
            }
            else
            {
              v29 = v10;
              v30 = v11;
            }
            qfree(v31.m128i_i64[0]);
            sub_5FC80(v28, a2);
            sub_312800(&v29, a2 + 2);
            v13 = _mm_loadl_epi64(a1);
            v14 = _mm_load_si128(&v26);
            *(_QWORD *)&v32[16] = v5;
            v31 = v14;
            *(__m128i *)v32 = _mm_unpacklo_epi64(v13, (__m128i)(unsigned __int64)a1);
            if ( (*v5 & 2) == 0 )
            {
              v15 = (_QWORD *)v5[2];
              if ( (*(_BYTE *)v15 & 2) != 0 )
              {
                v20 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
                v21 = *v20;
                if ( (*v20 & 2) == 0 )
                {
                  while ( (_QWORD *)v20[2] == v5 )
                  {
                    v5 = v20;
                    v22 = v21 & 0xFFFFFFFFFFFFFFFCLL;
                    v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v21 & 2) != 0 )
                    {
                      v5 = (_QWORD *)v22;
                      goto LABEL_19;
                    }
                    v20 = (_QWORD *)v22;
                  }
                }
                v5 = v20;
              }
              else
              {
                do
                {
                  v5 = v15;
                  v15 = (_QWORD *)v15[1];
                }
                while ( (*(_BYTE *)v15 & 2) == 0 );
              }
            }
LABEL_19:
            if ( !(unsigned int)sub_603E0(v28, (__int64)&v31, 0) )
              sub_311B90(&v29, &v31.m128i_u64[1], v16, v17, v18, v19, v26.m128i_i64[0]);
            if ( v29 )
            {
              v30.m128i_i64[0] = 0;
              qfree(v29);
            }
            qfree(v28[0]);
          }
          while ( (_QWORD *)a1->m128i_i64[1] != v5 );
        }
      }
    }
  }
  return v33 - __readfsqword(0x28u);
}
