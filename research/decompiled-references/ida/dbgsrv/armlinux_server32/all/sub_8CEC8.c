/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CEC8
// Address: 0x0008CEC8

//----- (0008CEC8) --------------------------------------------------------
_DWORD *__fastcall sub_8CEC8(_DWORD *a1, __int64 *a2, unsigned int a3, size_t a4)
{
  __int64 v4; // kr00_8
  size_t v6; // r2

  v4 = *a2;
  if ( a3 > *((_DWORD *)a2 + 1) )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::append", a3, HIDWORD(v4));
  v6 = HIDWORD(v4) - a3;
  if ( v6 >= a4 )
    v6 = a4;
  return sub_8CE68(a1, (_BYTE *)(v4 + a3), v6);
}
