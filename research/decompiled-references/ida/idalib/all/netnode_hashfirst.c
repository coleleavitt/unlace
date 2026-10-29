__int64 __fastcall netnode_hashfirst(__int64 a1, _BYTE *a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  _BYTE *v5; // r13
  int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax

  if ( a1 == -1 )
    return -1;
  v4 = a3;
  v5 = a2;
  v6 = a4;
  v7 = *(_QWORD *)(qword_2CCB598 + 1736);
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
  {
    *(_BYTE *)(v7 + 60) = a4;
    *(_WORD *)(v7 + 53) = 6;
    *(_DWORD *)(v7 + 56) = _byteswap_ulong(a1);
  }
  else
  {
    *(_WORD *)(v7 + 53) = 10;
    v9 = swap64(a1);
    v8 = *(_QWORD *)(v7 + 8);
    *(_BYTE *)(v7 + 64) = v6;
    *(_QWORD *)(v7 + 56) = v9;
    if ( !v8 )
      v8 = *(_QWORD *)v7;
  }
  if ( (unsigned __int64)sub_7443D0(v8, (unsigned __int16 *)(v7 + 53)) < 2 )
    return sub_7AD990(v7, v6, a1, 0, (__int64)v5, v4, 1);
  if ( v5 )
  {
    if ( v4 > 0 )
      *v5 = 0;
  }
  return 0;
}
