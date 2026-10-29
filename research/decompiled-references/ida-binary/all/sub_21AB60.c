unsigned __int64 __fastcall sub_21AB60(_QWORD *a1, int a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __m128i v14; // xmm2
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 i; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm3
  __int64 v22; // rbx
  __m128i v23; // xmm1
  __int64 v24; // rdi
  __int64 v25; // r13
  __m128i v26; // xmm4
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 j; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  __m128i v32; // xmm5
  __m128i v33; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v34; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+18h] [rbp-B0h]
  _QWORD *v36; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-A0h]
  int v38[2]; // [rsp+30h] [rbp-98h] BYREF
  __m128i v39; // [rsp+38h] [rbp-90h] BYREF
  __int64 v40; // [rsp+48h] [rbp-80h]
  __m128i v41; // [rsp+50h] [rbp-78h] BYREF
  __int64 v42; // [rsp+60h] [rbp-68h]
  __m128i v43; // [rsp+68h] [rbp-60h] BYREF
  __int64 v44; // [rsp+78h] [rbp-50h]
  __m128i v45; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+98h] [rbp-30h]

  v46 = __readfsqword(0x28u);
  if ( a2 < 16 * ((unsigned __int64)(a1[15] == 0) + ((__int64)(a1[15] - a1[11]) >> 3) - 1)
          + ((__int64)(a1[10] - a1[8]) >> 5)
          + ((__int64)(a1[12] - a1[13]) >> 5) )
  {
    v34 = a1;
    v35 = a2;
    if ( a1 )
    {
      v2 = sub_2198A0(&v34);
      v36 = v2;
      v37 = v3;
      if ( v2 )
      {
        v4 = sub_219300(v2 + 12, v2 + 8);
        if ( v37 < v4 )
        {
          if ( sub_210380((__int64)&v36)[3] )
          {
            sub_2195B0((__int64)v38, &v36);
            v8 = (_QWORD *)sub_210380((__int64)&v36)[3];
            v11 = *(_QWORD *)v38;
            *(_QWORD *)v38 = 0;
            v12 = _mm_loadu_si128(&v39);
            v39 = 0;
            v13 = *v8;
            if ( *v8 )
            {
              v8[1] = 0;
              qfree(v13, (const char *)&v36, v6, v7, v9, v10, *(_OWORD *)&v12, v34, v35, v36);
              v12 = _mm_load_si128(&v33);
            }
            *(__m128i *)(v8 + 1) = v12;
            *v8 = v11;
            v14 = _mm_load_si128(&v41);
            v15 = v40;
            v41 = 0;
            v40 = 0;
            v16 = v8[3];
            v33 = v14;
            if ( v16 )
            {
              v17 = v8[4];
              if ( v17 )
              {
                for ( i = 0; i != v17; ++i )
                {
                  v19 = v16 + 32 * i;
                  if ( *(int *)v19 >= -1 )
                  {
                    v20 = *(_QWORD *)(v19 + 8);
                    if ( v20 )
                    {
                      *(_QWORD *)(v19 + 16) = 0;
                      qfree(v20, (const char *)&v36);
                      v16 = v8[3];
                    }
                  }
                }
              }
              v8[4] = 0;
              qfree(v16, (const char *)&v36);
            }
            v21 = _mm_load_si128(&v33);
            v8[3] = v15;
            *((__m128i *)v8 + 2) = v21;
            v22 = v42;
            v23 = _mm_loadu_si128(&v43);
            v42 = 0;
            v43 = 0;
            v24 = v8[6];
            if ( v24 )
            {
              v8[7] = 0;
              v33 = v23;
              qfree(v24, (const char *)&v36);
              v23 = _mm_load_si128(&v33);
            }
            v8[6] = v22;
            *(__m128i *)(v8 + 7) = v23;
            v25 = v44;
            v26 = _mm_load_si128(&v45);
            v44 = 0;
            v45 = 0;
            v27 = v8[9];
            v33 = v26;
            if ( v27 )
            {
              v28 = v8[10];
              if ( v28 )
              {
                for ( j = 0; j != v28; ++j )
                {
                  v30 = v27 + 32 * j;
                  v31 = *(_QWORD *)(v30 + 8);
                  if ( v31 )
                  {
                    *(_QWORD *)(v30 + 16) = 0;
                    qfree(v31, (const char *)&v36);
                    v27 = v8[9];
                  }
                }
              }
              v8[10] = 0;
              qfree(v27, (const char *)&v36);
            }
            v32 = _mm_load_si128(&v33);
            v8[9] = v25;
            *((__m128i *)v8 + 5) = v32;
            sub_20DA00((__int64 *)v38, (const char *)&v36);
          }
        }
      }
    }
  }
  return v46 - __readfsqword(0x28u);
}
