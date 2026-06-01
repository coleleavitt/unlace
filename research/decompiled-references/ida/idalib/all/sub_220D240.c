_BYTE *__fastcall sub_220D240(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5)
{
  __int64 (*v9)(void); // rax
  __int64 v10; // rbx
  const void *v11; // rsi
  size_t v12; // r14
  __int64 v13; // rax
  _WORD *v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdi
  _BYTE *result; // rax
  __int64 v20; // rax
  __int64 v21; // rdx

  v9 = *(__int64 (**)(void))(*(_QWORD *)a1 + 288LL);
  if ( (char *)v9 != (char *)sub_20CE4D0 )
  {
    v17 = v9();
    v14 = *(_WORD **)(v17 + 32);
    v10 = v17;
    v15 = *(_QWORD *)(v17 + 24) - (_QWORD)v14;
LABEL_11:
    if ( a3 > v15 )
      goto LABEL_19;
LABEL_12:
    if ( a3 )
    {
      memcpy(v14, a2, a3);
      v21 = *(_QWORD *)(v10 + 24);
      v14 = (_WORD *)(a3 + *(_QWORD *)(v10 + 32));
      *(_QWORD *)(v10 + 32) = v14;
      v15 = v21 - (_QWORD)v14;
    }
    if ( v15 > 1 )
      goto LABEL_20;
LABEL_15:
    sub_227BF10(v10, ": ", 2);
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(const void **)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(v10 + 24);
  v14 = *(_WORD **)(v10 + 32);
  v15 = v13 - (_QWORD)v14;
  if ( v13 - (__int64)v14 < v12 )
  {
    sub_227BF10(v10, v11, v12);
  }
  else
  {
    if ( !v12 )
      goto LABEL_4;
    memcpy(v14, v11, v12);
    *(_QWORD *)(v10 + 32) += v12;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)(v10 + 24);
  v14 = *(_WORD **)(v10 + 32);
  v15 = v13 - (_QWORD)v14;
LABEL_4:
  if ( *(int *)(a1 + 16) <= 0 )
    goto LABEL_11;
  v16 = 0;
  do
  {
    if ( (unsigned __int64)(v13 - (_QWORD)v14) <= 1 )
    {
      sub_227BF10(v10, "  ", 2);
    }
    else
    {
      *v14 = 8224;
      *(_QWORD *)(v10 + 32) += 2LL;
    }
    v10 = *(_QWORD *)(a1 + 8);
    ++v16;
    v13 = *(_QWORD *)(v10 + 24);
    v14 = *(_WORD **)(v10 + 32);
  }
  while ( *(_DWORD *)(a1 + 16) > v16 );
  v15 = v13 - (_QWORD)v14;
  if ( a3 <= v13 - (__int64)v14 )
    goto LABEL_12;
LABEL_19:
  v20 = sub_227BF10(v10, a2, a3);
  v14 = *(_WORD **)(v20 + 32);
  v10 = v20;
  if ( *(_QWORD *)(v20 + 24) - (_QWORD)v14 <= 1u )
    goto LABEL_15;
LABEL_20:
  *v14 = 8250;
  *(_QWORD *)(v10 + 32) += 2LL;
LABEL_16:
  sub_227BA90(*(_QWORD *)(a1 + 8), a4, a5, 0);
  v18 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v18 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v18 + 24) )
    return (_BYTE *)sub_227BA10(v18, 10);
  *(_QWORD *)(v18 + 32) = result + 1;
  *result = 10;
  return result;
}
