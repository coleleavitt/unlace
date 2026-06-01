/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D600
// Address: 0x000000000043D600

//----- (000000000043D600) ----------------------------------------------------
__int64 __fastcall sub_43D600(__int64 a1, int a2)
{
  int v2; // esi

  v2 = *(_DWORD *)(a1 + 96) + a2;
  if ( v2 < 0 || (unsigned __int64)v2 >= *(_QWORD *)(a1 + 32) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(287);
    BUG();
  }
  return *(_QWORD *)(a1 + 24) + 32LL * v2;
}
// 4C94E1: using guessed type char byte_4C94E1;
