void __fastcall __noreturn sub_45F9B0(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // al
  const char *v4; // rsi
  int v5; // eax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
  v3 = is_diff_merge_mode(a1, a2);
  v4 = "Merging";
  if ( v3 )
    v4 = "Comparing";
  v5 = qword_2CCB830;
  LODWORD(qword_2CCB830) = qword_2CCB830 + 1;
  if ( !v5 )
    sub_387AC0();
  sub_3BBF30((int)"HIDECANCEL\n%s %s ...", v4, v2);
}
