__int64 __fastcall sub_13C83B0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  int v9; // eax

  v7 = (unsigned __int8)a5;
  v9 = sub_13C8080(a1, a4, (unsigned __int8)a5, 1u, a5, a6);
  if ( v9 == 2 )
    return 0;
  if ( v9 == 3 && (*(_BYTE *)(*(_QWORD *)a1 + 280LL) & 2) != 0 )
    sub_1406640(a1 + 632, a4, v7, 0);
  return sub_14075F0(a1 + 632, a2, a3);
}
