__int64 __fastcall sub_23AD80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // edx
  unsigned __int64 *v11; // r14
  char v12; // al
  char v13; // si
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 not_tail; // rdi
  __int64 flags; // rbp
  __int64 v21; // rsi
  char v22; // al
  __int64 v23; // rdx
  __int64 enum_id; // rax
  const char *v25; // rsi
  const void *v26; // r13
  void *v27; // rax
  __int64 v28; // rbx
  char v29; // al
  void *v30; // rbp
  char v31; // [rsp+1Fh] [rbp-1E9h] BYREF
  __int64 v32; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 v33; // [rsp+28h] [rbp-1E0h] BYREF
  __int64 v34; // [rsp+30h] [rbp-1D8h] BYREF
  int v35; // [rsp+38h] [rbp-1D0h]
  void *src; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v37; // [rsp+48h] [rbp-1C0h]
  __int128 v38; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v39; // [rsp+70h] [rbp-198h]
  __int64 v40; // [rsp+78h] [rbp-190h]
  __int64 v41; // [rsp+80h] [rbp-188h]
  _BYTE v42[320]; // [rsp+88h] [rbp-180h] BYREF
  _QWORD v43[8]; // [rsp+1C8h] [rbp-40h] BYREF

  v43[0] = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  v9 = *(char *)(a1 + 4);
  v11 = *(unsigned __int64 **)(a2 + 80);
  v34 = a3;
  v35 = v9;
  v12 = v9;
  v13 = v9;
  if ( !*v11 )
    goto LABEL_22;
  v15 = *(_QWORD *)*v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v15 )
  {
    if ( (*(_BYTE *)v15 & 2) == 0 )
    {
      do
      {
        if ( (int)sub_252880(&v34) >= 0 )
        {
          if ( (int)sub_252880(v15 + 24) >= 0 )
            goto LABEL_10;
          v15 = *(_QWORD *)(v15 + 16);
        }
        else
        {
          v15 = *(_QWORD *)(v15 + 8);
        }
      }
      while ( (*(_BYTE *)v15 & 2) == 0 );
      v15 = *v11;
LABEL_10:
      if ( **(_QWORD **)(a2 + 80) != v15 )
        goto LABEL_11;
      v12 = *(_BYTE *)(a1 + 4);
    }
    v13 = v12;
    goto LABEL_22;
  }
