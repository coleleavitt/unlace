__int64 __fastcall CoinParam::matches(_QWORD *a1, std::string *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbx
  int v6; // r12d

  v2 = *(_QWORD *)a2;
  v3 = *(_QWORD *)(*(_QWORD *)a2 - 24LL);
  if ( a1[3] < v3 )
    return 0;
  v4 = 0;
  if ( !v3 )
    return (unsigned int)(a1[4] > v4) + 1;
  while ( 1 )
  {
    v6 = tolower(*(char *)(a1[2] + v4));
    if ( *(int *)(v2 - 8) >= 0 )
    {
      std::string::_M_leak_hard(a2);
      v2 = *(_QWORD *)a2;
    }
    if ( v6 != tolower(*(char *)(v2 + v4)) )
      break;
    if ( v3 == ++v4 )
      return (unsigned int)(a1[4] > v4) + 1;
  }
  if ( v3 > v4 )
    return 0;
  else
    return (unsigned int)(a1[4] > v4) + 1;
}

