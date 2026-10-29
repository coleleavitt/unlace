__int64 __fastcall sub_CD0860(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned int v5; // r13d
  _QWORD *v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // r14
  unsigned int **v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rbp
  __int64 (*v13)(void); // rdx
  unsigned int *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // r12d
  __int64 *v19; // r15
  _QWORD *v20; // rdi
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 v22; // rax
  unsigned int **v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 result; // rax
  unsigned int **v27; // rdx
  unsigned int v28; // r15d
  size_t v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // r14
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  unsigned int v37; // ebx
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ebp
  size_t v45; // rdi
  unsigned int *v46; // rax
  __int64 *v47; // r14
  unsigned int *v48; // r13
  __int64 v49; // r10
  __int64 *v50; // r11
  unsigned __int64 v51; // r8
  __int64 *v52; // rdx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r8
  __m128i v55; // xmm0
  unsigned __int64 v56; // r8
  __int64 v57; // rdi
  __int64 *v58; // r12
  void *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // eax
  _DWORD *v64; // rdi
  __int64 v65; // r8
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  char **exception; // rbp
  __int64 v69; // rdx
  unsigned int v70; // [rsp+0h] [rbp-78h]
  unsigned int *v71; // [rsp+0h] [rbp-78h]
  unsigned int v73; // [rsp+1Ch] [rbp-5Ch]
  __int64 v74[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *a2;
  v6 = (_QWORD *)a1[67];
  v7 = *a2 + 1;
  if ( v6 )
  {
    v8 = *((unsigned int *)v6 - 1);
    if ( (unsigned int)v8 < v7 )
      goto LABEL_24;
  }
  else if ( *a2 != -1 )
  {
    v8 = 0;
    v67 = (_QWORD *)sub_186B270(0x28u);
    v6 = v67 + 1;
    *v67 = 2;
    a1[67] = v67 + 1;
LABEL_24:
    while ( 1 )
    {
      v31 = *((_DWORD *)v6 - 2);
      if ( v31 >= v7 )
        break;
      v28 = (3 * v31 + 1) >> 1;
      v29 = 16 * v28 + 8;
      if ( 16 * v31 + 8 >= (unsigned int)v29 || v31 >= v28 )
        goto LABEL_77;
      v30 = (unsigned int *)sub_186B300(v6 - 1, v29);
      v6 = v30 + 2;
      *v30 = v28;
      a1[67] = v30 + 2;
    }
    v32 = 16 * v8;
    *((_DWORD *)v6 - 1) = v7;
    v33 = 16LL * v7;
    if ( v32 != v33 )
    {
      v34 = 0;
      v35 = ((unsigned __int64)(v33 - 16 - v32) >> 4) + 1;
      do
      {
        v36 = v34++;
        *(_OWORD *)&v6[2 * v36 + (unsigned __int64)v32 / 8] = 0;
      }
      while ( v34 < v35 );
    }
  }
  v9 = (unsigned int **)&v6[2 * v5];
  v10 = sub_17E9C90(a1 + 2, 24);
  v11 = (_QWORD *)a1[1];
  v12 = v10;
  v13 = *(__int64 (**)(void))(*v11 + 56LL);
  if ( *v9 )
  {
    v14 = v9[1];
    if ( (char *)v13 == (char *)sub_CD0230 )
    {
      v15 = v11[8];
      if ( v15 )
        v16 = *(_DWORD *)(v15 - 4);
      else
        v16 = 0;
    }
    else
    {
      v71 = v9[1];
      v16 = v13();
      v11 = (_QWORD *)a1[1];
      v14 = v71;
      v13 = *(__int64 (**)(void))(*v11 + 56LL);
    }
    *(_QWORD *)v12 = a3;
    *(_DWORD *)(v12 + 8) = v16;
    *(_QWORD *)(v12 + 16) = v14;
    v9[1] = (unsigned int *)v12;
    if ( a3 )
LABEL_8:
      ++*(_DWORD *)(a3 + 8);
  }
  else
  {
    *v9 = a2;
    if ( (char *)v13 == (char *)sub_CD0230 )
    {
      v62 = v11[8];
      if ( v62 )
        v63 = *(_DWORD *)(v62 - 4);
      else
        v63 = 0;
    }
    else
    {
      v63 = v13();
      v11 = (_QWORD *)a1[1];
      v13 = *(__int64 (**)(void))(*v11 + 56LL);
    }
    *(_DWORD *)(v12 + 8) = v63;
    *(_QWORD *)v12 = a3;
    *(_QWORD *)(v12 + 16) = 0;
    v9[1] = (unsigned int *)v12;
    ++a2[2];
    if ( a3 )
      goto LABEL_8;
  }
  if ( (char *)v13 != (char *)sub_CD0230 )
  {
    v18 = v13();
    goto LABEL_12;
  }
  v17 = v11[8];
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 - 4);
LABEL_12:
    v19 = (__int64 *)a1[68];
    v70 = v18 + 1;
    if ( v19 )
    {
      v73 = *((_DWORD *)v19 - 1);
      if ( v73 >= v18 + 1 )
        goto LABEL_14;
      goto LABEL_35;
    }
    if ( v18 == -1 )
      goto LABEL_14;
    goto LABEL_72;
  }
  v19 = (__int64 *)a1[68];
  if ( v19 )
  {
    v73 = *((_DWORD *)v19 - 1);
    if ( v73 )
      goto LABEL_17;
    v70 = 1;
    goto LABEL_35;
  }
  v70 = 1;
