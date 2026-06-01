void __fastcall __noreturn sub_669A80(__int64 a1, __int64 a2)
{
  const char *v3; // rsi

  if ( (debug & 4) != 0 )
    free_idasgn(**(void ***)(*(_QWORD *)a1 + 1584LL));
  sub_39D720(a1, 3);
  v3 = haystack;
  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(const char **)a2;
  sub_395C70((int)"HIDECANCEL\nLoading signature %s", v3);
}

