void __fastcall sub_B71EE0(__int64 a1, __int64 a2)
{
  unsigned int v4; // edx
  __int64 i; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi

  v4 = *(_DWORD *)(a1 + 24);
  for ( i = 0; (unsigned int)i < v4; v4 = *(_DWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
      if ( v6 > 7 )
      {
        v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_DWORD *)(v7 + 8))-- == 1 )
          break;
      }
      if ( (unsigned int)++i >= v4 )
        goto LABEL_7;
    }
    ++i;
    sub_15D7BC0(a2, v7);
  }
LABEL_7:
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 - 4);
    if ( (_DWORD)v10 )
    {
      v11 = v9 + 16 * v10;
      do
      {
        v12 = v9;
        v9 += 16;
        sub_15D0DF0(v12);
      }
      while ( v9 != v11 );
      v9 = *(_QWORD *)(a1 + 16);
    }
    *(_DWORD *)(v9 - 4) = 0;
  }
}

