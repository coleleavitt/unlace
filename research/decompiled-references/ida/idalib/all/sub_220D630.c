_QWORD *__fastcall sub_220D630(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  size_t v7; // rdx
  __int64 v8; // rbp
  size_t v9; // r14
  __int64 v10; // r15
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  const void *v14; // rsi
  __int64 v15; // rax
  _WORD *v16; // rdi
  unsigned __int64 v17; // rdx
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  _WORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE *v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  int v31; // [rsp+8h] [rbp-50h]
  void (__fastcall *v32)(__int64, const char *, __int64, __int64, __int64); // [rsp+8h] [rbp-50h]
  size_t v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  void *src; // [rsp+10h] [rbp-48h]
  __int64 v36; // [rsp+18h] [rbp-40h]

  v5 = sub_2219FE0(a2 + 20, a2 + 23, a2 + 24);
  v6 = sub_2219E40(a2 + 20, a2 + 23, a2 + 24);
  v8 = a2[17];
  src = (void *)v6;
  if ( !v8 )
    goto LABEL_25;
  v9 = v7;
  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v8 + 248LL))(v8, "Attribute", 9);
  (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD))(*(_QWORD *)a2[17] + 64LL))(a2[17], "Tag", 3, a3);
  v10 = a2[17];
  v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 288LL);
  if ( v11 != sub_20CE4D0 )
  {
    v19 = v11(a2[17]);
    v16 = *(_WORD **)(v19 + 32);
    v12 = v19;
    v17 = *(_QWORD *)(v19 + 24) - (_QWORD)v16;
    goto LABEL_12;
  }
  v12 = *(_QWORD *)(v10 + 8);
  v13 = *(_QWORD *)(v10 + 32);
  v14 = *(const void **)(v10 + 24);
  v15 = *(_QWORD *)(v12 + 24);
  v16 = *(_WORD **)(v12 + 32);
  v17 = v15 - (_QWORD)v16;
  if ( v15 - (__int64)v16 < v13 )
  {
    sub_227BF10(*(_QWORD *)(v10 + 8), v14, *(_QWORD *)(v10 + 32));
  }
  else
  {
    if ( !v13 )
      goto LABEL_5;
    v36 = *(_QWORD *)(v10 + 8);
    v33 = *(_QWORD *)(v10 + 32);
    memcpy(v16, v14, v33);
    *(_QWORD *)(v36 + 32) += v33;
  }
  v12 = *(_QWORD *)(v10 + 8);
  v15 = *(_QWORD *)(v12 + 24);
  v16 = *(_WORD **)(v12 + 32);
  v17 = v15 - (_QWORD)v16;
LABEL_5:
  if ( *(int *)(v10 + 16) > 0 )
  {
    v18 = 0;
    do
    {
      if ( (unsigned __int64)(v15 - (_QWORD)v16) <= 1 )
      {
        v31 = v18;
        sub_227BF10(v12, "  ", 2);
        v18 = v31;
      }
      else
      {
        *v16 = 8224;
        *(_QWORD *)(v12 + 32) += 2LL;
      }
      v12 = *(_QWORD *)(v10 + 8);
      ++v18;
      v15 = *(_QWORD *)(v12 + 24);
      v16 = *(_WORD **)(v12 + 32);
    }
    while ( *(_DWORD *)(v10 + 16) > v18 );
    if ( (unsigned __int64)(v15 - (_QWORD)v16) > 6 )
      goto LABEL_27;
    goto LABEL_13;
  }
LABEL_12:
  if ( v17 > 6 )
  {
LABEL_27:
    *(_DWORD *)v16 = 1970037078;
    v16[2] = 14949;
    *((_BYTE *)v16 + 6) = 32;
    *(_QWORD *)(v12 + 32) += 7LL;
    goto LABEL_14;
  }
LABEL_13:
  v12 = sub_227BF10(v12, "Value: ", 7);
LABEL_14:
  v20 = sub_227B910(v12, v5);
  v21 = *(_WORD **)(v20 + 32);
  v22 = v20;
  if ( *(_QWORD *)(v20 + 24) - (_QWORD)v21 > 1u )
  {
    *v21 = 8236;
    v24 = (_BYTE *)(*(_QWORD *)(v20 + 32) + 2LL);
    *(_QWORD *)(v20 + 32) = v24;
  }
  else
  {
    v23 = sub_227BF10(v20, ", ", 2);
    v24 = *(_BYTE **)(v23 + 32);
    v22 = v23;
  }
  v25 = *(_QWORD *)(v22 + 24);
  if ( v9 > v25 - (unsigned __int64)v24 )
  {
    v22 = sub_227BF10(v22, src, v9);
    v24 = *(_BYTE **)(v22 + 32);
    v25 = *(_QWORD *)(v22 + 24);
  }
  else if ( v9 )
  {
    v34 = v22;
    memcpy(v24, src, v9);
    v22 = v34;
    v24 = (_BYTE *)(*(_QWORD *)(v34 + 32) + v9);
    v25 = *(_QWORD *)(v34 + 24);
    *(_QWORD *)(v34 + 32) = v24;
  }
  if ( v25 <= (unsigned __int64)v24 )
  {
    sub_227BA10(v22, 10);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = v24 + 1;
    *v24 = 10;
  }
  v26 = a2[17];
  v32 = *(void (__fastcall **)(__int64, const char *, __int64, __int64, __int64))(*(_QWORD *)v26 + 232LL);
  v27 = sub_221DDC0(a3, a2[18], a2[19], 0);
  v32(v26, "TagName", 7, v27, v28);
  if ( v5 )
  {
    if ( v5 == 1 )
      (*(void (__fastcall **)(_QWORD, char *, __int64, const char *, __int64))(*(_QWORD *)a2[17] + 232LL))(
        a2[17],
        "Description",
        11,
        "AEABI Conformant",
        16);
    else
      (*(void (__fastcall **)(_QWORD, char *, __int64, const char *, __int64))(*(_QWORD *)a2[17] + 232LL))(
        a2[17],
        "Description",
        11,
        "AEABI Non-Conformant",
        20);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, char *, __int64, const char *, __int64))(*(_QWORD *)a2[17] + 232LL))(
      a2[17],
      "Description",
      11,
      "No Specific Requirements",
      24);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 256LL))(v8);
LABEL_25:
  *a1 = 0;
  return a1;
}
