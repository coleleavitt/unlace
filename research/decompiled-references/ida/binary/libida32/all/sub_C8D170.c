__int64 __fastcall sub_C8D170(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  if ( sub_B523A0(*(_QWORD *)(a2 + 16), nullptr, nullptr) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, v3);
    if ( (_BYTE)result )
    {
      v5 = *(_QWORD *)a2 >> 16;
      v6[0] = a2 | 4;
      return sub_C82720((__int64)a1, (v5 & 0x10) != 0, (v5 & 8) != 0, v6);
    }
  }
  else
  {
    v6[0] = a2 | 4;
    return sub_C82FA0(a1, a2, v6);
  }
  return result;
}

