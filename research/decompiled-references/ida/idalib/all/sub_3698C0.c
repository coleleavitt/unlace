__int64 __fastcall sub_3698C0(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi

  v3 = haystack;
  if ( a1[6] )
    v3 = (const char *)a1[5];
  set_manual_insn(a1[1], v3);
  *(_QWORD *)(a2 + 8) = 0;
  return 0;
}
