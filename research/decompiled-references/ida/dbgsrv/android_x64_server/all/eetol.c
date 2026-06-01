/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eetol
// Address: 0x00000000000B9B70

//----- (00000000000B9B70) ----------------------------------------------------
__int64 __fastcall eetol(_QWORD *a1, __int128 *a2, char a3, double a4, __m128 a5)
{
  __int64 result; // rax
  unsigned __int64 v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  result = sub_B9BC0(v6, a2, 63, a3, a4, a5);
  if ( (_DWORD)result == 1 )
    *a1 = v6[0];
  return result;
}
