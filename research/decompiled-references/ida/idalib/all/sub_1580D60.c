void __fastcall sub_1580D60(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  int v3; // eax
  __int64 v4; // rdi
  int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // r12
  _QWORD *v8; // r13
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  int i; // edx

  v2 = *(__int64 **)(a1 + 16);
  v3 = *((_DWORD *)v2 + 4);
  v4 = *v2;
  if ( v3 )
  {
    v5 = v3 - 1;
    v6 = (v3 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v7 = v4 + 88LL * v6;
    if ( a2 != *(_QWORD *)v7 )
    {
      if ( *(_QWORD *)v7 == -4096 )
        return;
      for ( i = 1; ; ++i )
      {
        v6 = v5 & (i + v6);
        v7 = v4 + 88LL * v6;
        if ( a2 == *(_QWORD *)v7 )
          break;
        if ( *(_QWORD *)v7 == -4096 )
          return;
      }
    }
    v8 = *(_QWORD **)(v7 + 8);
    v9 = &v8[4 * *(unsigned int *)(v7 + 16)];
    if ( v8 != v9 )
    {
      do
      {
        v9 -= 4;
        v10 = v9[1];
        if ( v10 )
        {
          v11 = v9[2];
          if ( v11 )
            sub_1580C40(v11, v10);
        }
      }
      while ( v8 != v9 );
      v9 = *(_QWORD **)(v7 + 8);
    }
    if ( v9 != (_QWORD *)(v7 + 24) )
      free(v9);
    *(_QWORD *)v7 = -8192;
    --*((_DWORD *)v2 + 2);
    ++*((_DWORD *)v2 + 3);
  }
}
