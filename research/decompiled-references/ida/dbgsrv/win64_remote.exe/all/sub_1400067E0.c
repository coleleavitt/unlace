/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400067E0
// Address: 0x00000001400067E0

//----- (00000001400067E0) ----------------------------------------------------
_QWORD *__fastcall sub_1400067E0(_QWORD *a1, const void *a2, size_t a3)
{
  if ( a3 > 0xFFFFFFFF )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(5);
  }
  sub_140002D20(a1, a3);
  return sub_1400017A0(a1, a2, a3);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
