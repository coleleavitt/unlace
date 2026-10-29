__int64 __fastcall sub_15E14F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdi
  bool v10; // [rsp+1h] [rbp-A9h] BYREF
  _BYTE v11[168]; // [rsp+2h] [rbp-A8h] BYREF

  v4 = (*(_BYTE *)(a4 + 28) + 109) & 0x7F;
  if ( (unsigned __int8)v4 > 0x2Fu || (v9 = 0xEF8000000003LL, result = 1, !_bittest64(&v9, v4)) )
  {
    sub_168B9F0(v11, a2 + 8, *(unsigned int *)(a3 + 24), 3241, 0);
    v6 = sub_15DD120((__int64)v11, a3);
    v10 = (*(_BYTE *)(a3 + 35) & 2) != 0;
    v7 = sub_1588420(v6, (unsigned __int8 *)&v10);
    if ( *(_BYTE *)(v7 + 120) )
    {
      sub_15D6400(
        (unsigned __int8 **)(v7 + 32),
        (__int64)"tag types, typedefs, Objective-C interfaces, and Objective-C protocols");
    }
    else if ( *(_BYTE *)(v7 + 132) )
    {
      sub_15DDC70(v7, (__int64)"tag types, typedefs, Objective-C interfaces, and Objective-C protocols");
    }
    sub_15F7200(v11);
    return 0;
  }
  return result;
}
