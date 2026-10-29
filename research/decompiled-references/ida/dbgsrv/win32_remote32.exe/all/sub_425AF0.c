/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425AF0
// Address: 0x00425AF0

//----- (00425AF0) --------------------------------------------------------
__int128 *__stdcall sub_425AF0(__int128 *a1, __int128 *a2)
{
  __int128 *result; // eax
  __int128 v3; // xmm1
  __int64 v4; // xmm2_8

  result = a1;
  if ( !a1 || !a2 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(2657);
  }
  v3 = *a1;
  v4 = *((_QWORD *)a1 + 2);
  *a1 = *a2;
  *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
  *a2 = v3;
  *((_QWORD *)a2 + 2) = v4;
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
