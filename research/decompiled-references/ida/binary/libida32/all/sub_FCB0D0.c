__int64 __fastcall sub_FCB0D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 != a2 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( !v2 )
      return 0;
    while ( a2 != v2 )
    {
      v2 = *(_QWORD *)(v2 + 40);
      if ( !v2 )
        return 0;
    }
  }
  return 1;
}

