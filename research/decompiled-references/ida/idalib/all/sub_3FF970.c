__int64 __fastcall sub_3FF970(_QWORD *a1, __int64 *a2)
{
  char v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // rdi
  __int64 (*v9)(void); // rax
  unsigned __int64 *v10; // rax
  bool v11; // r10
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 (*v14)(void); // rax
  unsigned __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 (*v22)(void); // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  char v27; // al
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  __int64 v45; // rsi
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // [rsp+8h] [rbp-60h]
  unsigned __int64 v51; // [rsp+8h] [rbp-60h]
  unsigned __int64 v53; // [rsp+18h] [rbp-50h]
  bool v54; // [rsp+20h] [rbp-48h]
  bool v55; // [rsp+2Fh] [rbp-39h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = a1[4];
  v7 = a1[3];
  v50 = v7;
  while ( 1 )
  {
    v8 = (unsigned __int64 *)a1[1];
    v9 = *(__int64 (**)(void))(*v8 + 32);
    if ( (char *)v9 == (char *)sub_3DB7B0 )
      v10 = v8 + 2;
    else
      v10 = (unsigned __int64 *)v9();
    v11 = 0;
    if ( v7 >= *v10 && v7 < v10[1] )
      v11 = v7 == (*(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, _QWORD))(*v8 + 40))(v8, v7, 0);
    v12 = (unsigned __int64 *)a1[2];
    v13 = a1[4];
    v14 = *(__int64 (**)(void))(*v12 + 32);
    if ( (char *)v14 == (char *)sub_3DB7B0 )
    {
      v15 = v12 + 2;
    }
    else
    {
      v55 = v11;
      v15 = (unsigned __int64 *)v14();
      v11 = v55;
    }
    if ( v13 >= *v15 && v13 < v15[1] )
    {
      v54 = v11;
      v16 = (*(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, _QWORD))(*v12 + 40))(v12, v13, 0);
      v11 = v54;
      if ( v13 == v16 )
        break;
    }
    if ( v5 )
    {
      if ( v3 )
        goto LABEL_14;
      v6 = a1[4];
      v50 = a1[3];
      if ( !v11 )
        goto LABEL_35;
      goto LABEL_48;
    }
    v27 = v3 & !v11;
    if ( v27 )
      return 0;
LABEL_23:
    v28 = a1[3];
    v29 = a1[4];
    v4 = v29;
    if ( v28 <= v29 )
      v4 = a1[3];
    if ( v4 == -1 )
      return 0;
    if ( v3 )
    {
      v17 = a1[1];
      v5 = 0;
      v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL);
      if ( v18 != sub_3DB7B0 )
        goto LABEL_43;
LABEL_15:
      v19 = v17 + 16;
      goto LABEL_16;
    }
    if ( !v27 )
    {
      v30 = v4;
      if ( !v11 )
      {
LABEL_29:
        if ( v29 != v28 )
        {
          if ( !under_debugger )
            interr(1844);
          BUG();
        }
        v6 = v28;
        v5 = 0;
        goto LABEL_31;
      }
    }
    v50 = a1[3];
    v6 = a1[4];
    v5 = 0x7FFFFFFF;
LABEL_49:
    if ( v50 < v6 )
    {
LABEL_36:
      v35 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1[1] + 40LL))(a1[1], v6, 0);
      a1[3] = v35;
      v7 = v35;
      goto LABEL_37;
    }
LABEL_50:
    if ( v6 >= v50 )
    {
      v28 = v50;
      v30 = v4;
LABEL_31:
      v53 = v30;
      v50 = v28;
      v31 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(*(_QWORD *)a1[1] + 40LL))(a1[1], v28, 1);
      v32 = a1[2];
      v33 = a1[4];
      a1[3] = v31;
      v34 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v32 + 40LL))(v32, v33, 1);
      v7 = a1[3];
      v4 = v53;
      a1[4] = v34;
      goto LABEL_37;
    }
    v40 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1[2] + 40LL))(a1[2], v50, 0);
    v7 = a1[3];
    a1[4] = v40;
LABEL_37:
    v3 = 1;
  }
  if ( v54 )
  {
    v41 = sub_3FF8E0(a1, v5);
    v28 = a1[3];
    v29 = a1[4];
    if ( v41 < 0 )
    {
      v41 = v5;
      v30 = v4;
    }
    else
    {
      v30 = a1[4];
      if ( v28 <= v29 )
        v30 = a1[3];
      if ( v5 )
      {
        v44 = v50;
        v45 = *a2;
        if ( v50 < v6 )
          v44 = v6;
        if ( v44 < v30 )
          v30 = v44 + 1;
        v46 = a2[1];
        v47 = v46 + 1;
        if ( v30 <= v4 )
          v4 = v30;
        if ( a2[2] < v47 )
        {
          v51 = v30;
          v49 = qvector_reserve(a2, v45, v47, 32);
          v30 = v51;
          *a2 = v49;
          v45 = v49;
          v46 = a2[1];
        }
        v48 = v45 + 32 * v46;
        *(_QWORD *)(v48 + 8) = v30;
        *(_QWORD *)v48 = v4;
        *(_QWORD *)(v48 + 16) = v5;
        *(_DWORD *)(v48 + 24) = 3;
        v39 = a2[1] + 1;
        goto LABEL_41;
      }
      if ( v30 == -1 )
        return 0;
    }
    if ( !v41 )
      goto LABEL_29;
    v50 = a1[3];
    v6 = a1[4];
    v5 = v41;
    v4 = v30;
LABEL_35:
    if ( v50 < v6 )
      goto LABEL_36;
    goto LABEL_50;
  }
  if ( !v5 )
  {
    v27 = 1;
    goto LABEL_23;
  }
  if ( !v3 )
  {
    v6 = a1[4];
    v50 = a1[3];
LABEL_48:
    v5 = 0x7FFFFFFF;
    goto LABEL_49;
  }
LABEL_14:
  v17 = a1[1];
  v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL);
  if ( v18 == sub_3DB7B0 )
    goto LABEL_15;
LABEL_43:
  v19 = ((__int64 (*)(void))v18)();
LABEL_16:
  v20 = *(_QWORD *)(v19 + 8);
  v21 = a1[2];
  a1[3] = v20;
  v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 32LL);
  if ( (char *)v22 == (char *)sub_3DB7B0 )
  {
    v23 = v21 + 16;
  }
  else
  {
    v43 = v22();
    v20 = a1[3];
    v23 = v43;
  }
  v24 = *(_QWORD *)(v23 + 8);
  v25 = v20;
  a1[4] = v24;
  if ( v24 <= v20 )
    v25 = v24;
  if ( v25 <= v4 )
    return 0;
  v36 = a2[1];
  v37 = *a2;
  if ( a2[2] < (unsigned __int64)(v36 + 1) )
  {
    v42 = qvector_reserve(a2, v37, v36 + 1, 32);
    *a2 = v42;
    v37 = v42;
    v36 = a2[1];
  }
  v38 = 32 * v36 + v37;
  *(_QWORD *)v38 = v4;
  *(_QWORD *)(v38 + 8) = v25;
  *(_QWORD *)(v38 + 16) = v5;
  *(_DWORD *)(v38 + 24) = 3;
  v39 = a2[1] + 1;
LABEL_41:
  a2[1] = v39;
  return 1;
}
