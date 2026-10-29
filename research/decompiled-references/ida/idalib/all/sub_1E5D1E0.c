__int64 __fastcall sub_1E5D1E0(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 *v6; // rsi
  _BYTE v7[152]; // [rsp+2h] [rbp-98h] BYREF

  result = 0;
  if ( a2 )
  {
    v6 = (__int64 *)(a1 + 8);
    if ( a2 == a3 )
    {
      sub_168B9F0((__int64)v7, v6, a4, 0x1998u, 0);
      sub_15F7200(v7);
      return 0;
    }
    else
    {
      sub_168B9F0((__int64)v7, v6, a4, 0xC4Du, 0);
      sub_15F7200(v7);
      return 1;
    }
  }
  return result;
}
