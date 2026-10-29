/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48EBA8
// Address: 0x000000000048EBA8

//----- (000000000048EBA8) ----------------------------------------------------
__int64 __fastcall sub_48EBA8(unsigned __int8 *a1, __int64 a2, int a3)
{
  sub_48E8F8(a2 + 4120, a1, a3);
  *(_DWORD *)(a2 + 8244) = scandir64(
                             (const char *)(a2 + 8248),
                             (struct dirent64 ***)(a2 + 8232),
                             nullptr,
                             (int (*)(const struct dirent64 **, const struct dirent64 **))&alphasort64);
  return sub_48EAF0(a2);
}
