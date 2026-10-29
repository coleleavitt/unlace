bool __fastcall sub_20B3A50(__int64 a1, int a2)
{
  bool result; // al
  _QWORD *v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // [rsp+1h] [rbp-19h]

  result = 0;
  if ( (*(_BYTE *)(a1 + 7) & 0x20) != 0 )
  {
    v3 = (_QWORD *)sub_20CB0D0(a1);
    v4 = sub_20AC3A0(*v3 + 2712LL, a1);
    result = sub_20B3750((__int64 *)(v4 + 8), a2);
    if ( !*(_DWORD *)(v4 + 16) && (*(_BYTE *)(a1 + 7) & 0x20) != 0 )
    {
      v5 = result;
      sub_20A0A20(a1);
      return v5;
    }
  }
  return result;
}
