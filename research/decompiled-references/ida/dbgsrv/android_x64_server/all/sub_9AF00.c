/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AF00
// Address: 0x000000000009AF00

//----- (000000000009AF00) ----------------------------------------------------
__int64 __fastcall sub_9AF00(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE *v4; // rax
  unsigned int v5; // ebx
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v8[5]; // [rsp+1Bh] [rbp-2Dh] BYREF
  unsigned __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v9[0] = __readfsqword(0x28u);
  sub_AB1F0((__int64)ptr, 55);
  sub_A5EE0((__int64)ptr, a2);
  v4 = pack_dd(v8, (unsigned __int64)v9, a3);
  sub_56350((__int64)ptr, v8, v4 - v8);
  v5 = sub_A50B0(a1 + 192, (__int64)ptr, -1, 0);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v5;
}
