/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B490
// Address: 0x000000014005B490

//----- (000000014005B490) ----------------------------------------------------
_BYTE *__fastcall sub_14005B490(_BYTE *a1, unsigned __int64 a2, __int16 a3)
{
  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  if ( a2 > (unsigned __int64)a1 )
  {
    *a1++ = HIBYTE(a3);
    if ( (unsigned __int64)a1 < a2 )
      *a1++ = a3;
  }
  return a1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
