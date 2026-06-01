/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D7AD0
// Address: 0x080D7AD0

//----- (080D7AD0) --------------------------------------------------------
int __cdecl sub_80D7AD0(int a1)
{
  const char *v1; // eax
  int v2; // ecx

  v1 = *(const char **)(a1 + 4);
  if ( v1 == "St19_Sp_make_shared_tag" )
    return 1;
  v2 = 0;
  if ( *v1 != 42 )
    LOBYTE(v2) = strcmp(v1, "St19_Sp_make_shared_tag") == 0;
  return v2;
}
// 80D7B10: variable 'v2' is possibly undefined
