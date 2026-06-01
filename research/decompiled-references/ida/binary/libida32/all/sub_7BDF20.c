void *__fastcall sub_7BDF20(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v3; // rax

  v2 = haystack;
  sub_407AD0(a2, *(_DWORD *)(a1 + 12));
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
  if ( !v2 )
    return sub_7BB300(a2, &byte_22CD811, 1u);
  v3 = strlen(v2);
  return sub_7BB300(a2, v2, v3 + 1);
}

