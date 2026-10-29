/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2FB20
// Address: 0x0002FB20

//----- (0002FB20) --------------------------------------------------------
bool (__cdecl *__cdecl sub_2FB20(int a1, bool (__cdecl *a2)(int a1, int a2)))(int a1, int a2)
{
  bool (__cdecl *result)(int, int); // eax

  result = sub_33920;
  if ( a2 )
    result = a2;
  *(_DWORD *)(a1 + 380) = result;
  return result;
}
