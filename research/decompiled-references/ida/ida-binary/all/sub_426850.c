double __fastcall vault_files_dirspec_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  double result; // xmm0_8

  *a1 = &unk_8725A0;
  v2 = a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    return qfree(v2, a2);
  }
  return result;
}
