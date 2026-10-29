__int64 __fastcall sub_37CCC0(_QWORD *a1, unsigned int a2, const char *a3, const char *a4, unsigned __int8 a5)
{
  const char *v7; // r12
  __int64 (__fastcall *v8)(_QWORD *, char); // rax
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  _BYTE *v17; // r13
  void *v18; // rdi
  char *v19; // rbp
  signed __int64 v20; // r15
  signed __int64 v21; // r11
  signed __int64 v22; // rdx
  __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64); // rax
  char v25; // al
  _BYTE *v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rbp
  void (__fastcall *v29)(_QWORD *, __int64, _QWORD); // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-68h]
  signed __int64 v35; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  bool v37; // [rsp+17h] [rbp-51h]
  signed __int64 v38; // [rsp+18h] [rbp-50h]
  unsigned int v40; // [rsp+24h] [rbp-44h]
  _QWORD *v41; // [rsp+28h] [rbp-40h]

  if ( !a4 )
  {
LABEL_11:
    a1[4] = 0;
    return 0;
  }
  v7 = a4;
  v40 = a5;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 64LL))(a1, a5);
  if ( !a3 )
  {
    v41 = a1 + 3;
LABEL_13:
    v37 = 0;
    goto LABEL_14;
  }
  (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, a3, 0);
  v8 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v8 == sub_3598B0 )
  {
    v9 = a1[4];
    if ( v9 )
    {
      v11 = v9 + 1;
      v10 = a1[4];
      --v9;
    }
    else
    {
      v10 = 1;
      v11 = 2;
    }
    v12 = a1[3];
    v41 = a1 + 3;
    if ( a1[5] < v11 )
    {
      v33 = qvector_reserve(a1 + 3, v12, v11, 1);
      a1[3] = v33;
      v12 = v33;
    }
    a1[4] = v11;
    *(_BYTE *)(v12 + v9) = 32;
    *(_BYTE *)(a1[3] + v10) = 0;
  }
  else
  {
    v8(a1, 32);
    v41 = a1 + 3;
  }
  v13 = qword_2CA1698;
  if ( strcmp(a3, *(const char **)(qword_2CA1698 + 952)) )
    goto LABEL_13;
  v37 = *(_QWORD *)(v13 + 1240) != 0;
LABEL_14:
  v15 = a1[4];
  v16 = 0;
  if ( v15 )
    v16 = v15 - 1;
  v17 = (_BYTE *)a1[3];
  v36 = v16;
  v34 = a1[5];
  while ( 1 )
  {
    v19 = strchr(v7, 10);
    if ( !v19 )
      v19 = (char *)&v7[strlen(v7)];
    v20 = v19 - v7;
    v21 = v19 - v7;
    if ( v15 )
    {
      --v15;
      v21 = v20 + v15;
    }
    v22 = v21 + 1;
    if ( v34 < v21 + 1 )
    {
      v38 = v21;
      v35 = v21 + 1;
      v31 = qvector_reserve(v41, v17, v22, 1);
      v21 = v38;
      v22 = v35;
      a1[3] = v31;
      v17 = (_BYTE *)v31;
    }
    a1[4] = v22;
    v17[v21] = 0;
    memmove((void *)(v15 + a1[3]), v7, v19 - v7);
    v23 = *a1;
    if ( !v20 )
      break;
    if ( v37 )
    {
      v29 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(v23 + 56);
      v30 = closing_comment();
      v29(a1, v30, 0);
      v23 = *a1;
    }
LABEL_39:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(v23 + 72))(a1, v40);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 136LL))(a1, a1[3], a2) )
      return 1;
LABEL_31:
    if ( !*v19 )
      goto LABEL_11;
    v17 = (_BYTE *)a1[3];
    v7 = v19 + 1;
    v26 = v17;
    if ( v36 )
    {
      v27 = a1[4];
      v28 = v36 + 1;
      if ( v27 < v36 + 1 )
      {
        if ( a1[5] < v28 )
        {
          v32 = qvector_reserve(v41, a1[3], v36 + 1, 1);
          v27 = a1[4];
          a1[3] = v32;
          v17 = (_BYTE *)v32;
        }
        memset(&v17[v27], 0, v28 - v27);
        a1[4] = v28;
        v26 = (_BYTE *)a1[3];
      }
      else if ( v28 != v27 )
      {
        a1[4] = v28;
      }
      v26[v36] = 0;
      v17 = (_BYTE *)a1[3];
      v34 = a1[5];
    }
    else if ( v17 )
    {
      a1[4] = 0;
      v18 = v17;
      v17 = nullptr;
      qfree(v18);
      a1[3] = 0;
      a1[5] = 0;
      v34 = 0;
    }
    else
    {
      v34 = a1[5];
    }
    v15 = a1[4];
  }
  if ( !v37 )
    goto LABEL_39;
  v24 = *(__int64 (__fastcall **)(__int64))(v23 + 160);
  if ( v24 == sub_37C610 )
    v25 = sub_37CC70((__int64)a1, 0);
  else
    v25 = v24((__int64)a1);
  if ( !v25 )
    goto LABEL_31;
  return 1;
}

