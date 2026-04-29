unsigned __int64 __fastcall sub_3D4600(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r13
  unsigned __int64 *v6; // rbp
  _QWORD **v7; // rbx
  __int64 v8; // r12
  _QWORD *v9; // r14
  _DWORD *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  size_t v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  void *v20; // rax
  const void *v21; // rsi
  _QWORD *v22; // rax
  size_t v23; // r10
  unsigned __int64 v24; // rax
  size_t *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rax
  size_t *v28; // r11
  size_t v29; // r10
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rax
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
          v6 = (unsigned __int64 *)a2;
          v40 = v5 + 24LL * *(_QWORD *)(a3 + 16);
          if ( v5 != v40 )
          {
            while ( 1 )
            {
              v7 = *(_QWORD ***)v5;
              v8 = *(_QWORD *)v5 + 8LL * *(_QWORD *)(v5 + 8);
              if ( v8 != *(_QWORD *)v5 )
                break;
LABEL_23:
              v5 += 24;
              if ( v40 == v5 )
                return v46 - __readfsqword(0x28u);
            }
            while ( 1 )
            {
              v9 = *v7;
              v10 = (_DWORD *)**v7;
              v11 = (int)v10[5];
              if ( *(_DWORD *)(v3 + 72) == v10[4]
                && (v11 & 0x80000000) == 0LL
                && *(_DWORD *)(*(_QWORD *)(v3 + 64) + 64LL) > (int)v11 )
              {
                v12 = (int)v10[6];
                if ( v11 < *(_QWORD *)(v3 + 120) && (v12 & 0x80000000) == 0LL )
                {
                  v13 = (_QWORD *)(*(_QWORD *)(v3 + 112) + 24 * v11);
                  if ( v12 < v13[1] )
                  {
                    v14 = *(_QWORD *)(*v13 + 8 * v12);
                    if ( v14 )
                    {
                      if ( v36.m128i_i64[1] == *(_QWORD *)(v14 + 24) )
                      {
                        v31 = (_QWORD *)operator new(0x18u);
                        a2 = *v6;
                        *v31 = v9;
                        v32 = (__int64)v31;
                        v31[2] = -1;
                        v31[1] = 0x5200000000LL;
                        v33 = v6[1];
                        if ( v6[2] < v33 + 1 )
                        {
                          v36.m128i_i64[0] = v32;
                          v35 = qvector_reserve((__int64)v6, a2, v33 + 1, 8);
                          v32 = v36.m128i_i64[0];
                          *v6 = v35;
                          a2 = v35;
                          v33 = v6[1];
                        }
                        *(_QWORD *)(a2 + 8 * v33) = v32;
                        ++v6[1];
                        goto LABEL_22;
                      }
                      v15 = v9[2];
                      v36.m128i_i64[0] = 0;
                      if ( v15 )
                      {
                        n = v15;
                        v20 = (void *)qalloc_or_throw(v15, a2, v15, v36.m128i_i64[1]);
                        v21 = (const void *)v9[1];
                        v36.m128i_i64[0] = (__int64)v20;
                        memcpy(v20, v21, n);
                      }
                      v43 = nullptr;
                      v44 = 0;
                      v16 = _mm_loadl_epi64(&v36);
                      v42 = v36.m128i_i64[1];
                      v45 = v3;
                      v17 = v9[2];
                      v41 = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)v9);
                      v18 = v9[1];
                      a2 = v18 + v17;
                      sub_1AF220(
                        v18,
                        a2,
                        (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3D0590,
                        (__int64)&v41);
                      if ( (_QWORD)v44 )
                      {
                        v22 = (_QWORD *)operator new(0x18u);
                        *v22 = v9;
                        v23 = (size_t)v22;
                        a2 = *v6;
                        v22[1] = 0x5300000000LL;
                        v22[2] = -1;
                        v24 = v6[1];
                        if ( v6[2] < v24 + 1 )
                        {
                          n = v23;
                          v34 = qvector_reserve((__int64)v6, a2, v24 + 1, 8);
                          *v6 = v34;
                          a2 = v34;
                          v23 = n;
                          v24 = v6[1];
                        }
                        *(_QWORD *)(a2 + 8 * v24) = v23;
                        v25 = v43;
                        v26 = v6[1] + 1;
                        v27 = v44;
                        v6[1] = v26;
                        v28 = &v25[v27];
                        if ( v28 != v25 )
                        {
                          do
                          {
                            v29 = *v25;
                            a2 = *v6;
                            if ( v6[2] < v26 + 1 )
                            {
                              v39 = v25;
                              v38 = v28;
                              n = v29;
                              v30 = qvector_reserve((__int64)v6, a2, v26 + 1, 8);
                              v26 = v6[1];
                              v25 = v39;
                              *v6 = v30;
                              a2 = v30;
                              v28 = v38;
                              v29 = n;
                            }
                            *(_QWORD *)(a2 + 8 * v26) = v29;
                            ++v25;
                            v26 = v6[1] + 1;
                            v6[1] = v26;
                          }
                          while ( v28 != v25 );
                          v25 = v43;
                        }
                        if ( v25 )
                        {
                          *(_QWORD *)&v44 = 0;
                          qfree((__int64)v25);
                        }
                        if ( !v36.m128i_i64[0] )
                          goto LABEL_22;
                      }
                      else
                      {
                        if ( v43 )
                          qfree((__int64)v43);
                        if ( !v36.m128i_i64[0] )
                          goto LABEL_22;
                      }
                      qfree(v36.m128i_i64[0]);
                    }
                  }
                }
              }
LABEL_22:
              if ( (_QWORD **)v8 == ++v7 )
                goto LABEL_23;
            }
          }
        }
      }
    }
  }
  return v46 - __readfsqword(0x28u);
}
