void __fastcall __noreturn sub_45F1C0(__int64 a1, __int64 a2)
{
  bool v2; // al
  const char *v3; // rsi
  bool v4; // zf
  int v5; // eax

  v2 = is_diff_merge_mode(a1, a2);
  v3 = "Comparing";
  v4 = !v2;
  v5 = qword_2CCB830;
  if ( v4 )
    v3 = "Merging";
  LODWORD(qword_2CCB830) = qword_2CCB830 + 1;
  if ( !v5 )
    sub_387AC0();
  sub_3BBF30((int)"HIDECANCEL\n%s %s ...", v3);
}
