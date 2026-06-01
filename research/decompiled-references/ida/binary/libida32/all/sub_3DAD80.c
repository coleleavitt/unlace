__int64 __fastcall sub_3DAD80(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rax
  const char *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int named_type_tid; // eax

  v4 = *a1;
  v5 = haystack;
  v6 = *(_QWORD *)(v4 + 1480);
  v7 = *a2 + 56LL * *a3;
  if ( *(_QWORD *)(v7 + 8) )
    v5 = *(const char **)v7;
  named_type_tid = get_named_type_tid(v5);
  sub_3FE080(v6, *((unsigned int *)a1 + 2), named_type_tid, 6);
  return 0;
}

