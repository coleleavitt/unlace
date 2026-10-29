/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94D80
// Address: 0x00094D80

//----- (00094D80) --------------------------------------------------------
int __cdecl sub_94D80(int *a1, int a2)
{
  int v2; // edi
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
