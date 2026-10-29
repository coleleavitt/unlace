__int64 __fastcall sub_5783E0(__int64 a1, __int64 a2, char a3, unsigned int a4, double a5)
{
  unsigned int insn; // ebp
  char *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  char v15; // dl
  unsigned __int64 v16; // rax
  int v18; // eax
  char merge_state; // al
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r15d
  int v24; // eax
  __int64 flags; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-40h]
  __int64 *v28; // [rsp+8h] [rbp-40h]

  insn = a2;
  v9 = *(char **)(a1 + 16);
  v27 = qword_2CCB598;
  if ( (unsigned __int8)is_debugger_on() )
  {
    if ( !a3 )
    {
      if ( !(_BYTE)a2 )
      {
LABEL_4:
        v14 = *(_QWORD *)(a1 + 720);
        insn = 0;
        goto LABEL_5;
      }
      goto LABEL_11;
    }
LABEL_8:
    v18 = decode_insn(a1 + 224, v9, v10, v11, v12, v13, a5);
    v14 = *(_QWORD *)(a1 + 720);
    LOBYTE(insn) = v18 != 0;
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
    insn = create_insn((int)v9);
    flags = get_flags_ex(v9, 0);
    *(_QWORD *)(a1 + 720) = flags;
    v14 = flags;
    LOBYTE(insn) = insn != 0;
    goto LABEL_5;
  }
  v28 = *(__int64 **)(v27 + 1672);
  v20 = sub_573C40(v28, a1 + 224, v9);
  v23 = v20;
  if ( v20 < 0 )
  {
    if ( (unsigned int)sub_3A1820((__int64)v28) != 25 )
      sub_4F2EF0(v28, -(char)v23, (__int64)v9, 0);
    goto LABEL_22;
  }
  if ( !v20 )
  {
LABEL_22:
    if ( (_BYTE)insn )
      goto LABEL_4;
    del_items(v9, 1, 1, 0);
LABEL_24:
    v26 = get_flags_ex(v9, 0);
    *(_QWORD *)(a1 + 720) = v26;
    v14 = v26;
    goto LABEL_5;
  }
  v24 = get_item_end(v9, a1 + 224, v21, v22) - (_DWORD)v9;
  if ( v24 != v23 )
  {
    if ( (_BYTE)insn )
      goto LABEL_4;
    if ( v24 < v23 )
      del_items(&v9[v24], 4, v23 - v24, 0);
    insn = sub_3D6B00(a1 + 224);
    if ( (_BYTE)insn )
      LOBYTE(insn) = (unsigned int)create_insn((int)v9) != 0;
    goto LABEL_24;
  }
  v14 = *(_QWORD *)(a1 + 720);
  insn = a4;
LABEL_5:
  v15 = is_defarg(v14, 2);
  v16 = *(_QWORD *)(a1 + 720);
  if ( v15 )
    v16 = v16 & 0xFFFFFFFFF0FFFFFFLL | (v16 >> 8) & 0xF000000;
  *(_DWORD *)(a1 + 60) = v16;
  return insn;
}
