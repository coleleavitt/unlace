/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004D540
// Address: 0x000000014004D540

//----- (000000014004D540) ----------------------------------------------------
__int64 __fastcall sub_14004D540(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  void *Block[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a4 + 289) )
    return 0;
  v5 = 0;
  if ( *(_BYTE *)(a4 + 288) )
  {
LABEL_8:
    LOBYTE(v5) = 0;
    return (unsigned int)(v5 + 1);
  }
  *(_BYTE *)(a4 + 289) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a4 + 440) + 128LL))(
         *(_QWORD *)(a4 + 440),
         a4 + 368,
         40);
  *(_BYTE *)(a4 + 288) = v6 >= 1;
  if ( v6 < 1 )
  {
    *(_BYTE *)(a4 + 289) = 1;
    goto LABEL_8;
  }
  sub_140054B30((__int64 *)Block, 4);
  sub_140050870(Block, a4 + 368);
  v7 = sub_140052B90(a4 + 192, (__int64 *)Block);
  *(_BYTE *)(a4 + 288) = 0;
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  LOBYTE(v5) = v7 != 0;
  return (unsigned int)(v5 + 1);
}
