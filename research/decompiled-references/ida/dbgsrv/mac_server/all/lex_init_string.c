/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_init_string
// Address: 0x0000000100045B50

//----- (0000000100045B50) ----------------------------------------------------
__int64 __fastcall lex_init_string(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v6 = 56 * i;
    *(_QWORD *)a1 = *(_QWORD *)(v5 + v6 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v5 + v6 - 24);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v5 + v6 - 8);
    sub_100044BA0((__int64 *)(a1 + 56));
  }
  *(_QWORD *)(a1 + 200) = sub_100045C40;
  *(_QWORD *)(a1 + 208) = a1 + 216;
  *(_QWORD *)(a1 + 216) = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_QWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  if ( a3 )
  {
    sub_100045990(a1);
    *(_QWORD *)(a1 + 520) = a3;
    *(_BYTE *)(a1 + 568) = 1;
  }
  return 0;
}
