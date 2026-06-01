/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95120
// Address: 0x0000000000095120

//----- (0000000000095120) ----------------------------------------------------
__int64 __fastcall sub_95120(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  int v4; // eax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = 0;
  if ( !*(_BYTE *)(a1 + 288) )
  {
    *(_BYTE *)(a1 + 289) = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 440) + 136LL))(
           *(_QWORD *)(a1 + 440),
           a1 + 368,
           a2);
    *(_BYTE *)(a1 + 288) = v4 > 0;
    if ( v4 <= 0 )
    {
      *(_BYTE *)(a1 + 289) = 1;
    }
    else
    {
      sub_AB1F0((__int64)ptr, 4);
      sub_A5EE0((__int64)ptr, a1 + 368);
      v2 = sub_AA6D0(a1 + 192, (__int64 *)ptr);
      *(_BYTE *)(a1 + 288) = 0;
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
    }
  }
  return v2;
}
