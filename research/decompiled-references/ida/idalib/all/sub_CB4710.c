__int64 __fastcall sub_CB4710(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // rsi
  _QWORD v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  if ( sub_B760E0(*(_QWORD *)(a2 + 16), nullptr, nullptr) )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v3);
    if ( (_BYTE)result )
    {
      v5 = *(_QWORD *)a2 >> 16;
      v6[0] = a2 | 4;
      return sub_D05AA0(a1, (v5 & 0x10) != 0, (v5 & 8) != 0, v6);
    }
  }
  else
  {
    v6[0] = a2 | 4;
    return sub_D06D40(a1, a2, v6);
  }
  return result;
}
