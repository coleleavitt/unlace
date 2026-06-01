__int64 __fastcall netnode_qvalstr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int16 *v4; // rax
  unsigned __int16 *v5; // rsi
  __int64 v9; // rdi

  if ( a1 == -1 )
    JUMPOUT(0x7B3FE8);
  v2 = a2;
  v9 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( *(_QWORD *)(v9 + 8) )
    JUMPOUT(0x7B3FD0);
  *(_WORD *)(v9 + 53) = 10;
  v3 = swap64(a1);
  *(_BYTE *)(v9 + 64) = 86;
  *(_QWORD *)(v9 + 56) = v3;
  if ( !*(_QWORD *)(v9 + 8) )
    JUMPOUT(0x7B3FC8);
  v4 = (unsigned __int16 *)sub_7443D0(*(_QWORD *)(v9 + 8), (unsigned __int16 *)(v9 + 53));
  v5 = v4;
  if ( v4 )
    v5 = (unsigned __int16 *)((char *)v4 + *v4 + 2);
  return sub_7B0040(v2, v5, 0xFFFFFFFFFFFFFFFFLL);
}
