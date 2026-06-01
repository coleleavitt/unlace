/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: MD5Update
// Address: 0x000000010007A5A0

//----- (000000010007A5A0) ----------------------------------------------------
void *__fastcall MD5Update(__int64 a1, _OWORD *a2, size_t a3)
{
  unsigned int v4; // eax
  _OWORD *v5; // r14
  unsigned int v6; // eax
  void *v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2

  v4 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = v4 + 8 * a3;
  *(_DWORD *)(a1 + 20) += (a3 >> 29) + __CFADD__(v4, 8 * a3);
  v5 = a2;
  v6 = (v4 >> 3) & 0x3F;
  if ( v6 )
  {
    v7 = (void *)(a1 + v6 + 24);
    v8 = 64 - v6;
    v9 = a3 - v8;
    if ( a3 < v8 )
      return memcpy(v7, a2, a3);
    memcpy(v7, a2, 64 - v6);
    MD5Transform((int *)a1, (_DWORD *)(a1 + 24));
    v5 = (_OWORD *)((char *)a2 + v8);
    if ( v9 >= 0x40 )
      goto LABEL_7;
  }
  else
  {
    v9 = a3;
    if ( a3 >= 0x40 )
    {
      do
      {
LABEL_7:
        v10 = *v5;
        v11 = v5[1];
        v12 = v5[2];
        *(_OWORD *)(a1 + 72) = v5[3];
        *(_OWORD *)(a1 + 56) = v12;
        *(_OWORD *)(a1 + 40) = v11;
        *(_OWORD *)(a1 + 24) = v10;
        MD5Transform((int *)a1, (_DWORD *)(a1 + 24));
        v5 += 4;
        v9 -= 64LL;
      }
      while ( v9 > 0x3F );
    }
  }
  v7 = (void *)(a1 + 24);
  a2 = v5;
  a3 = v9;
  return memcpy(v7, a2, a3);
}
