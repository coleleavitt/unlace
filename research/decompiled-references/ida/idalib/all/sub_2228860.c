void __fastcall sub_2228860(char *src, char *a2)
{
  char *i; // rbx
  char *v4; // rdi
  __int64 v5; // r15
  size_t v6; // r13
  size_t v7; // r12
  size_t v8; // rdx
  int v9; // eax

  if ( src != a2 )
  {
    for ( i = src + 8; a2 != i; i += 8 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)i;
        v6 = *(_QWORD *)(*(_QWORD *)src + 16LL);
        v7 = *(_QWORD *)(*(_QWORD *)i + 16LL);
        v8 = v7;
        if ( v6 <= v7 )
          v8 = *(_QWORD *)(*(_QWORD *)src + 16LL);
        if ( !v8 )
          break;
        v9 = memcmp(*(const void **)(v5 + 8), *(const void **)(*(_QWORD *)src + 8LL), v8);
        if ( !v9 )
          break;
        if ( v9 < 0 )
          goto LABEL_11;
LABEL_4:
        v4 = i;
        i += 8;
        sub_22287F0(v4);
        if ( a2 == i )
          return;
      }
      if ( v6 == v7 || v6 <= v7 )
        goto LABEL_4;
LABEL_11:
      if ( src != i )
        memmove(src + 8, src, i - src);
      *(_QWORD *)src = v5;
    }
  }
}
