/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: MD5Update
// Address: 0x0000000100071948

//----- (0000000100071948) ----------------------------------------------------
void *__fastcall MD5Update(__int64 a1, __int128 *__src, size_t __n)
{
  size_t v3; // x21
  __int128 *v4; // x19
  unsigned __int64 v6; // x8
  int v7; // w9
  __int64 v8; // x8
  __int64 v9; // x22
  size_t v10; // x23
  void *v11; // x0
  __int128 v12; // q0
  __int128 v13; // q1
  __int128 v14; // q2
  __int64 _38; // [xsp+38h] [xbp+8h]

  v3 = __n;
  v4 = __src;
  v6 = *(unsigned int *)(a1 + 16);
  v7 = (*(_QWORD *)(a1 + 16) + 8 * __n) >> 32;
  *(_DWORD *)(a1 + 16) = v6 + 8 * __n;
  *(_DWORD *)(a1 + 20) = v7;
  v8 = (v6 >> 3) & 0x3F;
  if ( (_DWORD)v8 )
  {
    v9 = a1 + 24;
    v10 = (unsigned int)(64 - v8);
    if ( __n < v10 )
    {
      v11 = (void *)(v9 + v8);
      goto LABEL_8;
    }
    memcpy((void *)(v9 + v8), __src, (unsigned int)(64 - v8));
    MD5Transform((_DWORD *)a1, (int *)(a1 + 24));
    v4 = (__int128 *)((char *)v4 + v10);
    v3 -= v10;
  }
  if ( v3 >= 0x40 )
  {
    do
    {
      v12 = *v4;
      v13 = v4[1];
      v14 = v4[2];
      *(_OWORD *)(a1 + 72) = v4[3];
      *(_OWORD *)(a1 + 56) = v14;
      *(_OWORD *)(a1 + 40) = v13;
      *(_OWORD *)(a1 + 24) = v12;
      MD5Transform((_DWORD *)a1, (int *)(a1 + 24));
      v4 += 4;
      v3 -= 64LL;
    }
    while ( v3 > 0x3F );
  }
  v11 = (void *)(a1 + 24);
LABEL_8:
  if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return memcpy(v11, v4, v3);
}
// 100071A24: variable '_38' is possibly undefined