LABEL_11:
  if ( (*(_BYTE *)(v15 + 45) & 0x18) == 0
    && a4 <= 9
    && (unsigned __int8)is_numop(*(_QWORD *)(v15 + 72), (unsigned int)*(char *)(v15 + 44))
    && (unsigned int)get_radix(*(_QWORD *)(v15 + 72), (unsigned int)*(char *)(v15 + 44)) == 16 )
  {
    goto LABEL_21;
  }
  if ( *(_QWORD *)(v15 + 56) <= 1u )
  {
LABEL_15:
    sub_3243C0(a1, *(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFDFFFFLL);
    *(_BYTE *)(a1 + 5) = *(_BYTE *)(v15 + 45) & 0xF9;
    *(_BYTE *)(a1 + 6) = *(_BYTE *)(v15 + 46);
    if ( a1 + 8 != v15 + 48 )
    {
      v16 = *(_QWORD *)(v15 + 56);
      if ( v16 > 1 )
      {
        v26 = *(const void **)(v15 + 48);
        v27 = *(void **)(a1 + 8);
        if ( *(_QWORD *)(a1 + 24) < v16 )
        {
          v27 = (void *)qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v16, 1);
          *(_QWORD *)(a1 + 8) = v27;
        }
        *(_QWORD *)(a1 + 16) = v16;
        memmove(v27, v26, v16 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + v16 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
    return 1;
  }
  sub_325240(&src, *(_QWORD *)(v15 + 48));
  if ( !(unsigned int)verify_tinfo(src) )
  {
    clear_tinfo_t(&src);
    goto LABEL_15;
  }
  clear_tinfo_t(&src);
LABEL_21:
  v13 = *(_BYTE *)(a1 + 4);
LABEL_22:
  if ( v13 > 1 )
  {
    if ( v13 > 7 )
      return 0;
    v39 = -1;
    v17 = v42;
    v40 = 0;
    v41 = 0;
    v38 = -1;
    do
    {
      *(_WORD *)v17 = 0;
      v17 += 5;
      *((_WORD *)v17 - 19) = 0;
      *((_WORD *)v17 - 18) = 0;
      *((_DWORD *)v17 - 2) = 0;
      *((_WORD *)v17 - 17) = 0;
      *((_OWORD *)v17 - 2) = 0;
      *(v17 - 2) = 0;
    }
    while ( v17 != v43 );
    if ( !(unsigned int)decode_insn(&v38, a3, v43, 0, 0, a6, 0.0) || !v42[40 * *(char *)(a1 + 4) + 1] )
      return 0;
  }
  src = nullptr;
  v31 = 0;
  v37 = 0;
  not_tail = a3;
  if ( (get_flags_ex(a3, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(a3, 4, v18);
  flags = get_flags_ex(not_tail, 0);
  if ( (unsigned __int8)is_bnot(a3, flags, (unsigned int)*(char *)(a1 + 4)) )
    *(_BYTE *)(a1 + 5) |= 0x10u;
  if ( !(unsigned __int8)is_char(flags, (unsigned int)*(char *)(a1 + 4)) )
  {
    v21 = (unsigned int)*(char *)(a1 + 4);
    v32 = 0;
    v22 = is_enum(flags, v21);
    v23 = (unsigned int)*(char *)(a1 + 4);
    if ( v22 )
    {
      enum_id = get_enum_id(&v31, a3, v23);
      if ( enum_id == -1
        || !(unsigned __int8)get_type_by_tid(&v32, enum_id)
        || (get_tinfo_property(v32, 2) & 0x3F) != 0x2D )
      {
        goto LABEL_35;
      }
    }
    else if ( !(unsigned __int8)is_stroff(flags, (unsigned int)v23)
           || !(unsigned int)get_stroff_path(&v38, &v33, a3, (unsigned int)*(char *)(a1 + 4))
           || v33
           || !(unsigned __int8)get_type_by_tid(&v32, v38)
           || (get_tinfo_property(v32, 2) & 0x2F) != 0xD )
    {
      goto LABEL_35;
    }
    if ( (v32 & 0x100) != 0 && get_tinfo_pdata(&src, v32, 0) )
    {
      if ( (unsigned int)verify_tinfo(v32) )
      {
        v25 = s1;
        if ( (_QWORD)v37 )
          v25 = (const char *)src;
        sub_68620((__int64)"The type %s is too long or wide. It cannot be used\n", v25);
        goto LABEL_35;
      }
      sub_3243C0(a1, flags & 0xFFFFFF0FF60000LL);
      v28 = v37;
      if ( (unsigned __int64)v37 > 1 )
      {
        v30 = src;
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)v37 )
          *(_QWORD *)(a1 + 8) = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v37, 1);
        *(_QWORD *)(a1 + 16) = v28;
        memmove(*(void **)(a1 + 8), v30, v28 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + v28 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 16) = 0;
      }
      v29 = v31;
      *(_BYTE *)(a1 + 5) |= 1u;
      *(_BYTE *)(a1 + 6) = v29;
      clear_tinfo_t(&v32);
      goto LABEL_43;
    }
LABEL_35:
    clear_tinfo_t(&v32);
    if ( src )
    {
      *(_QWORD *)&v37 = 0;
      qfree(src);
    }
    return 0;
  }
  sub_3243C0(a1, flags & 0xFFFFFF0FF60000LL);
  *(_BYTE *)(a1 + 5) |= 1u;
LABEL_43:
  if ( src )
  {
    *(_QWORD *)&v37 = 0;
    qfree(src);
  }
  return 1;
}
