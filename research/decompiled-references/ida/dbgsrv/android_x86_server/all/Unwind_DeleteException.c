/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_DeleteException
// Address: 0x000DABB4

//----- (000DABB4) --------------------------------------------------------
int (__cdecl *__cdecl Unwind_DeleteException(int a1))(int, int, int, int)
{
  int v1; // ecx
  int (__cdecl *result)(int, int, int, int); // eax

  result = *(int (__cdecl **)(int, int, int, int))(a1 + 8);
  if ( result )
    return (int (__cdecl *)(int, int, int, int))result(1, a1, v1, v1);
  return result;
}
// DABCA: variable 'v1' is possibly undefined
