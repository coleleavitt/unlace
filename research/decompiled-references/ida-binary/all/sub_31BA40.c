__int64 __fastcall sub_31BA40(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 plugin; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  char v16; // [rsp+0h] [rbp-8h]

  plugin = find_plugin("pdb", 1);
  if ( plugin )
    run_plugin(plugin, 0);
  else
    sub_169630(
      (int)"%s",
      (__int64)"ICON ERROR\n"
               "AUTOHIDE NONE\n"
               "Could not load the PDB plugin. It could be due to 3 reasons:\n"
               "1. The current file is not an MS Windows PE file\n"
               "2. The PDB plugin is not present in the plugins subdirectory\n"
               "3. dbghelp.dll on you system is too old",
      v9,
      v10,
      v11,
      v12,
      a1,
      a2,
      a3,
      a4,
      v13,
      v14,
      a7,
      a8,
      v16);
  return 1;
}
