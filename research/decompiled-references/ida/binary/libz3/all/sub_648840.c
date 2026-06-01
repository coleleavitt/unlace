void __fastcall sub_648840(_QWORD *a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  char **v4; // rbp
  char **v5; // rbp
  unsigned int v6; // r15d
  __int64 v8; // r14
  unsigned int i; // r13d
  _QWORD *v10; // rdx
  __int64 v11; // rax
  unsigned int *v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // r12
  unsigned int v20; // r8d
  __int64 v21; // rbp
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rsi
  unsigned int v27; // ebx
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  unsigned int *v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  unsigned int *v36; // rax
  unsigned int v37; // r9d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r9d
  size_t v42; // rsi
  unsigned int *v43; // rax
  _DWORD *v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // [rsp+8h] [rbp-80h]
  unsigned int v51; // [rsp+8h] [rbp-80h]
  unsigned int v52; // [rsp+8h] [rbp-80h]
  unsigned int v53; // [rsp+8h] [rbp-80h]
  _QWORD *v54; // [rsp+8h] [rbp-80h]
  unsigned int v55; // [rsp+8h] [rbp-80h]
  _QWORD *v56; // [rsp+10h] [rbp-78h]
  unsigned int v57; // [rsp+10h] [rbp-78h]
  unsigned int v58; // [rsp+10h] [rbp-78h]
  _QWORD *v59; // [rsp+10h] [rbp-78h]
  _QWORD *v60; // [rsp+10h] [rbp-78h]
  _QWORD *v61; // [rsp+10h] [rbp-78h]
  _QWORD *v62; // [rsp+18h] [rbp-70h]
  _QWORD *v63; // [rsp+18h] [rbp-70h]
  __int64 v64[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(_DWORD *)(a2 + 24);
  if ( v6 )
  {
    v8 = a2 + 40;
    for ( i = 1; ; i = v18 )
    {
      v19 = *(_QWORD *)(v8 - 8);
      v20 = i - 1;
      if ( *(_WORD *)(v19 + 4) == 1 )
        break;
      v10 = (_QWORD *)a1[2];
      if ( v10 )
      {
        v11 = *((unsigned int *)v10 - 1);
        if ( (_DWORD)v11 == *((_DWORD *)v10 - 2) )
        {
          v27 = (unsigned int)(3 * v11 + 1) >> 1;
          v28 = 4 * v27 + 8;
          if ( 4 * (int)v11 + 8 >= (unsigned int)v28 || (unsigned int)v11 >= v27 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v64);
            sub_233E40((__int64)v64);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v56 = a1;
          v29 = (unsigned int *)sub_186B300(v10 - 1, v28);
          a1 = v56;
          v20 = i - 1;
          v10 = v29 + 2;
          *v29 = v27;
          v30 = v29[1];
          v56[2] = v10;
          v12 = (unsigned int *)v10 + v30;
        }
        else
        {
          v12 = (unsigned int *)v10 + v11;
        }
      }
      else
      {
        v60 = a1;
        v47 = (_QWORD *)sub_186B270(0x10u);
        a1 = v60;
        v20 = i - 1;
        v10 = v47 + 1;
        *v47 = 2;
        v60[2] = v47 + 1;
        v12 = (unsigned int *)(v47 + 1);
      }
      *v12 = v20;
      ++*((_DWORD *)v10 - 1);
      v13 = (_QWORD *)a1[4];
      ++*(_DWORD *)(v19 + 8);
      if ( v13 )
      {
        v14 = *((_DWORD *)v13 - 1);
        if ( v14 == *((_DWORD *)v13 - 2) )
        {
          v23 = (3 * v14 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v24 || v14 >= v23 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v64, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v64);
            sub_233E40((__int64)v64);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v50 = a1;
          v25 = (unsigned int *)sub_186B300(v13 - 1, v24);
          a1 = v50;
          v26 = v25[1];
          v13 = v25 + 2;
          *v25 = v23;
          v50[4] = v25 + 2;
          LODWORD(v25) = v26;
          v17 = &v13[v26];
          v16 = (_DWORD)v25 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v13[v15];
        }
      }
      else
      {
        v54 = a1;
        v48 = (_QWORD *)sub_186B270(0x18u);
        a1 = v54;
        v13 = v48 + 1;
        *v48 = 2;
        v16 = 1;
        v54[4] = v13;
        v17 = v13;
      }
      *v17 = v19;
      v8 += 8;
      *((_DWORD *)v13 - 1) = v16;
      v18 = i + 1;
      if ( i >= v6 )
        return;
LABEL_10:
      ;
    }
    if ( i < v6 )
    {
      v21 = v8;
      v22 = i;
      while ( 1 )
      {
        if ( *(_WORD *)(*(_QWORD *)v21 + 4LL) != 1 || *(_DWORD *)(v19 + 16) != *(_DWORD *)(*(_QWORD *)v21 + 16LL) )
          goto LABEL_16;
        v31 = (_QWORD *)*a1;
        if ( !*a1 )
          break;
        v32 = *((unsigned int *)v31 - 1);
        if ( (_DWORD)v32 != *((_DWORD *)v31 - 2) )
        {
          v33 = (unsigned int *)v31 + v32;
          goto LABEL_27;
        }
        v41 = (unsigned int)(3 * v32 + 1) >> 1;
        v42 = 4 * v41 + 8;
        if ( 4 * (int)v32 + 8 >= (unsigned int)v42 || (unsigned int)v32 >= v41 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v64, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v64);
          sub_233E40((__int64)v64);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v63 = a1;
        v58 = (unsigned int)(3 * v32 + 1) >> 1;
        v52 = v20;
        v43 = (unsigned int *)sub_186B300(v31 - 1, v42);
        a1 = v63;
        v44 = v43 + 2;
        v20 = v52;
        *v43 = v58;
        v45 = v43[1];
        *v63 = v44;
        v44[v45] = v52;
        ++*(v44 - 1);
        v34 = (_QWORD *)v63[1];
        if ( v34 )
        {
LABEL_28:
          v35 = *((unsigned int *)v34 - 1);
          if ( (_DWORD)v35 == *((_DWORD *)v34 - 2) )
          {
            v37 = (unsigned int)(3 * v35 + 1) >> 1;
            v38 = 4 * v37 + 8;
            if ( 4 * (int)v35 + 8 >= (unsigned int)v38 || (unsigned int)v35 >= v37 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v64, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v64);
              sub_233E40((__int64)v64);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v62 = a1;
            v57 = (unsigned int)(3 * v35 + 1) >> 1;
            v51 = v20;
            v39 = (unsigned int *)sub_186B300(v34 - 1, v38);
            a1 = v62;
            v34 = v39 + 2;
            v20 = v51;
            *v39 = v57;
            v40 = v39[1];
            v62[1] = v34;
            v36 = (unsigned int *)v34 + v40;
          }
          else
          {
            v36 = (unsigned int *)v34 + v35;
          }
          goto LABEL_30;
        }
LABEL_38:
        v59 = a1;
        v53 = v20;
        v46 = (_QWORD *)sub_186B270(0x10u);
        a1 = v59;
        v20 = v53;
        v34 = v46 + 1;
        *v46 = 2;
        v59[1] = v46 + 1;
        v36 = (unsigned int *)(v46 + 1);
LABEL_30:
        *v36 = v22;
        ++*((_DWORD *)v34 - 1);
LABEL_16:
        ++v22;
        v21 += 8;
        if ( v22 >= v6 )
        {
          v18 = i + 1;
          v8 += 8;
          goto LABEL_10;
        }
      }
      v61 = a1;
      v55 = v20;
      v49 = (_QWORD *)sub_186B270(0x10u);
      a1 = v61;
      v20 = v55;
      v31 = v49 + 1;
      *v49 = 2;
      *v61 = v49 + 1;
      v33 = (unsigned int *)(v49 + 1);
LABEL_27:
      *v33 = v20;
      ++*((_DWORD *)v31 - 1);
      v34 = (_QWORD *)a1[1];
      if ( v34 )
        goto LABEL_28;
      goto LABEL_38;
    }
  }
}

