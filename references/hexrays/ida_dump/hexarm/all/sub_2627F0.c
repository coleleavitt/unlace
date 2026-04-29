__int64 __fastcall sub_2627F0(int *a1, __int64 *a2, char a3)
{
  unsigned __int64 v3; // rax
  int v5; // ebp
  __int64 result; // rax
  const char *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // r13
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // r15
  __int64 v20; // rsi
  size_t v21; // rdx
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // r12
  unsigned __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  v3 = a1[2];
  if ( v3 >= *(_QWORD *)(*(_QWORD *)a1 + 440LL) )
  {
    if ( !under_debugger )
      sub_3835A0(50123);
    BUG();
  }
  LOBYTE(v5) = 16;
  result = *(_QWORD *)(*(_QWORD *)a1 + 432LL) + 104 * v3;
  if ( (*(_BYTE *)(result + 25) & 4) != 0 )
  {
    if ( !*(_QWORD *)(result + 40) )
      return result;
LABEL_4:
    v7 = *(const char **)(result + 32);
    if ( !*v7 )
      return result;
    v8 = a2[1];
    if ( v8 )
    {
      v11 = v8 + 1;
      v10 = a2[1];
      v9 = *a2;
      --v8;
      if ( a2[2] >= v11 )
        goto LABEL_7;
    }
    else
    {
      v9 = *a2;
      v10 = 1;
      v11 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_7;
    }
    v30 = qvector_reserve(a2, v9, v11, 1);
    *a2 = v30;
    v9 = v30;
LABEL_7:
    a2[1] = v11;
    *(_BYTE *)(v9 + v8) = 1;
    *(_BYTE *)(*a2 + v10) = 0;
    v12 = a2[1];
    if ( v12 )
    {
      v13 = v12 + 1;
      v14 = a2[1];
      v15 = *a2;
      --v12;
      if ( a2[2] >= v13 )
        goto LABEL_9;
    }
    else
    {
      v15 = *a2;
      v14 = 1;
      v13 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_9;
    }
    v31 = qvector_reserve(a2, v15, v13, 1);
    *a2 = v31;
    v15 = v31;
LABEL_9:
    a2[1] = v13;
    *(_BYTE *)(v15 + v12) = v5;
    *(_BYTE *)(*a2 + v14) = 0;
    if ( v7 )
    {
      v16 = a2[1];
      v17 = strlen(v7);
      v18 = v17;
      v19 = v17;
      if ( v16 )
      {
        --v16;
        v19 = v17 + v16;
      }
      v20 = *a2;
      v21 = v19 + 1;
      if ( a2[2] < v19 + 1 )
      {
        v34 = qvector_reserve(a2, v20, v21, 1);
        v21 = v19 + 1;
        *a2 = v34;
        v20 = v34;
      }
      a2[1] = v21;
      *(_BYTE *)(v20 + v19) = 0;
      memmove((void *)(v16 + *a2), v7, v18);
    }
    v22 = a2[1];
    if ( v22 )
    {
      v23 = v22 + 1;
      v24 = a2[1];
      v25 = *a2;
      --v22;
      if ( a2[2] >= v23 )
        goto LABEL_17;
    }
    else
    {
      v25 = *a2;
      v24 = 1;
      v23 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_17;
    }
    v33 = qvector_reserve(a2, v25, v23, 1);
    *a2 = v33;
    v25 = v33;
LABEL_17:
    a2[1] = v23;
    *(_BYTE *)(v25 + v22) = 2;
    *(_BYTE *)(*a2 + v24) = 0;
    v26 = a2[1];
    if ( v26 )
    {
      v27 = v26 + 1;
      v28 = a2[1];
      v29 = *a2;
      --v26;
      if ( a2[2] >= v27 )
      {
LABEL_19:
        a2[1] = v27;
        *(_BYTE *)(v29 + v26) = v5;
        result = *a2;
        *(_BYTE *)(*a2 + v28) = 0;
        return result;
      }
    }
    else
    {
      v29 = *a2;
      v28 = 1;
      v27 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_19;
    }
    v32 = qvector_reserve(a2, v29, v27, 1);
    *a2 = v32;
    v29 = v32;
    goto LABEL_19;
  }
  v5 = a3 == 0 ? 24 : 13;
  if ( *(_QWORD *)(result + 40) )
    goto LABEL_4;
  return result;
}
