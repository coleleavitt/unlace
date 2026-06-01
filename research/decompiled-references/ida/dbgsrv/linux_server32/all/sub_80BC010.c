/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC010
// Address: 0x080BC010

//----- (080BC010) --------------------------------------------------------
int __cdecl sub_80BC010(int *a1, int a2)
{
  int v2; // ebx
  int result; // eax

  v2 = *a1;
  if ( *a1 )
  {
    (*(void (__cdecl **)(int, int))(*(_DWORD *)v2 + 36))(v2, a2);
    result = (*(int (__cdecl **)(int))(*(_DWORD *)v2 + 4))(v2);
  }
  *a1 = 0;
  return result;
}
