/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063480
// Address: 0x0000000140063480

//----- (0000000140063480) ----------------------------------------------------
void __fastcall sub_140063480(__int64 a1, __int64 a2)
{
  char *v4; // rdx
  void *Block; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+28h] [rbp-50h]
  __int64 v7; // [rsp+30h] [rbp-48h]
  struct tm v8; // [rsp+38h] [rbp-40h] BYREF

  Block = nullptr;
  v6 = 0;
  v7 = 0;
  if ( sub_140061D80((__int64)&Block, (unsigned __int16 *)(a2 + 40), -1) )
  {
    v4 = (char *)Str1;
    if ( v6 )
      v4 = (char *)Block;
    sub_140061AF0((_BYTE *)(a1 + 4), v4, 260);
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 0;
  }
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 264) = *(_QWORD *)(a2 + 32);
  sub_14005A780(&v8, *(_QWORD *)(a2 + 24));
  *(_WORD *)(a1 + 274) = v8.tm_sec / 2 + 32 * (LOWORD(v8.tm_min) + (LOWORD(v8.tm_hour) << 6));
  *(_WORD *)(a1 + 272) = LOWORD(v8.tm_mday) + 32 * (LOWORD(v8.tm_mon) + 16 * LOWORD(v8.tm_year) + 769);
  if ( Block )
  {
    v6 = 0;
    j_free(Block);
  }
}
