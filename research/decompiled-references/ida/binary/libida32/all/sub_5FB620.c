unsigned __int64 __fastcall sub_5FB620(__int64 *a1, int *a2, _QWORD *a3)
{
  int *v3; // r13
  unsigned int v5; // eax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  size_t v10; // rbx
  __int64 v11; // rax
  int tinfo_udt_member; // r14d
  const char *v13; // rdi
  int v14; // eax
  const char *v15; // rcx
  __m128i v16; // xmm0
  void *v17; // rax
  bool v18; // cc
  int v19; // ebx
  __int64 v20; // rdx
  char *v21; // rdi
  unsigned __int64 v22; // r14
  char *v23; // rax
  __int32 v24; // [rsp+Ch] [rbp-124h]
  __int64 v25; // [rsp+10h] [rbp-120h]
  __int64 v27; // [rsp+28h] [rbp-108h]
  char *s2; // [rsp+38h] [rbp-F8h]
  int s2a; // [rsp+38h] [rbp-F8h]
  char *s2b; // [rsp+38h] [rbp-F8h]
  int *v31; // [rsp+40h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-E8h] BYREF
  void *ptr; // [rsp+50h] [rbp-E0h] BYREF
  __int128 v34; // [rsp+58h] [rbp-D8h]
  __m128i v35; // [rsp+70h] [rbp-C0h] BYREF
  void *v36; // [rsp+80h] [rbp-B0h]
  __int128 v37; // [rsp+88h] [rbp-A8h]
  void *v38; // [rsp+98h] [rbp-98h]
  __int128 v39; // [rsp+A0h] [rbp-90h]
  _OWORD v40[2]; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-60h]
  int v42; // [rsp+D8h] [rbp-58h]
  __int64 v43; // [rsp+E0h] [rbp-50h]
  char v44; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  v31 = nullptr;
  if ( a2 )
  {
    v3 = a2;
    v5 = sub_3B90A0(a1, *a2);
    if ( v5 != -1 )
    {
      if ( (unsigned __int8)sub_532DA0(a1, (unsigned __int64 *)&v31, v5) )
      {
        v7 = a3[1];
        if ( (_DWORD)v7 )
        {
          v35.m128i_i64[0] = 0;
          get_frame_part(&v35, a2, 0);
          v24 = v35.m128i_i32[0];
          if ( (int)v7 > 0 )
          {
            v8 = 0;
            v27 = 16 * (5LL * (unsigned int)(v7 - 1) + 5);
            while ( 1 )
            {
              while ( 1 )
              {
                v9 = v8 + *a3;
                s2 = (char *)v9;
                if ( *(_DWORD *)v9 == 1 )
                  break;
LABEL_8:
                v8 += 80;
                if ( v27 == v8 )
                  goto LABEL_3;
              }
              v10 = *(_QWORD *)(v9 + 24);
              ptr = nullptr;
              v34 = 0;
              if ( v10 )
              {
                v17 = (void *)qalloc_or_throw(v10, (const char *)a2);
                *((_QWORD *)&v34 + 1) = v10;
                ptr = v17;
                memcpy(v17, *((const void **)s2 + 2), v10);
                v18 = *((_QWORD *)s2 + 3) <= 1u;
                *(_QWORD *)&v34 = v10;
                if ( !v18 )
                {
                  v19 = 0;
                  while ( (unsigned __int8)is_name_defined_locally(v3, ptr, 3, 0xFFFFFFFFLL, 0xFFFFFFFFLL) )
                  {
                    v21 = (char *)ptr;
                    v22 = *((_QWORD *)s2 + 3);
                    v23 = (char *)ptr;
                    if ( v22 > 1 )
                    {
                      v20 = v34;
                      if ( (unsigned __int64)v34 < v22 )
                      {
                        if ( *((_QWORD *)&v34 + 1) < v22 )
                        {
                          v23 = (char *)qvector_reserve(&ptr, ptr, *((_QWORD *)s2 + 3), 1);
                          ptr = v23;
                          v20 = v34;
                        }
                        memset(&v23[v20], 0, v22 - v20);
                        *(_QWORD *)&v34 = v22;
                        v21 = (char *)ptr;
                      }
                      else if ( v22 != (_QWORD)v34 )
                      {
                        *(_QWORD *)&v34 = *((_QWORD *)s2 + 3);
                      }
                      v21[v22 - 1] = 0;
                    }
                    else if ( ptr )
                    {
                      *(_QWORD *)&v34 = 0;
                      qfree(ptr);
                      ptr = nullptr;
                      *((_QWORD *)&v34 + 1) = 0;
                    }
                    sub_357520((__int64 *)&ptr);
                    ++v19;
                  }
                }
              }
              v32 = 0;
              copy_tinfo_t(&v32);
              get_tinfo_tid(&v32, 1);
              a2 = v31;
              v11 = (unsigned int)(*((_DWORD *)s2 + 2) + v24);
              v42 = -1;
              s2a = v11;
              v36 = nullptr;
              v38 = nullptr;
              v41 = 1;
              v43 = 0;
              v44 = 0;
              v25 = 8 * v11;
              v35 = (__m128i)(unsigned __int64)(8 * v11);
              v37 = 0;
              v39 = 0;
              v40[0] = 0;
              tinfo_udt_member = find_tinfo_udt_member((int)&v35);
              if ( tinfo_udt_member != -1 )
                break;
              if ( (unsigned __int64)v34 <= 1
                || (a2 = v3, (unsigned int)sub_5A32A0(a1, v3, s2a, ptr, &v32, nullptr, 1, 0) == -1) )
              {
LABEL_34:
                clear_tinfo_t(v40);
                if ( v38 )
                {
                  *(_QWORD *)&v39 = 0;
                  qfree(v38);
                }
                if ( v36 )
                {
                  *(_QWORD *)&v37 = 0;
                  qfree(v36);
                }
                clear_tinfo_t(&v32);
                if ( ptr )
                {
                  *(_QWORD *)&v34 = 0;
                  qfree(ptr);
                }
                goto LABEL_8;
              }
              v35.m128i_i64[0] = v25;
              find_tinfo_udt_member((int)&v35);
LABEL_21:
              a2 = &dword_0 + 2;
              if ( (get_tinfo_property(v32, 2) & 0x2F) == 0xD )
              {
                v16 = _mm_load_si128(&v35);
                a2 = v3;
                sub_59E0D0(
                  a1,
                  (unsigned int *)v3,
                  (unsigned __int64)v16.m128i_i64[0] >> 3,
                  _mm_add_epi64(_mm_srli_si128(v16, 8), v16).m128i_u64[0] >> 3);
              }
              clear_tinfo_t(v40);
              if ( v38 )
              {
                *(_QWORD *)&v39 = 0;
                qfree(v38);
              }
              if ( v36 )
              {
                *(_QWORD *)&v37 = 0;
                qfree(v36);
              }
              clear_tinfo_t(&v32);
              if ( !ptr )
                goto LABEL_8;
              *(_QWORD *)&v34 = 0;
              v8 += 80;
              qfree(ptr);
              if ( v27 == v8 )
                goto LABEL_3;
            }
            if ( (_QWORD)v37 )
            {
              v13 = haystack;
              s2b = (char *)v36;
              if ( !(_QWORD)v34 )
              {
LABEL_14:
                if ( strcmp(v13, s2b) )
                {
                  if ( s2b )
                  {
                    if ( strncmp(s2b, "arg_", 4u) )
                    {
                      if ( strncmp(s2b, "var_", 4u) )
                      {
                        a2 = (int *)"anonymous";
                        if ( strncmp(s2b, "anonymous", 9u) )
                        {
                          if ( (v43 & 0x400000000000LL) == 0 )
                            goto LABEL_34;
                        }
                      }
                    }
                  }
                }
                goto LABEL_17;
              }
            }
            else
            {
              if ( !(_QWORD)v34 )
              {
LABEL_17:
                a2 = (_DWORD *)(byte_9 + 3);
                if ( (unsigned int)set_tinfo_property4(&v31, 12, tinfo_udt_member, &v32, 0, 148) )
                  goto LABEL_34;
                v14 = find_tinfo_udt_member((int)&v35);
                v15 = haystack;
                if ( (_QWORD)v34 )
                  v15 = (const char *)ptr;
                set_tinfo_property4(&v31, 11, v14, v15, 0, 0);
                goto LABEL_21;
              }
              s2b = (char *)haystack;
            }
            v13 = (const char *)ptr;
            goto LABEL_14;
          }
        }
      }
    }
  }
LABEL_3:
  clear_tinfo_t(&v31);
  return v45 - __readfsqword(0x28u);
}

