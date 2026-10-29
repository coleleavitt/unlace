__int64 __fastcall sub_15E1690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rcx
  bool v10; // [rsp+1h] [rbp-A9h] BYREF
  _BYTE v11[168]; // [rsp+2h] [rbp-A8h] BYREF

  v4 = (*(_BYTE *)(a4 + 28) + 110) & 0x7F;
  if ( (unsigned __int8)v4 <= 0x39u )
  {
    v9 = 0x2000000023F0001LL;
    if ( _bittest64(&v9, v4) )
      return 1;
  }
  sub_168B9F0(v11, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
  v6 = sub_15DD120((__int64)v11, a3);
  v10 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v7 = sub_1588420(v6, (unsigned __int8 *)&v10);
  if ( *(_BYTE *)(v7 + 120) )
  {
    sub_15D6400(
      (unsigned __int8 **)(v7 + 32),
      (__int64)"functions, Objective-C methods, Objective-C properties, and parameters");
  }
  else if ( *(_BYTE *)(v7 + 132) )
  {
    sub_15DDC70(v7, (__int64)"functions, Objective-C methods, Objective-C properties, and parameters");
  }
  sub_15F7200(v11);
  return 0;
}
