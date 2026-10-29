__int64 __fastcall netnode_hashstr(__int64 a1, const char *a2, _BYTE *a3, __int64 a4, char a5)
{
  __int64 v5; // r12
  _BYTE *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int16 *v9; // rax
  _BYTE *v10; // rsi
  __int64 v17; // rdi

  v17 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 || !a2 )
    return -1;
  v5 = a4;
  v6 = a3;
  v7 = *(_QWORD *)(qword_2CCB598 + 1736);
  sub_7AD400(v17, a1, a5, a2, 1);
  v8 = *(_QWORD *)(v17 + 8);
  if ( !v8 )
    v8 = *(_QWORD *)v7;
  v9 = (unsigned __int16 *)sub_7443D0(v8, (unsigned __int16 *)(v7 + 53));
  v10 = v9;
  if ( v9 )
    v10 = (char *)v9 + *v9 + 2;
  return sub_7AFF80(v6, v10, -1, v5);
}
