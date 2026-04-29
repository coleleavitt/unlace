__int64 __fastcall sub_9460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v6; // ax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 first_dref_from; // rax
  __int64 sreg; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 qword; // rax
  __int64 v16; // rsi
  char *v17; // rdi
  size_t v18; // rax
  char *v19; // rsi
  __int64 v20; // r13
  size_t v21; // r14
  char *v22; // rdi
  size_t v23; // r14
  __int64 v24; // r13
  char *s1; // [rsp+10h] [rbp-48h] BYREF
  __int128 v26; // [rsp+18h] [rbp-40h]
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v6 = *(_WORD *)(a2 + 24);
  v27 = __readfsqword(0x28u);
  if ( v6 == 8 )
  {
    if ( (*(_QWORD *)(a2 + 120) & 0xFFFF00000000FF00LL) != 0x1000000000100LL )
      goto LABEL_5;
    goto LABEL_20;
  }
  if ( v6 <= 8u )
  {
    if ( v6 != 6 )
      goto LABEL_5;
    v9 = 0x1000000000100LL;
    if ( (*(_QWORD *)(a2 + 120) & 0xFFFF00000000FF00LL) != 0x1000000000100LL )
      goto LABEL_9;
LABEL_20:
    sreg = get_sreg(*(_QWORD *)(a2 + 16), 609);
    if ( *(_BYTE *)(a2 + 81) != 5 )
      goto LABEL_28;
    if ( sreg == -1 )
      goto LABEL_28;
    v13 = *(_QWORD *)(a2 + 88) + sreg;
    v14 = v13;
    if ( v13 == -1 )
      goto LABEL_28;
    insn_add_dref(a2, v13, 0, 1);
    if ( !(unsigned __int8)equal_bytes(*(_QWORD *)(a2 + 16), &unk_20B20, 255, 32, 1) )
      goto LABEL_28;
    s1 = nullptr;
    v26 = 0;
    qword = get_qword(v14);
    if ( qword == -1 || get_ea_name(&s1, qword, 0, 0) <= 0 )
    {
LABEL_26:
      if ( !s1 )
        goto LABEL_28;
      goto LABEL_27;
    }
    v22 = s1;
    if ( (_QWORD)v26 )
    {
      v23 = v26 - 1;
      v24 = v26 + 1;
      if ( *((_QWORD *)&v26 + 1) >= (unsigned __int64)(v26 + 1) )
        goto LABEL_51;
    }
    else
    {
      if ( *((_QWORD *)&v26 + 1) > 1u )
      {
        *(_QWORD *)&v26 = 2;
        s1[1] = 0;
LABEL_53:
        *s1 = 46;
        set_name(*(_QWORD *)(a2 + 16), s1, 0);
        goto LABEL_26;
      }
      v23 = 0;
      v24 = 2;
    }
    s1 = (char *)qvector_reserve(&s1, s1, v24, 1);
    v22 = s1;
LABEL_51:
    *(_QWORD *)&v26 = v24;
    v22[v23 + 1] = 0;
    if ( v23 )
      memmove(s1 + 1, s1, v23);
    goto LABEL_53;
  }
  if ( (unsigned __int16)(v6 - 152) > 1u
    || *(_BYTE *)(a2 + 41) != 1
    || *(_WORD *)(a2 + 46) != 1
    || *(_BYTE *)(a2 + 81) != 5 )
  {
    goto LABEL_5;
  }
  if ( get_sreg(*(_QWORD *)(a2 + 16), 609) != -1 )
    goto LABEL_28;
  v16 = *(_QWORD *)(a2 + 16);
  s1 = nullptr;
  v26 = 0;
  if ( get_func_name(&s1, v16) <= 0 )
    goto LABEL_37;
  v17 = s1;
  if ( (_QWORD)v26 )
  {
    v17 = s1;
    if ( !strcmp(s1, "start") )
    {
      set_default_sreg_value(0, 609, *(_QWORD *)(a2 + 88));
      sub_8D70((__int64)"gp=%a\n", 0.0);
LABEL_37:
      v17 = s1;
    }
  }
  if ( v17 )
  {
LABEL_27:
    *(_QWORD *)&v26 = 0;
    qfree();
  }
LABEL_28:
  if ( *(_WORD *)(a2 + 24) != 6 )
    goto LABEL_5;
LABEL_9:
  if ( (get_flags_ex(*(_QWORD *)(a2 + 16), 4, v9, a4, a5) & 0x4000) != 0
    || !(unsigned __int8)equal_bytes(*(_QWORD *)(a2 + 16), &unk_20AE0, 255, 48, 1) )
  {
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(a2 + 16);
  s1 = nullptr;
  v26 = 0;
  first_dref_from = get_first_dref_from(v10);
  if ( first_dref_from == -1 || get_ea_name(&s1, first_dref_from, 0, 0) <= 0 )
    goto LABEL_13;
  v18 = v26;
  v19 = s1;
  if ( (_QWORD)v26 )
  {
    v20 = v26 + 1;
    v21 = v26 - 1;
    if ( *((_QWORD *)&v26 + 1) >= (unsigned __int64)(v26 + 1) )
      goto LABEL_42;
    goto LABEL_48;
  }
  if ( *((_QWORD *)&v26 + 1) <= 1u )
  {
    v21 = 0;
    v20 = 2;
LABEL_48:
    s1 = (char *)qvector_reserve(&s1, s1, v20, 1);
    v19 = s1;
    v18 = v21 + 1;
LABEL_42:
    *(_QWORD *)&v26 = v20;
    v19[v18] = 0;
    if ( v21 )
      memmove(s1 + 1, s1, v21);
    goto LABEL_44;
  }
  *(_QWORD *)&v26 = 2;
  s1[1] = 0;
LABEL_44:
  *s1 = 46;
  set_name(*(_QWORD *)(a2 + 16), s1, 0);
LABEL_13:
  if ( s1 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
LABEL_5:
  if ( *(_DWORD *)(a1 + 5232) )
  {
    if ( sub_9240(a1, a2) )
    {
      if ( *(_DWORD *)(a1 + 5232) )
        add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
    }
    else
    {
      *(_DWORD *)(a1 + 5232) = 0;
    }
  }
  return 1;
}
