unsigned __int64 __fastcall sub_611280(unsigned __int64 a1, __int64 a2)
{
  __int64 tinfo_property4; // r12
  int v3; // r13d
  __int64 v4; // rdx
  int aflags; // eax
  __int64 flags; // r13
  unsigned __int64 *v8; // rax
  unsigned int v9; // ebx
  __int64 func; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  int tinfo_udt_member; // eax
  int v18; // [rsp+8h] [rbp-250h]
  __int64 v19; // [rsp+10h] [rbp-248h] BYREF
  __int64 v20; // [rsp+18h] [rbp-240h] BYREF
  unsigned __int64 v21; // [rsp+20h] [rbp-238h] BYREF
  __int64 v22; // [rsp+28h] [rbp-230h]
  void *v23; // [rsp+30h] [rbp-228h]
  __int128 v24; // [rsp+38h] [rbp-220h]
  void *ptr; // [rsp+48h] [rbp-210h]
  __int128 v26; // [rsp+50h] [rbp-208h]
  _OWORD v27[3]; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v28; // [rsp+90h] [rbp-1C8h]
  int v29; // [rsp+98h] [rbp-1C0h]
  __int64 v30; // [rsp+A0h] [rbp-1B8h]
  char v31; // [rsp+A8h] [rbp-1B0h]
  __int128 v32; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-198h]
  __int64 v34; // [rsp+C8h] [rbp-190h]
  __int64 v35; // [rsp+D0h] [rbp-188h]
  char v36; // [rsp+D8h] [rbp-180h] BYREF
  unsigned __int64 v37; // [rsp+218h] [rbp-40h] BYREF

  v37 = __readfsqword(0x28u);
  tinfo_property4 = a2;
  if ( (getinf(10) & 0xC00) == 0 || !get_func(a1) )
    return v37 - __readfsqword(0x28u);
  v19 = 0;
  if ( a2 == -1 || !(unsigned __int8)get_tinfo(&v19, a2) )
  {
    v3 = 2;
    v4 = 3;
    while ( !(unsigned __int8)xrefblk_t_first_from(&v21, a1, v4) || v22 == a2 || !(unsigned __int8)get_tinfo(&v19, v22) )
    {
      v4 = 1;
      if ( v3 == 1 )
        goto LABEL_18;
      v3 = 1;
    }
    tinfo_property4 = v22;
  }
LABEL_18:
  if ( (_BYTE)v19 )
  {
LABEL_19:
    if ( (debug & 0x4000) != 0 )
      sub_3879F0();
    aflags = get_aflags(tinfo_property4);
    if ( (aflags & 0xC2000000) == 0x80000000 || (aflags & 0x42000000) == 0x40000000 )
      goto LABEL_15;
    apply_callee_tinfo(a1, &v19);
    clear_tinfo_t(&v19);
    return v37 - __readfsqword(0x28u);
  }
  flags = get_flags_ex(a1, 0);
  v33 = -1;
  v32 = -1;
  v8 = (unsigned __int64 *)&v36;
  v34 = 0;
  v35 = 0;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 5;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *(v8 - 2) = 0;
  }
  while ( v8 != &v37 );
  v9 = 0;
  while ( 1 )
  {
    if ( !(unsigned __int8)is_stkvar(flags, v9) )
      goto LABEL_29;
    func = get_func(a1);
    v11 = func;
    if ( !func )
      goto LABEL_29;
    v20 = 0;
    tinfo_get_func_frame(&v20, func);
    if ( (int)decode_insn(&v32, a1, v12, v13, v14, v15, 0.0) > 0 )
      break;
    clear_tinfo_t(&v20);
LABEL_29:
    if ( ++v9 == 8 )
      goto LABEL_14;
  }
  v16 = calc_stkvar_struc_offset(v11, &v32, v9);
  v22 = 0;
  v23 = nullptr;
  ptr = nullptr;
  v28 = 1;
  v29 = -1;
  v30 = 0;
  v31 = 0;
  v21 = 8 * v16;
  v24 = 0;
  v26 = 0;
  v27[0] = 0;
  tinfo_udt_member = find_tinfo_udt_member((int)&v21);
  if ( tinfo_udt_member == -1 || v21 >> 3 != v16 )
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
    clear_tinfo_t(&v20);
    clear_tinfo_t(&v19);
    return v37 - __readfsqword(0x28u);
  }
  v18 = tinfo_udt_member;
  copy_tinfo_t(&v19);
  tinfo_property4 = get_tinfo_property4(v20, 297, v18, 0, 0, 0);
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
  clear_tinfo_t(&v20);
LABEL_14:
  if ( (_BYTE)v19 )
    goto LABEL_19;
LABEL_15:
  clear_tinfo_t(&v19);
  return v37 - __readfsqword(0x28u);
}
