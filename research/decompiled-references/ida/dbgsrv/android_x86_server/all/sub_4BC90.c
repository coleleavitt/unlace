/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BC90
// Address: 0x0004BC90

//----- (0004BC90) --------------------------------------------------------
int __cdecl sub_4BC90(int a1, char a2, int a3)
{
  int v3; // edx
  int *v4; // edi
  int v5; // esi

  v3 = *(_DWORD *)(a1 + 192);
  v4 = *(int **)(*(_DWORD *)(a1 + 188) + 4 * v3 - 4);
  if ( v3 )
    *(_DWORD *)(a1 + 192) = v3 - 1;
  if ( a3 )
  {
    if ( (*v4 | 4) == 5 )
      v5 = sub_4C980(a1, v4, a2, a3);
    else
      v5 = 58;
  }
  else
  {
    v5 = sub_4C980(a1, v4, a2, 0);
    if ( !v4 )
      return set_qerrno(v5);
  }
  sub_4AEB0(v4);
  operator delete(v4);
  return set_qerrno(v5);
}
