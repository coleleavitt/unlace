__int64 __fastcall sub_BD9B30(__int64 a1, __int64 *a2, double a3, __m128 a4, __m128 a5)
{
  char **exception; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  char **v9; // rbp
  char **v10; // rbp
  char **v11; // rbp
  unsigned int v13; // r13d
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 ***v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 ****v20; // rcx
  __int64 v21; // rsi
  _DWORD *v22; // rax
  __int64 **v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 **v27; // rcx
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 **v32; // rcx
  __int64 v33; // r12
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rbp
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  _QWORD *v40; // rcx
  int v42; // eax
  __int64 **v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 **v47; // rcx
  unsigned int v48; // r14d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // ebx
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  size_t v57; // rsi
  unsigned int v58; // ebx
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // ebp
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rcx
  unsigned int v66; // r14d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  size_t v71; // rsi
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78[9]; // [rsp+10h] [rbp-48h] BYREF

  v13 = sub_B33020(a1, a2);
  v14 = sub_186B270(0x28u);
  v15 = *(_QWORD **)(a1 + 448);
  *(_QWORD *)(v14 + 32) = 0;
  v16 = (__int64 ***)v14;
  *(_OWORD *)v14 = 0;
  *(_OWORD *)(v14 + 16) = 0;
  if ( v15 )
  {
    v17 = *((_DWORD *)v15 - 1);
    if ( v17 == *((_DWORD *)v15 - 2) )
    {
      v48 = (3 * v17 + 1) >> 1;
      v49 = 8 * v48 + 8;
      if ( 8 * v17 + 8 >= (unsigned int)v49 || v17 >= v48 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v78, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v78);
        sub_233E40((__int64)v78);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v50 = (unsigned int *)sub_186B300(v15 - 1, v49);
      v51 = v50[1];
      v15 = v50 + 2;
      *v50 = v48;
      *(_QWORD *)(a1 + 448) = v50 + 2;
      LODWORD(v50) = v51;
      v20 = (__int64 ****)&v15[v51];
      v19 = (_DWORD)v50 + 1;
    }
    else
    {
      v18 = v17;
      v19 = v17 + 1;
      v20 = (__int64 ****)&v15[v18];
    }
  }
  else
  {
    v70 = (_QWORD *)sub_186B270(0x18u);
    v15 = v70 + 1;
    *v70 = 2;
    v19 = 1;
    *(_QWORD *)(a1 + 448) = v15;
    v20 = (__int64 ****)v15;
  }
  *v20 = v16;
  *((_DWORD *)v15 - 1) = v19;
  v21 = *(_QWORD *)(*a2 + 16);
  v22 = *(_DWORD **)(v21 + 24);
  if ( !v22 || *v22 != *(_DWORD *)(a1 + 8) )
    goto LABEL_6;
  v42 = v22[1];
  switch ( v42 )
  {
    case 5:
      sub_BD5490(a1, a2, 0.0, *(double *)a4.m128_u64, a5);
      v43 = *v16;
      if ( !*v16 )
      {
        v75 = (_QWORD *)sub_186B270(0x18u);
        v43 = (__int64 **)(v75 + 1);
        *v75 = 2;
        v46 = 1;
        *v16 = v43;
        v47 = v43;
        goto LABEL_25;
      }
      v44 = *((_DWORD *)v43 - 1);
      if ( v44 != *((_DWORD *)v43 - 2) )
        goto LABEL_24;
      v52 = (3 * v44 + 1) >> 1;
      v53 = 8 * v52 + 8;
      if ( 8 * v44 + 8 >= (unsigned int)v53 || v44 >= v52 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v78, "Overflow encountered when expanding vector");
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, v78);
        sub_233E40((__int64)v78);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v54 = (unsigned int *)sub_186B300(v43 - 1, v53);
      v43 = (__int64 **)(v54 + 2);
      *v16 = (__int64 **)(v54 + 2);
      goto LABEL_34;
    case 2:
      sub_BD5750(a1, a2, (__m128)0LL, a4, a5);
      v43 = v16[1];
      if ( !v43 )
      {
        v76 = (_QWORD *)sub_186B270(0x18u);
        v43 = (__int64 **)(v76 + 1);
        *v76 = 2;
        v46 = 1;
        v16[1] = v43;
        v47 = v43;
        goto LABEL_25;
      }
      v44 = *((_DWORD *)v43 - 1);
      if ( v44 != *((_DWORD *)v43 - 2) )
        goto LABEL_24;
      v52 = (3 * v44 + 1) >> 1;
      v57 = 8 * v52 + 8;
      if ( 8 * v44 + 8 >= (unsigned int)v57 || v44 >= v52 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v78, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v78);
        sub_233E40((__int64)v78);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v54 = (unsigned int *)sub_186B300(v43 - 1, v57);
      v43 = (__int64 **)(v54 + 2);
      v16[1] = (__int64 **)(v54 + 2);
LABEL_34:
      v55 = v54[1];
      *v54 = v52;
      v56 = v55;
      v47 = &v43[v55];
      v46 = v56 + 1;
      goto LABEL_25;
    case 4:
      return v13;
  }
  if ( v42 != 13 )
  {
LABEL_6:
    if ( sub_15D2BD0(*(_QWORD *)(a1 + 24), v21) )
    {
      sub_BD7CA0(a1, a2, (__m128)0LL, a4, a5);
      v23 = v16[3];
      if ( v23 )
      {
        v24 = *((_DWORD *)v23 - 1);
        if ( v24 == *((_DWORD *)v23 - 2) )
        {
          v66 = (3 * v24 + 1) >> 1;
          v67 = 8 * v66 + 8;
          if ( 8 * v24 + 8 >= (unsigned int)v67 || v24 >= v66 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v78, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v78);
            sub_233E40((__int64)v78);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v68 = (unsigned int *)sub_186B300(v23 - 1, v67);
          v69 = v68[1];
          v23 = (__int64 **)(v68 + 2);
          *v68 = v66;
          v16[3] = (__int64 **)(v68 + 2);
          LODWORD(v68) = v69;
          v27 = &v23[v69];
          v26 = (_DWORD)v68 + 1;
        }
        else
        {
          v25 = v24;
          v26 = v24 + 1;
          v27 = &v23[v25];
        }
      }
      else
      {
        v73 = (_QWORD *)sub_186B270(0x18u);
        v23 = (__int64 **)(v73 + 1);
        *v73 = 2;
        v26 = 1;
        v16[3] = v23;
        v27 = v23;
      }
      *v27 = a2;
      *((_DWORD *)v23 - 1) = v26;
      v28 = *(_QWORD **)(a1 + 600);
      if ( v28 )
      {
        v29 = *((_DWORD *)v28 - 1);
        if ( v29 == *((_DWORD *)v28 - 2) )
        {
          v62 = (3 * v29 + 1) >> 1;
          v63 = 8 * v62 + 8;
          if ( 8 * v29 + 8 >= (unsigned int)v63 || v29 >= v62 )
          {
            v10 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v78, "Overflow encountered when expanding vector");
            *v10 = (char *)off_1C63128;
            sub_2333C0(v10 + 1, v78);
            sub_233E40((__int64)v78);
            __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v64 = (unsigned int *)sub_186B300(v28 - 1, v63);
          v65 = v64[1];
          v28 = v64 + 2;
          *v64 = v62;
          *(_QWORD *)(a1 + 600) = v64 + 2;
          LODWORD(v64) = v65;
          v32 = (__int64 **)&v28[v65];
          v31 = (_DWORD)v64 + 1;
        }
        else
        {
          v30 = v29;
          v31 = v29 + 1;
          v32 = (__int64 **)&v28[v30];
        }
      }
      else
      {
        v72 = (_QWORD *)sub_186B270(0x18u);
        v28 = v72 + 1;
        *v72 = 2;
        v31 = 1;
        *(_QWORD *)(a1 + 600) = v28;
        v32 = (__int64 **)v28;
      }
      *v32 = a2;
      v33 = *(_QWORD *)(a1 + 16);
      *((_DWORD *)v28 - 1) = v31;
      v34 = (_QWORD *)sub_180C100(v33 + 8400, 16);
      v35 = *(_QWORD **)(v33 + 9456);
      v36 = v34;
      *v34 = off_1C56790;
      v34[1] = a1 + 600;
      if ( v35 )
      {
        v37 = *((_DWORD *)v35 - 1);
        if ( v37 == *((_DWORD *)v35 - 2) )
        {
          v58 = (3 * v37 + 1) >> 1;
          v59 = 8 * v58 + 8;
          if ( 8 * v37 + 8 >= (unsigned int)v59 || v37 >= v58 )
          {
            v11 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v78, "Overflow encountered when expanding vector");
            *v11 = (char *)off_1C63128;
            sub_2333C0(v11 + 1, v78);
            sub_233E40((__int64)v78);
            __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v60 = (unsigned int *)sub_186B300(v35 - 1, v59);
          v61 = v60[1];
          v35 = v60 + 2;
          *(_QWORD *)(v33 + 9456) = v60 + 2;
          *v60 = v58;
          LODWORD(v60) = v61;
          v40 = &v35[v61];
          v39 = (_DWORD)v60 + 1;
        }
        else
        {
          v38 = v37;
          v39 = v37 + 1;
          v40 = &v35[v38];
        }
      }
      else
      {
        v74 = (_QWORD *)sub_186B270(0x18u);
        v35 = v74 + 1;
        *v74 = 2;
        v39 = 1;
        *(_QWORD *)(v33 + 9456) = v35;
        v40 = v35;
      }
      *v40 = v36;
      *((_DWORD *)v35 - 1) = v39;
    }
    return v13;
  }
  v43 = v16[2];
  if ( !v43 )
  {
    v77 = (_QWORD *)sub_186B270(0x18u);
    v43 = (__int64 **)(v77 + 1);
    *v77 = 2;
    v46 = 1;
    v16[2] = v43;
    v47 = v43;
    goto LABEL_25;
  }
  v44 = *((_DWORD *)v43 - 1);
  if ( v44 == *((_DWORD *)v43 - 2) )
  {
    v52 = (3 * v44 + 1) >> 1;
    v71 = 8 * v52 + 8;
    if ( 8 * v44 + 8 >= (unsigned int)v71 || v44 >= v52 )
    {
      v7 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v78, "Overflow encountered when expanding vector");
      *v7 = (char *)off_1C63128;
      sub_2333C0(v7 + 1, v78);
      sub_233E40((__int64)v78);
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v54 = (unsigned int *)sub_186B300(v43 - 1, v71);
    v43 = (__int64 **)(v54 + 2);
    v16[2] = (__int64 **)(v54 + 2);
    goto LABEL_34;
  }
LABEL_24:
  v45 = v44;
  v46 = v44 + 1;
  v47 = &v43[v45];
LABEL_25:
  *v47 = a2;
  *((_DWORD *)v43 - 1) = v46;
  return v13;
}

