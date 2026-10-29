__int64 __fastcall CoinLpIO::findHash(CoinLpIO *this, const char *a2, int a3)
{
  char *v3; // rax
  int v4; // r14d
  __int64 v5; // r13
  __int64 v6; // r12
  int v8; // eax
  __int64 v9; // rsi
  int v10; // edx
  int v11; // ebx
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rbx
  _DWORD *v16; // r14

  v3 = (char *)this + 8 * a3;
  v4 = *((_DWORD *)this + a3 + 76);
  v5 = *((_QWORD *)v3 + 36);
  v6 = *((_QWORD *)v3 + 40);
  if ( v4 )
  {
    v8 = strlen(a2);
    if ( v8 <= 0 )
    {
      v15 = 0;
    }
    else
    {
      v9 = 1;
      v10 = 262139;
      v11 = 0;
      v12 = (unsigned int)(v8 - 1) + 2LL;
      while ( 1 )
      {
        v13 = a2[v9 - 1];
        v14 = v9++;
        v11 += v10 * v13;
        if ( v9 == v12 )
          break;
        v10 = *((_DWORD *)qword_295B80 + v14 % 0x51);
      }
      v15 = (int)abs32(v11) % v4;
    }
    while ( 1 )
    {
      v16 = (_DWORD *)(v6 + 8 * v15);
      LODWORD(v15) = *v16;
      if ( (int)*v16 < 0 )
        break;
      if ( strcmp(a2, *(const char **)(v5 + 8LL * (int)v15)) )
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

