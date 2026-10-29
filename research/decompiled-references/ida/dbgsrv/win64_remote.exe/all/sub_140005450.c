/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005450
// Address: 0x0000000140005450

//----- (0000000140005450) ----------------------------------------------------
__int64 __fastcall sub_140005450(__int64 a1, const void *a2)
{
  size_t v4; // rax

  *(_DWORD *)(a1 + 48) = 10;
  if ( a2 && (v4 = strlen((const char *)a2)) != 0 )
    sub_140001810(a1 + 88, a2, v4);
  else
    *(_QWORD *)(a1 + 96) = 0;
  sub_14005D750((void *)qword_1400CAE08, 0xFFFFFFFF);
  qword_1400CAE18 = a1;
  sub_14005D730((void *)qword_1400CAE10);
  sub_14005D750(*(void **)(a1 + 288), 0xFFFFFFFF);
  return *(unsigned __int8 *)(a1 + 112);
}
// 1400CAE08: using guessed type __int64 qword_1400CAE08;
// 1400CAE10: using guessed type __int64 qword_1400CAE10;
// 1400CAE18: using guessed type __int64 qword_1400CAE18;
