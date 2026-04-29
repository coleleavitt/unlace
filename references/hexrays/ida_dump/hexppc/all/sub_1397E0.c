bool __fastcall sub_1397E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 84LL) >= a3 )
    return 1;
  if ( *(_BYTE *)a2 != 10 )
    return 1;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)v4 != 6 )
    return 1;
  v5 = getseg(*(_QWORD *)(v4 + 8));
  return !v5 || *(_BYTE *)(v5 + 184) != 1;
}
