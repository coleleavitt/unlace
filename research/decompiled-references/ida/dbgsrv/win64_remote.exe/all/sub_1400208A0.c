/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400208A0
// Address: 0x00000001400208A0

//----- (00000001400208A0) ----------------------------------------------------
void *__fastcall sub_1400208A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  void *v7; // r14
  size_t v8; // rdi
  void *v9; // rax

  v6 = *a1;
  if ( *(_BYTE *)(a2 + 25) )
    return (void *)*a1;
  v7 = operator new(0x58u);
  *((_QWORD *)v7 + 4) = 0;
  *((_QWORD *)v7 + 5) = 0;
  *((_QWORD *)v7 + 6) = 0;
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    v9 = sub_14005AAA0(*(_QWORD *)(a2 + 40));
    *((_QWORD *)v7 + 4) = v9;
    *((_QWORD *)v7 + 6) = v8;
    memcpy(v9, *(const void **)(a2 + 32), v8);
    *((_QWORD *)v7 + 5) = v8;
  }
  *((_BYTE *)v7 + 56) = 2;
  *((_OWORD *)v7 + 4) = 0;
  *((_QWORD *)v7 + 10) = 0;
  sub_140028E70((char *)v7 + 56, (char *)(a2 + 56));
  *(_QWORD *)v7 = v6;
  *((_QWORD *)v7 + 2) = v6;
  *((_WORD *)v7 + 12) = 0;
  *((_QWORD *)v7 + 1) = a3;
  *((_BYTE *)v7 + 24) = *(_BYTE *)(a2 + 24);
  *(_QWORD *)v7 = sub_1400208A0(a1, *(_QWORD *)a2, v7);
  *((_QWORD *)v7 + 2) = sub_1400208A0(a1, *(_QWORD *)(a2 + 16), v7);
  return v7;
}
