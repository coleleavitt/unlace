/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044010
// Address: 0x0000000100044010

//----- (0000000100044010) ----------------------------------------------------
__int64 __fastcall sub_100044010(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // r15
  size_t v5; // r12
  void *v6; // rax

  v4 = operator new(0x58u);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = a2 + 8;
  *(_BYTE *)(a1 + 16) = 0;
  *((_OWORD *)v4 + 2) = 0;
  *((_QWORD *)v4 + 6) = 0;
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
  {
    v6 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
    *((_QWORD *)v4 + 4) = v6;
    *((_QWORD *)v4 + 6) = v5;
    memcpy(v6, *(const void **)a3, v5);
    *((_QWORD *)v4 + 5) = v5;
  }
  *((_BYTE *)v4 + 56) = 2;
  *((_OWORD *)v4 + 4) = 0;
  *((_QWORD *)v4 + 10) = 0;
  copy_idcv((unsigned __int8 *)v4 + 56, (unsigned __int8 *)(a3 + 24));
  *(_BYTE *)(a1 + 16) = 1;
  return a1;
}
