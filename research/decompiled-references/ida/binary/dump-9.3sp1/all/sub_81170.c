void *__fastcall sub_81170(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // r13
  size_t v4; // rax
  size_t v5; // rax
  __int64 v6; // rax
  char v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  char v23; // r12
  const char *v24; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE v30[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-30h]

  v2 = a1 + 9;
  v31 = __readfsqword(0x28u);
  v4 = pack_dq() - (_QWORD)v30;
  if ( v4 )
    sub_7BEC0(v2, v30, v4);
  v5 = pack_dq() - (_QWORD)v30;
  if ( v5 )
    sub_7BEC0(v2, v30, v5);
  v6 = a1[10];
  v7 = *(_BYTE *)(a2 + 12);
  v8 = a1[9];
  if ( a1[11] < (unsigned __int64)(v6 + 1) )
  {
    v26 = qvector_reserve((__int64)v2, v8, v6 + 1, 1);
    a1[9] = v26;
    v8 = v26;
    v6 = a1[10];
  }
  *(_BYTE *)(v8 + v6) = v7;
  v9 = a1[10];
  v10 = a1[9];
  v11 = v9 + 1;
  v12 = v9 + 2;
  a1[10] = v11;
  v13 = *(_BYTE *)(a2 + 13);
  if ( a1[11] < v12 )
  {
    v29 = qvector_reserve((__int64)v2, v10, v12, 1);
    a1[9] = v29;
    v10 = v29;
    v11 = a1[10];
  }
  *(_BYTE *)(v10 + v11) = v13;
  v14 = a1[10];
  v15 = a1[9];
  v16 = v14 + 1;
  v17 = v14 + 2;
  a1[10] = v16;
  v18 = *(_BYTE *)(a2 + 14);
  if ( a1[11] < v17 )
  {
    v28 = qvector_reserve((__int64)v2, v15, v17, 1);
    a1[9] = v28;
    v15 = v28;
    v16 = a1[10];
  }
  *(_BYTE *)(v15 + v16) = v18;
  v19 = a1[10];
  v20 = a1[9];
  v21 = v19 + 1;
  v22 = v19 + 2;
  a1[10] = v21;
  v23 = *(_BYTE *)(a2 + 15);
  if ( a1[11] < v22 )
  {
    v27 = qvector_reserve((__int64)v2, v20, v22, 1);
    a1[9] = v27;
    v20 = v27;
    v21 = a1[10];
  }
  *(_BYTE *)(v20 + v21) = v23;
  v24 = s1;
  ++a1[10];
  if ( *(_QWORD *)(a2 + 24) )
    v24 = *(const char **)(a2 + 16);
  return sub_7C850(v2, v24);
}
