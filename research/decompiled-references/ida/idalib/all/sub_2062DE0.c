__int64 __fastcall sub_2062DE0(__int64 **a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // edx
  char ***v11; // rsi
  __int64 *v12; // rbp
  __int64 v13; // rbx
  void *v14; // rdi

  result = *((unsigned int *)a1 + 2);
  v4 = *a1;
  v5 = (__int64)&(*a1)[6 * result];
  if ( *a1 != (__int64 *)v5 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v4;
        *(_QWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 24) = 0;
        *(_QWORD *)a2 = v7;
        v8 = v4[1];
        *(_DWORD *)(a2 + 20) = 0;
        *(_DWORD *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 8) = v8;
        LODWORD(v8) = *((_DWORD *)v4 + 4);
        v4[1] = 0;
        *(_DWORD *)(a2 + 16) = v8;
        v9 = *((_DWORD *)v4 + 5);
        *((_DWORD *)v4 + 4) = 0;
        LODWORD(v8) = *(_DWORD *)(a2 + 20);
        *(_DWORD *)(a2 + 20) = v9;
        v10 = *((_DWORD *)v4 + 6);
        *((_DWORD *)v4 + 5) = v8;
        LODWORD(v8) = *(_DWORD *)(a2 + 24);
        *(_DWORD *)(a2 + 24) = v10;
        *((_DWORD *)v4 + 6) = v8;
        *(_DWORD *)(a2 + 40) = 0;
        *(_DWORD *)(a2 + 44) = 0;
        LODWORD(v8) = *((_DWORD *)v4 + 10);
        *(_QWORD *)(a2 + 32) = a2 + 48;
        if ( (_DWORD)v8 )
          break;
        v4 += 6;
        a2 += 48;
        if ( (__int64 *)v5 == v4 )
          goto LABEL_6;
      }
      v11 = (char ***)(v4 + 4);
      v4 += 6;
      sub_201AE80((char ***)(a2 + 32), v11);
      a2 += 48;
    }
    while ( (__int64 *)v5 != v4 );
LABEL_6:
    result = *((unsigned int *)a1 + 2);
    v12 = *a1;
    v13 = (__int64)&(*a1)[6 * result];
    if ( *a1 != (__int64 *)v13 )
    {
      do
      {
        v13 -= 48;
        v14 = *(void **)(v13 + 32);
        if ( v14 != (void *)(v13 + 48) )
          free(v14);
        result = operator delete(*(_QWORD *)(v13 + 8), 8LL * *(unsigned int *)(v13 + 24), 8);
      }
      while ( (__int64 *)v13 != v12 );
    }
  }
  return result;
}
