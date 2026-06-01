void __fastcall sub_275F80(unsigned __int64 *src, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 *i; // rbx
  __int64 *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r8
  unsigned __int64 *v13; // r10
  unsigned __int64 v14; // rdx
  unsigned __int64 *j; // rax
  unsigned __int64 v16; // rsi

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; *src = v11 )
    {
      while ( 1 )
      {
        v11 = *i;
        v12 = *(_QWORD *)(a3 + 32);
        if ( *i < v12 )
          break;
        v13 = i;
LABEL_12:
        ++i;
        *v13 = v11;
        if ( a2 == i )
          return;
      }
      v7 = *(__int64 **)(a3 + 24);
      v8 = *src;
      v9 = -1;
      v10 = *v7;
      if ( *src < v12 )
        v9 = *(_QWORD *)(v10 + 8 * v8);
      if ( *(_QWORD *)(*v7 + 8 * v11) >= v9 )
      {
        v14 = *(i - 1);
        for ( j = i; ; v14 = *(j - 1) )
        {
          v13 = j;
          v16 = -1;
          if ( v14 < v12 )
            v16 = *(_QWORD *)(v10 + 8 * v14);
          if ( *(_QWORD *)(v10 + 8 * v11) >= v16 )
            break;
          *j = v14;
          v10 = *v7;
          --j;
        }
        goto LABEL_12;
      }
      if ( (char *)i - (char *)src <= 8 )
      {
        if ( (char *)i - (char *)src == 8 )
          *i = v8;
      }
      else
      {
        memmove(src + 1, src, (char *)i - (char *)src);
      }
      ++i;
    }
  }
}
