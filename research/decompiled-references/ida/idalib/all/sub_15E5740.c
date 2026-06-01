__int64 __fastcall sub_15E5740(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int8 v4; // al
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // [rsp+1h] [rbp-A9h] BYREF
  _BYTE v11[168]; // [rsp+2h] [rbp-A8h] BYREF

  v4 = a4[28] & 0x7F;
  if ( v4 == 25 )
    return 1;
  if ( (unsigned int)v4 - 40 > 6 || sub_9B48E0((__int64)a4) || (a4[96] & 7) == 2 || (result = 1, (a4[31] & 8) != 0) )
  {
    sub_168B9F0(v11, a2 + 8, *(unsigned int *)(a3 + 24), 3241, 0);
    v8 = sub_15DD120((__int64)v11, a3);
    v10 = (*(_BYTE *)(a3 + 35) & 2) != 0;
    v9 = sub_1588420(v8, (unsigned __int8 *)&v10);
    if ( *(_BYTE *)(v9 + 120) )
    {
      sub_15D6400((unsigned __int8 **)(v9 + 32), (__int64)"cbuffer/tbuffer and external global variables");
    }
    else if ( *(_BYTE *)(v9 + 132) )
    {
      sub_15DDC70(v9, (__int64)"cbuffer/tbuffer and external global variables");
    }
    sub_15F7200(v11);
    return 0;
  }
  return result;
}
