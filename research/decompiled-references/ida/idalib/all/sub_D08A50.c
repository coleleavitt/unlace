__int64 __fastcall sub_D08A50(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // r12d
  bool v7; // zf
  _BYTE _0[48]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars30[64]; // [rsp+30h] [rbp+30h] BYREF
  int vars70[14]; // [rsp+70h] [rbp+70h] BYREF
  unsigned __int8 varsA8; // [rsp+A8h] [rbp+A8h]

  v2 = *(_QWORD *)(a1 + 560);
  sub_E21760(v2, 48);
  sub_E23260(_0);
  sub_E21790(v2, 48);
  if ( (unsigned __int8)sub_DADEA0(a1 + 1048, a1 + 384, *(_QWORD *)(a1 + 368), _0, a2)
    && (!*(_BYTE *)(a1 + 1137) || (unsigned __int8)sub_DAC7D0(a1 + 1048, a1 + 384, _0)) )
  {
    v3 = *(_QWORD *)(a1 + 1128);
    if ( v3 )
    {
      v3 &= 0xFFFFFFFFFFFFFFFCLL;
      if ( ((*(__int64 *)(a1 + 1128) >> 1) & 1) != 0 )
      {
        if ( v3 )
          v3 = *(_QWORD *)(v3 + 8);
      }
      else if ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 26 > 0x1A )
          v3 = 0;
        else
          v3 = *(_QWORD *)(v3 + 48);
      }
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 104LL))(*(_QWORD *)(a1 + 408));
    sub_CE5520((__int64)vars30, v4);
    sub_E28BE0(vars70, _0, vars30, v3);
    sub_CE7BE0((__int64)vars30);
    v5 = varsA8;
    if ( varsA8 )
    {
      sub_D08A00(a1 + 1056, vars70);
      v7 = varsA8 == 0;
      *(_DWORD *)(a1 + 1120) = 2;
      if ( !v7 && vars70[0] > 1u )
        sub_A4F8E0(vars70);
    }
    else
    {
      *(_DWORD *)(a1 + 1120) = 3;
    }
  }
  else
  {
    v5 = 0;
  }
  sub_E232A0(_0);
  return v5;
}
