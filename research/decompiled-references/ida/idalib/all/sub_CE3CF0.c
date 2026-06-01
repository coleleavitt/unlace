__int64 __fastcall sub_CE3CF0(_BYTE *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  if ( a1[1362] )
    return sub_CDF950(a1, v3);
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v3);
  if ( (_BYTE)result )
  {
    if ( a1[1360] )
    {
      v5[0] = a2 | 4;
      return sub_D07CE0(a1, v5);
    }
  }
  return result;
}
