__int64 __fastcall sub_7BF490(__int64 *a1, __int64 a2, const char *a3, char a4)
{
  __int64 v4; // rbp
  unsigned __int16 *v5; // rax
  __int64 v6; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi

  v9 = *a1;
  v10 = *(_QWORD *)(a2 + 1736);
  if ( v9 == -1 || !a3 )
    return 0;
  sub_7AD400(v10, v9, a4, a3, 1);
  v4 = *(_QWORD *)(v10 + 8);
  if ( !v4 )
    v4 = *(_QWORD *)v10;
  v5 = (unsigned __int16 *)sub_7443D0(v4, (unsigned __int16 *)(v10 + 53));
  if ( !v5 )
    return 0;
  v6 = (__int64)v5 + *v5 + 2;
  if ( (*(_BYTE *)(v4 + 6016) & 2) != 0 )
    return *(unsigned int *)(v6 + 2);
  else
    return *(_QWORD *)(v6 + 2);
}
