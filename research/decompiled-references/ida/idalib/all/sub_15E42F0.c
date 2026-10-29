__int64 __fastcall sub_15E42F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  bool v8; // [rsp+1h] [rbp-A9h] BYREF
  _BYTE v9[168]; // [rsp+2h] [rbp-A8h] BYREF

  if ( ((*(_BYTE *)(a4 + 28) + 108) & 0x7Fu) <= 2 )
    return 1;
  sub_168B9F0(v9, a2 + 8, *(unsigned int *)(a3 + 24), 3241, 0);
  v5 = sub_15DD120((__int64)v9, a3);
  v8 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v6 = sub_1588420(v5, (unsigned __int8 *)&v8);
  if ( *(_BYTE *)(v6 + 120) )
  {
    sub_15D6400(
      (unsigned __int8 **)(v6 + 32),
      (__int64)"Objective-C interfaces and Objective-C implementation declarations");
  }
  else if ( *(_BYTE *)(v6 + 132) )
  {
    sub_15DDC70(v6, (__int64)"Objective-C interfaces and Objective-C implementation declarations");
  }
  sub_15F7200(v9);
  return 0;
}
