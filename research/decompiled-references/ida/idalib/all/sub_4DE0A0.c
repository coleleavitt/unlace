void __fastcall sub_4DE0A0(char *src, char *a2, __int64 a3)
{
  char *i; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned int *v9; // rax
  __int64 v10; // rdx
  unsigned int *v11; // r8

  if ( a2 != src )
  {
    for ( i = src + 4; a2 != i; *(_DWORD *)src = v7 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a3 + 104);
        v7 = *(unsigned int *)i;
        v8 = *(_QWORD *)(v6 + 8 * v7);
        if ( v8 < *(_QWORD *)(v6 + 8LL * *(unsigned int *)src) )
          break;
        v9 = (unsigned int *)(i - 4);
        v10 = *((unsigned int *)i - 1);
        if ( v8 >= *(_QWORD *)(v6 + 8 * v10) )
        {
          *(_DWORD *)i = v7;
        }
        else
        {
          do
          {
            v9[1] = v10;
            v11 = v9--;
            v10 = *v9;
          }
          while ( *(_QWORD *)(*(_QWORD *)(a3 + 104) + 8 * v7) < *(_QWORD *)(*(_QWORD *)(a3 + 104) + 8 * v10) );
          *v11 = v7;
        }
        i += 4;
        if ( a2 == i )
          return;
      }
      if ( i - src <= 4 )
      {
        if ( i - src == 4 )
          *(_DWORD *)i = *(_DWORD *)src;
      }
      else
      {
        memmove(src + 4, src, i - src);
      }
      i += 4;
    }
  }
}
