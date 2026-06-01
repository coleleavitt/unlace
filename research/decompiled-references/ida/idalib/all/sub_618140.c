__int64 __fastcall sub_618140(__int64 a1, unsigned __int64 a2, __int64 *a3, char a4, char a5)
{
  char *v8; // rbx
  __int64 v9; // rdi
  int flags; // eax
  __int64 v12; // r9
  char v14; // al
  __int64 v15; // r8
  _QWORD *v16; // rax
  char v17; // al
  _QWORD *v18; // rax
  void **func; // rax
  char v20; // [rsp+4h] [rbp-244h]
  int tinfo_property; // [rsp+4h] [rbp-244h]
  int v22; // [rsp+8h] [rbp-240h]
  __int64 v23[5]; // [rsp+10h] [rbp-238h] BYREF
  __int16 v24; // [rsp+38h] [rbp-210h]
  __int128 v25; // [rsp+40h] [rbp-208h]
  __int64 v26; // [rsp+50h] [rbp-1F8h]
  __int64 v27; // [rsp+58h] [rbp-1F0h]
  int v28; // [rsp+60h] [rbp-1E8h]
  __int64 v29; // [rsp+68h] [rbp-1E0h]
  int v30; // [rsp+70h] [rbp-1D8h]
  __int64 v31; // [rsp+78h] [rbp-1D0h]
  int v32; // [rsp+80h] [rbp-1C8h]
  __int64 v33; // [rsp+88h] [rbp-1C0h]
  int v34; // [rsp+90h] [rbp-1B8h]
  __int64 v35; // [rsp+98h] [rbp-1B0h]
  __int128 v36; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-198h]
  __int64 v38; // [rsp+B8h] [rbp-190h]
  __int64 v39; // [rsp+C0h] [rbp-188h]
  _BYTE v40[320]; // [rsp+C8h] [rbp-180h] BYREF
  _QWORD v41[8]; // [rsp+208h] [rbp-40h] BYREF

  v8 = (char *)a2;
  v9 = *a3;
  v41[0] = __readfsqword(0x28u);
  if ( a5 )
  {
    tinfo_property = get_tinfo_property(v9, 21);
    if ( (unsigned int)sub_5B7EE0(a2) == tinfo_property )
      goto LABEL_7;
    v14 = is_spec_ea(a2);
    if ( !(unsigned __int8)set_purged(a2, tinfo_property, v14) )
      goto LABEL_7;
    v20 = 0;
    if ( !(unsigned __int8)xrefblk_t_first_to(v23, a2, 1) )
      goto LABEL_7;
  }
  else
  {
    v20 = 0;
    if ( (*(_BYTE *)(a1 + 940) & 8) != 0 )
    {
      v8 = (char *)(a2 & 0xFFFFFFFFFFFFFFFELL);
      v20 = a2 & 1;
    }
    v22 = get_tinfo_property(v9, 21);
    if ( (unsigned int)sub_5B7EE0((unsigned __int64)v8) == v22 )
      goto LABEL_5;
    v17 = is_spec_ea(v8);
    if ( !(unsigned __int8)set_purged((unsigned __int64)v8, v22, v17)
      || !(unsigned __int8)xrefblk_t_first_to(v23, v8, 1) )
    {
      goto LABEL_5;
    }
  }
  do
  {
    if ( (~((unsigned __int16)get_flags_ex(v23[0], 4) >> 8) & 6) == 0 )
    {
      v16 = v40;
      v37 = -1;
      v38 = 0;
      v39 = 0;
      v36 = -1;
      do
      {
        *(_WORD *)v16 = 0;
        v16 += 5;
        *((_WORD *)v16 - 19) = 0;
        *((_WORD *)v16 - 18) = 0;
        *((_DWORD *)v16 - 2) = 0;
        *((_WORD *)v16 - 17) = 0;
        *((_OWORD *)v16 - 2) = 0;
        *(v16 - 2) = 0;
      }
      while ( v41 != v16 );
      if ( (unsigned int)decode_insn(&v36, v23[0], v41, 0, v15, 0, 0.0) && (unsigned __int8)is_call_insn(&v36) )
        auto_apply_type(v23[0], (__int64)v8);
    }
  }
  while ( (unsigned __int8)xrefblk_t_next_to(v23) );
  if ( a5 )
    goto LABEL_7;
LABEL_5:
  flags = get_flags_ex(v8, 4);
  if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 || (unsigned __int8)segtype(v8) != 2 )
    goto LABEL_7;
  v37 = -1;
  v18 = v40;
  v38 = 0;
  v39 = 0;
  v36 = -1;
  do
  {
    *(_WORD *)v18 = 0;
    v18 += 5;
    *((_WORD *)v18 - 19) = 0;
    *((_WORD *)v18 - 18) = 0;
    *((_DWORD *)v18 - 2) = 0;
    *((_WORD *)v18 - 17) = 0;
    *((_OWORD *)v18 - 2) = 0;
    *(v18 - 2) = 0;
  }
  while ( v41 != v18 );
  if ( (int)decode_insn(&v36, v8, v41, 0, 0, v12, 0.0) > 0 )
  {
    if ( v20 )
      sub_3792E0(0x57u, v8, 1);
    if ( (a4 & 2) != 0 )
    {
      auto_mark_range(v8, v8 + 1, 20);
      auto_mark_range(v8, v8 + 1, 30);
      sub_3A6370(a1, (__int64)v8);
    }
    else
    {
      v23[0] = (__int64)v8;
      v24 = 0;
      v23[1] = -1;
      v23[2] = 512;
      v23[3] = -1;
      v23[4] = 0;
      v26 = 0xFFFFFFFFLL;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v25 = 0;
      add_func_ex((int)v23);
      func = (void **)get_func(v8);
      if ( !func || *func != v8 )
        return 0;
    }
LABEL_7:
    sub_617E20(*(__int64 **)(a1 + 1672), v8, a3, a4);
    return 1;
  }
  return 0;
}
