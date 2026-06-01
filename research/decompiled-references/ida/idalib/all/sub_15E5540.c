__int64 __fastcall sub_15E5540(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v10[168]; // [rsp+10h] [rbp-A8h] BYREF

  if ( (a4[28] & 0x7Fu) - 40 > 6 || sub_9B48E0((__int64)a4) || (a4[96] & 7) == 2 || (result = 1, (a4[31] & 8) != 0) )
  {
    sub_168B9F0(v10, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
    v7 = sub_15DD120((__int64)v10, a3);
    v9 = (*(_BYTE *)(a3 + 35) & 2) != 0;
    v8 = sub_1588420(v7, (unsigned __int8 *)&v9);
    if ( *(_BYTE *)(v8 + 120) )
    {
      sub_15D6400((unsigned __int8 **)(v8 + 32), (__int64)"external global variables");
    }
    else if ( *(_BYTE *)(v8 + 132) )
    {
      sub_15DDC70(v8, (__int64)"external global variables");
    }
    sub_15F7200(v10);
    return 0;
  }
  return result;
}
