__int64 __fastcall netnode_valstr(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // r12
  _BYTE *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int16 *v7; // rax
  _BYTE *v8; // rsi
  __int64 v13; // rdi

  if ( a1 == -1 )
    return -1;
  v3 = a3;
  v4 = a2;
  v13 = *(_QWORD *)(qword_2CCB598 + 1736);
  v5 = *(_QWORD *)(v13 + 8);
  if ( v5 )
  {
    *(_BYTE *)(v13 + 60) = 86;
    *(_WORD *)(v13 + 53) = 6;
    *(_DWORD *)(v13 + 56) = _byteswap_ulong(a1);
  }
  else
  {
    *(_WORD *)(v13 + 53) = 10;
    v6 = swap64(a1);
    *(_BYTE *)(v13 + 64) = 86;
    *(_QWORD *)(v13 + 56) = v6;
    v5 = *(_QWORD *)(v13 + 8);
    if ( !v5 )
      v5 = *(_QWORD *)v13;
  }
  v7 = (unsigned __int16 *)sub_7443D0(v5, (unsigned __int16 *)(v13 + 53));
  v8 = v7;
  if ( v7 )
    v8 = (char *)v7 + *v7 + 2;
  return sub_7AFF80(v4, v8, -1, v3);
}
