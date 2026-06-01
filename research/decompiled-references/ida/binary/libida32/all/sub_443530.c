void __fastcall __noreturn sub_443530(__int64 a1, _QWORD *a2)
{
  const char *v2; // rsi

  *a2 = a1;
  v2 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  sub_395C70((int)"HIDECANCEL\nValidating %s...\n", v2);
}

