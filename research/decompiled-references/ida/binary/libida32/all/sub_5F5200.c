unsigned __int64 __fastcall sub_5F5200(unsigned int a1, unsigned int a2)
{
  unsigned int tinfo_property4; // r12d
  int v3; // r13d
  __int64 v4; // rdx
  int aflags; // eax
  __int64 flags; // rax
  __int64 v8; // r13
  unsigned __int64 *v9; // rax
  unsigned int v10; // ebx
  __int64 func; // rax
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  int tinfo_udt_member; // eax
  int v19; // [rsp+8h] [rbp-1B0h]
  __int64 v20; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-1A0h] BYREF
  _QWORD v22[2]; // [rsp+20h] [rbp-198h] BYREF
  void *v23; // [rsp+30h] [rbp-188h]
  __int128 v24; // [rsp+38h] [rbp-180h]
  void *ptr; // [rsp+48h] [rbp-170h]
  __int128 v26; // [rsp+50h] [rbp-168h]
  _OWORD v27[2]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v28; // [rsp+80h] [rbp-138h]
  int v29; // [rsp+88h] [rbp-130h]
  __int64 v30; // [rsp+90h] [rbp-128h]
  char v31; // [rsp+98h] [rbp-120h]
  _QWORD v32[3]; // [rsp+A0h] [rbp-118h] BYREF
  char v33; // [rsp+B8h] [rbp-100h] BYREF
  unsigned __int64 v34; // [rsp+178h] [rbp-40h] BYREF

  v34 = __readfsqword(0x28u);
  tinfo_property4 = a2;
  if ( (getinf(10) & 0xC00) == 0 || !get_func(a1) )
    return v34 - __readfsqword(0x28u);
  v20 = 0;
  if ( a2 == -1 || !(unsigned __int8)get_tinfo(&v20, a2) )
  {
    v3 = 2;
    v4 = 3;
    while ( !(unsigned __int8)xrefblk_t_first_from(v22, a1, v4)
         || HIDWORD(v22[0]) == a2
         || !(unsigned __int8)get_tinfo(&v20, HIDWORD(v22[0])) )
    {
      v4 = 1;
      if ( v3 == 1 )
        goto LABEL_18;
      v3 = 1;
    }
    tinfo_property4 = HIDWORD(v22[0]);
  }
LABEL_18:
  if ( (_BYTE)v20 )
  {
LABEL_19:
    if ( (debug & 0x4000) != 0 )
      sub_383DA0();
    aflags = get_aflags(tinfo_property4);
    if ( (aflags & 0xC2000000) == 0x80000000 || (aflags & 0x42000000) == 0x40000000 )
      goto LABEL_15;
    apply_callee_tinfo(a1, &v20);
    clear_tinfo_t(&v20);
    return v34 - __readfsqword(0x28u);
  }
  flags = get_flags_ex(a1, 0);
  v32[0] = -1;
  v8 = flags;
  v32[2] = 0;
  v32[1] = 0xFFFFFFFFLL;
  v9 = (unsigned __int64 *)&v33;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 3;
    *((_WORD *)v9 - 11) = 0;
    *((_WORD *)v9 - 10) = 0;
    *((_DWORD *)v9 - 1) = 0;
    *((_WORD *)v9 - 9) = 0;
    *(v9 - 2) = 0;
    *((_DWORD *)v9 - 2) = 0;
  }
  while ( v9 != &v34 );
  v10 = 0;
  while ( 1 )
  {
    if ( !(unsigned __int8)is_stkvar(v8, v10) )
      goto LABEL_29;
    func = get_func(a1);
    v12 = func;
    if ( !func )
      goto LABEL_29;
    v21 = 0;
    tinfo_get_func_frame(&v21, func);
    if ( (int)decode_insn(v32, a1, v13, v14, v15, v16) > 0 )
      break;
    clear_tinfo_t(&v21);
LABEL_29:
    if ( ++v10 == 8 )
      goto LABEL_14;
  }
  v17 = (int)calc_stkvar_struc_offset(v12, v32, v10);
  v22[1] = 0;
  v23 = nullptr;
  ptr = nullptr;
  v28 = 1;
  v29 = -1;
  v30 = 0;
  v31 = 0;
  v22[0] = 8 * v17;
  v24 = 0;
  v26 = 0;
  v27[0] = 0;
  tinfo_udt_member = find_tinfo_udt_member((int)v22);
  if ( tinfo_udt_member == -1 || v22[0] >> 3 != v17 )
  {
    clear_tinfo_t(v27);
    if ( ptr )
    {
      *(_QWORD *)&v26 = 0;
      qfree(ptr);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
    clear_tinfo_t(&v21);
    clear_tinfo_t(&v20);
    return v34 - __readfsqword(0x28u);
  }
  v19 = tinfo_udt_member;
  copy_tinfo_t(&v20);
  tinfo_property4 = get_tinfo_property4(v21, 297, v19, 0, 0, 0);
  clear_tinfo_t(v27);
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  clear_tinfo_t(&v21);
LABEL_14:
  if ( (_BYTE)v20 )
    goto LABEL_19;
LABEL_15:
  clear_tinfo_t(&v20);
  return v34 - __readfsqword(0x28u);
}

