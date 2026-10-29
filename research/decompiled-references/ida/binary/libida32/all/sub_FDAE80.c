__int64 __fastcall sub_FDAE80(unsigned int a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  __int64 v10; // r8
  _DWORD *v11; // rdx

  v2 = sub_20C9740();
  LODWORD(v4) = 0;
  if ( v2 != 3 )
    return (unsigned int)v4;
  LODWORD(v4) = 1;
  if ( a1 == 67 )
    return (unsigned int)v4;
  v6 = (_DWORD *)sub_20C9770(a1, a2, v3, 1);
  v7 = v6;
  v9 = &v6[v8];
  v4 = (4 * v8) >> 4;
  v10 = (4 * v8) >> 2;
  if ( v4 <= 0 )
  {
    v11 = v6;
LABEL_17:
    if ( v10 != 2 )
    {
      if ( v10 != 3 )
      {
        LODWORD(v4) = 0;
        if ( v10 != 1 )
          return (unsigned int)v4;
LABEL_20:
        LODWORD(v4) = 0;
        if ( *v11 != 67 )
          return (unsigned int)v4;
LABEL_21:
        LOBYTE(v4) = v9 != v11;
        return (unsigned int)v4;
      }
      if ( *v11 == 67 )
        goto LABEL_21;
      ++v11;
    }
    if ( *v11 == 67 )
      goto LABEL_21;
    ++v11;
    goto LABEL_20;
  }
  if ( *v6 == 67 )
  {
    LOBYTE(v4) = v6 != v9;
  }
  else if ( v6[1] == 67 )
  {
    LOBYTE(v4) = v9 != v6 + 1;
  }
  else if ( v6[2] == 67 )
  {
    LOBYTE(v4) = v9 != v6 + 2;
  }
  else
  {
    v4 = (__int64)&v6[4 * v4];
    if ( v6[3] == 67 )
    {
      LOBYTE(v4) = v9 != v6 + 3;
    }
    else
    {
      while ( 1 )
      {
        v11 = v7 + 4;
        if ( v7 + 4 == (_DWORD *)v4 )
        {
          v10 = ((__int64)v9 - v4) >> 2;
          goto LABEL_17;
        }
        if ( v7[4] == 67 )
          goto LABEL_21;
        if ( v7[5] == 67 )
        {
          LOBYTE(v4) = v9 != v7 + 5;
          return (unsigned int)v4;
        }
        if ( v7[6] == 67 )
        {
          LOBYTE(v4) = v9 != v7 + 6;
          return (unsigned int)v4;
        }
        if ( v7[7] == 67 )
          break;
        v7 += 4;
      }
      LOBYTE(v4) = v9 != v7 + 7;
    }
  }
  return (unsigned int)v4;
}

