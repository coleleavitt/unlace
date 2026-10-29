/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B00A0
// Address: 0x00000000004B00A0

//----- (00000000004B00A0) ----------------------------------------------------
_QWORD *__fastcall sub_4B00A0(_QWORD *result, __int64 a2)
{
  __int64 v2; // x3

  *result = result + 2;
  if ( a2 + 16 == *(_QWORD *)a2 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    result[2] = *(_QWORD *)(a2 + 16);
    result[3] = v2;
    result[1] = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    result = *(_QWORD **)a2;
    **(_BYTE **)a2 = 0;
  }
  else
  {
    *result = *(_QWORD *)a2;
    result[1] = *(_QWORD *)(a2 + 8);
    result[2] = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = a2 + 16;
    *(_QWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a2 + 16) = 0;
  }
  return result;
}
