unsigned __int64 __fastcall sub_6DC910(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rsi
  unsigned __int64 result; // rax
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h]

  v7 = *(_QWORD *)(a2 + 48);
  v11 = a3;
  v12 = a1;
  result = sub_6DC670(a1, v7, (__int64)sub_6DE030, (__int64)&v11);
  *(_QWORD *)(a2 + 48) = result;
  if ( a4 )
  {
    v9 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
      v9 = (__int64 *)v9[4];
    if ( v9 )
    {
      v10 = *v9;
      if ( *(_QWORD *)(a2 + 48) != *v9 )
      {
        v11 = a3;
        v12 = a1;
        result = sub_6DC670(a1, v10, (__int64)sub_6DE030, (__int64)&v11);
      }
      *v9 = result;
    }
  }
  return result;
}

