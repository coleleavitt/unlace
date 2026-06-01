_QWORD *__fastcall sub_5039C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int *a5, int *a6)
{
  char **v6; // r12
  char **v7; // r12
  char **v8; // r12
  char **exception; // rbx
  __int64 v12; // r14
  _QWORD *v14; // rbx
  int *v15; // r14
  _DWORD *v16; // rax
  _DWORD *v17; // rdx
  int v18; // ecx
  int v19; // edi
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v23; // r10d
  size_t v24; // rsi
  unsigned int v25; // r13d
  unsigned int *v26; // rax
  __int64 v27; // rax
  _DWORD *v28; // rax
  int *v29; // r13
  _DWORD *v30; // rdx
  int v31; // ecx
  int v32; // edi
  __int64 v33; // rax
  unsigned int v34; // ecx
  unsigned int v35; // r15d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // r14
  __int64 v40; // r15
  __int64 v41; // r15
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // r13
  unsigned int v45; // ecx
  _QWORD *v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // r8d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rax
  int v52; // ecx
  _QWORD *v53; // r14
  __int64 v54; // r15
  __int64 v55; // r15
  __int64 i; // r12
  __int64 v57; // rcx
  int v58; // eax
  unsigned int *v59; // rsi
  unsigned int v60; // eax
  unsigned int v61; // r13d
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // rax
  unsigned int v68; // [rsp+0h] [rbp-78h]
  __int64 v69; // [rsp+8h] [rbp-70h]
  __int64 v70[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( a1 != *(_QWORD *)(a2 + 8) || a1 != *(_QWORD *)(a3 + 8) )
    return nullptr;
  v12 = a4;
  v14 = (_QWORD *)sub_186B270(0x20u);
  *v14 = qword_1C666F0;
  v14[1] = 0;
  v14[2] = 0;
  if ( (_DWORD)v12 )
  {
    v69 = v12;
    v15 = &a5[v12];
    v16 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v16 - 1) = 2;
    v17 = v16;
    v14[2] = v16;
    while ( 1 )
    {
      v18 = *a5++;
      *v16 = v18;
      v19 = *(v17 - 1);
      v20 = (unsigned int)(v19 + 1);
      *(v17 - 1) = v20;
      if ( a5 == v15 )
        break;
      v21 = *(v17 - 2);
      if ( v21 == (_DWORD)v20 )
      {
        v23 = (3 * v21 + 1) >> 1;
        v24 = 4 * v23 + 8;
        v25 = v23;
        if ( 4 * v19 + 12 >= (unsigned int)v24 || v21 >= v23 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v70, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v70);
          sub_233E40((__int64)v70);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v17 - 2, v24);
        v17 = v26 + 2;
        *v26 = v25;
        v27 = v26[1];
        v14[2] = v17;
        v16 = &v17[v27];
      }
      else
      {
        v16 = &v17[v20];
      }
    }
    v14[3] = 0;
    v28 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v29 = a6;
    *((_QWORD *)v28 - 1) = 2;
    v30 = v28;
    v14[3] = v28;
    while ( 1 )
    {
      v31 = *v29++;
      *v28 = v31;
      v32 = *(v30 - 1);
      v33 = (unsigned int)(v32 + 1);
      *(v30 - 1) = v33;
      if ( v29 == &a6[v69] )
        break;
      v34 = *(v30 - 2);
      if ( v34 == (_DWORD)v33 )
      {
        v35 = (3 * v34 + 1) >> 1;
        v36 = 4 * v35 + 8;
        if ( 4 * v32 + 12 >= (unsigned int)v36 || v34 >= v35 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v70, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v70);
          sub_233E40((__int64)v70);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B300(v30 - 2, v36);
        v30 = v37 + 2;
        *v37 = v35;
        v38 = v37[1];
        v14[3] = v30;
        v28 = &v30[v38];
      }
      else
      {
        v28 = &v30[v33];
      }
    }
  }
  else
  {
    v14[3] = 0;
  }
  v39 = *(_QWORD **)(a2 + 16);
  if ( v39 && (v40 = *((unsigned int *)v39 - 1), (_DWORD)v40) )
  {
    v41 = 8 * v40;
    v42 = (_QWORD *)sub_186B270(0x18u);
    *v42 = 2;
    v43 = v42 + 1;
    v44 = 0;
    v45 = 1;
    v14[1] = v43;
    v46 = v43;
    while ( 1 )
    {
      v44 += 8;
      *v43 = *v39;
      *((_DWORD *)v46 - 1) = v45;
      if ( v44 == v41 )
        break;
      v39 = (_QWORD *)(v44 + *(_QWORD *)(a2 + 16));
      if ( *((_DWORD *)v46 - 2) == v45 )
      {
        v48 = (3 * v45 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v45 + 8 >= (unsigned int)v49 || v45 >= v48 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v70, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v70);
          sub_233E40((__int64)v70);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v68 = (3 * v45 + 1) >> 1;
        v50 = (unsigned int *)sub_186B300(v46 - 1, v49);
        v46 = v50 + 2;
        v14[1] = v50 + 2;
        *v50 = v68;
        v51 = v50[1];
        v52 = v51;
        v43 = &v46[v51];
        v45 = v52 + 1;
      }
      else
      {
        v47 = v45++;
        v43 = &v46[v47];
      }
    }
    v53 = *(_QWORD **)(a3 + 16);
    if ( v53 )
    {
      v54 = *((unsigned int *)v53 - 1);
      if ( (_DWORD)v54 )
      {
        v55 = 8 * v54;
        for ( i = 0; ; v53 = (_QWORD *)(i + *(_QWORD *)(a3 + 16)) )
        {
          v60 = *((_DWORD *)v46 - 1);
          if ( v60 == *((_DWORD *)v46 - 2) )
          {
            v61 = (3 * v60 + 1) >> 1;
            v62 = 8 * v61 + 8;
            if ( 8 * v60 + 8 >= (unsigned int)v62 || v60 >= v61 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v70, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v70);
              sub_233E40((__int64)v70);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v63 = (unsigned int *)sub_186B300(v46 - 1, v62);
            v64 = v63[1];
            v46 = v63 + 2;
            *v63 = v61;
            v14[1] = v63 + 2;
            v59 = &v63[2 * v64 + 2];
            v58 = v64 + 1;
          }
          else
          {
            v57 = v60;
            v58 = v60 + 1;
            v59 = (unsigned int *)&v46[v57];
          }
LABEL_34:
          i += 8;
          *(_QWORD *)v59 = *v53;
          *((_DWORD *)v46 - 1) = v58;
          if ( v55 == i )
            break;
        }
      }
    }
  }
  else
  {
    v53 = *(_QWORD **)(a3 + 16);
    if ( v53 )
    {
      v65 = *((unsigned int *)v53 - 1);
      if ( (_DWORD)v65 )
      {
        v55 = 8 * v65;
        v66 = (_QWORD *)sub_186B270(0x18u);
        v46 = v66 + 1;
        *v66 = 2;
        i = 0;
        v58 = 1;
        v14[1] = v46;
        v59 = (unsigned int *)v46;
        goto LABEL_34;
      }
    }
  }
  *v14 = &off_1C50298;
  return v14;
}

