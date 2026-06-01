__int64 __fastcall sub_15E21C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // [rsp+1h] [rbp-A9h] BYREF
  _BYTE v10[168]; // [rsp+2h] [rbp-A8h] BYREF

  result = 1;
  v5 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( (unsigned int)(v5 - 58) > 3 && (unsigned int)(v5 - 64) > 2 )
  {
    sub_168B9F0(v10, a2 + 8, *(unsigned int *)(a3 + 24), 3241, 0);
    v7 = sub_15DD120((__int64)v10, a3);
    v9 = (*(_BYTE *)(a3 + 35) & 2) != 0;
    v8 = sub_1588420(v7, (unsigned __int8 *)&v9);
    if ( *(_BYTE *)(v8 + 120) )
    {
      sub_15D6400((unsigned __int8 **)(v8 + 32), (__int64)"structs, unions, classes, and typedefs");
    }
    else if ( *(_BYTE *)(v8 + 132) )
    {
      sub_15DDC70(v8, (__int64)"structs, unions, classes, and typedefs");
    }
    sub_15F7200(v10);
    return 0;
  }
  return result;
}
