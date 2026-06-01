__int64 __fastcall sub_CC8AF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v6; // zf
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a2 + 24) == 0;
  v7 = *(_QWORD *)(a2 + 16);
  if ( v6 && v7 )
  {
    result = *(unsigned __int8 *)(a1 + 584);
    if ( !(_BYTE)result )
    {
      v9[0] = a2 | 2;
      return sub_CB2640(a1, (__int64)v9, a2);
    }
  }
  else
  {
    result = sub_CC7500(a1, v7, a3, a4, a5);
    if ( (_BYTE)result )
    {
      v9[0] = a2 | 4;
      return sub_CAAFE0(a1, v9);
    }
  }
  return result;
}
