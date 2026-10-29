/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140009330
// Address: 0x0000000140009330

//----- (0000000140009330) ----------------------------------------------------
__int64 __fastcall sub_140009330(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(unsigned int *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 8) = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a2, v3);
}
