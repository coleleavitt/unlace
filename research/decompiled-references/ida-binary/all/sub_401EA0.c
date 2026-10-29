__int64 __fastcall sub_401EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rsi

  result = a2;
  v7 = *(_QWORD *)(a1 + 280);
  if ( v7 == result )
    return sub_400520(a1, v7, a3, a4, a5, a6);
  return result;
}
