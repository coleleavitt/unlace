__int64 __fastcall CoinMpsIO::findHash(CoinMpsIO *this, const char *a2, int a3)
{
  char *v3; // rax
  __int64 v4; // r13
  __int64 v5; // r12
  int v6; // r14d
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rbx
  _DWORD *v16; // r14

  v3 = (char *)this + 8 * a3;
  v4 = *((_QWORD *)v3 + 19);
  v5 = *((_QWORD *)v3 + 23);
  v6 = 4 * *((_DWORD *)this + a3 + 44);
  if ( v6 )
  {
    v8 = strlen(a2);
    if ( v8 <= 0 )
    {
      v15 = 0;
    }
    else
    {
      v9 = (unsigned int)(v8 - 1);
      v10 = 0;
      v11 = 262139;
      v12 = 0;
      v13 = v9 + 1;
      while ( 1 )
      {
        v14 = a2[v10++];
        v12 += v11 * v14;
        if ( v10 == v13 )
          break;
        v11 = *((_DWORD *)qword_297D80 + v10 % 81);
      }
      v15 = (int)abs32(v12) % v6;
    }
    while ( 1 )
    {
      v16 = (_DWORD *)(v5 + 8 * v15);
      LODWORD(v15) = *v16;
      if ( (int)*v16 < 0 )
        break;
      if ( strcmp(a2, *(const char **)(v4 + 8LL * (int)v15)) )
      {
        v15 = (int)v16[1];
        if ( (_DWORD)v15 != -1 )
          continue;
      }
      return (unsigned int)v15;
    }
  }
  LODWORD(v15) = -1;
  return (unsigned int)v15;
}

