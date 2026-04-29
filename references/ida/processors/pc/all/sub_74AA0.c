__int64 __fastcall sub_74AA0(__int128 a1, unsigned __int8 *a2, int a3, double a4)
{
  int v4; // r13d
  bool v5; // zf
  __int64 v6; // r15
  __int64 flags; // r12
  unsigned __int8 v9; // al
  __int64 v10; // r14
  __int64 func; // rcx
  unsigned __int16 v13; // ax
  signed int v14; // edx
  __int64 segm_name; // rax
  char *v16; // r14
  int v17; // eax
  __int64 v18; // rax
  __int64 *v19; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v20; // [rsp+0h] [rbp-A8h]
  int v21; // [rsp+8h] [rbp-A0h]
  int v22; // [rsp+14h] [rbp-94h] BYREF
  __int64 v23; // [rsp+18h] [rbp-90h] BYREF
  __int64 v24; // [rsp+20h] [rbp-88h] BYREF
  __int16 v25; // [rsp+30h] [rbp-78h]
  char *s1; // [rsp+40h] [rbp-68h] BYREF
  __int128 v27; // [rsp+48h] [rbp-60h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v4 = 1;
  v5 = *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL) == 92;
  v6 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL);
  v28 = __readfsqword(0x28u);
  if ( !v5 )
    v4 = a3;
  flags = get_flags_ex();
  if ( *((_WORD *)a2 + 3) != 28 )
    goto LABEL_4;
  v13 = *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL);
  if ( v13 > 0x5C0u )
  {
    if ( v13 > 0x5F1u )
    {
      if ( (unsigned __int16)(v13 - 1532) > 0xFu )
        goto LABEL_34;
    }
    else if ( v13 <= 0x5EDu )
    {
      goto LABEL_34;
    }
  }
  else
  {
    if ( v13 > 0x5BCu )
      goto LABEL_4;
    if ( v13 <= 0x378u )
    {
      if ( v13 > 0x374u )
        goto LABEL_4;
LABEL_34:
      v10 = sub_7F350(a1, *((_QWORD *)&a1 + 1), a2);
      insn_add_dref();
      flags = get_flags_ex();
      v9 = a2[1];
      goto LABEL_8;
    }
    if ( (unsigned __int16)(v13 - 993) > 3u )
      goto LABEL_34;
  }
LABEL_4:
  if ( a2[1] == 2 && !(unsigned __int8)is_defarg() )
  {
    if ( *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL) != 92 )
      goto LABEL_34;
    if ( *((_WORD *)a2 + 13) == 30 )
      goto LABEL_34;
    get_flags_ex();
    if ( (unsigned __int8)is_off() )
      goto LABEL_34;
  }
  if ( (unsigned __int8)is_defarg() )
    goto LABEL_6;
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 && *((_WORD *)a2 + 13) == 31 )
  {
    v10 = -1;
    sub_74870(a1, (__int64)a2, a4);
    flags = get_flags_ex();
    v9 = a2[1];
    goto LABEL_8;
  }
  func = get_func();
  if ( !func )
    goto LABEL_18;
  if ( (unsigned __int8)(a2[1] - 2) > 2u )
    goto LABEL_48;
  v19 = (__int64 *)func;
  if ( (int)sub_63A20(*((__int64 *)&a1 + 1), (__int64)a2) <= 1
    || !sub_6B650(a1, (__int64)&v24, v6, v19, 1)
    || !sub_6D5F0(*((__int64 *)&a1 + 1), (__int64)a2, v25, &v22) )
  {
LABEL_18:
    v9 = a2[1];
    if ( (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 28LL) & 0x10) == 0 )
      goto LABEL_7;
    if ( v9 == 4 )
    {
      if ( a2[32] )
      {
        v14 = a2[33] & 7 | 8;
        if ( (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 33LL) & 1) == 0 )
          v14 = a2[33] & 7;
      }
      else
      {
        v14 = *((unsigned __int16 *)a2 + 3);
      }
      goto LABEL_52;
    }
    if ( v9 == 2 )
    {
      if ( !a2[32] )
      {
        v10 = -1;
        goto LABEL_23;
      }
      v14 = -1;
LABEL_52:
      if ( !(unsigned __int8)sub_73E00(a1, *((__int64 *)&a1 + 1), v14, &s1, 1) )
        goto LABEL_6;
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (unsigned __int64)s1;
      if ( getinf() != v20 )
        goto LABEL_6;
      goto LABEL_54;
    }
LABEL_48:
    v10 = -1;
LABEL_10:
    if ( !(unsigned __int8)op_adds_xrefs() )
      goto LABEL_11;
LABEL_25:
    sub_7E670(*((_QWORD *)&a1 + 1), a2, flags);
    if ( (unsigned __int8)is_off()
      && (unsigned __int8)get_refinfo()
      && (unsigned __int8)sub_7F550(&s1, *((_QWORD *)&a1 + 1)) )
    {
      v10 = add_refinfo_dref();
    }
    else
    {
      v10 = insn_add_off_drefs();
    }
    goto LABEL_11;
  }
  if ( v22 != -1 )
  {
    if ( !(unsigned __int8)sub_73E00(a1, *((__int64 *)&a1 + 1), v22, &v23, 0)
      || !(unsigned __int8)is_mapped()
      || (v18 = get_flags_ex(), (v18 & 0x400) == 0)
      || (v18 & 0xC000) == 0 )
    {
      if ( getseg() )
      {
        s1 = 0;
        v27 = 0;
        segm_name = get_segm_name();
        v16 = s1;
        if ( segm_name <= 0 )
        {
          if ( s1 )
          {
            *(_QWORD *)&v27 = 0;
            qfree();
          }
        }
        else
        {
          if ( (_QWORD)v27 )
          {
            v17 = strcmp(s1, ".got");
            if ( !v16 )
              goto LABEL_70;
            goto LABEL_75;
          }
          v17 = -1;
          if ( s1 )
          {
LABEL_75:
            v21 = v17;
            *(_QWORD *)&v27 = 0;
            qfree();
            v17 = v21;
LABEL_70:
            if ( !v17 )
              goto LABEL_6;
          }
        }
      }
    }
  }
LABEL_54:
  op_offset();
  flags = get_flags_ex();
LABEL_6:
  v9 = a2[1];
LABEL_7:
  v10 = -1;
LABEL_8:
  if ( v9 == 4 )
    goto LABEL_24;
  if ( v9 != 2 )
    goto LABEL_10;
LABEL_23:
  if ( !a2[32] )
    goto LABEL_10;
LABEL_24:
  sub_69C70(*((__int64 *)&a1 + 1), *a2);
  if ( (unsigned __int8)op_adds_xrefs() )
    goto LABEL_25;
LABEL_11:
  if ( v4 != 1 )
    insn_create_op_data();
  return v10;
}
