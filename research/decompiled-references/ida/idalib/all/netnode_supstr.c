__int64 __fastcall netnode_supstr(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int16 a5)
{
  __int64 v5; // r15
  __int16 v6; // r13
  __int64 v7; // r12
  _BYTE *v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rdi
  unsigned __int16 *v13; // rax
  _BYTE *v14; // rsi
  __int64 v21; // rdi

  v21 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 )
    JUMPOUT(0x7B4B38);
  v5 = a2;
  v6 = a5;
  v7 = a4;
  v8 = a3;
  v9 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( *(_QWORD *)(v21 + 8) )
    JUMPOUT(0x7B4AD8);
  if ( (a5 & 0x100) != 0 && unk_2CD46C8 )
    v5 = unk_2CD46C8(a2);
  *(_WORD *)(v21 + 53) = 10;
  v10 = swap64(a1);
  *(_BYTE *)(v21 + 64) = v6;
  *(_QWORD *)(v21 + 56) = v10;
  v11 = *(_WORD *)(v21 + 53);
  if ( (v6 & 0x800) != 0 )
    JUMPOUT(0x7B4AB0);
  if ( v11 + 8 > 0xFFFF )
    JUMPOUT(0x2DC1DC);
  *(_WORD *)(v21 + 53) = v11 + 8;
  *(_QWORD *)(v21 + 65) = swap64(v5);
  v12 = *(_QWORD *)(v21 + 8);
  if ( !v12 )
    JUMPOUT(0x7B4ACE);
  v13 = (unsigned __int16 *)sub_7443D0(v12, (unsigned __int16 *)(v9 + 53));
  v14 = v13;
  if ( v13 )
    v14 = (char *)v13 + *v13 + 2;
  return sub_7AFF80(v8, v14, -1, v7);
}
