/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004E810
// Address: 0x000000010004E810

//----- (000000010004E810) ----------------------------------------------------
__int64 __fastcall sub_10004E810(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r15
  size_t v8; // r13
  void *v9; // rax

  v6 = operator new(0x48u);
  v7 = v6;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = a2 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  *v6 = 0;
  v6[1] = a3;
  if ( (*(_BYTE *)a4 & 1) != 0 )
  {
    sub_10004E980(v6 + 2, *(const void **)(a4 + 16), *(_QWORD *)(a4 + 8));
  }
  else
  {
    v6[4] = *(_QWORD *)(a4 + 16);
    *((_OWORD *)v6 + 1) = *(_OWORD *)a4;
  }
  *(_OWORD *)(v7 + 5) = 0;
  v7[7] = 0;
  v8 = *(_QWORD *)(a4 + 32);
  if ( v8 )
  {
    v9 = qalloc_or_throw(*(_QWORD *)(a4 + 32));
    v7[5] = v9;
    v7[7] = v8;
    memcpy(v9, *(const void **)(a4 + 24), v8);
    v7[6] = v8;
  }
  *((_WORD *)v7 + 32) = *(_WORD *)(a4 + 48);
  *(_BYTE *)(a1 + 16) = 1;
  return a1;
}
