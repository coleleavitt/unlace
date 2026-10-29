__int64 __fastcall sub_15DDD90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  bool v5; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v6[168]; // [rsp+10h] [rbp-A8h] BYREF

  sub_168B9F0(v6, a1 + 8, *(unsigned int *)(a2 + 24), 3241, 0);
  v2 = sub_15DD120((__int64)v6, a2);
  v5 = (*(_BYTE *)(a2 + 35) & 2) != 0;
  v3 = sub_1588420(v2, (unsigned __int8 *)&v5);
  if ( *(_BYTE *)(v3 + 120) )
  {
    sub_15D6400((unsigned __int8 **)(v3 + 32), (__int64)"functions and Objective-C methods");
  }
  else if ( *(_BYTE *)(v3 + 132) )
  {
    sub_15DDC70(v3, (__int64)"functions and Objective-C methods");
  }
  sub_15F7200(v6);
  return 0;
}
