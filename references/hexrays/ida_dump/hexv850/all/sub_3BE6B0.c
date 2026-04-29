__int64 __fastcall sub_3BE6B0(__int64 a1, __int64 a2)
{
  const char *v2; // r13
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // rdi

  if ( !*(_QWORD *)(a1 + 48) )
  {
    v2 = s1;
    goto LABEL_6;
  }
  v2 = *(const char **)(a1 + 40);
  v3 = strcmp("entry_ea", v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_3:
    v5 = sub_3BE630(a1);
    if ( v5 )
      return ((__int64 (__fastcall *)(__int64, __int64))(&off_4BC4C0)[2 * v4 + 1])(v5, a2);
    return throw_idc_exception(a2, "Corrupted cfunc_t object");
  }
  if ( strcmp("text", v2) )
  {
LABEL_6:
    if ( strcmp("lines", v2) )
      return sub_3BE5C0(a2, v2);
    v4 = 2;
    goto LABEL_3;
  }
  v4 = 1;
  v5 = sub_3BE630(a1);
  if ( v5 )
    return ((__int64 (__fastcall *)(__int64, __int64))(&off_4BC4C0)[2 * v4 + 1])(v5, a2);
  return throw_idc_exception(a2, "Corrupted cfunc_t object");
}
