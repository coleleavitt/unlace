__int64 *__fastcall sub_5FEC00(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 *result; // rax
  __int64 v6; // r13
  __int64 v7; // rsi

  v4 = a2;
  sub_5FEA40(a1 + 1528, *(_QWORD *)(a2 + 40), a3);
  result = (__int64 *)*(unsigned int *)(a2 + 68);
  if ( (_DWORD)result )
  {
    v6 = a2 + 8LL * (_QWORD)result;
    do
    {
      v7 = *(_QWORD *)(v4 + 80);
      v4 += 8;
      result = sub_5FEA40(a1 + 1600, v7 & 0xFFFFFFFFFFFFFFF8LL, a3);
    }
    while ( v4 != v6 );
  }
  return result;
}

