__int64 __fastcall sub_276C20(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[25]; // [rsp+Fh] [rbp-19h] BYREF

  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( !(unsigned __int8)sub_1666AE0(a2 + 296, a3, a1, v4) )
  {
    sub_1872CE0("");
    sub_1873130(114, 63);
  }
  return a1;
}

