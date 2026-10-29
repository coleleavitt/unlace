__int64 __fastcall sub_15DDCD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int8 v5; // cl
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // [rsp+1h] [rbp-A9h] BYREF
  _BYTE v10[168]; // [rsp+2h] [rbp-A8h] BYREF

  result = 1;
  v5 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( v5 != 18 && (unsigned int)v5 - 34 > 5 )
  {
    sub_168B9F0(v10, a2 + 8, *(unsigned int *)(a3 + 24), 3241, 0);
    v7 = sub_15DD120((__int64)v10, a3);
    v9 = (*(_BYTE *)(a3 + 35) & 2) != 0;
    v8 = sub_1588420(v7, (unsigned __int8 *)&v9);
    if ( *(_BYTE *)(v8 + 120) )
    {
      sub_15D6400((unsigned __int8 **)(v8 + 32), (__int64)"Objective-C methods and functions");
    }
    else if ( *(_BYTE *)(v8 + 132) )
    {
      sub_15DDC70(v8, (__int64)"Objective-C methods and functions");
    }
    sub_15F7200(v10);
    return 0;
  }
  return result;
}
