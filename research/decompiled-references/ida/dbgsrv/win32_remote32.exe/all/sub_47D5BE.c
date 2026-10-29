/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D5BE
// Address: 0x0047D5BE

//----- (0047D5BE) --------------------------------------------------------
volatile signed __int32 *__usercall sub_47D5BE@<eax>(volatile signed __int32 ****a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  LPVOID *v4; // eax
  volatile signed __int32 *result; // eax

  sub_471A66(a2, a3, (__m128i *)dword_4B7F78, 0x101u, (unsigned int)((**a1)[18] + 6), 0x101u);
  sub_471A66(a2, a3, (__m128i *)dword_4B7F7C, 0x100u, (unsigned int)(**a1)[18] + 281, 0x100u);
  if ( !_InterlockedExchangeAdd(**a1[1], 0xFFFFFFFF) )
  {
    v4 = (LPVOID *)*a1[1];
    if ( *v4 != dword_4B62D8 )
      sub_479216(*v4);
  }
  **a1[1] = (**a1)[18];
  result = (**a1)[18];
  _InterlockedIncrement(result);
  return result;
}
// 4B62D8: using guessed type int dword_4B62D8[22];
// 4B7F78: using guessed type int dword_4B7F78;
// 4B7F7C: using guessed type int dword_4B7F7C;
