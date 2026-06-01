__int64 __fastcall netnode_qhashstr(__int64 a1, __int64 a2, const char *a3, char a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rsi
  __int64 v14; // rdi

  v14 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 || !a3 )
    JUMPOUT(0x7AD688);
  v4 = a2;
  v5 = *(_QWORD *)(qword_2CCB598 + 1736);
  sub_7AD400(v14, a1, a4, a3, 1);
  v6 = *(_QWORD *)(v14 + 8);
  if ( !v6 )
    JUMPOUT(0x7AD680);
  v7 = (unsigned __int16 *)sub_7443D0(v6, (unsigned __int16 *)(v5 + 53));
  v8 = v7;
  if ( v7 )
    v8 = (unsigned __int16 *)((char *)v7 + *v7 + 2);
  return sub_7B0040(v4, v8, 0xFFFFFFFFFFFFFFFFLL);
}
