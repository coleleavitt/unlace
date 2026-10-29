/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008FD10
// Address: 0x000000014008FD10

//----- (000000014008FD10) ----------------------------------------------------
__int64 __fastcall sub_14008FD10(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  const char *v3; // r8

  v2 = *(_QWORD *)(a2 + 88);
  v3 = Str1;
  if ( *(_QWORD *)(v2 + 152) )
    v3 = *(const char **)(v2 + 144);
  sub_1400497B0(v2, "Unhandled exception triggered by %s\n", v3);
  return 0;
}
