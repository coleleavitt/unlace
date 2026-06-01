void __fastcall sub_184A6E0(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE v3[152]; // [rsp+0h] [rbp-98h] BYREF

  if ( (*(_WORD *)(a2 + 30) & 0x180) != 0 )
  {
    sub_168B9F0((__int64)v3, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1312u, 0);
    sub_15F7200(v3);
  }
  else if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
  {
    sub_168B9F0((__int64)v3, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xF5Eu, 0);
    sub_15F7200(v3);
  }
  else
  {
    sub_184A5D0(a1, a2, ((unsigned __int64)a3 << 32) | a3);
  }
}
