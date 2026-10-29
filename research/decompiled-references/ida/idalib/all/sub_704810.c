_QWORD *__fastcall sub_704810(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // rdi
  _QWORD *v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx

  result = (_QWORD *)a1[8];
  if ( result )
    return result;
  v8 = *(_QWORD *)(*(_QWORD *)(a1[6] + 2264LL) + 80LL);
  v9 = a1[1];
  v10 = (__int64 *)(v8 + 72);
  if ( (*(_BYTE *)(v9 + 7) & 0x40) == 0 )
  {
    result = sub_704780(v10, v8, a3, a4, a5, a6);
    if ( result )
      result += 5;
    a1[8] = result;
    return result;
  }
  v11 = sub_704780(v10, v8, a3, a4, a5, a6);
  if ( v11 )
    v11 += 5;
  v12 = sub_6F3470(*(_QWORD *)(a1[6] + 17504LL), "IDA_TIL_NAMESPACE", 0x11u);
  v13 = sub_B94050(v11, v12);
  if ( v13 > 7 )
  {
    v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v13 & 4) != 0 )
    {
      v14 = *(_QWORD *)v14;
      if ( (*(_BYTE *)(v14 + 28) & 0x7F) != 0x18 || !v14 )
        goto LABEL_15;
    }
    else if ( (*(_BYTE *)(v14 + 28) & 0x7F) != 0x18 )
    {
LABEL_15:
      a1[8] = 0;
      goto LABEL_16;
    }
    a1[8] = v14 + 48;
    return (_QWORD *)(v14 + 48);
  }
  result = (_QWORD *)a1[8];
  if ( !result )
  {
LABEL_16:
    if ( !under_debugger )
      interr(3366);
    BUG();
  }
  return result;
}
