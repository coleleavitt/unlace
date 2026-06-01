/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BBB0
// Address: 0x000000000047BBB0

//----- (000000000047BBB0) ----------------------------------------------------
__int64 __fastcall sub_47BBB0(_QWORD *a1, const __m128i *a2, char a3)
{
  __int64 result; // rax
  unsigned __int64 v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  result = sub_47B780(v4, a2, 63, a3);
  if ( (_DWORD)result == 1 )
    *a1 = v4[0];
  return result;
}
