__m128i *__fastcall sub_68C3F0(__int64 a1)
{
  __m128i *v1; // r15
  __m128i *v2; // rax
  __m128i v3; // xmm0
  __int64 *v4; // rcx
  __int64 v5; // rbx
  __int64 *v6; // r13
  __m128 *v7; // rbp
  _QWORD *v8; // rax
  int v9; // eax
  __m128 *v10; // rdx
  unsigned __int64 v11; // rcx
  __m128 v12; // xmm0
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v17; // r12d
  size_t v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // r14
  _DWORD *v21; // r9
  __int64 v22; // r10
  __int64 v23; // rdx
  _QWORD *v24; // rdi
  _QWORD *i; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rsi
  _QWORD *v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  bool v32; // zf
  __int64 v33; // rsi
  __int64 v34; // rdi
  char **exception; // r13
  __int64 v36; // rdx
  __int64 v37; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v38; // [rsp+8h] [rbp-70h]
  _DWORD *v39; // [rsp+10h] [rbp-68h]
  _QWORD *v40; // [rsp+18h] [rbp-60h]
  __int64 v41[11]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(__m128i **)(sub_1473FE0(a1 + 168) + 8);
  if ( v1 )
  {
    if ( v1[-1].m128i_i32[3] )
    {
      v2 = (__m128i *)sub_186B270(0x50u);
      v3 = _mm_loadl_epi64((const __m128i *)(a1 + 120));
      v2->m128i_i32[2] = 0;
      v1 = v2;
      v2[1].m128i_i64[0] = 0;
      v2[1].m128i_i8[8] = 1;
      v2[3].m128i_i32[2] = 1647469168;
      v2[3].m128i_i8[12] = 118;
      v2->m128i_i64[0] = (__int64)&off_1C60CE8;
      v2[3].m128i_i64[0] = 5;
      v2[3].m128i_i8[13] = 0;
      v2[4].m128i_i64[1] = 0;
      v2[2] = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)&v2[3].m128i_u64[1]);
      v4 = *(__int64 **)(sub_1473FE0(a1 + 168) + 8);
      if ( v4 )
      {
        v38 = &v4[*((unsigned int *)v4 - 1)];
        if ( v38 != v4 )
        {
          v5 = *v4;
          v6 = v4;
          v7 = (__m128 *)v1[4].m128i_i64[1];
          v37 = v1[2].m128i_i64[0];
          if ( v5 )
            ++*(_DWORD *)(v5 + 8);
          if ( v7 )
            goto LABEL_12;
          v8 = (_QWORD *)sub_186B270(0x58u);
          v7 = (__m128 *)(v8 + 1);
          *v8 = 2;
          v9 = 1;
          v1[4].m128i_i64[1] = (__int64)v7;
          v10 = v7;
          while ( 1 )
          {
            v11 = v37;
            ++v6;
            v10[1].m128_u64[0] = 0;
            v12 = _mm_loadh_ps((const double *)&v37);
            v10[2].m128_i32[0] = 0;
            v10[1].m128_u64[1] = v11;
            *v10 = v12;
            v7[-1].m128_i32[3] = v9;
            if ( v38 == v6 )
              break;
            v13 = *v6;
            v37 = v1[2].m128i_i64[0];
            if ( v13 )
              ++*(_DWORD *)(v13 + 8);
LABEL_12:
            v14 = v7[-1].m128_u32[3];
            if ( v14 == v7[-1].m128_i32[2] )
            {
              v17 = (3 * v14 + 1) >> 1;
              v18 = 40 * v17 + 8;
              if ( 40 * v14 + 8 >= (unsigned int)v18 || v14 >= v17 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_10810A(v41, "Overflow encountered when expanding vector", v36);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v41);
                sub_233E40((__int64)v41);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v19 = sub_186B270(v18);
              v20 = (_QWORD *)v1[4].m128i_i64[1];
              v21 = (_DWORD *)v19;
              v7 = (__m128 *)(v19 + 8);
              if ( v20 )
              {
                v22 = *((unsigned int *)v20 - 1);
                v23 = v19 + 8;
                *(_DWORD *)(v19 + 4) = v22;
                v24 = &v20[5 * v22];
                for ( i = v20; v24 != i; *(_DWORD *)(v23 - 8) = *((_DWORD *)i - 2) )
                {
                  v26 = i[1];
                  i += 5;
                  v23 += 40;
                  *(_QWORD *)(v23 - 32) = v26;
                  v27 = *(i - 5);
                  *(i - 5) = 0;
                  *(_QWORD *)(v23 - 40) = v27;
                  *(_QWORD *)(v23 - 16) = *(i - 2);
                  v28 = *(i - 3);
                  *(i - 3) = 0;
                  *(_QWORD *)(v23 - 24) = v28;
                }
                if ( (_DWORD)v22 )
                {
                  v29 = &v20[5 * v22];
                  do
                  {
                    while ( 1 )
                    {
                      v33 = v20[2];
                      if ( v33 )
                      {
                        v34 = v20[3];
                        v32 = (*(_DWORD *)(v33 + 8))-- == 1;
                        if ( v32 )
                        {
                          v40 = v29;
                          v39 = v21;
                          sub_15D7BC0(v34, v33);
                          v29 = v40;
                          v21 = v39;
                        }
                      }
                      v30 = *v20;
                      if ( *v20 )
                      {
                        v31 = v20[1];
                        v32 = (*(_DWORD *)(v30 + 8))-- == 1;
                        if ( v32 )
                          break;
                      }
                      v20 += 5;
                      if ( v29 == v20 )
                        goto LABEL_30;
                    }
                    v40 = v29;
                    v20 += 5;
                    v39 = v21;
                    sub_15D7BC0(v31, v30);
                    v29 = v40;
                    v21 = v39;
                  }
                  while ( v40 != v20 );
LABEL_30:
                  v20 = (_QWORD *)v1[4].m128i_i64[1];
                }
                v39 = v21;
                sub_186B220(v20 - 1);
                v21 = v39;
                v10 = (__m128 *)((char *)v7 + 40 * (unsigned int)v39[1]);
                v9 = v39[1] + 1;
              }
              else
              {
                *(_DWORD *)(v19 + 4) = 0;
                v10 = (__m128 *)(v19 + 8);
                v9 = 1;
              }
              v1[4].m128i_i64[1] = (__int64)v7;
              *v21 = v17;
            }
            else
            {
              v15 = v14;
              v9 = v14 + 1;
              v10 = (__m128 *)((char *)v7 + 40 * v15);
            }
          }
        }
      }
    }
    else
    {
      return nullptr;
    }
  }
  return v1;
}

