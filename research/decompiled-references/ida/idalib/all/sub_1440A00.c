__int64 __fastcall sub_1440A00(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // bp
  char v3; // al
  __int64 result; // rax
  _BYTE v5[104]; // [rsp+0h] [rbp-68h] BYREF

  if ( sub_10CCDE0(*(_WORD *)(a1 + 16))
    || (v2 = *(_WORD *)(a1 + 16), v3 = sub_141A630(v2), v2 == 1)
    || v3
    || (result = *(_QWORD *)(a1 + 8)) == 0 )
  {
    sub_FC70B0((__int64)v5, *(_QWORD *)(a2 + 48), *(_DWORD *)a1, 1041);
    sub_AEA040((__int64)v5);
    return 0;
  }
  return result;
}
