/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D810
// Address: 0x0044D810

//----- (0044D810) --------------------------------------------------------
int __cdecl sub_44D810(_DWORD *a1, int a2)
{
  int v2; // edi
  int result; // eax

  v2 = *a1;
  if ( *a1 )
  {
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v2 + 32))(*a1, a2);
    result = (**(int (__thiscall ***)(int, int))v2)(v2, 1);
  }
  *a1 = 0;
  return result;
}
