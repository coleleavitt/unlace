__int64 __fastcall sub_32BB40(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v7; // edx

  if ( *(_DWORD *)(a1 + 312) > a2 )
    return 0;
  *(_DWORD *)(a1 + 312) = a2;
  v7 = sub_338EA0(*(_QWORD *)(a1 + 1496), 116, a1, *(_DWORD *)(a1 + 316), a5, a6);
  if ( !v7 )
  {
    if ( a2 >= *(_DWORD *)(a1 + 316) )
      return (unsigned int)-33;
    else
      return 0;
  }
  return v7;
}
