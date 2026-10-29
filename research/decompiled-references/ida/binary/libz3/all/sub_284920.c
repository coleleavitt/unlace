unsigned __int64 __fastcall sub_284920(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5, int a6)
{
  void (__fastcall *v8)(_QWORD, __int64, __int64, __int64 *, char *); // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rsi
  unsigned int v17; // eax
  _QWORD *v18; // rsi
  __int64 v19; // r15
  __int64 *v20; // r14
  __int64 *v21; // r13
  unsigned int v22; // eax
  unsigned int v23; // r9d
  size_t v24; // rsi
  unsigned int v25; // r12d
  unsigned int *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r15
  __int64 v29; // rcx
  unsigned __int64 result; // rax
  _QWORD *v31; // rcx
  unsigned int v32; // r15d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned int v40; // ecx
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  char **exception; // rbp
  int v46; // [rsp+0h] [rbp-88h]
  __int64 *v48; // [rsp+8h] [rbp-80h]
  unsigned int v50; // [rsp+18h] [rbp-70h]
  unsigned int v51; // [rsp+1Ch] [rbp-6Ch]
  int v52; // [rsp+20h] [rbp-68h]
  char v53[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v54; // [rsp+30h] [rbp-58h] BYREF
  int v55; // [rsp+38h] [rbp-50h]
  int v56; // [rsp+40h] [rbp-48h]
  void *v57; // [rsp+48h] [rbp-40h]

  v8 = (void (__fastcall *)(_QWORD, __int64, __int64, __int64 *, char *))a1[2];
  v50 = a3;
  *(_QWORD *)v53 = 0;
  if ( !v8 )
  {
LABEL_31:
    v36 = sub_15DC610(a1[6], a2, v50, (int)a4, (int)a5, a6, v46, (int)a5, (int)a4, v50, v52, v53[0], v54, v55, v56, v57);
    v37 = v36;
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    v38 = *v48;
    if ( *v48 )
    {
      v39 = v48[1];
      v12 = (*(_DWORD *)(v38 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v39, v38);
    }
    *v48 = v37;
    return (unsigned __int64)v48;
  }
  v8(a1[1], a2, a3, a4, v53);
  v9 = *(_QWORD *)v53;
  if ( *(_QWORD *)v53 )
    ++*(_DWORD *)(*(_QWORD *)v53 + 8LL);
  v10 = *a5;
  if ( !*a5 || (v11 = a5[1], v12 = *(_DWORD *)(v10 + 8) == 1, --*(_DWORD *)(v10 + 8), !v12) )
  {
    *a5 = v9;
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_7;
  }
  sub_15D7BC0(v11, v10);
  *a5 = v9;
  if ( a2 )
LABEL_7:
    ++*(_DWORD *)(a2 + 8);
LABEL_8:
  v13 = (_DWORD *)a1[386];
  if ( v13 )
  {
    v14 = *(v13 - 1);
    v15 = *(v13 - 2);
    if ( v14 == v15 )
    {
      v32 = (3 * v15 + 1) >> 1;
      v33 = 8 * v32 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v33 || v15 >= v32 )
        goto LABEL_47;
      v34 = (unsigned int *)sub_186B300(v13 - 2, v33);
      v35 = v34[1];
      v13 = v34 + 2;
      *v34 = v32;
      a1[386] = v34 + 2;
      LODWORD(v34) = v35;
      v18 = &v13[2 * v35];
      v15 = v32;
      v17 = (_DWORD)v34 + 1;
    }
    else
    {
      v16 = v14;
      v17 = v14 + 1;
      v18 = &v13[2 * v16];
    }
    *v18 = a2;
    *(v13 - 1) = v17;
    if ( v50 )
      goto LABEL_12;
    v28 = *(_QWORD *)v53;
    if ( !*(_QWORD *)v53 )
      goto LABEL_24;
LABEL_22:
    ++*(_DWORD *)(v28 + 8);
    goto LABEL_23;
  }
  v44 = (_QWORD *)sub_186B270(0x18u);
  v13 = v44 + 1;
  v44[1] = a2;
  a1[386] = v44 + 1;
  *v44 = 0x100000002LL;
  if ( !v50 )
  {
    v28 = *(_QWORD *)v53;
    v17 = 1;
    if ( !*(_QWORD *)v53 )
      goto LABEL_25;
    goto LABEL_22;
  }
LABEL_12:
  v19 = *a4;
  v20 = a4;
  v21 = &a4[v50];
  if ( *a4 )
    goto LABEL_16;
  while ( 1 )
  {
    v22 = *(v13 - 1);
    if ( v22 != *(v13 - 2) )
    {
      ++v20;
      *(_QWORD *)&v13[2 * v22] = v19;
      *(v13 - 1) = v22 + 1;
      if ( v21 == v20 )
        break;
      goto LABEL_15;
    }
    v23 = (3 * v22 + 1) >> 1;
    v24 = 8 * v23 + 8;
    v25 = v23;
    if ( 8 * v22 + 8 >= (unsigned int)v24 || v22 >= v23 )
      goto LABEL_47;
    ++v20;
    v26 = (unsigned int *)sub_186B300(v13 - 2, v24);
    v27 = v26[1];
    v13 = v26 + 2;
    *v26 = v25;
    a1[386] = v26 + 2;
    *(_QWORD *)&v26[2 * v27 + 2] = v19;
    v26[1] = v27 + 1;
    if ( v21 == v20 )
      break;
LABEL_15:
    v19 = *v20;
    if ( *v20 )
LABEL_16:
      ++*(_DWORD *)(v19 + 8);
  }
  v28 = *(_QWORD *)v53;
  if ( *(_QWORD *)v53 )
    goto LABEL_22;
LABEL_23:
  v17 = *(v13 - 1);
  v15 = *(v13 - 2);
LABEL_24:
  if ( v17 != v15 )
  {
LABEL_25:
    v29 = v17;
    result = v17 + 1;
    v31 = &v13[2 * v29];
    goto LABEL_26;
  }
  v40 = (3 * v17 + 1) >> 1;
  v41 = 8 * v40 + 8;
  if ( 8 * v17 + 8 >= (unsigned int)v41 || v17 >= v40 )
  {
LABEL_47:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v54, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v54);
    sub_233E40((__int64)&v54);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v51 = (3 * v17 + 1) >> 1;
  v42 = (unsigned int *)sub_186B300(v13 - 2, v41);
  v13 = v42 + 2;
  *v42 = v51;
  v43 = v42[1];
  a1[386] = v42 + 2;
  LODWORD(v42) = v43;
  v31 = &v13[2 * v43];
  result = (unsigned int)((_DWORD)v42 + 1);
LABEL_26:
  v12 = *(_QWORD *)v53 == 0;
  *v31 = v28;
  *(v13 - 1) = result;
  if ( v12 )
    goto LABEL_31;
  return result;
}

