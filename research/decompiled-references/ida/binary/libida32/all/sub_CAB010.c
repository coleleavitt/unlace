__int64 __fastcall sub_CAB010(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rsi
  char v8; // al
  __int64 result; // rax
  __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_BYTE *)(a2 + 2);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = v6 >> 3;
  if ( v8 == 6 )
    return sub_CA89D0(a1, v7, a3, a4, a5);
  if ( v8 != 7 )
    return 0;
  result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v7);
  if ( (_BYTE)result )
  {
    v10[0] = a2 | 4;
    return sub_C7E9A0(a1, v10);
  }
  return result;
}

