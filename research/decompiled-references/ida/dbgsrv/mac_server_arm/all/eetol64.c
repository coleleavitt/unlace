/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eetol64
// Address: 0x00000001000695AC

//----- (00000001000695AC) ----------------------------------------------------
__int64 __fastcall eetol64(_QWORD *a1, __int64 a2, int a3, int8x16x2_t a4)
{
  __int64 result; // x0
  unsigned __int64 v6; // [xsp+0h] [xbp-20h] BYREF

  result = sub_1000693FC(&v6, a2, 63, a3, a4);
  if ( (_DWORD)result == 1 )
    *a1 = v6;
  return result;
}
