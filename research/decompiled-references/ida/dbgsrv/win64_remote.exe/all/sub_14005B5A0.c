/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B5A0
// Address: 0x000000014005B5A0

//----- (000000014005B5A0) ----------------------------------------------------
_BYTE *__fastcall sub_14005B5A0(_BYTE *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // rbx^4
  _BYTE *v5; // rax

  v3 = HIDWORD(a3);
  v5 = sub_14005B4D0(a1, a2, a3);
  return sub_14005B4D0(v5, a2, v3);
}
