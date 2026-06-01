/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046CF0
// Address: 0x0000000140046CF0

//----- (0000000140046CF0) ----------------------------------------------------
__int64 __fastcall sub_140046CF0(__int64 a1, __int64 a2)
{
  size_t v4; // rsi
  void *v5; // rax
  size_t v6; // rsi
  void *v7; // rax

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = sub_14005AAA0(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 16) = v4;
    memcpy(v5, *(const void **)a2, v4);
    *(_QWORD *)(a1 + 8) = v4;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v7 = sub_14005AAA0(*(_QWORD *)(a2 + 32));
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 40) = v6;
    memcpy(v7, *(const void **)(a2 + 24), v6);
    *(_QWORD *)(a1 + 32) = v6;
  }
  sub_140046C70((_QWORD *)(a1 + 48), a2 + 48);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  return a1;
}
