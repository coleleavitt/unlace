/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CE70
// Address: 0x0004CE70

//----- (0004CE70) --------------------------------------------------------
int __cdecl sub_4CE70(int a1)
{
  int v1; // ecx
  int *v2; // edi
  int v3; // esi

  v1 = *(_DWORD *)(a1 + 192);
  v2 = *(int **)(*(_DWORD *)(a1 + 188) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 192) = v1 - 1;
  v3 = sub_4C980(a1, v2, 1, 0);
  if ( v2 )
  {
    sub_4AEB0(v2);
    operator delete(v2);
  }
  return set_qerrno(v3);
}
