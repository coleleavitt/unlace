void __fastcall sub_4C3F00(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  const char *v11; // rbx

  v5 = *(_QWORD *)(*(_QWORD *)a1 + 1528LL);
  if ( !a2 && a3 == -1 )
  {
    v10 = *(_QWORD *)(v5 + 112);
    if ( (unsigned __int8)sub_4BEDC0(v10, v5 + 96, 137) )
      sub_4C33B0(v5 + 88, v10, v5 + 96);
    v11 = *(const char **)(v5 + 160);
    if ( (unsigned __int8)sub_4BF350(v11, (const char *)(v5 + 144), 134) )
      sub_4C32F0(v5 + 136, (__int64)v11, v5 + 144);
  }
  else if ( a2 < a3 )
  {
    v6 = *(_QWORD *)(v5 + 104);
    v7 = v5 + 96;
    if ( v6 )
    {
      v8 = v5 + 96;
      v9 = *(_QWORD *)(v5 + 104);
      do
      {
        if ( *(_DWORD *)(v9 + 32) < a2 )
        {
          v9 = *(_QWORD *)(v9 + 24);
        }
        else
        {
          v8 = v9;
          v9 = *(_QWORD *)(v9 + 16);
        }
      }
      while ( v9 );
      do
      {
        if ( *(_DWORD *)(v6 + 32) < a3 )
        {
          v6 = *(_QWORD *)(v6 + 24);
        }
        else
        {
          v7 = v6;
          v6 = *(_QWORD *)(v6 + 16);
        }
      }
      while ( v6 );
      for ( ; v8 != v7; v8 = sub_4BED20(v5, v8) )
        ;
    }
  }
}

