__int64 __fastcall sub_60D320(__m128i *a1, __int64 a2, unsigned __int8 *a3, __int64 a4, _QWORD *a5, const char *a6)
{
  unsigned __int64 v9; // rsi
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
  int tinfo_udt_member; // [rsp+14h] [rbp-11Ch]
  unsigned __int64 *v27; // [rsp+20h] [rbp-110h]
  unsigned __int64 v29; // [rsp+48h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+50h] [rbp-E0h] BYREF
  __m128i v31; // [rsp+60h] [rbp-D0h] BYREF
  char *s1; // [rsp+70h] [rbp-C0h]
  __int128 v33; // [rsp+78h] [rbp-B8h]
  void *ptr; // [rsp+88h] [rbp-A8h]
  __int128 v35; // [rsp+90h] [rbp-A0h]
  _OWORD v36[3]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-60h]
  int v38; // [rsp+D8h] [rbp-58h]
  __int64 v39; // [rsp+E0h] [rbp-50h]
  char v40; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v41; // [rsp+F8h] [rbp-38h]

  v9 = *(_QWORD *)(a2 + 16);
  v10 = *a3;
  v41 = __readfsqword(0x28u);
  v12 = sub_3BE900(a1, v9, 0);
  v13 = is_stkvar(v12, v10);
  if ( !(_BYTE)v13 )
    return v13;
  v27 = sub_5CAA10((__int64)a1, *(_QWORD *)(a2 + 16));
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
  v36[0] = 0;
  v15 = sub_5B9900(a1, &v29, nullptr, a2, (__int64)a3, a4, &v31);
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
  if ( (get_tinfo_property(*(_QWORD *)&v36[0], 2) & 0x2F) != 0xD )
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
      v18 = a1[1].m128i_i64[0];
      v19 = (unsigned __int64)v31.m128i_i64[0] >> 3;
      get_frame_part(&v30, v27, 0);
      if ( *(char *)(v18 + 9) >= 0 )
        v20 = v19 >= (unsigned __int64)v30;
      else
        v20 = v19 < *((_QWORD *)&v30 + 1);
      *(_QWORD *)&v30 = 0;
      v21 = !v20 ? 140 : 156;
      copy_tinfo_t(&v30);
      set_tinfo_property((unsigned __int64 *)&v30, 6u, 192);
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
          sub_5B8340(
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
            v22 = sub_4D45A0(a1, *v27, -1, a6, nullptr);
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
  clear_tinfo_t(v36);
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
