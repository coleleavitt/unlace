/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475870
// Address: 0x0000000000475870

//----- (0000000000475870) ----------------------------------------------------
__int64 __fastcall sub_475870(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // x20
  int v5; // w4
  __int64 v7; // x0
  __int64 result; // x0
  void *v9; // x0

  v4 = a1 + 144;
  v5 = dword_522010;
  *(_QWORD *)a1 = qword_51E2F8;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = v5;
  dword_522010 = v5 + 1;
  *(_QWORD *)(a1 + 176) = sub_4926B8();
  v7 = *(_QWORD *)(a1 + 136);
  *(_BYTE *)(a1 + 184) = a3;
  result = sub_477098(v7);
  if ( !(_BYTE)result )
  {
    v9 = *(void **)(a1 + 144);
    if ( *(_QWORD *)(v4 + 16) <= 9u )
    {
      v9 = sub_491288(v4, *(void **)(a1 + 144), 0xAu, 1u);
      *(_QWORD *)(a1 + 144) = v9;
    }
    *(_QWORD *)(v4 + 8) = 10;
    qmemcpy(v9, "(unknown)", 9);
    result = *(_QWORD *)(a1 + 144);
    *(_BYTE *)(result + 9) = 0;
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  return result;
}
// 51E2F8: using guessed type __int64 qword_51E2F8[2];
// 522010: using guessed type int dword_522010;
