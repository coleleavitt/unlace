void __fastcall sub_15825A0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  int v4; // edx
  _DWORD *v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi

  v2 = *(_DWORD **)a1;
  v3 = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      v4 = *v2;
      *(_QWORD *)(a2 + 16) = 0;
      v2 += 8;
      a2 += 32;
      *(_QWORD *)(a2 - 24) = 0;
      *(_DWORD *)(a2 - 32) = v4;
      *(_DWORD *)(a2 - 8) = *(v2 - 2);
      *(_QWORD *)(a2 - 16) = *((_QWORD *)v2 - 2);
      *(_QWORD *)(a2 - 24) = *((_QWORD *)v2 - 3);
      *((_QWORD *)v2 - 3) = 0;
    }
    while ( (_DWORD *)v3 != v2 );
    v5 = *(_DWORD **)a1;
    v6 = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8);
    while ( v5 != (_DWORD *)v6 )
    {
      while ( 1 )
      {
        v6 -= 32;
        v7 = *(_QWORD *)(v6 + 8);
        if ( !v7 )
          break;
        v8 = *(_QWORD *)(v6 + 16);
        if ( !v8 )
          break;
        sub_1580C40(v8, v7);
        if ( v5 == (_DWORD *)v6 )
          return;
      }
    }
  }
}
