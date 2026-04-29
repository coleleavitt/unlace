__int64 __fastcall sub_7AC30(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6, __int64 *a7)
{
  __int64 *v10; // rsi
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ebx
  __int64 qword; // rax
  __int64 v30; // [rsp+0h] [rbp-210h]
  __int64 *func; // [rsp+0h] [rbp-210h]
  __int64 v32; // [rsp+8h] [rbp-208h]
  unsigned __int16 v33; // [rsp+Eh] [rbp-202h]
  __int64 v34; // [rsp+10h] [rbp-200h]
  __int64 v36; // [rsp+28h] [rbp-1E8h] BYREF
  char v37; // [rsp+37h] [rbp-1D9h]
  __int64 v38; // [rsp+38h] [rbp-1D8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-1D0h]
  __int64 v40; // [rsp+48h] [rbp-1C8h]
  __int128 v41; // [rsp+50h] [rbp-1C0h]
  __int64 v42; // [rsp+60h] [rbp-1B0h]
  _QWORD v43[52]; // [rsp+70h] [rbp-1A0h] BYREF

  v10 = a4;
  v36 = a5;
  v43[45] = __readfsqword(0x28u);
  v38 = 0;
  copy_tinfo_t();
  v11 = *(_BYTE *)(a3 + 1);
  if ( v11 == 4 )
  {
    v19 = apply_tinfo_to_stkarg();
    goto LABEL_16;
  }
  if ( v11 > 4u )
  {
    if ( v11 != 5 )
      goto LABEL_15;
    if ( (get_tinfo_property() & 0xF) != 0xA )
      goto LABEL_15;
    if ( !*(_QWORD *)(a3 + 8) )
      goto LABEL_15;
    get_flags_ex(a2[2], 0);
    if ( (unsigned __int8)is_defarg() )
      goto LABEL_15;
    get_default_reftype();
    op_offset();
LABEL_37:
    v19 = 1;
    goto LABEL_16;
  }
  if ( v11 == 1 )
  {
    v33 = *(_WORD *)(a3 + 6);
    func = (__int64 *)get_func(a2[2]);
    if ( !func )
      goto LABEL_15;
    v21 = a2[2];
    v40 = 0xFFFFFFFFLL;
    v41 = 0;
    v22 = v21;
    qmemcpy(v43, a2, 0x168u);
    v39 = 0;
    v42 = -1;
    if ( v21 == -1 )
      v22 = *func;
    v42 = v22;
    if ( !(unsigned __int8)func_tail_iterator_set() )
    {
LABEL_51:
      if ( v43[2] == *func && (unsigned int)v33 - 13 > 2 )
        add_regarg();
      goto LABEL_15;
    }
    while ( 1 )
    {
      do
      {
        if ( !(unsigned __int8)func_item_iterator_decode_preceding_insn() )
          goto LABEL_51;
        if ( *(_QWORD *)(a6 + 8) > 0x1000u )
          goto LABEL_15;
      }
      while ( v37 );
      if ( sub_2CF00(a1, (__int64)v43) )
        goto LABEL_15;
      if ( LOWORD(v43[3]) == 12 )
        goto LABEL_55;
      if ( LOWORD(v43[3]) <= 0xCu )
      {
        if ( LOWORD(v43[3]) != 6 )
          goto LABEL_44;
        if ( v33 == HIWORD(v43[5]) && BYTE1(v43[15]) == 5 && !v43[16] )
          goto LABEL_50;
      }
      else if ( LOWORD(v43[3]) == 14 )
      {
LABEL_55:
        if ( v33 == HIWORD(v43[5]) )
        {
          if ( BYTE1(v43[10]) == 1
            && (HIWORD(v43[10]) == 13 || HIWORD(v43[10]) == 161 || sub_301E0(a1, func, HIWORD(v43[10])))
            && BYTE1(v43[15])
            && (unsigned __int8)remove_tinfo_pointer() )
          {
            v19 = apply_tinfo_to_stkarg();
LABEL_63:
            if ( v39 )
              lock_func_range();
            goto LABEL_16;
          }
LABEL_44:
          if ( sub_2C410(a1, (__int64)v43, v33, 1u) )
            goto LABEL_15;
        }
      }
      else
      {
        if ( (unsigned __int16)(LOWORD(v43[3]) - 23) > 0x3Au )
          goto LABEL_44;
        v23 = 0x600000000200085LL;
        if ( !_bittest64(&v23, (unsigned int)LOWORD(v43[3]) - 23) )
          goto LABEL_44;
        if ( HIWORD(v43[5]) == 15 )
          goto LABEL_15;
        if ( v33 == HIWORD(v43[5]) )
        {
LABEL_50:
          v19 = sub_7AC30(a1, (unsigned int)v43, (unsigned int)&v43[10], (unsigned int)&v38, v36, a6, (__int64)a7);
          goto LABEL_63;
        }
      }
    }
  }
  if ( v11 != 2 )
  {
LABEL_15:
    v19 = 0;
    goto LABEL_16;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v13 = *(_QWORD *)(a3 + 16) + 16LL * *a2;
  v14 = v12;
  if ( v13 != v12 )
  {
    v15 = v13 & v12;
    v16 = v13 == -1;
    v17 = -1;
    if ( !v16 )
      v17 = v15;
    v14 = v17;
  }
  if ( *((_WORD *)a2 + 12) == 30 )
  {
    v10 = (_QWORD *)(&dword_0 + 2);
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v10 = &v36;
      if ( (unsigned __int8)remove_tinfo_pointer() )
      {
        if ( *(_BYTE *)(a3 + 5) == 7 )
          qword = get_qword();
        else
          qword = (unsigned int)get_dword(v14);
        v14 = qword;
      }
    }
  }
  v18 = getinf(99);
  if ( v18 != 176 && v18 != 256 )
    goto LABEL_12;
  if ( a7 && (unsigned __int8)sub_78480(a4, v10) )
  {
    *a7 = v14;
    goto LABEL_37;
  }
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v28 = (unsigned __int8)getinf_flag(3, 4, v24, v25, v26, v27, v30, v32, v34) == 0 ? 4 : 8;
    if ( v28 < (unsigned __int64)get_tinfo_size() && !(unsigned __int8)can_define_item() )
      goto LABEL_15;
  }
LABEL_12:
  v19 = apply_once_tinfo_and_name();
LABEL_16:
  clear_tinfo_t();
  return v19;
}
