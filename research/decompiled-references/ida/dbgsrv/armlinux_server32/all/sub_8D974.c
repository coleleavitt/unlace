/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D974
// Address: 0x0008D974

//----- (0008D974) --------------------------------------------------------
_DWORD *__fastcall sub_8D974(_DWORD *a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // kr00_8

  *a1 = a1 + 2;
  v3 = *a2;
  if ( a3 > *((_DWORD *)a2 + 1) )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, HIDWORD(v3));
  sub_8D910(a1, (_BYTE *)(v3 + a3), v3 + HIDWORD(v3));
  return a1;
}
