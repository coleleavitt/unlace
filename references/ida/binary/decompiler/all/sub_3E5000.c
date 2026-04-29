bool __fastcall sub_3E5000(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v4; // r13
  int v5; // r13d
  __int64 v6; // r15
  void *(*v7)(); // rdx
  int v8; // eax
  int v9; // r15d
  __int64 v10; // r13
  void *(*v11)(); // rax
  int v12; // edx
  int v13; // r13d
  int v14; // eax
  int v15; // r13d
  void *(*v16)(); // rax
  int v17; // r13d
  void *(*v18)(); // rax
  __int64 v19; // rax
  __int64 v20; // r15
  int v21; // ecx
  void *(*v22)(); // rdx
  int v23; // r13d
  __int64 v24; // r12
  int v25; // r15d
  int v26; // eax
  __int64 v27; // rbp
  int v28; // r13d
  int v29; // eax
  __int64 v30; // r15
  void *(*v31)(); // rdx
  int v32; // r13d
  int v33; // edx
  int v34; // r15d
  int v35; // eax
  int v36; // r12d
  int v37; // r13d
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r13d
  void *(*v43)(); // rax
  void *(*v44)(); // rax
  int v45; // r15d
  void *(*v46)(); // rax
  __int64 v47; // rax
  __int64 v48; // r13
  void *(*v49)(); // rax
  __int64 v50; // [rsp+8h] [rbp-40h]
  int v51; // [rsp+8h] [rbp-40h]
  int v52; // [rsp+8h] [rbp-40h]
  __int64 v53; // [rsp+8h] [rbp-40h]
  __int64 v54; // [rsp+8h] [rbp-40h]
  int v55; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 280);
  if ( *(_BYTE *)(a1 + 392) )
  {
    if ( *(int *)(v2 + 68) > 0 )
      return 0;
    v4 = *a2;
    if ( v4 > (int)(sub_E38F0(*(_QWORD *)(a1 + 280))
                  + 4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 280) + 1504LL) + 80LL)) )
      return 0;
  }
  sub_197050(a1, a2);
  v5 = *((_DWORD *)a2 + 6);
  if ( v5 < 0 )
    return 0;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  v8 = 8;
  if ( v7 != sub_3DF4D0 )
    v8 = *(char *)(((__int64 (__fastcall *)(__int64))v7)(a1) + 12);
  if ( v5 > (int)v6 * v8 )
    return 0;
  v9 = *((_DWORD *)a2 + 7);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  if ( v11 == sub_3DF4D0 )
  {
    if ( v9 < 8 * (int)v10 )
      return 0;
    goto LABEL_11;
  }
  if ( v9 < (int)v10 * *(char *)(((__int64 (__fastcall *)(__int64))v11)(a1) + 12) )
    return 0;
  v9 = *((_DWORD *)a2 + 7);
  v16 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  v50 = *(_QWORD *)(a1 + 24);
  LODWORD(v10) = v50;
  if ( v16 == sub_3DF4D0 )
  {
LABEL_11:
    v12 = *(_DWORD *)(a1 + 48);
    v13 = 8 * v10;
    v14 = 16;
    goto LABEL_12;
  }
  v17 = *(char *)(((__int64 (__fastcall *)(__int64))v16)(a1) + 12);
  v18 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  v13 = v50 * v17;
  v12 = *(_DWORD *)(a1 + 48);
  if ( v18 == sub_3DF4D0 )
  {
    v14 = 16;
  }
  else
  {
    v51 = *(_DWORD *)(a1 + 48);
    v19 = ((__int64 (__fastcall *)(__int64))v18)(a1);
    v12 = v51;
    v14 = *(char *)(v19 + 13);
  }
