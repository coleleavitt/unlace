/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CD70
// Address: 0x0004CD70

//----- (0004CD70) --------------------------------------------------------
int __cdecl sub_4CD70(int a1)
{
  int v1; // ecx
  int *v2; // edi
  int v3; // esi

  v1 = *(_DWORD *)(a1 + 192);
  v2 = *(int **)(*(_DWORD *)(a1 + 188) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 192) = v1 - 1;
  if ( (*v2 | 4) == 5 )
    v3 = sub_4C980(a1, v2, 0, 1);
  else
    v3 = 58;
  sub_4AEB0(v2);
  operator delete(v2);
  return set_qerrno(v3);
}
