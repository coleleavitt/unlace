__int64 __fastcall sub_521660(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  const char *v4; // rcx

  v3 = a1 + 56;
  if ( *(_QWORD *)(a1 + 56) == -1 )
    sub_7BF040(v3, a2, 0, 0);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v4 = *(const char **)a1;
  return sub_7BE7C0(v3, a2, 0, v4, 0, 83);
}
