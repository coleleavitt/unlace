bool __fastcall sub_567F00(__int64 a1, const char *a2)
{
  const char *v2; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  return strcmp(v2, a2) == 0;
}

