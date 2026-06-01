char __fastcall sub_685740(__int64 a1, unsigned int a2)
{
  bool v2; // dl
  int v3; // eax
  char result; // al
  __int64 v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rsi

  v2 = 1;
  if ( a2 - 208 > 0x2F )
  {
    if ( a2 <= 0x10 )
      a2 = getinf(99);
    v2 = a2 == 256 || a2 == 176;
  }
  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_DWORD **)v5;
    v7 = *(_QWORD *)v5 + 24LL * *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)v5 == v7 )
    {
      return 1;
    }
    else
    {
      do
      {
        result = v2 || *v6 != 1;
        if ( !result )
          break;
        v6 += 6;
      }
      while ( (_DWORD *)v7 != v6 );
    }
  }
  else if ( v3 > 2 )
  {
    return (unsigned int)(v3 - 3) <= 1;
  }
  else
  {
    return v2 && v3 == 1;
  }
  return result;
}

