__int64 __fastcall sub_3A6070(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 i; // rax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(qword_2CA1698 + 1384);
  v2 = *(_QWORD *)(v1 + 240);
  for ( i = (8LL * *(_QWORD *)(v1 + 248)) >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v4 = v2 + 8 * (i >> 1);
      if ( *(_DWORD *)(*(_QWORD *)v4 + 80LL) >= *(_DWORD *)(a1 + 80) )
        break;
      v2 = v4 + 8;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return v2;
    }
  }
  return v2;
}

