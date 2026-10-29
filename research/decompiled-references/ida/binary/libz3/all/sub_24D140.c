__int64 __fastcall sub_24D140(__int64 a1, char *a2, unsigned int a3, __int64 a4)
{
  char **v4; // r14
  char **exception; // r14
  char **v6; // r14
  char **v7; // r14
  __int64 v11; // rdi
  _QWORD *v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rbx
  unsigned int v15; // r15d
  __int64 v16; // r12
  _QWORD *v17; // rbp
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  __int64 *v22; // rsi
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // rax
  __int64 *v28; // r13
  __int64 *v29; // r12
  unsigned int v30; // edx
  _DWORD *v31; // rdi
  __int64 v32; // rax
  unsigned int v33; // r10d
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // r10d
  __int64 v37; // rax
  int v38; // edx
  int v39; // r12d
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // r8d
  size_t v43; // rsi
  unsigned int v44; // r12d
  unsigned int *v45; // rax
  __int64 v46; // rsi
  _QWORD *v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  __int64 *v51; // rdx
  __int64 v52; // rbx
  unsigned int v54; // r8d
  size_t v55; // rsi
  unsigned int v56; // ebp
  unsigned int *v57; // rax
  __int64 v58; // rsi
  unsigned int v59; // r12d
  size_t v60; // rsi
  unsigned int *v61; // rax
  __int64 v62; // rdx
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // [rsp+0h] [rbp-98h]
  __int64 v67; // [rsp+10h] [rbp-88h]
  __int64 v68; // [rsp+18h] [rbp-80h] BYREF
  __int64 v69; // [rsp+20h] [rbp-78h]
  __int64 v70; // [rsp+28h] [rbp-70h]
  char *v71; // [rsp+30h] [rbp-68h]
  unsigned int v72; // [rsp+38h] [rbp-60h]
  unsigned int v73; // [rsp+3Ch] [rbp-5Ch]
  char *v74[11]; // [rsp+40h] [rbp-58h] BYREF

  v11 = *(_QWORD *)(a1 + 1480);
  v71 = a2;
  v73 = a3;
  v70 = sub_15F0110(v11);
  v68 = *(_QWORD *)(a1 + 232);
  if ( !a3 )
  {
    v66 = nullptr;
    goto LABEL_33;
  }
  v67 = a4;
  v66 = nullptr;
  v69 = a4 + 8LL * a3;
  do
  {
    v12 = *(_QWORD **)v67;
    v13 = *(_QWORD *)(*(_QWORD *)v67 + 32LL);
    if ( !v13 )
      goto LABEL_43;
    v14 = nullptr;
    v15 = 0;
    while ( v15 < *(_DWORD *)(v13 - 4) )
    {
      v16 = *(_QWORD *)(v13 + 8LL * v15);
      v17 = (_QWORD *)(v12[2] + 8LL * v15);
      if ( v16 )
      {
        v18 = sub_186B270(0x28u);
        *(_QWORD *)v18 = *v17;
        *(__m128 *)(v18 + 8) = _mm_loadh_ps((const double *)&v68);
        if ( (v16 | 1uLL) > 7 )
          ++*(_DWORD *)((v16 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        *(_DWORD *)(v18 + 24) = -1;
        *(_QWORD *)(v18 + 32) = 0;
        if ( !v14 )
        {
          v63 = (_QWORD *)sub_186B270(0x18u);
          v14 = v63 + 1;
          v22 = v63 + 1;
          *v63 = 2;
          v21 = 1;
          goto LABEL_12;
        }
        v19 = *((_DWORD *)v14 - 1);
        if ( v19 == *((_DWORD *)v14 - 2) )
        {
          v54 = (3 * v19 + 1) >> 1;
          v55 = 8 * v54 + 8;
          v56 = v54;
          if ( 8 * v19 + 8 >= (unsigned int)v55 || v19 >= v54 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_A64A2(v74);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v74);
            sub_233E40((__int64)v74);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = (unsigned int *)sub_186B300(v14 - 1, v55);
          v58 = v57[1];
          v14 = v57 + 2;
          *v57 = v56;
          LODWORD(v57) = v58;
          v22 = &v14[v58];
          v21 = (_DWORD)v57 + 1;
          goto LABEL_12;
        }
      }
      else
      {
        v39 = *(_DWORD *)(v12[5] + 4LL * v15);
        v18 = sub_186B270(0x28u);
        v40 = *v17;
        *(_DWORD *)(v18 + 24) = v39;
        *(_QWORD *)v18 = v40;
        v41 = v68;
        *(_QWORD *)(v18 + 8) = 0;
        *(_QWORD *)(v18 + 16) = v41;
        *(_QWORD *)(v18 + 32) = 0;
        if ( !v14 )
        {
          v64 = (_QWORD *)sub_186B270(0x18u);
          v14 = v64 + 1;
          *v64 = 2;
          v21 = 1;
          v22 = v14;
          goto LABEL_12;
        }
        v19 = *((_DWORD *)v14 - 1);
        if ( v19 == *((_DWORD *)v14 - 2) )
        {
          v42 = (3 * v19 + 1) >> 1;
          v43 = 8 * v42 + 8;
          v44 = v42;
          if ( 8 * v19 + 8 >= (unsigned int)v43 || v19 >= v42 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_A64A2(v74);
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v74);
            sub_233E40((__int64)v74);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = (unsigned int *)sub_186B300(v14 - 1, v43);
          v46 = v45[1];
          v14 = v45 + 2;
          *v45 = v44;
          LODWORD(v45) = v46;
          v22 = &v14[v46];
          v21 = (_DWORD)v45 + 1;
          goto LABEL_12;
        }
      }
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v14[v20];
LABEL_12:
      *v22 = v18;
      ++v15;
      *((_DWORD *)v14 - 1) = v21;
      v13 = v12[4];
      if ( !v13 )
        goto LABEL_13;
    }
    if ( v14 )
    {
LABEL_13:
      v23 = *((unsigned int *)v14 - 1);
      goto LABEL_14;
    }
LABEL_43:
    v14 = nullptr;
    v23 = 0;
LABEL_14:
    v24 = sub_186B270(0x20u);
    *(_QWORD *)v24 = *v12;
    v25 = v12[1];
    *(_OWORD *)(v24 + 16) = 0;
    *(_QWORD *)(v24 + 8) = v25;
    if ( (_DWORD)v23 )
    {
      v26 = *v14;
      v27 = (_QWORD *)(sub_186B270(0x18u) + 8);
      v28 = v14;
      v29 = &v14[v23];
      v30 = 1;
      *(v27 - 1) = 2;
      v31 = v27;
      *(_QWORD *)(v24 + 16) = v27;
      while ( 1 )
      {
        ++v28;
        *v27 = v26;
        *(v31 - 1) = v30;
        *(_QWORD *)(v26 + 32) = v24;
        if ( v29 == v28 )
          break;
        v26 = *v28;
        if ( *(v31 - 2) == v30 )
        {
          v33 = (3 * v30 + 1) >> 1;
          v34 = 8 * v33 + 8;
          if ( 8 * v30 + 8 >= (unsigned int)v34 || v30 >= v33 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_A64A2(v74);
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v74);
            sub_233E40((__int64)v74);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v72 = (3 * v30 + 1) >> 1;
          v35 = (unsigned int *)sub_186B300(v31 - 2, v34);
          v36 = v72;
          v31 = v35 + 2;
          *(_QWORD *)(v24 + 16) = v35 + 2;
          *v35 = v36;
          v37 = v35[1];
          v38 = v37;
          v27 = &v31[2 * v37];
          v30 = v38 + 1;
        }
        else
        {
          v32 = v30++;
          v27 = &v31[2 * v32];
        }
      }
    }
    if ( v66 )
    {
      v47 = v66;
      v48 = *((_DWORD *)v66 - 1);
      if ( v48 == *((_DWORD *)v66 - 2) )
      {
        v59 = (3 * v48 + 1) >> 1;
        v60 = 8 * v59 + 8;
        if ( 8 * v48 + 8 >= (unsigned int)v60 || v48 >= v59 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_A64A2(v74);
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v74);
          sub_233E40((__int64)v74);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v61 = (unsigned int *)sub_186B300(v66 - 1, v60);
        v62 = v61[1];
        v47 = v61 + 2;
        *v61 = v59;
        v66 = v47;
        LODWORD(v61) = v62;
        v51 = &v47[v62];
        v50 = (_DWORD)v61 + 1;
      }
      else
      {
        v49 = v48;
        v50 = v48 + 1;
        v51 = &v66[v49];
      }
    }
    else
    {
      v65 = (_QWORD *)sub_186B270(0x18u);
      *v65 = 2;
      v66 = v65 + 1;
      v51 = v65 + 1;
      v47 = v65 + 1;
      v50 = 1;
    }
    *v51 = v24;
    *((_DWORD *)v47 - 1) = v50;
    if ( v14 )
      sub_186B220(v14 - 1);
    v67 += 8;
  }
  while ( v67 != v69 );
LABEL_33:
  v74[0] = v71;
  v52 = sub_15F3050(v70, v74, 0, 0, v73, v66);
  if ( v66 )
    sub_186B220(v66 - 1);
  return v52;
}

