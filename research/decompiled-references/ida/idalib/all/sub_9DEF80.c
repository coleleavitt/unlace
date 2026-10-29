_QWORD *__fastcall sub_9DEF80(__int64 **a1, unsigned __int8 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rbp
  _QWORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rdx
  _QWORD *result; // rax
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // [rsp+0h] [rbp-48h]
  _QWORD *v27; // [rsp+0h] [rbp-48h]
  unsigned __int8 v29; // [rsp+Fh] [rbp-39h]

  v8 = *(_QWORD *)(a3 + 16);
  v9 = *(_QWORD *)(a3 + 24);
  v10 = sub_9DF520(a1, v8, a4);
  v11 = sub_9DF520(a1, v9, a4);
  if ( (*(_WORD *)v8 & 0x1FF) == 0x47 )
  {
    v14 = *(_QWORD *)(v8 + 16);
    v15 = sub_9DDBF0((__int64)a1, v14);
    v12 = (_QWORD *)v15;
    LOBYTE(v13) = v14 != 0;
    if ( !a5 )
    {
      if ( v15 )
        goto LABEL_4;
      goto LABEL_15;
    }
    LOBYTE(v15) = v15 != 0;
    v13 = (unsigned int)v15 & (unsigned int)v13;
    if ( (_BYTE)v13 )
      return sub_9DD860(a1, v14, v11);
  }
  else
  {
    v14 = 0;
    if ( !a5 )
    {
LABEL_15:
      v23 = *a1;
      v24 = **a1;
      v23[10] += 24;
      v12 = (_QWORD *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v23[1] >= (unsigned __int64)(v12 + 3) && v24 )
        *v23 = (__int64)(v12 + 3);
      else
        v12 = (_QWORD *)sub_986170((__int64)v23, 24, 24, 4, (__int64)v12, v13);
      *v12 = 15;
      v13 = 0;
      v12[1] = 0;
      v12[2] = v10;
LABEL_4:
      v16 = *a1;
      v17 = **a1;
      v16[10] += 32;
      v18 = (v17 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v16[1] >= v18 + 32 && v17 )
      {
        *v16 = v18 + 32;
      }
      else
      {
        v29 = v13;
        v27 = v12;
        v25 = sub_986170((__int64)v16, 32, 32, 4, (__int64)v12, v13);
        v13 = v29;
        v12 = v27;
        v18 = v25;
      }
      *(_QWORD *)(v18 + 24) = v11;
      *(_WORD *)v18 = 20;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = v12;
      *(_WORD *)(v18 + 2) = a2;
      v26 = v13;
      v19 = sub_9DE7D0((__int64)a1, v18, 0, v14, (unsigned __int64)v12, v13);
      v13 = v26;
      v11 = v19;
      if ( !v26 )
        goto LABEL_8;
      return sub_9DD860(a1, v14, v11);
    }
  }
LABEL_8:
  v20 = *a1;
  v21 = **a1;
  v20[10] += 32;
  result = (_QWORD *)((v21 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v20[1] >= (unsigned __int64)(result + 4) && v21 )
    *v20 = (__int64)(result + 4);
  else
    result = (_QWORD *)sub_986170((__int64)v20, 32, 32, 4, (__int64)v12, v13);
  *result = 16;
  result[1] = 0;
  result[2] = v10;
  result[3] = v11;
  return result;
}
