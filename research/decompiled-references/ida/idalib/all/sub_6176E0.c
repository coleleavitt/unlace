unsigned __int64 __fastcall sub_6176E0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  size_t v9; // rbx
  char *v10; // r10
  int tinfo_udt_member; // r14d
  const char *v12; // rdi
  int v13; // eax
  const char *v14; // rcx
  __m128i v15; // xmm0
  void *v16; // rax
  bool v17; // cc
  int v18; // ebx
  __int64 v19; // rdx
  char *v20; // rdi
  unsigned __int64 v21; // r14
  char *v22; // rax
  __int32 v23; // [rsp+8h] [rbp-138h]
  __int64 v24; // [rsp+10h] [rbp-130h]
  __int64 v26; // [rsp+28h] [rbp-118h]
  char *s2; // [rsp+38h] [rbp-108h]
  char *s2a; // [rsp+38h] [rbp-108h]
  char *s2b; // [rsp+38h] [rbp-108h]
  unsigned __int64 v30; // [rsp+40h] [rbp-100h] BYREF
  __int64 v31; // [rsp+48h] [rbp-F8h] BYREF
  void *ptr; // [rsp+50h] [rbp-F0h] BYREF
  __int128 v33; // [rsp+58h] [rbp-E8h]
  __m128i v34; // [rsp+70h] [rbp-D0h] BYREF
  void *v35; // [rsp+80h] [rbp-C0h]
  __int128 v36; // [rsp+88h] [rbp-B8h]
  void *v37; // [rsp+98h] [rbp-A8h]
  __int128 v38; // [rsp+A0h] [rbp-A0h]
  _OWORD v39[3]; // [rsp+B0h] [rbp-90h] BYREF
  char *v40; // [rsp+E0h] [rbp-60h]
  int v41; // [rsp+E8h] [rbp-58h]
  __int64 v42; // [rsp+F0h] [rbp-50h]
  char v43; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v44; // [rsp+108h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  v30 = 0;
  if ( a2 )
  {
    v4 = sub_3BDD60(a1, *a2);
    if ( v4 != -1 )
    {
      if ( (unsigned __int8)sub_54BE00(a1, &v30, v4) )
      {
        v6 = a3[1];
        if ( (_DWORD)v6 )
        {
          v34 = 0;
          get_frame_part(&v34, a2, 0);
          v23 = v34.m128i_i32[0];
          if ( (int)v6 > 0 )
          {
            v7 = 0;
            v26 = 16 * (5LL * (unsigned int)(v6 - 1) + 5);
            while ( 1 )
            {
              while ( 1 )
              {
                v8 = v7 + *a3;
                s2 = (char *)v8;
                if ( *(_DWORD *)v8 == 1 )
                  break;
LABEL_8:
                v7 += 80;
                if ( v26 == v7 )
                  goto LABEL_3;
              }
              v9 = *(_QWORD *)(v8 + 24);
              ptr = nullptr;
              v33 = 0;
              if ( v9 )
              {
                v16 = (void *)qalloc_or_throw(v9);
                *((_QWORD *)&v33 + 1) = v9;
                ptr = v16;
                memcpy(v16, *((const void **)s2 + 2), v9);
                v17 = *((_QWORD *)s2 + 3) <= 1u;
                *(_QWORD *)&v33 = v9;
                if ( !v17 )
                {
                  v18 = 0;
                  while ( is_name_defined_locally((__int64)a2, (__int64)ptr, 3, -1, -1) )
                  {
                    v20 = (char *)ptr;
                    v21 = *((_QWORD *)s2 + 3);
                    v22 = (char *)ptr;
                    if ( v21 > 1 )
                    {
                      v19 = v33;
                      if ( (unsigned __int64)v33 < v21 )
                      {
                        if ( *((_QWORD *)&v33 + 1) < v21 )
                        {
                          v22 = (char *)qvector_reserve(&ptr, ptr, *((_QWORD *)s2 + 3), 1);
                          ptr = v22;
                          v19 = v33;
                        }
                        memset(&v22[v19], 0, v21 - v19);
                        *(_QWORD *)&v33 = v21;
                        v20 = (char *)ptr;
                      }
                      else if ( v21 != (_QWORD)v33 )
                      {
                        *(_QWORD *)&v33 = *((_QWORD *)s2 + 3);
                      }
                      v20[v21 - 1] = 0;
                    }
                    else if ( ptr )
                    {
                      *(_QWORD *)&v33 = 0;
                      qfree(ptr);
                      ptr = nullptr;
                      *((_QWORD *)&v33 + 1) = 0;
                    }
                    sub_35A910((__int64 *)&ptr);
                    ++v18;
                  }
                }
              }
              v31 = 0;
              copy_tinfo_t(&v31);
              get_tinfo_tid(&v31, 1);
              v10 = (char *)(unsigned int)(*((_DWORD *)s2 + 2) + v23);
              v41 = -1;
              v40 = (char *)&dword_0 + 1;
              v35 = nullptr;
              v37 = nullptr;
              v42 = 0;
              v43 = 0;
              s2a = v10;
              v24 = 8LL * (_QWORD)v10;
              v34 = (__m128i)(unsigned __int64)(8LL * (_QWORD)v10);
              v36 = 0;
              v38 = 0;
              v39[0] = 0;
              tinfo_udt_member = find_tinfo_udt_member((int)&v34);
              if ( tinfo_udt_member != -1 )
                break;
              if ( (unsigned __int64)v33 <= 1
                || (unsigned int)sub_5BD990(a1, a2, (unsigned __int64)s2a, ptr, &v31, nullptr, 1, 0) == -1 )
              {
LABEL_34:
                clear_tinfo_t(v39);
                if ( v37 )
                {
                  *(_QWORD *)&v38 = 0;
                  qfree(v37);
                }
                if ( v35 )
                {
                  *(_QWORD *)&v36 = 0;
                  qfree(v35);
                }
                clear_tinfo_t(&v31);
                if ( ptr )
                {
                  *(_QWORD *)&v33 = 0;
                  qfree(ptr);
                }
                goto LABEL_8;
              }
              v34.m128i_i64[0] = v24;
              find_tinfo_udt_member((int)&v34);
LABEL_21:
              if ( (get_tinfo_property(v31, 2) & 0x2F) == 0xD )
              {
                v15 = _mm_load_si128(&v34);
                sub_5B8340(
                  a1,
                  (unsigned __int64 *)a2,
                  (unsigned __int64)v15.m128i_i64[0] >> 3,
                  _mm_add_epi64(_mm_srli_si128(v15, 8), v15).m128i_u64[0] >> 3);
              }
              clear_tinfo_t(v39);
              if ( v37 )
              {
                *(_QWORD *)&v38 = 0;
                qfree(v37);
              }
              if ( v35 )
              {
                *(_QWORD *)&v36 = 0;
                qfree(v35);
              }
              clear_tinfo_t(&v31);
              if ( !ptr )
                goto LABEL_8;
              *(_QWORD *)&v33 = 0;
              v7 += 80;
              qfree(ptr);
              if ( v26 == v7 )
                goto LABEL_3;
            }
            if ( (_QWORD)v36 )
            {
              v12 = haystack;
              s2b = (char *)v35;
              if ( !(_QWORD)v33 )
              {
LABEL_14:
                if ( strcmp(v12, s2b)
                  && s2b
                  && strncmp(s2b, "arg_", 4u)
                  && strncmp(s2b, "var_", 4u)
                  && strncmp(s2b, "anonymous", 9u)
                  && (v42 & 0x400000000000LL) == 0 )
                {
                  goto LABEL_34;
                }
                goto LABEL_17;
              }
            }
            else
            {
              if ( !(_QWORD)v33 )
              {
LABEL_17:
                if ( (unsigned int)set_tinfo_property4(&v30, 12, tinfo_udt_member, &v31, 0, 148) )
                  goto LABEL_34;
                v13 = find_tinfo_udt_member((int)&v34);
                v14 = haystack;
                if ( (_QWORD)v33 )
                  v14 = (const char *)ptr;
                set_tinfo_property4(&v30, 11, v13, v14, 0, 0);
                goto LABEL_21;
              }
              s2b = (char *)haystack;
            }
            v12 = (const char *)ptr;
            goto LABEL_14;
          }
        }
      }
    }
  }
LABEL_3:
  clear_tinfo_t(&v30);
  return v44 - __readfsqword(0x28u);
}
