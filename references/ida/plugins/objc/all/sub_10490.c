bool __fastcall sub_10490(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  const char *v3; // rax
  const char *v4; // rdi

  v2 = *(_QWORD *)(a1 + 40);
  v3 = src;
  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(const char **)a2;
  v4 = src;
  if ( *(_QWORD *)(v2 + 8) )
    v4 = *(const char **)v2;
  return strcmp(v4, v3) == 0;
}
