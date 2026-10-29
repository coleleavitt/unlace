/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82540
// Address: 0x0000000000082540

//----- (0000000000082540) ----------------------------------------------------
__int64 __fastcall sub_82540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  __int64 v6; // rax
  __int64 v7; // rdi

  for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
  {
    v6 = i - 1;
    v7 = *(_QWORD *)(a1 + 56) + 56 * v6;
    *(_QWORD *)a1 = *(_QWORD *)(v7 + 24);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v7 + 32);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v7 + 48);
    *(_QWORD *)(a1 + 64) = v6;
    sub_38490((char **)v7);
  }
  *(_QWORD *)(a1 + 200) = sub_82620;
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
    sub_82290(a1);
    *(_QWORD *)(a1 + 456) = a3;
    *(_BYTE *)(a1 + 504) = 1;
  }
  return 0;
}
