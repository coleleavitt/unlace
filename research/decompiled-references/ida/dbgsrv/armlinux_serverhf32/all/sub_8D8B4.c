/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D8B4
// Address: 0x0008D8B4

//----- (0008D8B4) --------------------------------------------------------
_DWORD *__fastcall sub_8D8B4(_DWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // kr00_8
  _BYTE *v5; // r1
  unsigned int v6; // r2
  int v8; // r2

  *a1 = a1 + 2;
  v4 = *a2;
  if ( a3 > *((_DWORD *)a2 + 1) )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "string::string", a3, HIDWORD(v4));
  v5 = (_BYTE *)(v4 + a3);
  v6 = HIDWORD(v4) - a3;
  if ( v6 > a4 )
    v8 = (int)&v5[a4];
  else
    v8 = (int)&v5[v6];
  sub_8D7D8(a1, v5, v8);
  return a1;
}
