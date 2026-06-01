/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420C98
// Address: 0x0000000000420C98

//----- (0000000000420C98) ----------------------------------------------------
__int64 __fastcall sub_420C98(__int64 a1, void *a2, size_t a3, unsigned __int8 a4)
{
  __int64 v6; // x0
  unsigned int v7; // w19
  void (__fastcall *v9)(__int64, __int64, size_t, _QWORD, __int64); // x22
  __int64 v10; // x0

  v6 = *(_QWORD *)(a1 + 472);
  if ( a4 )
    a4 = *(_BYTE *)(a1 + 616);
  v7 = sub_48C830(v6, a2, a3, a4);
  if ( (v7 & 0x80000000) != 0 )
  {
    v9 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
    v10 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
    v9(a1, 19, a3, (int)v7, v10);
  }
  return v7;
}
