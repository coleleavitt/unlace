_QWORD *__fastcall sub_5D1040(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *result; // rax
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // r8
  __int64 v10; // rdi

  v1 = *(_QWORD *)(a1 + 168);
  result = (_QWORD *)a1;
  v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 160) + v1 - 1);
  if ( v1 )
    *(_QWORD *)(a1 + 168) = v1 - 1;
  *(_DWORD *)(a1 + 212) = v3;
  v4 = *(_QWORD *)(a1 + 432);
  v5 = *(_QWORD *)(a1 + 440);
  v6 = (__int64 *)(v4 + 8 * v5 - 8);
  v7 = *v6;
  if ( !v5 )
  {
    result[15] = v7;
    result[13] = *v6;
    v8 = *v6;
    goto LABEL_5;
  }
  result[15] = v7;
  v9 = (__int64 *)(v4 + 8 * (v5 - 1) - 8);
  result[55] = v5 - 1;
  v10 = *v9;
  if ( v5 == 1 )
  {
    result[13] = v10;
    v8 = *v9;
    goto LABEL_5;
  }
  result[13] = v10;
  result[55] = v5 - 2;
  v8 = *(_QWORD *)(v4 + 8 * (v5 - 2) - 8);
  if ( v5 == 2 )
  {
LABEL_5:
    result[14] = v8;
    return result;
  }
  result[14] = v8;
  result[55] = v5 - 3;
  return result;
}

