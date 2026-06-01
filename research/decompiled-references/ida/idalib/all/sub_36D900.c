__int64 __fastcall sub_36D900(__int64 a1)
{
  const char *v1; // rdx

  v1 = haystack;
  if ( *(_QWORD *)(a1 + 80) )
    v1 = *(const char **)(a1 + 72);
  update_extra_cmt(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 40), v1);
  return 0;
}
