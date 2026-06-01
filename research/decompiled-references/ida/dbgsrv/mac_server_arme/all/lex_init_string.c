/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_init_string
// Address: 0x00000001000401D8

//----- (00000001000401D8) ----------------------------------------------------
__int64 __fastcall lex_init_string(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // x8
  __int64 v7; // x8

  for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
  {
    v7 = *(_QWORD *)(a1 + 56) + 56 * i;
    *(_QWORD *)a1 = *(_QWORD *)(v7 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v7 - 24);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v7 - 8);
    sub_10003F3C8((__int64 *)(a1 + 56));
  }
  *(_QWORD *)(a1 + 216) = a2;
  *(_QWORD *)(a1 + 200) = sub_100040290;
  *(_QWORD *)(a1 + 208) = a1 + 216;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  if ( a3 )
  {
    sub_100040098(a1);
    *(_QWORD *)(a1 + 560) = a3;
    *(_BYTE *)(a1 + 608) = 1;
  }
  return 0;
}
