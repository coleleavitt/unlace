/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4801D0
// Address: 0x00000000004801D0

//----- (00000000004801D0) ----------------------------------------------------
__int64 __fastcall sub_4801D0(unsigned __int8 *a1, __int64 a2, int a3)
{
  sub_47FF30(a2 + 4120, a1, a3);
  *(_DWORD *)(a2 + 8244) = scandir64(
                             (const char *)(a2 + 8248),
                             (struct dirent64 ***)(a2 + 8232),
                             nullptr,
                             (int (*)(const struct dirent64 **, const struct dirent64 **))&alphasort64);
  return sub_480140(a2);
}
