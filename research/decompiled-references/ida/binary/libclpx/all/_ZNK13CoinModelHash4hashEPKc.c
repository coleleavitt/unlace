__int64 __fastcall CoinModelHash::hash(CoinModelHash *this, const char *a2)
{
  int v2; // eax
  __int64 v3; // r12
  int *v4; // rbx
  int v5; // ebp

  if ( *((_DWORD *)this + 4) )
  {
    v2 = CoinModelHash::hashValue(this, a2);
    v3 = *((_QWORD *)this + 1);
    while ( 1 )
    {
      v4 = (int *)(v3 + 8LL * v2);
      v5 = *v4;
      if ( *v4 >= 0 && !strcmp(a2, *(const char **)(*(_QWORD *)this + 8LL * v5)) )
        break;
      v2 = v4[1];
      if ( v2 == -1 )
        return (unsigned int)-1;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return (unsigned int)v5;
}

