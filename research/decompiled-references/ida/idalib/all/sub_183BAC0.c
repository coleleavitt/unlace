__int64 __fastcall sub_183BAC0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0
    || !a4
    || !a3
    || *(char *)(a4 + 28) < 0
    || *(char *)(a3 + 28) < 0 )
  {
    return 0;
  }
  v9 = *(_QWORD *)(a3 + 48);
  if ( v9 )
    v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v10 = sub_A7AA70(*(_QWORD *)(a1 + 248), a3, 0, a4, a5, a6);
  if ( (unsigned __int8)sub_1E63330(a1, a2, v10, 1, 0) && (*(_BYTE *)(a3 + 74) & 2) == 0 )
    return 0;
  else
    return sub_B70530(a3, a4, a5);
}
