/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32EF0
// Address: 0x00032EF0

//----- (00032EF0) --------------------------------------------------------
unsigned int __cdecl sub_32EF0(unsigned int a1, int *a2)
{
  unsigned int v2; // ecx
  _QWORD *v3; // edx

  if ( *(_DWORD *)(a1 + 4) <= 1u )
  {
    v2 = a2[53];
    if ( v2 > a1 || v2 + 68 * a2[54] < a1 )
    {
      if ( !(_BYTE)under_debugger )
        interr(20086);
      BUG();
    }
    v3 = a2 + 65;
    if ( -252645135 * ((int)(a1 - v2) >> 2) < (unsigned int)a2[56] )
      v3 = a2 + 57;
    sub_3C8A0(a2, (void **)a1, v3, *(_DWORD *)(a1 + 24));
  }
  return a1;
}
// 13E34C: using guessed type int under_debugger;
