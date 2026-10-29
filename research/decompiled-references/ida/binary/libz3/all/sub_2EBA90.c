__int64 __fastcall sub_2EBA90(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // rsi
  __int16 v3; // dx

  v1 = *(_QWORD *)(a1 + 216);
  if ( v1 )
  {
    for ( i = v1 + 8LL * *(unsigned int *)(v1 - 4); i != v1; v1 += 8 )
    {
      v3 = *(_WORD *)(*(_QWORD *)v1 + 4LL);
      if ( v3 )
      {
        if ( v3 == 2 )
          return 1;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)v1 + 30LL) & 2) != 0 )
      {
        return 1;
      }
    }
  }
  return 0;
}

