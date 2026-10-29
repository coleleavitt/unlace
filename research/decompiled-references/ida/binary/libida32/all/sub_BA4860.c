__int64 __fastcall sub_BA4860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  if ( a2 )
  {
    v3 = a2;
    if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      if ( !(_BYTE)result )
        return result;
      v3 = v6[0];
    }
    if ( (unsigned int)sub_E6C2C0(v3) == 3 )
    {
      v5 = sub_E6C930(v6);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, v5);
    }
  }
  return 1;
}

