_QWORD *__fastcall sub_3B6CA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(_QWORD, __int64))
{
  __int64 v5; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r12
  _QWORD *result; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  _QWORD *v13; // r13
  unsigned __int8 v14; // dl
  __int64 v15; // rdx
  __int64 v18; // [rsp+10h] [rbp-48h]

  v5 = (a3 - 1) / 2;
  v18 = a3 & 1;
  if ( a2 >= v5 )
  {
    result = (_QWORD *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
      goto LABEL_10;
    v7 = a2;
    goto LABEL_12;
  }
  v7 = a2;
  do
  {
    v8 = v7;
    v7 = 2 * (v7 + 1) - a5(*(_QWORD *)(a1 + 16 * (v7 + 1)), *(_QWORD *)(a1 + 16 * (v7 + 1) - 8));
    v9 = 8 * v7;
    result = (_QWORD *)(a1 + 8 * v7);
    *(_QWORD *)(a1 + 8 * v8) = *result;
  }
  while ( v7 < v5 );
  if ( !v18 && (a3 - 2) / 2 == v7 )
  {
LABEL_12:
    v15 = 2 * v7 + 2;
    v7 = 2 * v7 + 1;
    v9 = 8 * v7;
    *result = *(_QWORD *)(a1 + 8 * v15 - 8);
    result = (_QWORD *)(a1 + 8 * v7);
  }
  v11 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)(a1 + 8 * v11);
      v14 = a5(*v13, a4);
      result = (_QWORD *)(a1 + v9);
      if ( !v14 )
        break;
      v12 = v11;
      *result = *v13;
      if ( a2 >= v11 )
      {
        result = (_QWORD *)(a1 + 8 * v11);
        break;
      }
      v11 = (v11 - 1) / 2;
      v9 = 8 * v12;
    }
  }
LABEL_10:
  *result = a4;
  return result;
}
