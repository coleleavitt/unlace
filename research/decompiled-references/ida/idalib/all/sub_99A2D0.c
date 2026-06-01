__int64 __fastcall sub_99A2D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rbp

  result = sub_9996F0(*(__m128i **)(a1 + 8), a2, a3, a4, a5, a6);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = result;
  if ( v9 )
    result = (__int64)sub_9999E0(result, v9, 0, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v7, v8);
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
