/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454E58
// Address: 0x0000000000454E58

//----- (0000000000454E58) ----------------------------------------------------
__int64 __fastcall sub_454E58(__int64 a1, __int64 a2, __int64 a3)
{
  while ( *(_QWORD *)(a1 + 64) )
    sub_450E98(a1);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 216) = sub_450C48;
  *(_QWORD *)(a1 + 224) = a1 + 232;
  *(_QWORD *)(a1 + 232) = a2;
  *(_BYTE *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 340) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  if ( a3 )
    return sub_454820(a1, a3, 0);
  else
    return 0;
}