LABEL_72:
  v73 = 0;
  v41 = (_QWORD *)sub_186B270(0x18u);
  v19 = v41 + 1;
  *v41 = 2;
  a1[68] = v41 + 1;
LABEL_35:
  while ( 1 )
  {
    v42 = *((_DWORD *)v19 - 2);
    v43 = v70;
    if ( v42 >= v70 )
      break;
    while ( 1 )
    {
      v44 = (3 * v42 + 1) >> 1;
      v45 = 8 * v44 + 8;
      if ( 8 * v42 + 8 >= (unsigned int)v45 || v42 >= v44 )
        goto LABEL_77;
      v46 = (unsigned int *)sub_186B270(v45);
      v47 = (__int64 *)a1[68];
      v48 = v46;
      v19 = (__int64 *)(v46 + 2);
      if ( !v47 )
        break;
      v49 = *((unsigned int *)v47 - 1);
      v46[1] = v49;
      v50 = &v47[v49];
      if ( v47 != v50 )
      {
        v51 = 8 * v49 - 8;
        v52 = v47;
        if ( v51 <= 8 || v19 < v47 + 2 && v47 < (__int64 *)v46 + 3 )
        {
          v64 = v46 + 2;
          do
          {
            v65 = *v52;
            *v52++ = 0;
            v64 += 2;
            *((_QWORD *)v64 - 1) = v65;
          }
          while ( v52 != v50 );
        }
        else
        {
          v53 = 0;
          v54 = (v51 >> 3) + 1;
          do
          {
            v55 = _mm_loadu_si128((const __m128i *)&v47[v53 / 2]);
            *(_OWORD *)&v47[v53 / 2] = 0;
            *(__m128i *)&v46[v53 + 2] = v55;
            v53 += 4LL;
          }
          while ( 4 * (v54 >> 1) != v53 );
          if ( (v54 & 1) != 0 )
          {
            v56 = 2 * (v54 & 0xFFFFFFFFFFFFFFFELL);
            v57 = v47[v56 / 2];
            v47[v56 / 2] = 0;
            *(_QWORD *)&v46[v56 + 2] = v57;
          }
        }
      }
      v58 = &v47[v49];
      if ( (_DWORD)v49 )
      {
        do
        {
          while ( *v47 )
          {
            v59 = (void *)(*v47++ - 8);
            sub_186B220(v59);
            if ( v47 == v58 )
              goto LABEL_50;
          }
          ++v47;
        }
        while ( v47 != v58 );
LABEL_50:
        v47 = (__int64 *)a1[68];
      }
      sub_186B220(v47 - 1);
      *v48 = v44;
      v43 = v70;
      v42 = *((_DWORD *)v19 - 2);
      a1[68] = v19;
      if ( v42 >= v70 )
        goto LABEL_52;
    }
    v46[1] = 0;
    a1[68] = v19;
    *v46 = v44;
  }
LABEL_52:
  *((_DWORD *)v19 - 1) = v43;
  v60 = 8LL * v43;
  v61 = 8LL * v73;
  if ( v61 != v60 )
    memset(&v19[(unsigned __int64)v61 / 8], 0, v60 - v61);
LABEL_14:
  v20 = (_QWORD *)a1[1];
  v21 = *(__int64 (__fastcall **)(__int64))(*v20 + 56LL);
  if ( v21 == sub_CD0230 )
  {
    v22 = v20[8];
    if ( v22 )
      v19 += *(unsigned int *)(v22 - 4);
LABEL_17:
    v23 = (unsigned int **)*v19;
    if ( *v19 )
      goto LABEL_18;
LABEL_67:
    v66 = (_QWORD *)sub_186B270(0x18u);
    v23 = (unsigned int **)(v66 + 1);
    *v66 = 2;
    result = 1;
    *v19 = (__int64)v23;
    v27 = v23;
    goto LABEL_20;
  }
  v19 = (__int64 *)(a1[68] + 8LL * ((unsigned int (*)(void))v21)());
  v23 = (unsigned int **)*v19;
  if ( !*v19 )
    goto LABEL_67;
LABEL_18:
  v24 = *((_DWORD *)v23 - 1);
  if ( v24 == *((_DWORD *)v23 - 2) )
  {
    v37 = (3 * v24 + 1) >> 1;
    v38 = 8 * v37 + 8;
    if ( 8 * v24 + 8 >= (unsigned int)v38 || v24 >= v37 )
    {
LABEL_77:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_163D96(v74, "Overflow encountered when expanding vector", v69);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v74);
      sub_233E40((__int64)v74);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v39 = (unsigned int *)sub_186B300(v23 - 1, v38);
    v40 = v39[1];
    v23 = (unsigned int **)(v39 + 2);
    *v19 = (__int64)(v39 + 2);
    *v39 = v37;
    LODWORD(v39) = v40;
    v27 = &v23[v40];
    result = (unsigned int)((_DWORD)v39 + 1);
  }
  else
  {
    v25 = v24;
    result = v24 + 1;
    v27 = &v23[v25];
  }
LABEL_20:
  *v27 = a2;
  *((_DWORD *)v23 - 1) = result;
  return result;
}

