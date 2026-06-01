void __fastcall __noreturn sub_44B770(__int64 a1)
{
  const char *v1; // r12
  const char *v2; // rsi
  int v3; // eax

  v1 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v1 = *(const char **)(a1 + 16);
  v2 = "Merging";
  if ( (unsigned __int8)is_diff_merge_mode(a1) )
    v2 = "Comparing";
  v3 = qword_2CA192C;
  LODWORD(qword_2CA192C) = qword_2CA192C + 1;
  if ( !v3 )
    sub_395C70((int)"HIDECANCEL\n%s %s ...", v2, v1);
  sub_3B7400((int)"HIDECANCEL\n%s %s ...", v2, v1);
}

