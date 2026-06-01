/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000FE00
// Address: 0x000000014000FE00

//----- (000000014000FE00) ----------------------------------------------------
__int64 __fastcall sub_14000FE00(__int64 a1)
{
  unsigned int (__fastcall *v2)(_QWORD); // rdx

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( *(_QWORD *)(a1 + 1184) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  v2 = *((unsigned int (__fastcall **)(_QWORD))sub_14001E600() + 5);
  if ( !v2 || !v2(*(unsigned int *)(a1 + 488)) )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 904) = 4;
  *(_BYTE *)(a1 + 1193) = 1;
  return 1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
