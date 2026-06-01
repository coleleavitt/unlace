/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52250
// Address: 0x00052250

//----- (00052250) --------------------------------------------------------
__int64 __cdecl sub_52250(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 3 || a1[3] - (a2 + 4) <= 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(276);
    BUG();
  }
  return *(_QWORD *)(*a1 + a2);
}
// 13E34C: using guessed type int under_debugger;
