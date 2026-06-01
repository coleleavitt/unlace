void __fastcall sub_379DC0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 *v9; // r15
  unsigned __int64 *v10; // r10
  __int64 v11; // rdi
  unsigned __int64 v12; // r9
  const char *v13; // rsi
  _QWORD *v14; // r11
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rdx
  char *v19; // rax
  const __m128i *v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  const __m128i *v26; // rdi
  __int64 v27; // rcx
  __m128i v28; // xmm0
  bool v29; // cf
  __int64 v30; // rax
  __int64 v31; // rdx
  const __m128i *v32; // rdi
  __int64 v33; // rcx
  __m128i v34; // xmm0
  unsigned __int64 *v35; // [rsp+8h] [rbp-A0h]
  unsigned __int64 *v36; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+10h] [rbp-98h]
  __int64 v38; // [rsp+10h] [rbp-98h]
  unsigned __int64 v39; // [rsp+10h] [rbp-98h]
  __int64 v40; // [rsp+10h] [rbp-98h]
  int v41; // [rsp+18h] [rbp-90h]
  int v42; // [rsp+18h] [rbp-90h]
  int v43; // [rsp+20h] [rbp-88h]
  __m128i v44; // [rsp+30h] [rbp-78h] BYREF
  int v45; // [rsp+40h] [rbp-68h]
  const __m128i *v46; // [rsp+50h] [rbp-58h] BYREF
  __int128 v47; // [rsp+58h] [rbp-50h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 440);
  v48 = __readfsqword(0x28u);
  v6 = a4;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 + 336) && *(_BYTE *)(a1 + 29) )
      {
        v8 = *(_QWORD *)(a4 + 72);
        if ( v8 )
        {
          v9 = *(unsigned __int64 **)(a4 + 64);
          v46 = nullptr;
          v47 = 0;
          v10 = &v9[v8];
          if ( v10 == v9 )
          {
            v12 = 0;
            v11 = 0;
            v13 = nullptr;
          }
          else
          {
            v11 = 0;
            v12 = 0;
            v13 = nullptr;
            do
            {
              v14 = *(_QWORD **)(v7 + 272);
              a4 = *v9;
              v15 = &v14[5 * *(_QWORD *)(v7 + 280)];
              if ( v14 != v15 )
              {
                v16 = *(_QWORD **)(v7 + 272);
                while ( a4 != *v16 )
                {
                  v16 += 5;
                  if ( v15 == v16 )
                    goto LABEL_19;
                }
                v17 = 0xCCCCCCCCCCCCCCCDLL * (v16 - v14);
                if ( (v17 & 0x80000000) == 0LL )
                {
                  v44.m128i_i8[0] = 1;
                  v18 = v11 + 1;
                  v44.m128i_i32[1] = v17;
                  v44.m128i_i64[1] = -1;
                  v45 = -1;
                  if ( &v44 < (__m128i *)v13 || (a4 = (unsigned __int64)&v13[20 * v12], (unsigned __int64)&v44 >= a4) )
                  {
                    if ( v12 < v18 )
                    {
                      v41 = a5;
                      v37 = v12;
                      v35 = v10;
                      v24 = qvector_reserve(&v46, 0, v18, 20);
                      v13 = (const char *)v24;
                      v25 = *((_QWORD *)&v47 + 1);
                      v26 = v46;
                      v27 = v47 - 1;
                      *((_QWORD *)&v47 + 1) = v37;
                      if ( (__int64)v47 - 1 >= 0 )
                      {
                        do
                        {
                          v28 = _mm_loadu_si128(v26);
                          v24 += 20;
                          v26 = (const __m128i *)((char *)v26 + 20);
                          *(__m128i *)(v24 - 20) = v28;
                          *(_DWORD *)(v24 - 4) = v26[-1].m128i_i32[3];
                          v29 = v27-- == 0;
                        }
                        while ( !v29 );
                        v26 = v46;
                      }
                      v38 = v25;
                      qfree(v26, v13, v25, v27);
                      v11 = v47;
                      a5 = v41;
                      v46 = (const __m128i *)v13;
                      v10 = v35;
                      *((_QWORD *)&v47 + 1) = v38;
                    }
                    v22 = _mm_load_si128(&v44);
                    v23 = (__m128i *)&v13[20 * v11];
                    v23[1].m128i_i32[0] = v45;
                    *v23 = v22;
                  }
                  else
                  {
                    if ( v12 < v18 )
                    {
                      v43 = v17;
                      v42 = a5;
                      v39 = v12;
                      v36 = v10;
                      v30 = qvector_reserve(&v46, 0, v18, 20);
                      v13 = (const char *)v30;
                      v31 = *((_QWORD *)&v47 + 1);
                      v32 = v46;
                      v33 = v47 - 1;
                      *((_QWORD *)&v47 + 1) = v39;
                      if ( (__int64)v47 - 1 >= 0 )
                      {
                        do
                        {
                          v34 = _mm_loadu_si128(v32);
                          v30 += 20;
                          v32 = (const __m128i *)((char *)v32 + 20);
                          *(__m128i *)(v30 - 20) = v34;
                          *(_DWORD *)(v30 - 4) = v32[-1].m128i_i32[3];
                          v29 = v33-- == 0;
                        }
                        while ( !v29 );
                        v32 = v46;
                      }
                      v40 = v31;
                      qfree(v32, v13, v31, v33);
                      v11 = v47;
                      LODWORD(v17) = v43;
                      a5 = v42;
                      v10 = v36;
                      v46 = (const __m128i *)v13;
                      *((_QWORD *)&v47 + 1) = v40;
                    }
                    v19 = (char *)&v13[20 * v11];
                    *v19 = 1;
                    *((_DWORD *)v19 + 1) = v17;
                    *((_QWORD *)v19 + 1) = -1;
                    *((_DWORD *)v19 + 4) = -1;
                  }
                  v13 = (const char *)v46;
                  v12 = *((_QWORD *)&v47 + 1);
                  v11 = v47 + 1;
                  *(_QWORD *)&v47 = v47 + 1;
                }
              }
LABEL_19:
              ++v9;
            }
            while ( v10 != v9 );
          }
          v20 = *(const __m128i **)(v6 + 32);
          v21 = *(_QWORD *)(v6 + 48);
          *(_QWORD *)(v6 + 32) = v13;
          *(_QWORD *)(v6 + 40) = v11;
          *(_QWORD *)(v6 + 48) = v12;
          v46 = v20;
          *((_QWORD *)&v47 + 1) = v21;
          if ( v20 )
          {
            *(_QWORD *)&v47 = 0;
            qfree(v20, v13, v21, a4);
          }
        }
        *(_BYTE *)(v6 + 56) = 1;
        *(_BYTE *)(v6 + 28) = 1;
      }
    }
  }
  nullsub_9();
}
