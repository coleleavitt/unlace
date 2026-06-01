__int64 __fastcall sub_5F1340(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4,
        _QWORD *a5,
        const char *a6)
{
  unsigned int v9; // esi
  unsigned int v10; // ebx
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  int v15; // r12d
  char *v16; // r14
  char *v17; // r14
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  bool v20; // al
  int v21; // r14d
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r12d
  __m128i v25; // xmm0
  int tinfo_udt_member; // [rsp+14h] [rbp-FCh]
  unsigned int *v27; // [rsp+20h] [rbp-F0h]
  unsigned __int64 v29; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C8h] BYREF
  __m128i v31; // [rsp+50h] [rbp-C0h] BYREF
  char *s1; // [rsp+60h] [rbp-B0h]
  __int128 v33; // [rsp+68h] [rbp-A8h]
  void *ptr; // [rsp+78h] [rbp-98h]
  __int128 v35; // [rsp+80h] [rbp-90h]
  __int128 v36; // [rsp+90h] [rbp-80h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-60h]
  int v38; // [rsp+B8h] [rbp-58h]
  __int64 v39; // [rsp+C0h] [rbp-50h]
  char v40; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v41; // [rsp+D8h] [rbp-38h]

  v9 = *(_DWORD *)(a2 + 8);
  v10 = *a3;
  v41 = __readfsqword(0x28u);
  v12 = sub_3B9AA0((__int64)a1, v9, 0);
  v13 = is_stkvar(v12, v10);
  if ( !(_BYTE)v13 )
    return v13;
  v27 = sub_5AFCE0((__int64)a1, *(unsigned int *)(a2 + 8));
  v40 = 0;
  v29 = 0;
  s1 = nullptr;
  ptr = nullptr;
  v37 = 1;
  v38 = -1;
  v39 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v15 = sub_59F4F0(a1, &v29, nullptr, a2, (__int64)a3, a4, &v31);
  tinfo_udt_member = v15;
  if ( v15 == -1 )
  {
    v13 = 0;
    goto LABEL_25;
  }
  if ( (_QWORD)v33 )
  {
    v16 = s1;
    if ( !s1 || !strncmp(s1, "arg_", 4u) || !strncmp(v16, "var_", 4u) )
      goto LABEL_7;
  }
  else
  {
    v16 = (char *)haystack;
    if ( !haystack )
      goto LABEL_7;
  }
  if ( strncmp(v16, "anonymous", 9u) && (v39 & 0x400000000000LL) == 0 )
    goto LABEL_25;
LABEL_7:
  if ( (get_tinfo_property(v36, 2) & 0x2F) != 0xD )
    goto LABEL_13;
  if ( (_QWORD)v33 )
  {
    v17 = s1;
    if ( !s1 || !strncmp(s1, "arg_", 4u) || !strncmp(v17, "var_", 4u) )
      goto LABEL_13;
  }
  else
  {
    v17 = (char *)haystack;
    if ( !haystack )
    {
LABEL_13:
      v30 = 0;
      v18 = a1[2];
      v19 = (unsigned __int64)v31.m128i_i64[0] >> 3;
      get_frame_part(&v30, v27, 0);
      if ( *(char *)(v18 + 9) >= 0 )
        v20 = (unsigned int)v19 >= (unsigned int)v30;
      else
        v20 = (unsigned int)v19 < HIDWORD(v30);
      v30 = 0;
      v21 = !v20 ? 140 : 156;
      copy_tinfo_t(&v30);
      set_tinfo_property(&v30, 6, 192);
      if ( (get_tinfo_property(v30, 2) & 0x3F) != 1 && (_BYTE)v30 )
      {
        get_tinfo_tid(&v30, 1);
        v24 = set_tinfo_property4(&v29, 12, v15, &v30, 0, v21 | 0x40000000u);
        if ( v24 < 0 )
        {
          v13 = 0;
LABEL_24:
          clear_tinfo_t(&v30);
          goto LABEL_25;
        }
        tinfo_udt_member = find_tinfo_udt_member((int)&v31);
        if ( !v24 && (get_tinfo_property(*a5, 2) & 0x2F) == 0xD )
        {
          v25 = _mm_load_si128(&v31);
          sub_59E0D0(
            a1,
            v27,
            (unsigned __int64)v25.m128i_i64[0] >> 3,
            _mm_add_epi64(_mm_srli_si128(v25, 8), v25).m128i_u64[0] >> 3);
        }
      }
      else
      {
        v13 = 0;
      }
      if ( a6 )
      {
        if ( strcmp(a6, "this") )
        {
          if ( strcmp(a6, "retstr") )
          {
            v22 = sub_4BD520(a1, *v27, 0xFFFFFFFF, a6, nullptr);
            if ( (unsigned int)v22 <= 8 )
            {
              v23 = 275;
              if ( _bittest64(&v23, v22) )
                set_tinfo_property4(&v29, 11, tinfo_udt_member, a6, 0, 0);
            }
          }
        }
      }
      goto LABEL_24;
    }
  }
  if ( !strncmp(v17, "anonymous", 9u) )
    goto LABEL_13;
LABEL_25:
  clear_tinfo_t(&v36);
  if ( ptr )
  {
    *(_QWORD *)&v35 = 0;
    qfree(ptr);
  }
  if ( s1 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(s1);
  }
  clear_tinfo_t(&v29);
  return v13;
}

