/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EFCF
// Address: 0x0047EFCF

//----- (0047EFCF) --------------------------------------------------------
int __cdecl sub_47EFCF(unsigned __int16 *a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // eax

  v1 = 0;
  v2 = 227;
  while ( 1 )
  {
    v3 = (v2 + v1) / 2;
    v4 = sub_46807B(a1, (unsigned __int16 *)(&off_4A9498)[2 * v3], 85);
    if ( !v4 )
      break;
    if ( v4 >= 0 )
      v1 = v3 + 1;
    else
      v2 = v3 - 1;
    if ( v1 > v2 )
      return -1;
  }
  return dword_4A949C[2 * v3];
}
// 4A9498: using guessed type int *off_4A9498;
// 4A949C: using guessed type int dword_4A949C[];
