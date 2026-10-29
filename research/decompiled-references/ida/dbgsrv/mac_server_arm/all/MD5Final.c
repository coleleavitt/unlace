/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: MD5Final
// Address: 0x000000010006D580

//----- (000000010006D580) ----------------------------------------------------
double __fastcall MD5Final(_OWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // x8
  __int64 v5; // x21
  _BYTE *v6; // x0
  void *v7; // x0
  size_t v8; // x1

  v4 = ((unsigned __int64)*(unsigned int *)(a2 + 16) >> 3) & 0x3F;
  v5 = a2 + 24;
  v6 = (_BYTE *)(a2 + 24 + v4);
  *v6 = 0x80;
  v7 = v6 + 1;
  v8 = (unsigned int)v4 ^ 0x3F;
  if ( (unsigned int)v8 > 7 )
  {
    bzero(v7, (unsigned int)(55 - v4));
  }
  else
  {
    bzero(v7, v8);
    MD5Transform((_DWORD *)a2, (int *)v5);
    *(_QWORD *)(v5 + 48) = 0;
    *(_OWORD *)(v5 + 16) = 0u;
    *(_OWORD *)(v5 + 32) = 0u;
    *(_OWORD *)v5 = 0u;
  }
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 16);
  MD5Transform((_DWORD *)a2, (int *)v5);
  *a1 = *(_OWORD *)a2;
  *(_OWORD *)(a2 + 32) = 0u;
  *(_OWORD *)(a2 + 48) = 0u;
  *(_OWORD *)(a2 + 64) = 0u;
  *(_QWORD *)(a2 + 80) = 0;
  *(_OWORD *)a2 = 0u;
  *(_OWORD *)(a2 + 16) = 0u;
  return 0.0;
}
