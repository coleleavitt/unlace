void __fastcall sub_841E40(char a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v4; // rdi
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  _DWORD *v10; // rbx

  v4 = a3;
  v6 = *a3;
  if ( (unsigned int)v6 <= 0xFF )
  {
    while ( 1 )
    {
      v7 = 0;
      do
      {
        v8 = v7 + 1;
        v9 = v7;
        v10 = &v4[v8];
        ++v7;
      }
      while ( *v10 == (_DWORD)v8 + (_DWORD)v6 );
      sub_841C80(a1, a2, v6, v4[v9]);
      v6 = (unsigned int)*v10;
      if ( (unsigned int)v6 > 0xFF )
        break;
      v4 = v10;
    }
  }
}

