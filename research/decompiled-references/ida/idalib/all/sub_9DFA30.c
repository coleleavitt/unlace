_QWORD *__fastcall sub_9DFA30(__int64 **a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  char v10; // al
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rbx
  __int64 v17; // r14
  char v18; // al
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rdi
  _QWORD *v23; // r12
  __int64 v24; // rdx
  _QWORD *result; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8

  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  if ( v10 == 13 )
  {
    if ( (((*(_WORD *)(v9 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      goto LABEL_3;
    goto LABEL_11;
  }
  if ( v10 != 47 )
  {
    if ( v10 != 10 )
      goto LABEL_3;
    goto LABEL_11;
  }
  v26 = sub_F60F10(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          v8,
          a3,
          a4,
          a5);
  if ( ((*(_BYTE *)(v26 + 74) & 1) != 0 || (*(_QWORD *)(v26 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
    && *(char *)(sub_F60F10(v9, v8, v27, a4, v28) + 76) >= 0 )
  {
LABEL_11:
    v8 = *(_QWORD *)(a2 + 16);
    goto LABEL_3;
  }
  v8 = *(_QWORD *)(a2 + 24);
LABEL_3:
  v11 = sub_9DF520((__int64)a1, v8, a3, a4);
  v15 = *(_QWORD *)(a2 + 24);
  v16 = v11;
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *(_BYTE *)(v17 + 16);
  if ( v18 != 13 )
  {
    if ( v18 == 47 )
    {
      v29 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
              v15,
              v12,
              v13,
              v14);
      if ( ((*(_BYTE *)(v29 + 74) & 1) != 0 || (*(_QWORD *)(v29 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && *(char *)(sub_F60F10(v17, v15, v30, v13, v31) + 76) >= 0 )
      {
        v15 = *(_QWORD *)(a2 + 24);
        goto LABEL_6;
      }
    }
    else if ( v18 == 10 )
    {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( (((*(_WORD *)(v17 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
LABEL_5:
    v15 = *(_QWORD *)(a2 + 16);
LABEL_6:
  v19 = sub_9DF520((__int64)a1, v15, a3, v13);
  v22 = *a1;
  v23 = v19;
  v24 = **a1;
  v22[10] += 32;
  result = (_QWORD *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v22[1] >= (unsigned __int64)(result + 4) && v24 )
    *v22 = (__int64)(result + 4);
  else
    result = (_QWORD *)sub_986170((__int64)v22, 32, 32, 4, v20, v21);
  *result = 17;
  result[1] = 0;
  result[2] = v16;
  result[3] = v23;
  return result;
}
