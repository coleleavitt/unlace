/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140035750
// Address: 0x0000000140035750

//----- (0000000140035750) ----------------------------------------------------
__int64 __fastcall sub_140035750(__int64 a1, __int64 a2)
{
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  Block = nullptr;
  v4 = 0;
  v5 = 0;
  sub_1400357C0((__int64 (__fastcall *)(__int64, _QWORD))sub_1400356C0, (__int64)&Block, a1, a2);
  if ( v4 > 1 )
    sub_140002CE0((struct __crt_locale_pointers *)&dword_140091764, Block);
  if ( Block )
  {
    v4 = 0;
    j_free(Block);
  }
  return 0;
}
// 140091764: using guessed type int dword_140091764;
