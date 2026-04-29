void *__fastcall sub_7CCB0(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r13
  __int64 v3; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // rax
  char v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  char v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  char v24; // r12
  const char *v25; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v32[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = a1 + 9;
  v3 = *a2;
  v32[0] = __readfsqword(0x28u);
  v5 = pack_dq(v31, v32, v3) - (_QWORD)v31;
  if ( v5 )
    sub_77B40(v2, v31, v5);
  v6 = pack_dq(v31, v32, a2[5]) - (_QWORD)v31;
  if ( v6 )
    sub_77B40(v2, v31, v6);
  v7 = a1[10];
  v8 = *((_BYTE *)a2 + 12);
  v9 = a1[9];
  if ( a1[11] < (unsigned __int64)(v7 + 1) )
  {
    v27 = qvector_reserve(v2, v9, v7 + 1, 1);
    a1[9] = v27;
    v9 = v27;
    v7 = a1[10];
  }
  *(_BYTE *)(v9 + v7) = v8;
  v10 = a1[10];
  v11 = a1[9];
  v12 = v10 + 1;
  v13 = v10 + 2;
  a1[10] = v12;
  v14 = *((_BYTE *)a2 + 13);
  if ( a1[11] < v13 )
  {
    v30 = qvector_reserve(v2, v11, v13, 1);
    a1[9] = v30;
    v11 = v30;
    v12 = a1[10];
  }
  *(_BYTE *)(v11 + v12) = v14;
  v15 = a1[10];
  v16 = a1[9];
  v17 = v15 + 1;
  v18 = v15 + 2;
  a1[10] = v17;
  v19 = *((_BYTE *)a2 + 14);
  if ( a1[11] < v18 )
  {
    v29 = qvector_reserve(v2, v16, v18, 1);
    a1[9] = v29;
    v16 = v29;
    v17 = a1[10];
  }
  *(_BYTE *)(v16 + v17) = v19;
  v20 = a1[10];
  v21 = a1[9];
  v22 = v20 + 1;
  v23 = v20 + 2;
  a1[10] = v22;
  v24 = *((_BYTE *)a2 + 15);
  if ( a1[11] < v23 )
  {
    v28 = qvector_reserve(v2, v21, v23, 1);
    a1[9] = v28;
    v21 = v28;
    v22 = a1[10];
  }
  *(_BYTE *)(v21 + v22) = v24;
  v25 = s1;
  ++a1[10];
  if ( a2[3] )
    v25 = (const char *)a2[2];
  return sub_784D0(v2, v25);
}
