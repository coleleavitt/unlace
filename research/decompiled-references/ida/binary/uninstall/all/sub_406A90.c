_QWORD *__fastcall sub_406A90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // rbx
  _QWORD *result; // rax
  __int64 v9; // rax
  int v10; // [rsp+4h] [rbp-24h] BYREF

  v4 = *(_QWORD *)(a1 + 448);
  if ( !v4 )
  {
    v9 = sub_40FB00(88);
    *(_QWORD *)(a1 + 448) = v9;
    sub_457B90(v9, 0);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)(a1 + 448) + 72LL))(
           *(_QWORD *)(a1 + 448),
           a2,
           &v10);
    if ( !v10 )
      goto LABEL_3;
LABEL_6:
    result = (_QWORD *)sub_40FB00(16);
    goto LABEL_4;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(v4 + 72))(*(_QWORD *)(a1 + 448), a2, &v10);
  if ( v10 )
    goto LABEL_6;
LABEL_3:
  result = *(_QWORD **)(v7 + 24);
LABEL_4:
  result[1] = a4;
  *result = a3;
  *(_QWORD *)(v7 + 24) = result;
  return result;
}

