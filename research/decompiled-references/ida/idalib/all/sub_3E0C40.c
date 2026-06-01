__int64 __fastcall sub_3E0C40(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rax
  const char *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 named_type_tid; // rax

  v4 = *a1;
  v5 = haystack;
  v6 = *(_QWORD *)(v4 + 1672);
  v7 = *a2 + 56LL * *a3;
  if ( *(_QWORD *)(v7 + 8) )
    v5 = *(const char **)v7;
  named_type_tid = get_named_type_tid(v5);
  sub_411350(v6, a1[1], named_type_tid, 6);
  return 0;
}
