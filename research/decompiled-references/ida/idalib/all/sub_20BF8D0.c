_QWORD *__fastcall sub_20BF8D0(__int64 a1, int a2, double a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  const char *(__fastcall *v7)(__int64, __int64); // rax
  pthread_rwlock_t *v8; // rax
  __int64 v9; // rax
  const char *v10; // rsi
  size_t v11; // rbp
  _BYTE *v12; // rdx
  _BYTE *v13; // rdi
  _QWORD *result; // rax
  _BYTE *v15; // rdx
  size_t v16; // rdx

  v4 = (unsigned int)(2 * a2);
  v5 = sub_221A480(a3);
  v6 = sub_227D090(v5, v4);
  v7 = *(const char *(__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v7 == sub_20BF710 )
  {
    v8 = (pthread_rwlock_t *)sub_20BFB80(v5, v4);
    v9 = sub_20BFCA0(v8);
    if ( !v9 )
    {
      v13 = *(_BYTE **)(v6 + 32);
      v11 = 43;
      v10 = "Unnamed pass: implement Pass::getPassName()";
      if ( *(_QWORD *)(v6 + 24) - (_QWORD)v13 > 0x2Au )
        goto LABEL_9;
      goto LABEL_11;
    }
    v10 = *(const char **)v9;
    v11 = *(_QWORD *)(v9 + 8);
  }
  else
  {
    v10 = (const char *)((__int64 (__fastcall *)(__int64))v7)(a1);
    v11 = v16;
  }
  v12 = *(_BYTE **)(v6 + 24);
  v13 = *(_BYTE **)(v6 + 32);
  result = (_QWORD *)(v12 - v13);
  if ( v12 - v13 >= v11 )
  {
    if ( !v11 )
      goto LABEL_6;
LABEL_9:
    result = memcpy(v13, v10, v11);
    v15 = *(_BYTE **)(v6 + 24);
    v13 = (_BYTE *)(v11 + *(_QWORD *)(v6 + 32));
    *(_QWORD *)(v6 + 32) = v13;
    if ( v13 == v15 )
      return (_QWORD *)sub_227BF10(v6, "\n", 1);
    goto LABEL_10;
  }
LABEL_11:
  result = (_QWORD *)sub_227BF10(v6, v10, v11);
  v6 = (__int64)result;
  v12 = (_BYTE *)result[3];
  v13 = (_BYTE *)result[4];
LABEL_6:
  if ( v13 == v12 )
    return (_QWORD *)sub_227BF10(v6, "\n", 1);
LABEL_10:
  *v13 = 10;
  ++*(_QWORD *)(v6 + 32);
  return result;
}
