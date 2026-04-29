unsigned __int64 __fastcall sub_11C210(__int64 a1, __int64 *a2)
{
  char *ph; // rax
  int v4; // edx
  unsigned int v5; // ebp
  char *v6; // rsi
  unsigned int fpvalue_kind; // eax
  bool v8; // cc
  char *v9; // rbp
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  size_t v18; // rax
  __int64 v19; // r12
  size_t v20; // r13
  size_t v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rbp
  unsigned __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rbp
  unsigned __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _BYTE v38[136]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  ph = (char *)get_ph();
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 <= 4 )
  {
    v5 = ph[129];
    v6 = (char *)&qword_80;
    goto LABEL_3;
  }
  if ( v4 > 8 )
  {
    v5 = ph[131];
    v6 = "get_ph";
LABEL_3:
    fpvalue_kind = get_fpvalue_kind(a1, v6);
    v8 = fpvalue_kind <= 3;
    if ( fpvalue_kind != 3 )
      goto LABEL_4;
    goto LABEL_23;
  }
  v5 = ph[130];
  fpvalue_kind = get_fpvalue_kind(a1, 1024);
  v8 = fpvalue_kind <= 3;
  if ( fpvalue_kind != 3 )
  {
LABEL_4:
    if ( v8 )
    {
      if ( fpvalue_kind != 1 )
      {
        if ( fpvalue_kind == 2 )
        {
          v9 = "NAN";
          goto LABEL_8;
        }
LABEL_38:
        if ( !under_debugger )
          sub_383060(51107);
        BUG();
      }
      v33 = v5;
      BYTE1(v33) = BYTE1(v5) | 9;
      v9 = v38;
      realtoasc(v38, 128, a1, v33);
      if ( v38[0] == 32 )
      {
        do
          ++v9;
        while ( *v9 == 32 );
      }
    }
    else
    {
      if ( fpvalue_kind != 4 )
        goto LABEL_38;
      v9 = "-INFINITY";
    }
LABEL_8:
    v10 = a2[1];
    if ( v10 )
      goto LABEL_9;
LABEL_24:
    v13 = *a2;
    v12 = 1;
    v11 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_10;
    goto LABEL_25;
  }
LABEL_23:
  v10 = a2[1];
  v9 = "INFINITY";
  if ( !v10 )
    goto LABEL_24;
LABEL_9:
  v11 = v10 + 1;
  v12 = v10;
  v13 = *a2;
  --v10;
  if ( a2[2] >= v11 )
    goto LABEL_10;
LABEL_25:
  v32 = qvector_reserve(a2, v13, v11, 1);
  *a2 = v32;
  v13 = v32;
LABEL_10:
  a2[1] = v11;
  *(_BYTE *)(v13 + v10) = 1;
  *(_BYTE *)(*a2 + v12) = 0;
  v14 = a2[1];
  if ( v14 )
  {
    v15 = v14 + 1;
    v16 = a2[1];
    v17 = *a2;
    --v14;
    if ( a2[2] >= v15 )
      goto LABEL_12;
  }
  else
  {
    v17 = *a2;
    v16 = 1;
    v15 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_12;
  }
  v34 = qvector_reserve(a2, v17, v15, 1);
  *a2 = v34;
  v17 = v34;
LABEL_12:
  a2[1] = v15;
  *(_BYTE *)(v17 + v14) = 17;
  *(_BYTE *)(*a2 + v16) = 0;
  v18 = strlen(v9);
  v19 = a2[1];
  v20 = v18;
  v21 = v18;
  if ( v19 )
  {
    --v19;
    v21 = v18 + v19;
  }
  v22 = *a2;
  if ( a2[2] < v21 + 1 )
  {
    v37 = qvector_reserve(a2, v22, v21 + 1, 1);
    *a2 = v37;
    v22 = v37;
  }
  a2[1] = v21 + 1;
  *(_BYTE *)(v22 + v21) = 0;
  memmove((void *)(v19 + *a2), v9, v20);
  v23 = a2[1];
  if ( v23 )
  {
    v24 = v23 + 1;
    v25 = a2[1];
    v26 = *a2;
    --v23;
    if ( a2[2] >= v24 )
      goto LABEL_18;
  }
  else
  {
    v26 = *a2;
    v25 = 1;
    v24 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_18;
  }
  v36 = qvector_reserve(a2, v26, v24, 1);
  *a2 = v36;
  v26 = v36;
LABEL_18:
  a2[1] = v24;
  *(_BYTE *)(v26 + v23) = 2;
  *(_BYTE *)(*a2 + v25) = 0;
  v27 = a2[1];
  if ( !v27 )
  {
    v30 = *a2;
    v29 = 1;
    v28 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_20;
LABEL_33:
    v35 = qvector_reserve(a2, v30, v28, 1);
    *a2 = v35;
    v30 = v35;
    goto LABEL_20;
  }
  v28 = v27 + 1;
  v29 = a2[1];
  v30 = *a2;
  --v27;
  if ( a2[2] < v28 )
    goto LABEL_33;
LABEL_20:
  a2[1] = v28;
  *(_BYTE *)(v30 + v27) = 17;
  *(_BYTE *)(*a2 + v29) = 0;
  return v39 - __readfsqword(0x28u);
}
