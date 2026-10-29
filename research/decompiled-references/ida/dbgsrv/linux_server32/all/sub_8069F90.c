/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069F90
// Address: 0x08069F90

//----- (08069F90) --------------------------------------------------------
bool (__cdecl *__cdecl sub_8069F90(int a1, bool (__cdecl *a2)(int a1, int a2)))(int a1, int a2)
{
  bool (__cdecl *result)(int, int); // eax

  result = a2;
  if ( !a2 )
    result = sub_8068E20;
  *(_UNKNOWN **)((char *)&off_811D170 + a1 - 135385076) = result;
  return result;
}
// 811D170: using guessed type _UNKNOWN *off_811D170;
