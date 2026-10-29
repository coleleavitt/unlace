__int64 __fastcall sub_55EB90(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int insn; // ebp
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  char v14; // dl
  unsigned __int64 v15; // rax
  int v17; // eax
  char merge_state; // al
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r15d
  unsigned int item_end; // eax
  int v24; // ecx
  __int64 flags; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-40h]
  _QWORD *v28; // [rsp+8h] [rbp-40h]

  insn = a2;
  v8 = *(_DWORD *)(a1 + 16);
  v27 = qword_2CA1698;
  if ( (unsigned __int8)is_debugger_on() )
  {
    if ( !a3 )
    {
      if ( !(_BYTE)a2 )
      {
LABEL_4:
        v13 = *(_QWORD *)(a1 + 528);
        insn = 0;
        goto LABEL_5;
      }
      goto LABEL_11;
    }
LABEL_8:
    v17 = decode_insn(a1 + 212, v8, v9, v10, v11, v12);
    v13 = *(_QWORD *)(a1 + 528);
    LOBYTE(insn) = v17 != 0;
    goto LABEL_5;
  }
  merge_state = get_merge_state(a1, a2);
  if ( a3 )
    goto LABEL_8;
  insn = (merge_state & 2) != 0;
  if ( !(_BYTE)a2 )
  {
    if ( !(_BYTE)a4 )
      goto LABEL_4;
    goto LABEL_22;
  }
LABEL_11:
  if ( !(_BYTE)a4 )
  {
    insn = create_insn(v8);
    flags = get_flags_ex(v8, 0);
    *(_QWORD *)(a1 + 528) = flags;
    v13 = flags;
    LOBYTE(insn) = insn != 0;
    goto LABEL_5;
  }
  v28 = *(_QWORD **)(v27 + 1480);
  v19 = sub_55A0B0(v28, a1 + 212, v8);
  v22 = v19;
  if ( v19 < 0 )
  {
    if ( (unsigned int)sub_39CC50((__int64)v28) != 25 )
      sub_4DB6D0(v28, -(char)v22, v8, 0);
    goto LABEL_22;
  }
  if ( !v19 )
  {
LABEL_22:
    if ( (_BYTE)insn )
      goto LABEL_4;
    del_items(v8, 1, 1, 0);
LABEL_24:
    v26 = get_flags_ex(v8, 0);
    *(_QWORD *)(a1 + 528) = v26;
    v13 = v26;
    goto LABEL_5;
  }
  item_end = get_item_end(v8, a1 + 212, v20, v21);
  v24 = item_end - v8;
  if ( item_end - v8 != v22 )
  {
    if ( (_BYTE)insn )
      goto LABEL_4;
    if ( v24 < v22 )
      del_items(item_end, 4, (unsigned int)(v22 - v24), 0);
    insn = sub_3D0F10(a1 + 212);
    if ( (_BYTE)insn )
      LOBYTE(insn) = (unsigned int)create_insn(v8) != 0;
    goto LABEL_24;
  }
  v13 = *(_QWORD *)(a1 + 528);
  insn = a4;
LABEL_5:
  v14 = is_defarg(v13, 2);
  v15 = *(_QWORD *)(a1 + 528);
  if ( v14 )
    v15 = v15 & 0xFFFFFFFFF0FFFFFFLL | (v15 >> 8) & 0xF000000;
  *(_DWORD *)(a1 + 60) = v15;
  return insn;
}

