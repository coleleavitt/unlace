__int64 __fastcall sub_1A1170(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r12d

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v3 = v2;
  if ( *(_QWORD *)(a1 + 24) )
    v3 = sub_1A1110(a1, a2, *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 60) * *(_DWORD *)(a1 + 48));
  if ( (unsigned __int8)sub_64880((_QWORD *)a1) )
  {
    if ( v3 < (int)v2 )
      return (unsigned int)v2;
    return (unsigned int)v3;
  }
  else
  {
    do
    {
      LODWORD(v2) = v2 - 1;
      if ( v3 > (int)v2 )
        return (unsigned int)v3;
    }
    while ( (unsigned __int8)sub_64A10(
                               (_QWORD *)a1,
                               *(_DWORD *)(**(_QWORD **)(a1 + 40) + 4LL * (int)v2),
                               *(_DWORD *)(a1 + 60)) );
    return (unsigned int)(v2 + 1);
  }
}
