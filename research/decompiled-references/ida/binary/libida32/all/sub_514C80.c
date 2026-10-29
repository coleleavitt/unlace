__int64 __fastcall sub_514C80(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // r9
  __int64 v8; // rdi

  v5 = *(_QWORD *)(a1 + 1392);
  v6 = (__int64 *)(v5 + 8);
  v7 = (__int64 *)(v5 + 64);
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v8 + 152LL) == a2 )
        break;
    }
    if ( ++v6 == v7 )
      return 0;
  }
  sub_75E680(v8, a3, a4, a5);
  return 1;
}

