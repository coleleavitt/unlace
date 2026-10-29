__int64 __fastcall sub_CBFFB0(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a2 + 24);
  if ( a1[1362] )
    return sub_CBBC10((__int64)a1, v6, a3, a4, a5);
  result = (*(__int64 (__fastcall **)(_BYTE *, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v6);
  if ( (_BYTE)result )
  {
    if ( a1[1360] )
    {
      v8[0] = a2 | 4;
      return sub_CE3FA0(a1, v8);
    }
  }
  return result;
}

