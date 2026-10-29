/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A0C0
// Address: 0x000000014005A0C0

//----- (000000014005A0C0) ----------------------------------------------------
bool __fastcall sub_14005A0C0(unsigned int a1)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  bool result; // al

  v2 = sub_140059F70(a1);
  result = BYTE2(v2) >= 2u
        && a1 - 8232 > 1
        && (_WORD)v2 != 290
        && (_WORD)v2 != 270
        && a1 != 1564
        && ((v3 = a1 - 8206, (unsigned int)v3 > 0x20) || (v4 = 0x1F0000003LL, !_bittest64(&v4, v3)))
        && BYTE2(v2) != 5;
  return result;
}
