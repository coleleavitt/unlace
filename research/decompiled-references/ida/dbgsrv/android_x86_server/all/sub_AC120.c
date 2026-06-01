/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC120
// Address: 0x000AC120

//----- (000AC120) --------------------------------------------------------
_DWORD *__cdecl sub_AC120(int a1)
{
  _DWORD *v1; // esi
  int v2; // edi
  void *v3; // eax
  _DWORD *v4; // edi

  v1 = operator new(0x30u);
  *v1 = &off_139338;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
  {
    v3 = qalloc_or_throw(4 * v2);
    v1[4] = v3;
    v1[6] = v2;
    memcpy(v3, *(const void **)a1, 4 * v2);
    v1[5] = v2;
  }
  v1[3] = 0;
  v1[2] = 0;
  v1[1] = 0;
  v1[8] = 0;
  v1[7] = 0;
  v1[11] = 0;
  v1[10] = 0;
  v1[9] = 0;
  v4 = operator new(0x24u);
  *v4 = 4;
  v4[1] = v1;
  sub_AB220((int)v4);
  return v4;
}
// 139338: using guessed type int (__cdecl *off_139338)(int, int, int, void *dest, int);
