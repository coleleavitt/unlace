__int64 __fastcall netnode_qsupstr_idx8(__int64 a1, __int64 a2, unsigned __int8 a3, __int16 a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int16 v6; // bp
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  __int64 v10; // rdi
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rsi
  __int64 v15; // rcx
  __int16 v17; // r8
  __int64 v19; // rdi

  v15 = a3;
  v17 = a4 | 0x800;
  v19 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 )
    JUMPOUT(0x7B4C98);
  v4 = v15;
  v5 = a2;
  v6 = v17;
  v7 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( *(_QWORD *)(v19 + 8) )
    JUMPOUT(0x7B4C40);
  if ( (v17 & 0x100) != 0 && unk_2CD46C8 )
    v4 = unk_2CD46C8(v15);
  *(_WORD *)(v19 + 53) = 10;
  v8 = swap64(a1);
  *(_BYTE *)(v19 + 64) = v6;
  *(_QWORD *)(v19 + 56) = v8;
  v9 = *(_WORD *)(v19 + 53);
  if ( (v6 & 0x800) != 0 )
    JUMPOUT(0x7B4C18);
  if ( v9 + 8 > 0xFFFF )
    JUMPOUT(0x2DC1E2);
  *(_WORD *)(v19 + 53) = v9 + 8;
  *(_QWORD *)(v19 + 65) = swap64(v4);
  v10 = *(_QWORD *)(v19 + 8);
  if ( !v10 )
    JUMPOUT(0x7B4C36);
  v11 = (unsigned __int16 *)sub_7443D0(v10, (unsigned __int16 *)(v7 + 53));
  v12 = v11;
  if ( v11 )
    v12 = (unsigned __int16 *)((char *)v11 + *v11 + 2);
  return sub_7B0040(v5, v12, 0xFFFFFFFFFFFFFFFFLL);
}
