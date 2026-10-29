__int64 __fastcall sub_68BDB0(unsigned __int64 *a1, __int64 a2)
{
  const char *v2; // rax

  v2 = haystack;
  if ( a1[6] )
    v2 = (const char *)a1[5];
  *(_QWORD *)(a2 + 8) = (int)apply_idasgn_to(v2, a1[1], 0);
  return 0;
}
