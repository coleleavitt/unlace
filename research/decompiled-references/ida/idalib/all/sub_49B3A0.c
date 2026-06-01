__int64 __fastcall sub_49B3A0(_QWORD *a1, unsigned int *a2, int a3, signed int a4, char a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax

  v6 = a4;
  LOBYTE(a4) = a3 == 2;
  v7 = a4;
  LOBYTE(v7) = a3 == (_DWORD)v6 || a3 == 2;
  if ( (_BYTE)v7 )
    sub_492A80();
  v8 = *a2;
  if ( *a2 )
  {
    v10 = 6LL * a3;
    v11 = (__int64)&a1[v10 + 4];
    v12 = a1[v10 + 5];
    if ( v12 )
    {
      v13 = v11;
      do
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v12 + 16);
          v15 = *(_QWORD *)(v12 + 24);
          if ( *(_DWORD *)(v12 + 32) < v8 )
            break;
          v13 = v12;
          v12 = *(_QWORD *)(v12 + 16);
          if ( !v14 )
            goto LABEL_8;
        }
        v12 = *(_QWORD *)(v12 + 24);
      }
      while ( v15 );
LABEL_8:
      if ( v13 != v11 && v8 >= *(_DWORD *)(v13 + 32) )
      {
        v16 = *a1 + 12LL * *(_QWORD *)(v13 + 40);
        if ( !a5 || *(_DWORD *)(v16 + 4 * v6) )
        {
          v7 = 1;
          *a2 = *(_DWORD *)(v16 + 4 * v6);
        }
      }
    }
  }
  return v7;
}
