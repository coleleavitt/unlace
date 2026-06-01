__int64 __fastcall sub_CE1F90(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  __int64 v4; // rsi
  char v5; // al
  __int64 result; // rax
  __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_BYTE *)(a2 + 2);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = v3 >> 3;
  if ( v5 == 6 )
    return sub_CDF950(a1, v4);
  if ( v5 != 7 )
    return 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v4);
  if ( (_BYTE)result )
  {
    v7[0] = a2 | 4;
    return sub_D1BE10(a1, v7);
  }
  return result;
}
