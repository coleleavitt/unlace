__int64 __fastcall sub_727D10(__int64 a1, size_t a2, __int64 a3, __int64 a4)
{
  __int16 v5; // ax
  const char *v7; // rax
  const char *v8; // r14

  v5 = *(_WORD *)(a4 + 24);
  if ( v5 != 4 && (v5 != 2 || *(_QWORD *)(sub_780220(a3) + 8) <= 1u) )
  {
    v7 = (const char *)qstrerror(1348, a2, a3, a4);
    sub_727620(a3, (__int64)"%s", v7);
  }
  if ( *(_QWORD *)(a4 + 8) )
  {
    v8 = *(const char **)a4;
    if ( strlen(*(const char **)a4) < a2 )
      goto LABEL_9;
LABEL_11:
    sub_727620(a3, (__int64)"String '%s' is too long, truncated to %zu characters\n", v8, a2);
  }
  if ( !a2 )
  {
    v8 = haystack;
    goto LABEL_11;
  }
  v8 = haystack;
LABEL_9:
  qstrncpy(a1, v8, a2);
  return 1;
}

