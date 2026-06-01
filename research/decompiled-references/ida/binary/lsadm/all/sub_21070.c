void __fastcall sub_21070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rbp
  __int64 v9; // rbx
  _QWORD *v11; // r14
  const char *v12; // r11
  const char *v13; // rdi
  __int64 v14; // r13
  _QWORD *v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // r12
  __int64 v21; // r12
  __int64 v22; // rbx
  _QWORD *v23; // r13
  const char *v24; // rsi
  const char *v25; // r9
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+10h] [rbp-58h]
  __int64 v35; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+18h] [rbp-50h]
  __int64 v38; // [rsp+20h] [rbp-48h]

  v6 = a4;
  v7 = a2;
  v8 = a1;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v20 = (_QWORD *)(a1 + 8 * a2);
    if ( (a3 & 1) == 0 )
    {
      v9 = a2;
      if ( a2 == (a3 - 2) / 2 )
      {
LABEL_25:
        v30 = 2 * v9 + 2;
        v31 = *(_QWORD *)(v8 + 8 * v30 - 8);
        v9 = v30 - 1;
        *v20 = v31;
        v20 = (_QWORD *)(v8 + 8 * v9);
        goto LABEL_12;
      }
    }
    goto LABEL_23;
  }
  v34 = a3 & 1;
  v9 = a2;
  v11 = a5;
  v38 = a3;
  v32 = (a3 - 1) / 2;
  do
  {
    v14 = 2 * (v9 + 1);
    v15 = (_QWORD *)(a1 + 16 * (v9 + 1));
    v16 = *v15;
    v17 = *v11 + 40LL * *(v15 - 1);
    v18 = *v11 + 40LL * *v15;
    v19 = *(_QWORD *)(v18 + 8);
    if ( *(_QWORD *)(v17 + 8) )
    {
      v12 = *(const char **)v17;
      v13 = s1;
      if ( !v19 )
        goto LABEL_5;
    }
    else
    {
      v12 = s1;
      if ( !v19 )
        goto LABEL_7;
    }
    v13 = *(const char **)v18;
LABEL_5:
    if ( strcmp(v13, v12) < 0 )
    {
      --v14;
      v15 = (_QWORD *)(a1 + 8 * v14);
      v16 = *v15;
    }
LABEL_7:
    *(_QWORD *)(a1 + 8 * v9) = v16;
    v9 = v14;
  }
  while ( v14 < v32 );
  v8 = a1;
  v7 = a2;
  v20 = v15;
  v6 = a4;
  a5 = v11;
  if ( !v34 && (v38 - 2) / 2 == v14 )
    goto LABEL_25;
LABEL_12:
  if ( v9 > v7 )
  {
    v21 = v9;
    v35 = v7;
    v22 = (v9 - 1) / 2;
    v37 = v6;
    v33 = 40 * v6;
    v23 = a5;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v8 + 8 * v22);
      v27 = *v23 + v33;
      v28 = *v23 + 40 * v26;
      v29 = *(_QWORD *)(v28 + 8);
      if ( *(_QWORD *)(v27 + 8) )
      {
        v24 = *(const char **)v27;
        v25 = s1;
        if ( !v29 )
          goto LABEL_15;
      }
      else
      {
        if ( !v29 )
        {
          v6 = v37;
          v20 = (_QWORD *)(v8 + 8 * v21);
          break;
        }
        v24 = s1;
      }
      v25 = *(const char **)v28;
LABEL_15:
      if ( strcmp(v25, v24) >= 0 )
      {
        v6 = v37;
        v20 = (_QWORD *)(v8 + 8 * v21);
        break;
      }
      *(_QWORD *)(v8 + 8 * v21) = v26;
      v21 = v22;
      if ( v35 >= v22 )
      {
        v6 = v37;
        v20 = (_QWORD *)(v8 + 8 * v22);
        break;
      }
      v22 = (v22 - 1) / 2;
    }
  }
LABEL_23:
  *v20 = v6;
}

