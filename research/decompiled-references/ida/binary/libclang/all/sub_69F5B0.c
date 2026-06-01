__int64 __fastcall sub_69F5B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rsi

  result = a2;
  v5 = 0;
  if ( (a4 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
    v5 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  *a1 = v5;
  a1[1] = result;
  a1[2] = a3;
  return result;
}

