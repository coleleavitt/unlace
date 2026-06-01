void __fastcall __noreturn sub_44AF80()
{
  const char *v0; // rsi
  bool v1; // zf
  int v2; // eax

  v0 = "Comparing";
  v1 = (unsigned __int8)is_diff_merge_mode() == 0;
  v2 = qword_2CA192C;
  if ( v1 )
    v0 = "Merging";
  LODWORD(qword_2CA192C) = qword_2CA192C + 1;
  if ( !v2 )
    sub_395C70((int)"HIDECANCEL\n%s %s ...", v0);
  sub_3B7400((int)"HIDECANCEL\n%s %s ...", v0);
}

