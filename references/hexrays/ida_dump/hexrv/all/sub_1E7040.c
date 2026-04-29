__int64 __fastcall sub_1E7040(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // r12
  void *v8; // rax
  const void *v9; // rsi
  void *v10; // rax
  const void *v11; // rsi
  void *v12; // rax
  const void *v13; // rsi

  v3 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v4 = a2[2];
  *(_QWORD *)a1 = v3;
  if ( v4 )
  {
    v8 = (void *)qalloc_or_throw(8 * v4);
    *(_QWORD *)(a1 + 24) = v4;
    v9 = (const void *)a2[1];
    *(_QWORD *)(a1 + 8) = v8;
    memcpy(v8, v9, 8 * v4);
    *(_QWORD *)(a1 + 16) = v4;
  }
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v5 = a2[5];
  if ( v5 )
  {
    v12 = (void *)qalloc_or_throw(8 * v5);
    *(_QWORD *)(a1 + 32) = v12;
    v13 = (const void *)a2[4];
    *(_QWORD *)(a1 + 48) = v5;
    memcpy(v12, v13, 8 * v5);
    *(_QWORD *)(a1 + 40) = v5;
  }
  result = sub_5FC80((__int64 *)(a1 + 56), (__int64)(a2 + 7));
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v7 = a2[10];
  if ( v7 )
  {
    v10 = (void *)qalloc_or_throw(16 * v7);
    *(_QWORD *)(a1 + 88) = v7;
    v11 = (const void *)a2[9];
    *(_QWORD *)(a1 + 72) = v10;
    result = (__int64)memcpy(v10, v11, 16 * v7);
    *(_QWORD *)(a1 + 80) = v7;
  }
  return result;
}
