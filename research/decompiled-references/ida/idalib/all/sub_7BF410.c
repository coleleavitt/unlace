__int64 __fastcall sub_7BF410(__int64 *a1, __int64 a2, __int64 a3, const char *a4, char a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdi

  v12 = *a1;
  v13 = *(_QWORD *)(a2 + 1736);
  if ( v12 == -1 || !a4 )
    return -1;
  v6 = *(_QWORD *)(a2 + 1736);
  sub_7AD400(v13, v12, a5, a4, 1);
  v7 = *(_QWORD *)(v13 + 8);
  if ( !v7 )
    v7 = *(_QWORD *)v6;
  v8 = (unsigned __int16 *)sub_7443D0(v7, (unsigned __int16 *)(v6 + 53));
  v9 = v8;
  if ( v8 )
    v9 = (unsigned __int16 *)((char *)v8 + *v8 + 2);
  return sub_7B0040(a3, v9, 0xFFFFFFFFFFFFFFFFLL);
}
