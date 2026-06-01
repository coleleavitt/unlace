/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A030
// Address: 0x000000000006A030

//----- (000000000006A030) ----------------------------------------------------
__int64 __fastcall sub_6A030(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  void *ptr[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v6 = 0;
  sub_69590((__int64 (__fastcall *)(__int64, __int64))sub_6A110, (__int64)ptr, a1, a2, 0.0, a4);
  if ( ptr[1] >= (char *)&dword_0 + 2 )
    sub_390A0((int)"%s", ptr[0]);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v6 = 0;
  }
  return 0;
}
// 0: using guessed type int dword_0;
