__int64 __fastcall sub_10FE0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  char v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // dl
  __int64 v9; // rcx
  int v10; // r15d
  int v11; // r14d
  int v12; // r13d
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int16 v16; // ax
  __int16 v18; // ax
  __int64 sreg; // r12
  __int64 func; // rax
  __int64 v21; // r12
  __int16 v22; // ax
  bool v23; // dl
  __int64 v24; // r12
  char v25; // al
  int v26; // [rsp+4h] [rbp-54h]
  int v27; // [rsp+4h] [rbp-54h]
  unsigned int v28; // [rsp+8h] [rbp-50h]
  unsigned int v29; // [rsp+Ch] [rbp-4Ch]
  unsigned int v30; // [rsp+Ch] [rbp-4Ch]
  _QWORD v31[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = a1[2];
  v3 = *(unsigned __int16 *)(a2 + 24);
  v31[1] = __readfsqword(0x28u);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v4 > v3 || *(_DWORD *)(v2 + 108) <= v3 )
  {
    if ( (unsigned __int8)sub_1F170(a2) )
      goto LABEL_18;
    v18 = *(_WORD *)(a2 + 24);
    if ( (unsigned __int16)(v18 - 44) > 1u && v18 != 79 )
    {
      add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
      goto LABEL_18;
    }
    if ( !(unsigned __int8)sub_10B30((__int64)a1, (__int64 *)a2) )
      goto LABEL_18;
    v13 = 0;
    v11 = 0;
    v12 = 0;
    add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
  }
  else
  {
    v26 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    v5 = sub_1F170(a2);
    v8 = v26;
    v9 = v26 & 0x100;
    v28 = v26 & 4;
    v10 = v26 & 8;
    v11 = v26 & 0x10;
    v12 = v26 & 0x400;
    v13 = v26 & 0x4000;
    v27 = v26 & 0x200;
    if ( !v5 )
    {
      v22 = *(_WORD *)(a2 + 24);
      if ( (unsigned __int16)(v22 - 44) <= 1u || v22 == 79 )
      {
        v30 = v9;
        v25 = sub_10B30((__int64)a1, (__int64 *)a2);
        v9 = v30;
        v23 = v25;
      }
      else
      {
        v23 = (v8 & 1) == 0;
      }
      if ( v23 )
      {
        v29 = v9;
        add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
        v9 = v29;
      }
    }
    if ( (_DWORD)v9 )
      sub_F710(a1, a2, (unsigned __int8 *)(a2 + 40), 1u);
    v14 = v28;
    if ( v28 )
      sub_F710(a1, a2, (unsigned __int8 *)(a2 + 40), 0);
    if ( v27 )
      sub_F710(a1, a2, (unsigned __int8 *)(a2 + 80), 1u);
    if ( v10 )
      sub_F710(a1, a2, (unsigned __int8 *)(a2 + 80), 0);
  }
  if ( v12 )
    sub_F710(a1, a2, (unsigned __int8 *)(a2 + 120), 1u);
  if ( v11 )
    sub_F710(a1, a2, (unsigned __int8 *)(a2 + 120), 0);
  if ( v13 )
    remember_problem(6, *(_QWORD *)(a2 + 16), 0);
LABEL_18:
  if ( (unsigned __int8)getinf_flag(10, 4096, v14, v9, v6, v7) )
  {
    if ( (unsigned int)get_auto_state(10, 4096, v15) == 40 )
    {
      func = get_func(*(_QWORD *)(a2 + 16));
      v21 = func;
      if ( func )
      {
        if ( !(unsigned __int8)recalc_spd_for_basic_block(func, *(_QWORD *)(a2 + 16)) )
          sub_FF50((__int64)a1, v21, a2);
      }
    }
  }
  v16 = *(_WORD *)(a2 + 24);
  if ( v16 == 79 )
  {
    sreg = get_sreg(*(_QWORD *)(a2 + 16), 134);
    if ( (unsigned __int8)is_mapped(sreg) )
    {
      v24 = *(_QWORD *)(a1[4] + 16LL) & (sreg + 2LL * *(_QWORD *)(a2 + 48));
      insn_create_op_data(a2, v24, (unsigned int)*(char *)(a2 + 42), 1);
      insn_add_dref(a2, v24, (unsigned int)*(char *)(a2 + 42), 3);
    }
    v16 = *(_WORD *)(a2 + 24);
  }
  if ( v16 == 39
    && *(_BYTE *)(a2 + 81) == 1
    && *(_WORD *)(a2 + 86) == 52
    && !*(_BYTE *)(a2 + 121)
    && (unsigned __int8)sub_16EF0(a1, v31, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(a2 + 46)) )
  {
    split_sreg_range(*(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 134, v31[0], 3, 0);
  }
  return 1;
}
