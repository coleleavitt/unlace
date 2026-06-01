__int64 __fastcall sub_B50780(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  char **v4; // rbp
  unsigned int v6; // r13d
  __int64 result; // rax
  __int64 v8; // r12
  unsigned int v9; // ebp
  _QWORD *v10; // rdi
  _QWORD *v11; // rbp
  _QWORD *v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r12
  void *v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // esi
  int v19; // ecx
  unsigned int v20; // r13d
  __int64 v21; // r14
  void *v22; // rcx
  unsigned int v23; // r13d
  size_t v24; // rsi
  unsigned int *v25; // rax
  unsigned int v26; // eax
  char *v27; // rdi
  __int64 v28; // rax
  void **v29; // r14
  void **v30; // r15
  unsigned int v31; // edx
  unsigned int v32; // esi
  size_t v33; // rdi
  unsigned int *v34; // rax
  unsigned int *v35; // r13
  __int64 v36; // rax
  _QWORD *v37; // rdx
  void **v38; // rdi
  void **i; // rax
  int v40; // esi
  __int64 v41; // rsi
  __int64 v42; // rax
  void **v43; // r14
  void **v44; // r15
  unsigned int v45; // edx
  unsigned int v46; // esi
  size_t v47; // rdi
  unsigned int *v48; // rax
  unsigned int *v49; // r13
  __int64 v50; // rax
  _QWORD *v51; // rdx
  void **v52; // rdi
  void **j; // rax
  int v54; // esi
  __int64 v55; // rsi
  char *v56; // rdi
  int v57; // ecx
  __int64 v58; // rsi
  char *v59; // rdx
  unsigned int v60; // ebp
  __int64 v61; // r13
  size_t v62; // r12
  _QWORD *v63; // rdx
  __int64 v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned int v67; // esi
  __int64 v68; // rdx
  _QWORD *v69; // r13
  _QWORD *v70; // rbp
  __int64 v71; // rdx
  _QWORD *v72; // r13
  _QWORD *v73; // rbp
  _QWORD *v74; // rax
  unsigned int v75; // esi
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  unsigned int v78; // [rsp+8h] [rbp-70h]
  unsigned int v79; // [rsp+8h] [rbp-70h]
  unsigned int v80; // [rsp+Ch] [rbp-6Ch]
  unsigned int v81; // [rsp+Ch] [rbp-6Ch]
  __int64 v82[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(_DWORD *)(a2 + 20);
  result = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 20) = v6;
  v8 = v6 + 1;
  if ( result )
  {
    v9 = *(_DWORD *)(result - 4);
    v10 = (_QWORD *)result;
    if ( v9 >= (unsigned int)v8 )
      goto LABEL_3;
  }
  else
  {
    v6 = -1;
    if ( !(_DWORD)v8 )
      goto LABEL_9;
    v9 = 0;
    v76 = (_QWORD *)sub_186B270(0xAu);
    v10 = v76 + 1;
    *v76 = 2;
    *(_QWORD *)(a1 + 24) = v76 + 1;
  }
  while ( 1 )
  {
    v26 = *((_DWORD *)v10 - 2);
    if ( v26 >= (unsigned int)v8 )
      break;
    v23 = (3 * v26 + 1) >> 1;
    v24 = v23 + 8;
    if ( v26 + 8 >= (unsigned int)v24 || v26 >= v23 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v82, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v82);
      sub_233E40((__int64)v82);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v25 = (unsigned int *)sub_186B300(v10 - 1, v24);
    v10 = v25 + 2;
    *v25 = v23;
    *(_QWORD *)(a1 + 24) = v25 + 2;
  }
  result = v9;
  *((_DWORD *)v10 - 1) = v8;
  v6 = *(_DWORD *)(a1 + 20);
  v27 = (char *)v10 + v9;
  if ( (_DWORD)v8 != v9 )
    result = (__int64)memset(v27, 0, (unsigned int)v8 - (unsigned __int64)v9);
  v8 = v6 + 1;
LABEL_3:
  v11 = *(_QWORD **)(a1 + 32);
  if ( v11 )
  {
    result = *((unsigned int *)v11 - 1);
    v80 = result;
    if ( (unsigned int)result >= (unsigned int)v8 )
    {
      v12 = *(_QWORD **)(a1 + 40);
      if ( v12 )
        goto LABEL_6;
LABEL_91:
      if ( !(_DWORD)v8 )
        goto LABEL_7;
      v81 = 0;
      v74 = (_QWORD *)sub_186B270(0x38u);
      *v74 = 2;
      v12 = v74 + 1;
      *(_QWORD *)(a1 + 40) = v74 + 1;
      goto LABEL_52;
    }
  }
  else
  {
    if ( !(_DWORD)v8 )
      goto LABEL_7;
    v80 = 0;
    v77 = (_QWORD *)sub_186B270(0x38u);
    *v77 = 2;
    v11 = v77 + 1;
    *(_QWORD *)(a1 + 32) = v77 + 1;
  }
  while ( 1 )
  {
    v31 = *((_DWORD *)v11 - 2);
    if ( v31 >= (unsigned int)v8 )
      break;
    while ( 1 )
    {
      v32 = (3 * v31 + 1) >> 1;
      v78 = v32;
      v33 = 8 * (v32 + ((3 * v31 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v82, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v82);
        sub_233E40((__int64)v82);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (unsigned int *)sub_186B270(v33);
      v30 = *(void ***)(a1 + 32);
      v35 = v34;
      v11 = v34 + 2;
      if ( v30 )
        break;
      v34[1] = 0;
      *(_QWORD *)(a1 + 32) = v11;
      *v34 = v32;
      v31 = *v34;
      if ( *v34 >= (unsigned int)v8 )
        goto LABEL_88;
    }
    v36 = *((unsigned int *)v30 - 1);
    v37 = v11;
    v35[1] = v36;
    v38 = &v30[3 * v36];
    for ( i = v30; v38 != i; *((_DWORD *)v37 - 2) = *((_DWORD *)i - 2) )
    {
      v40 = *((_DWORD *)i + 2);
      i += 3;
      v37 += 3;
      *((_DWORD *)v37 - 4) = v40;
      v41 = (__int64)*(i - 3);
      *(i - 3) = nullptr;
      *(v37 - 3) = v41;
      *((_DWORD *)v37 - 3) = *((_DWORD *)i - 3);
    }
    v28 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v28 )
    {
      v29 = &v30[3 * v28];
      do
      {
        while ( *v30 )
        {
          sub_186B220(*v30);
          v30 += 3;
          if ( v29 == v30 )
            goto LABEL_37;
        }
        v30 += 3;
      }
      while ( v30 != v29 );
LABEL_37:
      v30 = *(void ***)(a1 + 32);
    }
    sub_186B220(v30 - 1);
    *(_QWORD *)(a1 + 32) = v11;
    *v35 = v78;
  }
LABEL_88:
  *((_DWORD *)v11 - 1) = v8;
  v71 = 3LL * v80;
  result = 24 * v8;
  v72 = &v11[v71];
  v73 = &v11[3 * v8];
  if ( v71 != 3 * v8 )
  {
    do
    {
      v72 += 3;
      result = sub_186B270(0x40u);
      *(_OWORD *)result = 0;
      *(_OWORD *)(result + 16) = 0;
      *(_OWORD *)(result + 32) = 0;
      *(_OWORD *)(result + 48) = 0;
      *(v72 - 3) = result;
      *(v72 - 2) = 8;
      *((_DWORD *)v72 - 2) = 0;
    }
    while ( v73 != v72 );
  }
  v6 = *(_DWORD *)(a1 + 20);
  v12 = *(_QWORD **)(a1 + 40);
  v8 = v6 + 1;
  if ( !v12 )
    goto LABEL_91;
LABEL_6:
  result = *((unsigned int *)v12 - 1);
  v81 = result;
  if ( (unsigned int)result >= (unsigned int)v8 )
    goto LABEL_7;
LABEL_52:
  while ( 1 )
  {
    v45 = *((_DWORD *)v12 - 2);
    if ( v45 >= (unsigned int)v8 )
      break;
    while ( 1 )
    {
      v46 = (3 * v45 + 1) >> 1;
      v79 = v46;
      v47 = 8 * (v46 + ((3 * v45 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v45 + 8 >= (unsigned int)v47 || v45 >= v46 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v82, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v82);
        sub_233E40((__int64)v82);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B270(v47);
      v44 = *(void ***)(a1 + 40);
      v49 = v48;
      v12 = v48 + 2;
      if ( v44 )
        break;
      v48[1] = 0;
      *(_QWORD *)(a1 + 40) = v12;
      *v48 = v46;
      v45 = *v48;
      if ( *v48 >= (unsigned int)v8 )
        goto LABEL_84;
    }
    v50 = *((unsigned int *)v44 - 1);
    v51 = v12;
    v49[1] = v50;
    v52 = &v44[3 * v50];
    for ( j = v44; v52 != j; *((_DWORD *)v51 - 2) = *((_DWORD *)j - 2) )
    {
      v54 = *((_DWORD *)j + 2);
      j += 3;
      v51 += 3;
      *((_DWORD *)v51 - 4) = v54;
      v55 = (__int64)*(j - 3);
      *(j - 3) = nullptr;
      *(v51 - 3) = v55;
      *((_DWORD *)v51 - 3) = *((_DWORD *)j - 3);
    }
    v42 = *((unsigned int *)v44 - 1);
    if ( (_DWORD)v42 )
    {
      v43 = &v44[3 * v42];
      do
      {
        while ( *v44 )
        {
          sub_186B220(*v44);
          v44 += 3;
          if ( v44 == v43 )
            goto LABEL_50;
        }
        v44 += 3;
      }
      while ( v44 != v43 );
LABEL_50:
      v44 = *(void ***)(a1 + 40);
    }
    sub_186B220(v44 - 1);
    *(_QWORD *)(a1 + 40) = v12;
    *v49 = v79;
  }
LABEL_84:
  *((_DWORD *)v12 - 1) = v8;
  v68 = 3LL * v81;
  result = 24 * v8;
  v69 = &v12[v68];
  v70 = &v12[3 * v8];
  if ( v68 != 3 * v8 )
  {
    do
    {
      v69 += 3;
      result = sub_186B270(0x40u);
      *(_OWORD *)result = 0;
      *(_OWORD *)(result + 16) = 0;
      *(_OWORD *)(result + 32) = 0;
      *(_OWORD *)(result + 48) = 0;
      *(v69 - 3) = result;
      *(v69 - 2) = 8;
      *((_DWORD *)v69 - 2) = 0;
    }
    while ( v70 != v69 );
  }
  v6 = *(_DWORD *)(a1 + 20);
LABEL_7:
  if ( v6 )
  {
    result = *(_QWORD *)(a1 + 24);
LABEL_9:
    v13 = 0;
    while ( 1 )
    {
      v14 = *(_QWORD *)(a1 + 32);
      *(_BYTE *)(result + v13) = 0;
      result = 3 * v13;
      v15 = v14 + 24 * v13;
      if ( *(_DWORD *)(v15 + 12) || *(_DWORD *)(v15 + 16) )
        break;
LABEL_24:
      if ( (unsigned int)++v13 >= v6 )
        goto LABEL_63;
      result = *(_QWORD *)(a1 + 24);
    }
    result = *(unsigned int *)(v15 + 8);
    v16 = *(void **)v15;
    v17 = *(_QWORD *)v15 + 8 * result;
    v18 = *(_DWORD *)(v15 + 8);
    if ( *(_QWORD *)v15 == v17 )
      goto LABEL_23;
    result = *(_QWORD *)v15;
    v19 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 8;
        if ( v17 == result )
          goto LABEL_17;
      }
      result += 8;
      ++v19;
    }
    while ( v17 != result );
LABEL_17:
    if ( v18 <= 0x10 || (result = 3 * v18, (unsigned int)result >= 4 * v19) )
    {
LABEL_23:
      *(_QWORD *)(v15 + 12) = 0;
      goto LABEL_24;
    }
    if ( v16 )
    {
      sub_186B220(v16);
      v20 = *(_DWORD *)(v15 + 8);
      *(_QWORD *)v15 = 0;
      v20 >>= 1;
      *(_DWORD *)(v15 + 8) = v20;
      v21 = v20;
      result = sub_186B270(8LL * v20);
      v22 = (void *)result;
      if ( !v20 )
      {
LABEL_22:
        *(_QWORD *)v15 = v22;
        v6 = *(_DWORD *)(a1 + 20);
        goto LABEL_23;
      }
    }
    else
    {
      v67 = v18 >> 1;
      *(_QWORD *)v15 = 0;
      v21 = v67;
      *(_DWORD *)(v15 + 8) = v67;
      v22 = (void *)sub_186B270(8LL * v67);
    }
    result = (__int64)memset(v22, 0, 8 * v21);
    v22 = (void *)result;
    goto LABEL_22;
  }
LABEL_63:
  if ( *(_DWORD *)(a1 + 60) || *(_DWORD *)(a1 + 64) )
  {
    v56 = *(char **)(a1 + 48);
    v57 = 0;
    v58 = *(unsigned int *)(a1 + 56);
    result = (__int64)v56;
    v59 = &v56[32 * v58];
    if ( v56 == v59 )
      goto LABEL_80;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 32;
        if ( v59 == (char *)result )
          goto LABEL_70;
      }
      result += 32;
      ++v57;
    }
    while ( v59 != (char *)result );
LABEL_70:
    if ( (unsigned int)v58 <= 0x10 )
      goto LABEL_80;
    result = (unsigned int)(3 * v58);
    if ( (unsigned int)result >= 4 * v57 )
      goto LABEL_80;
    if ( v56 )
    {
      sub_186B220(v56);
      v60 = *(_DWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      v60 >>= 1;
      v61 = v60;
      *(_DWORD *)(a1 + 56) = v60;
      v62 = 32LL * v60;
      result = sub_186B270(v62);
      if ( !v60 )
      {
LABEL_79:
        *(_QWORD *)(a1 + 48) = result;
LABEL_80:
        *(_QWORD *)(a1 + 60) = 0;
        return result;
      }
    }
    else
    {
      v75 = (unsigned int)v58 >> 1;
      *(_QWORD *)(a1 + 48) = 0;
      v61 = v75;
      *(_DWORD *)(a1 + 56) = v75;
      v62 = 32LL * v75;
      result = sub_186B270(v62);
    }
    v63 = (_QWORD *)result;
    do
    {
      *v63 = 0;
      v63 += 4;
      *(v63 - 3) = 0;
      *(v63 - 2) = 0;
    }
    while ( (_QWORD *)(result + v62) != v63 );
    v64 = 32 * v61;
    v65 = result;
    v66 = result + v64;
    if ( (v64 & 0x20) == 0 || (v65 = result + 32, *(_DWORD *)(result + 24) = 0, result + 32 != v66) )
    {
      do
      {
        *(_DWORD *)(v65 + 24) = 0;
        v65 += 64;
        *(_DWORD *)(v65 - 8) = 0;
      }
      while ( v65 != v66 );
    }
    goto LABEL_79;
  }
  return result;
}

