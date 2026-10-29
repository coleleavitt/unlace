__int64 __fastcall sub_1738860(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    return 1;
  if ( ((*(__int64 *)(v6 + 8) >> 1) & 3) != 2 )
    return 1;
  v8 = a1[3];
  v9 = *(_QWORD *)(v6 + 16);
  if ( !v8 || !v9 || *(_QWORD *)(v9 + 8) != *(_QWORD *)(v8 + 8) )
    return 1;
  sub_1738480(a1, a2, *(_QWORD *)(a2 + 32), 0, a5, a6);
  return 1;
}
