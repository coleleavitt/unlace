/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_955B0
// Address: 0x000955B0

//----- (000955B0) --------------------------------------------------------
int __cdecl sub_955B0(_DWORD *a1)
{
  int result; // eax

  result = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)*a1 + 68))(*a1);
  *a1 = 0;
  return result;
}
