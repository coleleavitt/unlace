/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400017A0
// Address: 0x00000001400017A0

//----- (00000001400017A0) ----------------------------------------------------
_QWORD *__fastcall sub_1400017A0(_QWORD *a1, const void *a2, size_t a3)
{
  size_t v6; // rbx
  unsigned __int64 v7; // rdx

  if ( a3 )
  {
    v6 = a1[1];
    v7 = v6 + a3;
    if ( v6 + a3 < v6 )
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)a1, v7);
    memcpy((void *)(v6 + *a1), a2, a3);
  }
  return a1;
}
