char **__fastcall sub_12E0D40(char **a1, __int64 a2, char **a3)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  char **v5; // rbp
  char *v7; // rcx
  unsigned int v8; // r13d
  int v9; // r14d
  void *v10; // rax
  char *v11; // rdi

  v3 = a2 - (_QWORD)a1;
  v4 = v3 >> 4;
  v5 = a1;
  if ( v3 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        v8 = *((_DWORD *)v5 + 2);
        v9 = *((_DWORD *)v5 + 3);
        if ( *v5 != (char *)-8192LL && v7 != (char *)-4096LL )
        {
          v10 = (void *)operator new[](v8);
          v7 = (char *)memcpy(v10, *v5, v8);
        }
        v11 = *a3;
        *((_DWORD *)a3 + 2) = v8;
        *a3 = v7;
        *((_DWORD *)a3 + 3) = v9;
        if ( v11 + 0x2000 != nullptr && v11 + 4096 != nullptr )
        {
          if ( v11 )
            break;
        }
        v5 += 2;
        a3 += 2;
        if ( !--v4 )
          return a3;
      }
      operator delete[](v11);
      v5 += 2;
      a3 += 2;
      --v4;
    }
    while ( v4 );
  }
  return a3;
}
