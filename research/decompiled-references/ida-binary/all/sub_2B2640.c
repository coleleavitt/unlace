void __fastcall sub_2B2640(char *src, char *a2, __int64 a3, char a4)
{
  char *i; // r15
  __int64 v8; // rbx
  int v9; // edi
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  _QWORD *j; // rax
  __int64 v14; // rdx
  int v15; // esi

  if ( src != a2 )
  {
    for ( i = src + 8; a2 != i; *(_QWORD *)src = v8 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)i;
        v9 = *(_DWORD *)(*(_QWORD *)i + 8LL);
        v10 = *(_DWORD *)(*(_QWORD *)i + 12LL);
        v11 = *(_DWORD *)(*(_QWORD *)src + 8LL);
        v12 = v9;
        if ( a4 )
        {
          v12 = *(_DWORD *)(*(_QWORD *)i + 12LL);
          v11 = *(_DWORD *)(*(_QWORD *)src + 12LL);
        }
        if ( v11 > v12 )
          break;
        for ( j = i; ; --j )
        {
          v14 = *(j - 1);
          v15 = *(_DWORD *)(v14 + 12);
          if ( !a4 )
          {
            v10 = v9;
            v15 = *(_DWORD *)(v14 + 8);
          }
          if ( v15 <= v10 )
            break;
          *j = v14;
          v10 = *(_DWORD *)(v8 + 12);
          v9 = *(_DWORD *)(v8 + 8);
        }
        i += 8;
        *j = v8;
        if ( a2 == i )
          return;
      }
      if ( i - src <= 8 )
      {
        if ( i - src == 8 )
          *(_QWORD *)i = *(_QWORD *)src;
      }
      else
      {
        memmove(src + 8, src, i - src);
      }
      i += 8;
    }
  }
}
