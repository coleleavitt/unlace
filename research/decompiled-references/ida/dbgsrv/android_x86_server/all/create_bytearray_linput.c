/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_bytearray_linput
// Address: 0x000ABD60

//----- (000ABD60) --------------------------------------------------------
_DWORD *__cdecl create_bytearray_linput(int a1, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi

  v2 = operator new(0x14u);
  *v2 = &off_1392FC;
  v2[4] = a1;
  v2[1] = a2;
  v2[2] = 0;
  v2[3] = 0;
  v3 = operator new(0x24u);
  *v3 = 4;
  v3[1] = v2;
  sub_AB220((int)v3);
  return v3;
}
// 1392FC: using guessed type int (__cdecl *off_1392FC)(int, __int64, void *dest, size_t n);
