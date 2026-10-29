__int64 __fastcall sub_36D7C0(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  const char *v4; // rax

  v3 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(const char **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = (unsigned __int8)gen_simple_call_chart(v4, v3, "Building graph", *(unsigned int *)(a1 + 72));
  return 0;
}
