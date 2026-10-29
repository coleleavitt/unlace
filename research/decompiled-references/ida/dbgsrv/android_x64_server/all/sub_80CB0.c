/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CB0
// Address: 0x0000000000080CB0

//----- (0000000000080CB0) ----------------------------------------------------
__int64 __fastcall sub_80CB0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _OWORD *v5; // rbx
  __int64 v6; // r12
  __int128 v7; // xmm0
  size_t v8; // r14
  void *v9; // rax

  v5 = operator new(0x58u);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = a2 + 8;
  *(_BYTE *)(a1 + 16) = 0;
  v6 = *a4;
  v7 = 0;
  v5[2] = 0;
  *((_QWORD *)v5 + 6) = 0;
  v8 = *(_QWORD *)(v6 + 8);
  if ( v8 )
  {
    v9 = qalloc_or_throw(*(_QWORD *)(v6 + 8));
    *((_QWORD *)v5 + 4) = v9;
    *((_QWORD *)v5 + 6) = v8;
    memcpy(v9, *(const void **)v6, v8);
    *((_QWORD *)v5 + 5) = v8;
    v7 = 0;
  }
  *((_BYTE *)v5 + 56) = 2;
  *(_OWORD *)((char *)v5 + 72) = v7;
  *((_QWORD *)v5 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 1;
  return a1;
}
