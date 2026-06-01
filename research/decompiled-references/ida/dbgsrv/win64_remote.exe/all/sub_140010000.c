/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140010000
// Address: 0x0000000140010000

//----- (0000000140010000) ----------------------------------------------------
__int64 __fastcall sub_140010000(__int64 a1, __int64 a2, DWORD a3)
{
  int v6; // esi

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  v6 = sub_140012890(a1, a2, a3);
  if ( v6 >= 1 )
  {
    sub_1400623C0(a1 + 160, a2);
    *(_QWORD *)(a1 + 1184) = a1 + 160;
    *(_BYTE *)(a1 + 1194) = 0;
  }
  return (unsigned int)v6;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
