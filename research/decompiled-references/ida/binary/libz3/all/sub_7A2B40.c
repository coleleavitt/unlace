__int64 __fastcall sub_7A2B40(__int64 **a1, unsigned int a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char **exception; // rbp
  __int64 v6; // r13
  __int64 *v8; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r12
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rcx
  __int64 *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rax
  int *v33; // r8
  _QWORD *v34; // rcx
  __int64 v35; // r14
  unsigned int v36; // eax
  int v37; // r15d
  _QWORD *v38; // rdx
  int v39; // r15d
  __int64 v40; // rax
  int *v41; // rax
  __int64 v42; // rsi
  _QWORD *v43; // rdx
  unsigned int v44; // ebp
  __int64 v45; // rax
  unsigned int *v46; // rax
  unsigned int v47; // ebp
  unsigned int v48; // edx
  size_t v49; // rsi
  unsigned int v50; // r15d
  unsigned int *v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // r14d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // ebp
  size_t v60; // rsi
  unsigned int *v61; // rax
  unsigned int v62; // r14d
  size_t v63; // rsi
  unsigned int *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // [rsp+0h] [rbp-88h]
  unsigned int v70; // [rsp+8h] [rbp-80h]
  int *v71; // [rsp+8h] [rbp-80h]
  __int64 v72; // [rsp+10h] [rbp-78h]
  _QWORD *v73; // [rsp+18h] [rbp-70h]
  __int64 v74[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a2;
  v8 = *a1;
  v9 = (_QWORD *)(*a1)[1];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *v8;
          if ( (*(_DWORD *)(v11 + 8))-- == 1 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_8;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_8:
    v9 = (_QWORD *)v8[1];
    if ( v9 )
LABEL_9:
      *((_DWORD *)v9 - 1) = 0;
  }
  v14 = a1[1];
  v15 = v14[295];
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  v16 = *(_QWORD *)(v14[3] + 3296);
  if ( v16 )
    result = *(unsigned int *)(v16 - 4);
  else
    result = 0;
  *(_DWORD *)a1[2] = result;
  if ( (_DWORD)v6 )
  {
    v18 = 8 * v6;
    v19 = 0;
    v72 = v18;
    while ( 1 )
    {
      v42 = *(_QWORD *)(v14[292] + v19);
      if ( (v42 & 7) == 1 )
      {
        v43 = (_QWORD *)v14[295];
        v44 = (unsigned int)v42 >> 4;
        if ( v43 )
        {
          v45 = *((unsigned int *)v43 - 1);
          if ( (_DWORD)v45 == *((_DWORD *)v43 - 2) )
          {
            v62 = (unsigned int)(3 * v45 + 1) >> 1;
            v63 = 4 * v62 + 8;
            if ( 4 * (int)v45 + 8 >= (unsigned int)v63 || (unsigned int)v45 >= v62 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v74, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v74);
              sub_233E40((__int64)v74);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v64 = (unsigned int *)sub_186B300(v43 - 1, v63);
            v43 = v64 + 2;
            v14[295] = (__int64)(v64 + 2);
            *v64 = v62;
            v46 = &v64[v64[1] + 2];
          }
          else
          {
            v46 = (unsigned int *)v43 + v45;
          }
        }
        else
        {
          v68 = (_QWORD *)sub_186B270(0x10u);
          v43 = v68 + 1;
          *v68 = 2;
          v14[295] = (__int64)(v68 + 1);
          v46 = (unsigned int *)(v68 + 1);
        }
        *v46 = v44;
        result = v72;
        v19 += 8;
        ++*((_DWORD *)v43 - 1);
        if ( v19 == v72 )
          return result;
        goto LABEL_33;
      }
      v20 = v14[300];
      v21 = *(unsigned int *)(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF8LL) + 12LL);
      if ( v20 )
      {
        if ( (unsigned int)v21 >= *(_DWORD *)(v20 - 4) )
          v20 = 0;
        else
          v20 = *(_QWORD *)(v20 + 8 * v21);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 464LL))(v20);
      v22 = *a1;
      v23 = sub_15E1B70(a1[1][18]);
      v24 = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      v25 = (_QWORD *)v22[1];
      if ( v25 )
      {
        v26 = *((_DWORD *)v25 - 1);
        if ( v26 == *((_DWORD *)v25 - 2) )
        {
          v55 = (3 * v26 + 1) >> 1;
          v56 = 8 * v55 + 8;
          if ( 8 * v26 + 8 >= (unsigned int)v56 || v26 >= v55 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v74, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v74);
            sub_233E40((__int64)v74);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = (unsigned int *)sub_186B300(v25 - 1, v56);
          v58 = v57[1];
          v25 = v57 + 2;
          v22[1] = (__int64)(v57 + 2);
          *v57 = v55;
          LODWORD(v57) = v58;
          v29 = &v25[v58];
          v28 = (_DWORD)v57 + 1;
        }
        else
        {
          v27 = v26;
          v28 = v26 + 1;
          v29 = &v25[v27];
        }
      }
      else
      {
        v66 = (_QWORD *)sub_186B270(0x18u);
        v25 = v66 + 1;
        *v66 = 2;
        v28 = 1;
        v22[1] = (__int64)v25;
        v29 = v25;
      }
      *v29 = v24;
      v30 = a1[1];
      *((_DWORD *)v25 - 1) = v28;
      v31 = (*a1)[1];
      v32 = 0x7FFFFFFF8LL;
      if ( v31 )
        v32 = 8LL * (unsigned int)(*(_DWORD *)(v31 - 4) - 1);
      v33 = (int *)a1[2];
      v34 = (_QWORD *)v30[291];
      v69 = *(_QWORD *)(v31 + v32);
      v35 = (unsigned int)*v33;
      if ( v34 )
      {
        v36 = *((_DWORD *)v34 - 1);
        v70 = v36;
        if ( (unsigned int)v35 < v36 )
        {
          v37 = *v33;
          goto LABEL_29;
        }
        v47 = v35 + 1;
        if ( v36 >= (int)v35 + 1 )
        {
          *((_DWORD *)v34 - 1) = v47;
          v37 = *v33;
          goto LABEL_29;
        }
      }
      else
      {
        v47 = v35 + 1;
        if ( (_DWORD)v35 == -1 )
        {
          v37 = -1;
          goto LABEL_29;
        }
        v65 = (_QWORD *)sub_186B270(0x18u);
        v70 = 0;
        *v65 = 2;
        v34 = v65 + 1;
        v30[291] = (__int64)(v65 + 1);
      }
      while ( 1 )
      {
        v52 = *((_DWORD *)v34 - 2);
        if ( v52 >= v47 )
          break;
        v48 = (3 * v52 + 1) >> 1;
        v49 = 8 * v48 + 8;
        v50 = v48;
        if ( 8 * v52 + 8 >= (unsigned int)v49 || v52 >= v48 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v74, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v74);
          sub_233E40((__int64)v74);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v51 = (unsigned int *)sub_186B300(v34 - 1, v49);
        v34 = v51 + 2;
        v30[291] = (__int64)(v51 + 2);
        *v51 = v50;
      }
      v33 = (int *)a1[2];
      *((_DWORD *)v34 - 1) = v47;
      v53 = 8LL * v47;
      v30 = a1[1];
      v54 = 8LL * v70;
      v37 = *v33;
      if ( v54 != v53 )
      {
        v73 = v34;
        v71 = v33;
        memset(&v34[(unsigned __int64)v54 / 8], 0, v53 - v54);
        v33 = v71;
        v34 = v73;
      }
LABEL_29:
      v38 = (_QWORD *)v30[295];
      v39 = 2 * v37;
      v34[v35] = v69;
      if ( v38 )
      {
        v40 = *((unsigned int *)v38 - 1);
        if ( (_DWORD)v40 == *((_DWORD *)v38 - 2) )
        {
          v59 = (unsigned int)(3 * v40 + 1) >> 1;
          v60 = 4 * v59 + 8;
          if ( 4 * (int)v40 + 8 >= (unsigned int)v60 || (unsigned int)v40 >= v59 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v74, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v74);
            sub_233E40((__int64)v74);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B300(v38 - 1, v60);
          v33 = (int *)a1[2];
          v38 = v61 + 2;
          v30[295] = (__int64)(v61 + 2);
          *v61 = v59;
          v41 = (int *)&v61[v61[1] + 2];
        }
        else
        {
          v41 = (int *)v38 + v40;
        }
      }
      else
      {
        v67 = (_QWORD *)sub_186B270(0x10u);
        v33 = (int *)a1[2];
        v38 = v67 + 1;
        *v67 = 2;
        v30[295] = (__int64)(v67 + 1);
        v41 = (int *)(v67 + 1);
      }
      *v41 = v39;
      result = v72;
      v19 += 8;
      ++*((_DWORD *)v38 - 1);
      ++*v33;
      if ( v19 == v72 )
        return result;
LABEL_33:
      v14 = a1[1];
    }
  }
  return result;
}

