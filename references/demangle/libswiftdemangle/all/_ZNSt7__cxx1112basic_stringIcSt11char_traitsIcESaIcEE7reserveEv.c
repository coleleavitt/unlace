void __fastcall std::string::reserve(__int64 a1)
{
  char *v2; // r12
  char *v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned int v5; // eax
  void *v6; // rax
  char *v7; // r15
  void *v8; // r13
  unsigned __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx

  v2 = (char *)(a1 + 16);
  v3 = *(char **)a1;
  if ( v2 != v3 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 > 0xF )
    {
      if ( *(_QWORD *)(a1 + 16) > v4 )
      {
        if ( (__int64)(v4 + 1) < 0 )
          std::__throw_bad_alloc();
        v6 = (void *)operator new(v4 + 1);
        v7 = *(char **)a1;
        v8 = v6;
        if ( v4 != -1 )
          memcpy(v6, *(const void **)a1, v4 + 1);
        if ( v2 != v7 )
          operator delete(v7);
        *(_QWORD *)a1 = v8;
        *(_QWORD *)(a1 + 16) = v4;
      }
    }
    else
    {
      v5 = v4 + 1;
      if ( v4 )
      {
        if ( v5 >= 8 )
        {
          v9 = (a1 + 24) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)(a1 + 16) = *(_QWORD *)v3;
          *(_QWORD *)&v2[v5 - 8] = *(_QWORD *)&v3[v5 - 8];
          v10 = ((_DWORD)v2 - v9 + v5) & 0xFFFFFFF8;
          if ( v10 >= 8 )
          {
            v11 = v10 & 0xFFFFFFF8;
            v12 = 0;
            do
            {
              v13 = v12;
              v12 += 8;
              *(_QWORD *)(v9 + v13) = *(_QWORD *)(v3 - &v2[-v9] + v13);
            }
            while ( v12 < v11 );
          }
        }
        else if ( (v5 & 4) != 0 )
        {
          *(_DWORD *)(a1 + 16) = *(_DWORD *)v3;
          *(_DWORD *)&v2[v5 - 4] = *(_DWORD *)&v3[v5 - 4];
        }
        else
        {
          *(_BYTE *)(a1 + 16) = *v3;
          if ( (v5 & 2) != 0 )
            *(_WORD *)&v2[v5 - 2] = *(_WORD *)&v3[v5 - 2];
        }
      }
      else
      {
        *(_BYTE *)(a1 + 16) = *v3;
      }
      operator delete(v3);
      *(_QWORD *)a1 = v2;
    }
  }
}
