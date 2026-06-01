__int64 __fastcall sub_F6310(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // [rsp+0h] [rbp-48h]

  v10 = a3;
  result = a1[13];
  v12 = a1[12];
  a1[13] = a3;
  v13 = a1[14];
  v14 = a1[15];
  a1[12] = a2;
  v22 = result;
  a1[14] = a4;
  a1[15] = a5;
  if ( a2 == v12 )
  {
    if ( result == a3 )
      goto LABEL_3;
  }
  else
  {
    for ( result = a1[1]; a1 + 1 != (_QWORD *)result; result = v18 )
    {
      v18 = *(_QWORD *)result;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(result + 16) + 24LL))(
        *(_QWORD *)(result + 16),
        v12,
        a2);
    }
    v10 = a1[13];
    if ( v22 == v10 )
    {
LABEL_3:
      v15 = a1[14];
      if ( v15 == v13 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  for ( result = a1[4]; a1 + 4 != (_QWORD *)result; result = v19 )
  {
    v19 = *(_QWORD *)result;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(result + 16) + 24LL))(
      *(_QWORD *)(result + 16),
      v22,
      v10);
  }
  v15 = a1[14];
  if ( v15 == v13 )
  {
LABEL_4:
    v16 = a1[15];
    if ( v16 == v14 )
      goto LABEL_5;
    goto LABEL_19;
  }
LABEL_15:
  for ( result = a1[7]; a1 + 7 != (_QWORD *)result; result = v20 )
  {
    v20 = *(_QWORD *)result;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(result + 16) + 24LL))(
      *(_QWORD *)(result + 16),
      v13,
      v15);
  }
  v16 = a1[15];
  if ( v16 == v14 )
  {
LABEL_5:
    v17 = a1[12];
    if ( v17 == v12 )
      return result;
    return callui(166, v17, v12, callui, a5, a6, a7, a8, a9, a10);
  }
LABEL_19:
  for ( result = a1[10]; a1 + 10 != (_QWORD *)result; result = v21 )
  {
    v21 = *(_QWORD *)result;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(result + 16) + 24LL))(
      *(_QWORD *)(result + 16),
      v14,
      v16);
  }
  v17 = a1[12];
  if ( v17 != v12 )
    return callui(166, v17, v12, callui, a5, a6, a7, a8, a9, a10);
  return result;
}

