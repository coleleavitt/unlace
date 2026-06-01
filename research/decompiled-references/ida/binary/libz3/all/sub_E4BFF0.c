__int64 __fastcall sub_E4BFF0(__int64 a1, unsigned int a2)
{
  __int64 v3; // r13
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // r14
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // r15
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 (__fastcall *v12)(); // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 (__fastcall *v16)(); // rax
  __int64 v17; // r13
  __int64 (__fastcall *v18)(); // rax
  __int64 v19; // r14
  __int64 (__fastcall *v20)(); // rax
  __int64 v21; // r15
  __int64 (__fastcall *v22)(); // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 (__fastcall *v26)(); // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 (__fastcall *v30)(); // rax
  __int64 v31; // r14
  __int64 (__fastcall *v32)(); // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // r13
  __int64 (__fastcall *v36)(); // rax
  __int64 v37; // rdi
  __int64 v38; // rdi

  v3 = *(_QWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 96) = 1;
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 200LL);
  if ( v4 != sub_E4BFF0 )
    goto LABEL_36;
  v5 = *(_QWORD *)(v3 + 104);
  *(_BYTE *)(v3 + 96) = 1;
  v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 200LL);
  if ( v6 != sub_E4BFF0 )
    goto LABEL_38;
  v7 = *(_QWORD *)(v5 + 104);
  *(_BYTE *)(v5 + 96) = 1;
  v8 = *(__int64 (__fastcall **)())(*(_QWORD *)v7 + 200LL);
  if ( v8 == sub_E4BFF0 )
  {
    v9 = *(_QWORD *)(v7 + 104);
    *(_BYTE *)(v7 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 200LL))(v9);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 112) + 200LL))(*(_QWORD *)(v7 + 112), a2);
  }
  else
  {
    ((void (__fastcall *)(__int64))v8)(v7);
  }
  v5 = *(_QWORD *)(v5 + 112);
  v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 200LL);
  if ( v6 == sub_E4BFF0 )
  {
    v10 = *(_QWORD *)(v5 + 104);
    *(_BYTE *)(v5 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 200LL))(v10, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 112) + 200LL))(*(_QWORD *)(v5 + 112), a2);
  }
  else
  {
LABEL_38:
    ((void (__fastcall *)(__int64, _QWORD))v6)(v5, a2);
  }
  v3 = *(_QWORD *)(v3 + 112);
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 200LL);
  if ( v4 != sub_E4BFF0 )
    goto LABEL_36;
  v11 = *(_QWORD *)(v3 + 104);
  *(_BYTE *)(v3 + 96) = 1;
  v12 = *(__int64 (__fastcall **)())(*(_QWORD *)v11 + 200LL);
  if ( v12 == sub_E4BFF0 )
  {
    v13 = *(_QWORD *)(v11 + 104);
    *(_BYTE *)(v11 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 200LL))(v13, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 112) + 200LL))(*(_QWORD *)(v11 + 112), a2);
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v12)(v11, a2);
  }
  v3 = *(_QWORD *)(v3 + 112);
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 200LL);
  if ( v4 == sub_E4BFF0 )
  {
    v14 = *(_QWORD *)(v3 + 104);
    *(_BYTE *)(v3 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 200LL))(v14, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 112) + 200LL))(*(_QWORD *)(v3 + 112), a2);
  }
  else
  {
LABEL_36:
    ((void (__fastcall *)(__int64, _QWORD))v4)(v3, a2);
  }
  v15 = *(_QWORD *)(a1 + 112);
  v16 = *(__int64 (__fastcall **)())(*(_QWORD *)v15 + 200LL);
  if ( v16 != sub_E4BFF0 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))v16)(v15, a2);
  v17 = *(_QWORD *)(v15 + 104);
  *(_BYTE *)(v15 + 96) = 1;
  v18 = *(__int64 (__fastcall **)())(*(_QWORD *)v17 + 200LL);
  if ( v18 != sub_E4BFF0 )
    goto LABEL_37;
  v19 = *(_QWORD *)(v17 + 104);
  *(_BYTE *)(v17 + 96) = 1;
  v20 = *(__int64 (__fastcall **)())(*(_QWORD *)v19 + 200LL);
  if ( v20 != sub_E4BFF0 )
    goto LABEL_39;
  v21 = *(_QWORD *)(v19 + 104);
  *(_BYTE *)(v19 + 96) = 1;
  v22 = *(__int64 (__fastcall **)())(*(_QWORD *)v21 + 200LL);
  if ( v22 == sub_E4BFF0 )
  {
    v23 = *(_QWORD *)(v21 + 104);
    *(_BYTE *)(v21 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 200LL))(v23, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 112) + 200LL))(*(_QWORD *)(v21 + 112), a2);
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v22)(v21, a2);
  }
  v19 = *(_QWORD *)(v19 + 112);
  v20 = *(__int64 (__fastcall **)())(*(_QWORD *)v19 + 200LL);
  if ( v20 == sub_E4BFF0 )
  {
    v24 = *(_QWORD *)(v19 + 104);
    *(_BYTE *)(v19 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 200LL))(v24, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v19 + 112) + 200LL))(*(_QWORD *)(v19 + 112), a2);
  }
  else
  {
LABEL_39:
    ((void (__fastcall *)(__int64, _QWORD))v20)(v19, a2);
  }
  v17 = *(_QWORD *)(v17 + 112);
  v18 = *(__int64 (__fastcall **)())(*(_QWORD *)v17 + 200LL);
  if ( v18 != sub_E4BFF0 )
    goto LABEL_37;
  v25 = *(_QWORD *)(v17 + 104);
  *(_BYTE *)(v17 + 96) = 1;
  v26 = *(__int64 (__fastcall **)())(*(_QWORD *)v25 + 200LL);
  if ( v26 == sub_E4BFF0 )
  {
    v27 = *(_QWORD *)(v25 + 104);
    *(_BYTE *)(v25 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 200LL))(v27, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v25 + 112) + 200LL))(*(_QWORD *)(v25 + 112), a2);
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v26)(v25, a2);
  }
  v17 = *(_QWORD *)(v17 + 112);
  v18 = *(__int64 (__fastcall **)())(*(_QWORD *)v17 + 200LL);
  if ( v18 == sub_E4BFF0 )
  {
    v28 = *(_QWORD *)(v17 + 104);
    *(_BYTE *)(v17 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 200LL))(v28, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + 112) + 200LL))(*(_QWORD *)(v17 + 112), a2);
  }
  else
  {
LABEL_37:
    ((void (__fastcall *)(__int64, _QWORD))v18)(v17, a2);
  }
  v15 = *(_QWORD *)(v15 + 112);
  v16 = *(__int64 (__fastcall **)())(*(_QWORD *)v15 + 200LL);
  if ( v16 != sub_E4BFF0 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))v16)(v15, a2);
  v29 = *(_QWORD *)(v15 + 104);
  *(_BYTE *)(v15 + 96) = 1;
  v30 = *(__int64 (__fastcall **)())(*(_QWORD *)v29 + 200LL);
  if ( v30 != sub_E4BFF0 )
    goto LABEL_40;
  v31 = *(_QWORD *)(v29 + 104);
  *(_BYTE *)(v29 + 96) = 1;
  v32 = *(__int64 (__fastcall **)())(*(_QWORD *)v31 + 200LL);
  if ( v32 == sub_E4BFF0 )
  {
    v33 = *(_QWORD *)(v31 + 104);
    *(_BYTE *)(v31 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 200LL))(v33, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v31 + 112) + 200LL))(*(_QWORD *)(v31 + 112), a2);
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v32)(v31, a2);
  }
  v29 = *(_QWORD *)(v29 + 112);
  v30 = *(__int64 (__fastcall **)())(*(_QWORD *)v29 + 200LL);
  if ( v30 == sub_E4BFF0 )
  {
    v34 = *(_QWORD *)(v29 + 104);
    *(_BYTE *)(v29 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34 + 200LL))(v34, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v29 + 112) + 200LL))(*(_QWORD *)(v29 + 112), a2);
  }
  else
  {
LABEL_40:
    ((void (__fastcall *)(__int64, _QWORD))v30)(v29, a2);
  }
  v15 = *(_QWORD *)(v15 + 112);
  v16 = *(__int64 (__fastcall **)())(*(_QWORD *)v15 + 200LL);
  if ( v16 != sub_E4BFF0 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v16)(v15, a2);
  v35 = *(_QWORD *)(v15 + 104);
  *(_BYTE *)(v15 + 96) = 1;
  v36 = *(__int64 (__fastcall **)())(*(_QWORD *)v35 + 200LL);
  if ( v36 == sub_E4BFF0 )
  {
    v37 = *(_QWORD *)(v35 + 104);
    *(_BYTE *)(v35 + 96) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 200LL))(v37, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v35 + 112) + 200LL))(*(_QWORD *)(v35 + 112), a2);
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v36)(v35, a2);
  }
  v15 = *(_QWORD *)(v15 + 112);
  v16 = *(__int64 (__fastcall **)())(*(_QWORD *)v15 + 200LL);
  if ( v16 != sub_E4BFF0 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v16)(v15, a2);
  v38 = *(_QWORD *)(v15 + 104);
  *(_BYTE *)(v15 + 96) = 1;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v38 + 200LL))(v38, a2);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 112) + 200LL))(*(_QWORD *)(v15 + 112), a2);
}

