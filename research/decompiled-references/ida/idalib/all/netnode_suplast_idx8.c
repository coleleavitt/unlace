__int64 __fastcall netnode_suplast_idx8(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // bp
  char v3; // r13
  __int64 v4; // rax
  __int64 v8; // rdi

  v8 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 )
    JUMPOUT(0x7B76A0);
  v2 = a2;
  if ( a2 == 0xFF )
    JUMPOUT(0x7B7678);
  v3 = a2 + 1;
  if ( *(_QWORD *)(v8 + 8) )
    JUMPOUT(0x7B76B0);
  *(_WORD *)(v8 + 53) = 10;
  v4 = swap64(a1);
  *(_BYTE *)(v8 + 64) = v3;
  *(_QWORD *)(v8 + 56) = v4;
  return sub_7B5210(v8, v2, a1, 0);
}
