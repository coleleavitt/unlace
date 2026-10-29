/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BEFF0
// Address: 0x00000000000BEFF0

//----- (00000000000BEFF0) ----------------------------------------------------
_QWORD *__fastcall sub_BEFF0(__int64 a1)
{
  char *v1; // r12
  __int128 v2; // xmm0
  __int64 v3; // rbx
  void *v4; // rax
  _QWORD *v5; // rbx

  v1 = (char *)operator new(0x48u);
  *(_QWORD *)v1 = &off_150660;
  v2 = 0;
  *(_OWORD *)(v1 + 24) = 0;
  *((_QWORD *)v1 + 5) = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = qalloc_or_throw(8 * v3);
    *((_QWORD *)v1 + 3) = v4;
    *((_QWORD *)v1 + 5) = v3;
    memcpy(v4, *(const void **)a1, 8 * v3);
    *((_QWORD *)v1 + 4) = v3;
    v2 = 0;
  }
  *((_DWORD *)v1 + 4) = 0;
  *((_QWORD *)v1 + 1) = 0;
  *((_OWORD *)v1 + 3) = v2;
  *((_QWORD *)v1 + 8) = 0;
  v5 = operator new(0x38u);
  *(_DWORD *)v5 = 4;
  v5[1] = v1;
  sub_BE330((__int64)v5);
  return v5;
}
// 150660: using guessed type _UNKNOWN *off_150660;
