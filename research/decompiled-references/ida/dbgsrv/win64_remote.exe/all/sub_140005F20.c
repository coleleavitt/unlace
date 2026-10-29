/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005F20
// Address: 0x0000000140005F20

//----- (0000000140005F20) ----------------------------------------------------
__int64 __fastcall sub_140005F20(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  size_t v7; // r8
  __int64 v8; // rax
  size_t v9; // r8
  __int64 v10; // rax
  size_t v11; // r8

  v3 = a1 + 144;
  *(_OWORD *)(a1 + 128) = *a2;
  if ( a1 + 144 != a3 )
  {
    v6 = *(_QWORD *)(a3 + 8);
    v7 = v6 - 1;
    if ( !v6 )
      v7 = 0;
    if ( v7 )
      sub_140001810(a1 + 144, *(const void **)a3, v7);
    else
      *(_QWORD *)(a1 + 152) = 0;
  }
  if ( v3 + 24 != a3 + 24 )
  {
    v8 = *(_QWORD *)(a3 + 32);
    v9 = v8 - 1;
    if ( !v8 )
      v9 = 0;
    if ( v9 )
      sub_140001810(v3 + 24, *(const void **)(a3 + 24), v9);
    else
      *(_QWORD *)(v3 + 32) = 0;
  }
  *(_OWORD *)(v3 + 48) = *(_OWORD *)(a3 + 48);
  *(_QWORD *)(v3 + 64) = *(_QWORD *)(a3 + 64);
  if ( v3 + 72 != a3 + 72 )
  {
    v10 = *(_QWORD *)(a3 + 80);
    v11 = v10 - 1;
    if ( !v10 )
      v11 = 0;
    if ( v11 )
      sub_140001810(v3 + 72, *(const void **)(a3 + 72), v11);
    else
      *(_QWORD *)(v3 + 80) = 0;
  }
  *(_QWORD *)(v3 + 96) = *(_QWORD *)(a3 + 96);
  *(_QWORD *)(v3 + 104) = *(_QWORD *)(a3 + 104);
  *(_DWORD *)(v3 + 112) = *(_DWORD *)(a3 + 112);
  *(_DWORD *)(a1 + 48) = 1;
  sub_14005D750((void *)qword_1400CAE08, 0xFFFFFFFF);
  qword_1400CAE18 = a1;
  sub_14005D730((void *)qword_1400CAE10);
  return *(unsigned __int8 *)(a1 + 112);
}
// 1400CAE08: using guessed type __int64 qword_1400CAE08;
// 1400CAE10: using guessed type __int64 qword_1400CAE10;
// 1400CAE18: using guessed type __int64 qword_1400CAE18;
