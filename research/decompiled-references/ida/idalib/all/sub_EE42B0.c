__int64 __fastcall sub_EE42B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // r9

  v6 = 1;
  if ( !a1[7] )
    return v6;
  v6 = sub_EE4110(a1, a2, a3, a4, a5, a6);
  if ( !(_BYTE)v6 )
    return v6;
  v13 = *(_QWORD *)a2;
  sub_7052B0(
    (__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 104LL) + 96LL),
    *(_QWORD *)(*(_QWORD *)a2 + 104LL),
    v9,
    v10,
    v11,
    v12);
  sub_EE1E50(a1, a2, a3, (*(_BYTE *)(*(_QWORD *)(v13 + 128) + 1LL) & 2) != 0, v14, v15);
  return v6;
}
