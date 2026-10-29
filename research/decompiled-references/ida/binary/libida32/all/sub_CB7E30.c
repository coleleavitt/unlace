__int64 __fastcall sub_CB7E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 || (result = sub_CB69D0(a1, v6, a3, a4, a5), (_BYTE)result) )
  {
    v8[0] = a2 | 4;
    return sub_CE2D10(a1, v8);
  }
  return result;
}

