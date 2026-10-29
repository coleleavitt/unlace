void __fastcall sub_5F18A0(unsigned int **a1, unsigned int a2, unsigned int a3)
{
  unsigned int *v6; // rdx
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  unsigned int *v10; // rdx
  __int64 v11; // rax
  unsigned int *v12; // rax
  unsigned int *v13; // rdx
  __int64 v14; // rax
  unsigned int *v15; // rax
  unsigned int v16; // r14d
  unsigned int *v17; // rax
  unsigned int v18; // r8d
  size_t v19; // rsi
  unsigned int *v20; // rax
  unsigned int *v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int *v28; // rax
  unsigned int *v29; // rdx
  __int64 v30; // rax
  unsigned int *v31; // rax
  unsigned int *v32; // rdx
  __int64 v33; // rax
  unsigned int *v34; // rax
  unsigned int *v35; // rdx
  __int64 v36; // rax
  unsigned int *v37; // rax
  unsigned int v38; // r14d
  _QWORD *v39; // rax
  unsigned int v40; // r8d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r8d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rax
  unsigned int v48; // ecx
  size_t v49; // rsi
  unsigned int v50; // r13d
  unsigned int *v51; // rax
  __int64 v52; // rax
  unsigned int v53; // ecx
  size_t v54; // rsi
  unsigned int v55; // r13d
  unsigned int *v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  unsigned int *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned int *v63; // rdi
  unsigned int *v64; // rsi
  unsigned int *v65; // r8
  unsigned int *v66; // rdx
  int *v67; // rax
  int *v68; // rdx
  int v69; // ecx
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  unsigned int v72; // eax
  char **exception; // rbp
  unsigned int v74; // [rsp+Ch] [rbp-6Ch]
  unsigned int v75; // [rsp+Ch] [rbp-6Ch]
  __int64 v76[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *a1;
  if ( *a1 )
  {
    v7 = *(v6 - 1);
    v8 = a2;
    if ( a2 < v7 )
    {
      do
      {
        v24 = v8;
        v8 = v6[v8];
        if ( v24 == v8 )
          break;
        v25 = v8;
        v8 = v6[v8];
      }
      while ( v25 != v8 );
    }
    v9 = a3;
    if ( a3 < v7 )
    {
      v72 = a3;
      do
      {
        v9 = v72;
        v72 = v6[v72];
      }
      while ( v72 != v9 );
    }
  }
  else
  {
    v8 = a2;
    v9 = a3;
  }
  if ( v9 != v8 )
  {
    while ( 1 )
    {
      if ( !v6 )
      {
        v16 = 0;
        v59 = (_QWORD *)sub_186B270(0x10u);
        v6 = (unsigned int *)(v59 + 1);
        *v59 = 2;
        v17 = v6;
        *a1 = v6;
LABEL_6:
        *v17 = v16;
        ++*(v6 - 1);
        v10 = a1[1];
        if ( !v10 )
          goto LABEL_19;
        goto LABEL_7;
      }
      v16 = *(v6 - 1);
      if ( a2 < v16 )
        break;
      v17 = &v6[v16];
      if ( v16 != *(v6 - 2) )
        goto LABEL_6;
      v18 = (3 * v16 + 1) >> 1;
      v19 = 4 * v18 + 8;
      if ( 4 * v16 + 8 >= (unsigned int)v19 || v16 >= v18 )
        goto LABEL_61;
      v20 = (unsigned int *)sub_186B300(v6 - 2, v19);
      v21 = v20 + 2;
      *v20 = (3 * v16 + 1) >> 1;
      v22 = v20[1];
      *a1 = v21;
      v21[v22] = v16;
      ++*(v21 - 1);
      v10 = a1[1];
      if ( !v10 )
      {
LABEL_19:
        v23 = (_QWORD *)sub_186B270(0x10u);
        v10 = (unsigned int *)(v23 + 1);
        *v23 = 2;
        a1[1] = (unsigned int *)(v23 + 1);
        v12 = (unsigned int *)(v23 + 1);
        goto LABEL_9;
      }
LABEL_7:
      v11 = *(v10 - 1);
      if ( (_DWORD)v11 == *(v10 - 2) )
      {
        v44 = (unsigned int)(3 * v11 + 1) >> 1;
        v45 = 4 * v44 + 8;
        if ( 4 * (int)v11 + 8 >= (unsigned int)v45 || (unsigned int)v11 >= v44 )
          goto LABEL_61;
        v75 = (unsigned int)(3 * v11 + 1) >> 1;
        v46 = (unsigned int *)sub_186B300(v10 - 2, v45);
        v10 = v46 + 2;
        *v46 = v75;
        v47 = v46[1];
        a1[1] = v10;
        v12 = &v10[v47];
      }
      else
      {
        v12 = &v10[v11];
      }
LABEL_9:
      *v12 = 1;
      ++*(v10 - 1);
      v13 = a1[2];
      if ( v13 )
      {
        v14 = *(v13 - 1);
        if ( (_DWORD)v14 != *(v13 - 2) )
        {
          v15 = &v13[v14];
          goto LABEL_12;
        }
        v40 = (unsigned int)(3 * v14 + 1) >> 1;
        v41 = 4 * v40 + 8;
        if ( 4 * (int)v14 + 8 < (unsigned int)v41 && (unsigned int)v14 < v40 )
        {
          v74 = (unsigned int)(3 * v14 + 1) >> 1;
          v42 = (unsigned int *)sub_186B300(v13 - 2, v41);
          v13 = v42 + 2;
          *v42 = v74;
          v43 = v42[1];
          a1[2] = v13;
          v15 = &v13[v43];
          goto LABEL_12;
        }
LABEL_61:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v76, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v76);
        sub_233E40((__int64)v76);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v70 = (_QWORD *)sub_186B270(0x10u);
      v13 = (unsigned int *)(v70 + 1);
      *v70 = 2;
      a1[2] = (unsigned int *)(v70 + 1);
      v15 = (unsigned int *)(v70 + 1);
LABEL_12:
      *v15 = v16;
      ++*(v13 - 1);
      v6 = *a1;
    }
    while ( v6 )
    {
      v38 = *(v6 - 1);
      if ( a3 < v38 )
      {
        v60 = a1[1];
        v61 = v8;
        v62 = 4LL * v9;
        v63 = &v60[v61];
        v64 = (unsigned int *)((char *)v60 + v62);
        if ( *v64 >= *v63 )
        {
          v65 = v63;
          v63 = v64;
          v8 = v9;
          v64 = v65;
          v62 = v61 * 4;
          v61 = v9;
        }
        *(unsigned int *)((char *)v6 + v62) = v8;
        *v63 += *v64;
        v66 = a1[2];
        v67 = (int *)&v66[v61];
        v68 = (int *)((char *)v66 + v62);
        v69 = *v68;
        *v68 = *v67;
        *v67 = v69;
        return;
      }
      if ( v38 == *(v6 - 2) )
      {
        v26 = (3 * v38 + 1) >> 1;
        v27 = 4 * v26 + 8;
        if ( 4 * v38 + 8 >= (unsigned int)v27 || v38 >= v26 )
          goto LABEL_61;
        v28 = (unsigned int *)sub_186B300(v6 - 2, v27);
        v29 = v28 + 2;
        *v28 = (3 * v38 + 1) >> 1;
        v30 = v28[1];
        *a1 = v29;
        v31 = &v29[v30];
LABEL_26:
        *v31 = v38;
        ++*(v29 - 1);
        v32 = a1[1];
        if ( !v32 )
          goto LABEL_37;
        goto LABEL_27;
      }
      v6[v38] = v38;
      ++*(v6 - 1);
      v32 = a1[1];
      if ( !v32 )
      {
LABEL_37:
        v39 = (_QWORD *)sub_186B270(0x10u);
        v32 = (unsigned int *)(v39 + 1);
        *v39 = 2;
        a1[1] = (unsigned int *)(v39 + 1);
        v34 = (unsigned int *)(v39 + 1);
        goto LABEL_29;
      }
LABEL_27:
      v33 = *(v32 - 1);
      if ( (_DWORD)v33 == *(v32 - 2) )
      {
        v53 = (unsigned int)(3 * v33 + 1) >> 1;
        v54 = 4 * v53 + 8;
        v55 = v53;
        if ( 4 * (int)v33 + 8 >= (unsigned int)v54 || (unsigned int)v33 >= v53 )
          goto LABEL_61;
        v56 = (unsigned int *)sub_186B300(v32 - 2, v54);
        v32 = v56 + 2;
        *v56 = v55;
        v57 = v56[1];
        a1[1] = v32;
        v34 = &v32[v57];
      }
      else
      {
        v34 = &v32[v33];
      }
LABEL_29:
      *v34 = 1;
      ++*(v32 - 1);
      v35 = a1[2];
      if ( v35 )
      {
        v36 = *(v35 - 1);
        if ( (_DWORD)v36 == *(v35 - 2) )
        {
          v48 = (unsigned int)(3 * v36 + 1) >> 1;
          v49 = 4 * v48 + 8;
          v50 = v48;
          if ( 4 * (int)v36 + 8 >= (unsigned int)v49 || (unsigned int)v36 >= v48 )
            goto LABEL_61;
          v51 = (unsigned int *)sub_186B300(v35 - 2, v49);
          v35 = v51 + 2;
          *v51 = v50;
          v52 = v51[1];
          a1[2] = v35;
          v37 = &v35[v52];
        }
        else
        {
          v37 = &v35[v36];
        }
      }
      else
      {
        v71 = (_QWORD *)sub_186B270(0x10u);
        v35 = (unsigned int *)(v71 + 1);
        *v71 = 2;
        a1[2] = (unsigned int *)(v71 + 1);
        v37 = (unsigned int *)(v71 + 1);
      }
      *v37 = v38;
      ++*(v35 - 1);
      v6 = *a1;
    }
    v38 = 0;
    v58 = (_QWORD *)sub_186B270(0x10u);
    v29 = (unsigned int *)(v58 + 1);
    *v58 = 2;
    v31 = v29;
    *a1 = v29;
    goto LABEL_26;
  }
}

