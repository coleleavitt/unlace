__int64 __fastcall clang_Type_getNumTemplateArguments(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  __int64 result; // rax
  _DWORD *i; // rsi
  __int64 v13; // rax
  unsigned int *v14; // rdx

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0xFFFFFFFFLL;
  v8 = sub_B10F70(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 + 20);
    v10 = (_DWORD *)(v8 + 48);
    result = v9;
    goto LABEL_4;
  }
  v13 = sub_B0E910(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v13 || (*(_BYTE *)(v13 + 28) & 0x7Fu) - 58 > 1 )
    return 0xFFFFFFFFLL;
  v14 = *(unsigned int **)(v13 + 168);
  v9 = *v14;
  v10 = v14 + 2;
  result = v9;
LABEL_4:
  for ( i = &v10[6 * v9]; i != v10; v10 += 6 )
  {
    if ( (*v10 & 0x7FFFFFFF) == 9 )
      result = (unsigned int)(result + v10[1] - 1);
  }
  return result;
}