LABEL_12:
  if ( v13 + v14 * v12 < v9 )
    return 0;
  v15 = *((_DWORD *)a2 + 6);
  if ( (v15 & 7) != 0 || (*((_DWORD *)a2 + 7) & 0xF) != 0 )
    return 0;
  if ( a2[1] != -1 )
    goto LABEL_16;
  v30 = *(_QWORD *)(a1 + 24);
  v31 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  if ( v31 == sub_3DF4D0 )
  {
    if ( v15 == 8 * (_DWORD)v30 )
    {
      v32 = *((_DWORD *)a2 + 7);
LABEL_32:
      v33 = *(_DWORD *)(a1 + 48);
      v34 = 8 * v30;
      v35 = 16;
      goto LABEL_33;
    }
    return 0;
  }
  if ( v15 != (_DWORD)v30 * *(char *)(((__int64 (__fastcall *)(__int64))v31)(a1) + 12) )
    return 0;
  v32 = *((_DWORD *)a2 + 7);
  v44 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  v54 = *(_QWORD *)(a1 + 24);
  LODWORD(v30) = v54;
  if ( v44 == sub_3DF4D0 )
    goto LABEL_32;
  v45 = *(char *)(((__int64 (__fastcall *)(__int64))v44)(a1) + 12);
  v46 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  v34 = v54 * v45;
  v33 = *(_DWORD *)(a1 + 48);
  if ( v46 == sub_3DF4D0 )
  {
    v35 = 16;
  }
  else
  {
    v55 = *(_DWORD *)(a1 + 48);
    v47 = ((__int64 (__fastcall *)(__int64))v46)(a1);
    v33 = v55;
    v35 = *(char *)(v47 + 13);
  }
LABEL_33:
  if ( v35 * v33 + v34 != v32 )
    return 0;
  a2[1] = *(_QWORD *)(a1 + 368);
LABEL_16:
  if ( !*(_BYTE *)(a1 + 392) )
  {
    *(_DWORD *)(v2 + 68) = 0;
    return 1;
  }
  v20 = *(_QWORD *)(a1 + 24);
  v21 = *((_DWORD *)a2 + 7);
  v22 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  v23 = v20;
  if ( v22 == sub_3DF4D0 )
  {
    v24 = *(_QWORD *)(a1 + 48);
    v25 = 8 * v20;
    v26 = v24;
    goto LABEL_25;
  }
  v52 = *((_DWORD *)a2 + 7);
  v39 = ((__int64 (__fastcall *)(__int64))v22)(a1);
  v24 = *(_QWORD *)(a1 + 48);
  v21 = v52;
  v22 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  v25 = *(char *)(v39 + 12) * (_DWORD)v20;
  v26 = v24;
  if ( v22 == sub_3DF4D0 )
  {
    v23 = *(_DWORD *)(a1 + 24);
LABEL_25:
    if ( v21 != v25 + 16 * v26 )
    {
      v27 = a2[1];
      goto LABEL_27;
    }
    goto LABEL_35;
  }
  v40 = ((__int64 (__fastcall *)(__int64))v22)(a1);
  v22 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  v23 = *(_QWORD *)(a1 + 24);
  if ( v52 != v25 + (_DWORD)v24 * *(char *)(v40 + 13) )
  {
    v27 = a2[1];
    if ( v22 != sub_3DF4D0 )
    {
      v53 = *(_QWORD *)(a1 + 24);
      v41 = ((__int64 (__fastcall *)(__int64))v22)(a1);
      LODWORD(v24) = *(_DWORD *)(a1 + 48);
      v42 = *(char *)(v41 + 12);
      v43 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
      v28 = v53 * v42;
      if ( v43 == sub_3DF4D0 )
        v29 = 16;
      else
        v29 = *(char *)(((__int64 (__fastcall *)(__int64))v43)(a1) + 13);
      return *(_QWORD *)(*(_QWORD *)(a1 + 280) + 144LL) >= (unsigned __int64)(v27 + v29 * (int)v24 + v28);
    }
    v24 = *(_QWORD *)(a1 + 48);
LABEL_27:
    v28 = 8 * v23;
    v29 = 16;
    return *(_QWORD *)(*(_QWORD *)(a1 + 280) + 144LL) >= (unsigned __int64)(v27 + v29 * (int)v24 + v28);
  }
LABEL_35:
  v36 = *((_DWORD *)a2 + 6);
  if ( v22 == sub_3DF4D0 )
  {
    v37 = 8 * v23;
    if ( v36 == v37 )
      return 1;
    v38 = a2[1];
  }
  else
  {
    if ( v36 == v23 * *(char *)(((__int64 (__fastcall *)(__int64))v22)(a1) + 12) )
      return 1;
    v38 = a2[1];
    v48 = *(_QWORD *)(a1 + 24);
    v49 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
    if ( v49 == sub_3DF4D0 )
      v37 = 8 * v48;
    else
      v37 = *(char *)(((__int64 (__fastcall *)(__int64))v49)(a1) + 12) * (_DWORD)v48;
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 280) + 144LL) >= (unsigned __int64)(v37 + v38);
}
