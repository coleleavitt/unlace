/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32F90
// Address: 0x00032F90

//----- (00032F90) --------------------------------------------------------
_BYTE *__cdecl sub_32F90(int *a1, void **a2, int a3, unsigned int a4)
{
  _QWORD *v4; // ecx

  if ( a3 == 2 )
  {
    v4 = a1 + 65;
  }
  else
  {
    if ( a3 != 1 )
    {
      if ( !(_BYTE)under_debugger )
        interr(20086);
      BUG();
    }
    v4 = a1 + 57;
  }
  return sub_3C8A0(a1, a2, v4, a4);
}
// 13E34C: using guessed type int under_debugger;
