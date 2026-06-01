/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: MD5Final
// Address: 0x000000010007ADF0

//----- (000000010007ADF0) ----------------------------------------------------
__int64 __fastcall MD5Final(_OWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // r15
  __int64 v5; // rdi
  __int64 result; // rax

  v3 = (*(_DWORD *)(a2 + 16) >> 3) & 0x3F;
  v4 = (_DWORD *)(a2 + 24);
  v5 = a2 + v3 + 25;
  *(_BYTE *)(a2 + v3 + 24) = 0x80;
  if ( ((unsigned int)v3 ^ 0x3F) > 7 )
  {
    __bzero(v5, (unsigned int)(55 - v3));
  }
  else
  {
    __bzero(v5, (unsigned int)v3 ^ 0x3F);
    MD5Transform((int *)a2, v4);
    *(_OWORD *)(a2 + 56) = 0;
    *(_OWORD *)(a2 + 40) = 0;
    *(_OWORD *)v4 = 0;
    *(_QWORD *)(a2 + 72) = 0;
  }
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 16);
  result = MD5Transform((int *)a2, v4);
  *a1 = *(_OWORD *)a2;
  *(_OWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 64) = 0;
  *(_OWORD *)a2 = 0;
  *(_QWORD *)(a2 + 80) = 0;
  return result;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
