void __fastcall sub_2B2840(char *a1, char *a2, __int64 a3, char a4)
{
  char *v6; // rbp
  __int64 v7; // rdi
  char *i; // rax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // esi

  if ( a2 - a1 <= 128 )
  {
    sub_2B2640(a1, a2, a3, a4);
  }
  else
  {
    v6 = a1 + 128;
    sub_2B2640(a1, a1 + 128, a3, a4);
    if ( a2 != a1 + 128 )
    {
      do
      {
        v7 = *(_QWORD *)v6;
        for ( i = v6; ; i -= 8 )
        {
          v9 = *((_QWORD *)i - 1);
          v10 = *(_DWORD *)(v7 + 12);
          v11 = *(_DWORD *)(v9 + 12);
          if ( !a4 )
          {
            v10 = *(_DWORD *)(v7 + 8);
            v11 = *(_DWORD *)(v9 + 8);
          }
          if ( v11 <= v10 )
            break;
          *(_QWORD *)i = v9;
        }
        v6 += 8;
        *(_QWORD *)i = v7;
      }
      while ( a2 != v6 );
    }
  }
}
