/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67B20
// Address: 0x00067B20

//----- (00067B20) --------------------------------------------------------
_DWORD *__fastcall sub_67B20(_DWORD *result, int a2, __int64 a3)
{
  _BOOL4 v3; // r4

  v3 = a2 >= 0;
  if ( !(_DWORD)a3 )
    v3 = 0;
  result[3] = -1;
  result[1] = 0;
  result[2] = 0;
  if ( v3 )
  {
    *(_QWORD *)(result + 1) = a3;
    result[3] = a2;
  }
  return result;
}
