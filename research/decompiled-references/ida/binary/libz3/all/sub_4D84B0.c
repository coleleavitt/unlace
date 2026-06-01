__int64 __fastcall sub_4D84B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **exception; // rbp
  char **v7; // rbp
  char **v8; // rbp
  char **v9; // rbp
  _QWORD *v13; // rdx
  _QWORD *v14; // r13
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // eax
  __int64 v18; // r14
  unsigned int v19; // r10d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rsi
  unsigned int *v23; // rdi
  int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // rsi
  _QWORD *v27; // r14
  __int64 i; // r15
  __int64 v29; // r13
  __int64 v30; // rsi
  int v31; // eax
  unsigned int *v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // r10d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r14
  unsigned __int64 v39; // r15
  __int64 v40; // rsi
  int v41; // eax
  _QWORD *v42; // rsi
  _QWORD *v43; // r13
  unsigned int v44; // eax
  unsigned int v45; // r9d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r14
  unsigned __int64 v50; // r15
  __int64 v51; // rcx
  int v52; // eax
  unsigned int *v53; // rsi
  _QWORD *v54; // r13
  unsigned int v55; // eax
  unsigned int v56; // ecx
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rcx
  __int64 result; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  unsigned int v64; // [rsp+4h] [rbp-84h]
  unsigned int v65; // [rsp+4h] [rbp-84h]
  unsigned int v66; // [rsp+4h] [rbp-84h]
  unsigned int v67; // [rsp+4h] [rbp-84h]
  unsigned int v68; // [rsp+8h] [rbp-80h]
  unsigned int v69; // [rsp+Ch] [rbp-7Ch]
  unsigned int v70; // [rsp+10h] [rbp-78h]
  unsigned int v71; // [rsp+14h] [rbp-74h]
  int v72; // [rsp+18h] [rbp-70h]
  int v73; // [rsp+1Ch] [rbp-6Ch]
  __int64 v74[11]; // [rsp+30h] [rbp-58h] BYREF

  v13 = *(_QWORD **)a6;
  if ( *(_QWORD *)a6 )
    *((_DWORD *)v13 - 1) = 0;
  v14 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
    v69 = *((_DWORD *)v14 - 1);
  else
    v69 = 0;
  if ( *(_QWORD *)a2 )
  {
    v70 = *(_DWORD *)(*(_QWORD *)a2 - 4LL);
    v15 = v70;
  }
  else
  {
    v70 = 0;
    v15 = 0;
  }
  v16 = v15 - *(_DWORD *)(a2 + 8);
  v73 = *(_DWORD *)(a2 + 8);
  v72 = *(_DWORD *)(a1 + 8);
  v68 = v16;
  v71 = v69 - v72;
  if ( v69 != v72 )
  {
    if ( !v13 )
    {
      v18 = 0;
      v25 = (_QWORD *)sub_186B270(0x18u);
      v13 = v25 + 1;
      *v25 = 2;
      v24 = 1;
      *(_QWORD *)a6 = v13;
      v23 = (unsigned int *)v13;
      goto LABEL_14;
    }
    v17 = *((_DWORD *)v13 - 1);
    v18 = 0;
    if ( v17 != *((_DWORD *)v13 - 2) )
      goto LABEL_16;
LABEL_10:
    v19 = (3 * v17 + 1) >> 1;
    v20 = 8 * v19 + 8;
    if ( 8 * v17 + 8 >= (unsigned int)v20 || v17 >= v19 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v74, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v74);
      sub_233E40((__int64)v74);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v64 = (3 * v17 + 1) >> 1;
    v21 = (unsigned int *)sub_186B300(v13 - 1, v20);
    v22 = v21[1];
    v13 = v21 + 2;
    *v21 = v64;
    *(_QWORD *)a6 = v21 + 2;
    v23 = &v21[2 * v22 + 2];
    v24 = v22 + 1;
LABEL_14:
    while ( 1 )
    {
      v18 += 8;
      *(_QWORD *)v23 = *v14;
      *((_DWORD *)v13 - 1) = v24;
      if ( 8LL * (v69 - v72) == v18 )
        break;
      v17 = *((_DWORD *)v13 - 1);
      v14 = (_QWORD *)(v18 + *(_QWORD *)a1);
      if ( v17 == *((_DWORD *)v13 - 2) )
        goto LABEL_10;
LABEL_16:
      v26 = v17;
      v24 = v17 + 1;
      v23 = (unsigned int *)&v13[v26];
    }
    if ( v68 )
    {
      v27 = *(_QWORD **)a2;
      i = 0;
      v29 = 8LL * v68;
      goto LABEL_22;
    }
LABEL_45:
    if ( v71 < v69 )
    {
      v38 = 8LL * v71;
      v43 = (_QWORD *)(v38 + *(_QWORD *)a1);
      v39 = 8 * (v71 + (unsigned __int64)(unsigned int)(v72 - 1) + 1);
      if ( v13 )
        goto LABEL_31;
      v61 = (_QWORD *)sub_186B270(0x18u);
      v13 = v61 + 1;
      *v61 = 2;
      v41 = 1;
      *(_QWORD *)a6 = v13;
      v42 = v13;
      goto LABEL_29;
    }
LABEL_50:
    if ( v68 < v70 )
    {
      v49 = 8LL * v68;
      v50 = 8 * (v68 + (unsigned __int64)(unsigned int)(v73 - 1) + 1);
      v54 = (_QWORD *)(v49 + *(_QWORD *)a2);
      if ( v13 )
        goto LABEL_40;
      v62 = (_QWORD *)sub_186B270(0x18u);
      v13 = v62 + 1;
      *v62 = 2;
      v52 = 1;
      *(_QWORD *)a6 = v13;
      v53 = (unsigned int *)v13;
      goto LABEL_38;
    }
    goto LABEL_44;
  }
  if ( !v16 )
    goto LABEL_45;
  v27 = *(_QWORD **)a2;
  v29 = 8LL * v16;
  if ( !v13 )
  {
    i = 0;
    v63 = (_QWORD *)sub_186B270(0x18u);
    v13 = v63 + 1;
    *v63 = 2;
    v31 = 1;
    *(_QWORD *)a6 = v13;
    v32 = (unsigned int *)v13;
    goto LABEL_20;
  }
  for ( i = 0; ; v27 = (_QWORD *)(i + *(_QWORD *)a2) )
  {
LABEL_22:
    v33 = *((_DWORD *)v13 - 1);
    if ( v33 == *((_DWORD *)v13 - 2) )
    {
      v34 = (3 * v33 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v33 + 8 >= (unsigned int)v35 || v33 >= v34 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v74, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v74);
        sub_233E40((__int64)v74);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = (3 * v33 + 1) >> 1;
      v36 = (unsigned int *)sub_186B300(v13 - 1, v35);
      v37 = v36[1];
      v13 = v36 + 2;
      *v36 = v65;
      *(_QWORD *)a6 = v36 + 2;
      v32 = &v36[2 * v37 + 2];
      v31 = v37 + 1;
    }
    else
    {
      v30 = v33;
      v31 = v33 + 1;
      v32 = (unsigned int *)&v13[v30];
    }
LABEL_20:
    i += 8;
    *(_QWORD *)v32 = *v27;
    *((_DWORD *)v13 - 1) = v31;
    if ( v29 == i )
      break;
  }
  if ( v71 >= v69 )
    goto LABEL_50;
  v38 = 8LL * v71;
  v39 = 8 * (v71 + (unsigned __int64)(unsigned int)(v72 - 1) + 1);
  do
  {
    v43 = (_QWORD *)(v38 + *(_QWORD *)a1);
LABEL_31:
    v44 = *((_DWORD *)v13 - 1);
    if ( v44 == *((_DWORD *)v13 - 2) )
    {
      v45 = (3 * v44 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v44 + 8 >= (unsigned int)v46 || v44 >= v45 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v74, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v74);
        sub_233E40((__int64)v74);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (3 * v44 + 1) >> 1;
      v47 = (unsigned int *)sub_186B300(v13 - 1, v46);
      v48 = v47[1];
      v13 = v47 + 2;
      *v47 = v66;
      LODWORD(v47) = v48;
      *(_QWORD *)a6 = v13;
      v42 = &v13[v48];
      v41 = (_DWORD)v47 + 1;
    }
    else
    {
      v40 = v44;
      v41 = v44 + 1;
      v42 = &v13[v40];
    }
LABEL_29:
    v38 += 8;
    *v42 = *v43;
    *((_DWORD *)v13 - 1) = v41;
  }
  while ( v38 != v39 );
  if ( v68 < v70 )
  {
    v49 = 8LL * v68;
    v50 = 8 * (v68 + (unsigned __int64)(unsigned int)(v73 - 1) + 1);
    do
    {
      v54 = (_QWORD *)(v49 + *(_QWORD *)a2);
LABEL_40:
      v55 = *((_DWORD *)v13 - 1);
      if ( v55 == *((_DWORD *)v13 - 2) )
      {
        v56 = (3 * v55 + 1) >> 1;
        v57 = 8 * v56 + 8;
        if ( 8 * v55 + 8 >= (unsigned int)v57 || v55 >= v56 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v74, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v74);
          sub_233E40((__int64)v74);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v67 = (3 * v55 + 1) >> 1;
        v58 = (unsigned int *)sub_186B300(v13 - 1, v57);
        v13 = v58 + 2;
        *v58 = v67;
        v59 = v58[1];
        *(_QWORD *)a6 = v58 + 2;
        v53 = &v58[2 * v59 + 2];
        v52 = v59 + 1;
      }
      else
      {
        v51 = v55;
        v52 = v55 + 1;
        v53 = (unsigned int *)&v13[v51];
      }
LABEL_38:
      v49 += 8;
      *(_QWORD *)v53 = *v54;
      *((_DWORD *)v13 - 1) = v52;
    }
    while ( v50 != v49 );
  }
LABEL_44:
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + *(_DWORD *)(a1 + 8));
  *(_DWORD *)(a6 + 8) = result;
  return result;
}

