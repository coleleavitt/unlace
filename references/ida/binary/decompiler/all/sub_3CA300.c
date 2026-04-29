unsigned __int64 __fastcall sub_3CA300(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r13
  _QWORD **v7; // rbx
  __int64 v8; // r12
  _QWORD *v9; // r14
  _DWORD *v10; // rax
  int v11; // esi
  __int64 v12; // rax
  size_t v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rsi
  void *v17; // rax
  const void *v18; // rsi
  _QWORD *v19; // rax
  size_t v20; // r10
  __int64 v21; // rsi
  __int64 v22; // rax
  size_t *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  size_t *v26; // r11
  size_t v27; // r10
  __int64 v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36; // [rsp+0h] [rbp-A8h] BYREF
  size_t n; // [rsp+10h] [rbp-98h]
  size_t *v38; // [rsp+18h] [rbp-90h]
  size_t *v39; // [rsp+20h] [rbp-88h]
  __int64 v40; // [rsp+28h] [rbp-80h]
  __m128i v41; // [rsp+30h] [rbp-78h] BYREF
  __int64 v42; // [rsp+40h] [rbp-68h]
  size_t *v43; // [rsp+48h] [rbp-60h]
  __int128 v44; // [rsp+50h] [rbp-58h]
  __int64 v45; // [rsp+60h] [rbp-48h]
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    if ( (unsigned int)(*(_DWORD *)(v3 + 60) - 1) <= 1 )
    {
      v4 = *(_QWORD *)(a1 + 88);
      if ( v4 )
      {
        v36.m128i_i64[1] = *(_QWORD *)(v4 + 56);
        if ( v36.m128i_i64[1] != -1 )
        {
          v5 = *(_QWORD *)(a3 + 8);
          v40 = v5 + 24LL * *(_QWORD *)(a3 + 16);
          if ( v5 != v40 )
          {
            while ( 1 )
            {
              v7 = *(_QWORD ***)v5;
              v8 = *(_QWORD *)v5 + 8LL * *(_QWORD *)(v5 + 8);
              if ( v8 != *(_QWORD *)v5 )
                break;
LABEL_20:
              v5 += 24;
              if ( v40 == v5 )
                return v46 - __readfsqword(0x28u);
            }
            while ( 1 )
            {
              v9 = *v7;
              v10 = (_DWORD *)**v7;
              v11 = v10[5];
              if ( *(_DWORD *)(v3 + 72) == v10[4] && v11 >= 0 && *(_DWORD *)(*(_QWORD *)(v3 + 64) + 64LL) > v11 )
              {
                v12 = sub_3C8680(v3, v11, v10[6]);
                if ( v12 )
                {
                  if ( v36.m128i_i64[1] == *(_QWORD *)(v12 + 24) )
                  {
                    v30 = (_QWORD *)operator new(0x18u);
                    v31 = *a2;
                    *v30 = v9;
                    v32 = (__int64)v30;
                    v30[2] = -1;
                    v30[1] = 0x5200000000LL;
                    v33 = a2[1];
                    if ( a2[2] < (unsigned __int64)(v33 + 1) )
                    {
                      v36.m128i_i64[0] = v32;
                      v35 = qvector_reserve();
                      v32 = v36.m128i_i64[0];
                      *a2 = v35;
                      v31 = v35;
                      v33 = a2[1];
                    }
                    *(_QWORD *)(v31 + 8 * v33) = v32;
                    ++a2[1];
                    goto LABEL_19;
                  }
                  v13 = v9[2];
                  v36.m128i_i64[0] = 0;
                  if ( v13 )
                  {
                    n = v13;
                    v17 = (void *)qalloc_or_throw();
                    v18 = (const void *)v9[1];
                    v36.m128i_i64[0] = (__int64)v17;
                    memcpy(v17, v18, n);
                  }
                  v43 = 0;
                  v44 = 0;
                  v14 = _mm_loadl_epi64(&v36);
                  v42 = v36.m128i_i64[1];
                  v45 = v3;
                  v15 = v9[2];
                  v41 = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)v9);
                  sub_1AC9A0(v9[1], v9[1] + v15, sub_3C6240, &v41);
                  if ( (_QWORD)v44 )
                  {
                    v19 = (_QWORD *)operator new(0x18u);
                    *v19 = v9;
                    v20 = (size_t)v19;
                    v21 = *a2;
                    v19[1] = 0x5300000000LL;
                    v19[2] = -1;
                    v22 = a2[1];
                    if ( a2[2] < (unsigned __int64)(v22 + 1) )
                    {
                      n = v20;
                      v34 = qvector_reserve();
                      *a2 = v34;
                      v21 = v34;
                      v20 = n;
                      v22 = a2[1];
                    }
                    *(_QWORD *)(v21 + 8 * v22) = v20;
                    v23 = v43;
                    v24 = a2[1] + 1;
                    v25 = v44;
                    a2[1] = v24;
                    v26 = &v23[v25];
                    if ( v26 != v23 )
                    {
                      do
                      {
                        v27 = *v23;
                        v28 = *a2;
                        if ( a2[2] < (unsigned __int64)(v24 + 1) )
                        {
                          v39 = v23;
                          v38 = v26;
                          n = v27;
                          v29 = qvector_reserve();
                          v24 = a2[1];
                          v23 = v39;
                          *a2 = v29;
                          v28 = v29;
                          v26 = v38;
                          v27 = n;
                        }
                        *(_QWORD *)(v28 + 8 * v24) = v27;
                        ++v23;
                        v24 = a2[1] + 1;
                        a2[1] = v24;
                      }
                      while ( v26 != v23 );
                      v23 = v43;
                    }
                    if ( v23 )
                    {
                      *(_QWORD *)&v44 = 0;
                      qfree();
                    }
                    if ( !v36.m128i_i64[0] )
                      goto LABEL_19;
                  }
                  else
                  {
                    if ( v43 )
                      qfree();
                    if ( !v36.m128i_i64[0] )
                      goto LABEL_19;
                  }
                  qfree();
                }
              }
LABEL_19:
              if ( (_QWORD **)v8 == ++v7 )
                goto LABEL_20;
            }
          }
        }
      }
    }
  }
  return v46 - __readfsqword(0x28u);
}
