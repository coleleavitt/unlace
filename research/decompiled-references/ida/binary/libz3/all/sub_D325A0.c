__int64 __fastcall sub_D325A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdx
  unsigned int v5; // r13d
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r12
  _QWORD *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 result; // rax
  int v20; // edx
  _QWORD *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  unsigned int v25; // r12d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // ebp
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 *v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 *v38; // rdx
  unsigned int v39; // r12d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  unsigned int v44; // ebp
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rax
  unsigned int v49; // ebp
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r13
  _QWORD *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  _QWORD *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v64; // rax
  unsigned int v65; // r14d
  unsigned int v66; // ecx
  unsigned int *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  char **v71; // rbp
  char **exception; // rbp
  __int64 v73; // [rsp+10h] [rbp-58h] BYREF
  __int64 v74; // [rsp+18h] [rbp-50h]
  __int64 v75[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (_QWORD *)a1[11];
  v5 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    v6 = *((_DWORD *)v4 - 1);
    if ( v6 == *((_DWORD *)v4 - 2) )
    {
      v39 = (3 * v6 + 1) >> 1;
      v40 = 8 * v39 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v40 || v6 >= v39 )
        goto LABEL_55;
      v41 = (unsigned int *)sub_186B300(v4 - 1, v40);
      v42 = v41[1];
      v4 = v41 + 2;
      *v41 = v39;
      a1[11] = v41 + 2;
      LODWORD(v41) = v42;
      v9 = &v4[v42];
      v8 = (_DWORD)v41 + 1;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = &v4[v7];
    }
  }
  else
  {
    v43 = (_QWORD *)sub_186B270(0x18u);
    v4 = v43 + 1;
    *v43 = 2;
    v8 = 1;
    a1[11] = v4;
    v9 = v4;
  }
  *v9 = 0;
  *((_DWORD *)v4 - 1) = v8;
  v10 = a1[20];
  if ( !v10 || (v11 = *(_DWORD *)(v10 - 4), v5 >= v11) || (v12 = v11 - v5 - 1, (v13 = *(_QWORD *)(v10 + 8 * v12)) == 0) )
  {
    v21 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v21 )
    {
      v22 = *((_DWORD *)v21 - 1);
      if ( v22 == *((_DWORD *)v21 - 2) )
      {
        v25 = (3 * v22 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v26 || v22 >= v25 )
          goto LABEL_55;
        v27 = (unsigned int *)sub_186B300(v21 - 1, v26);
        v28 = v27[1];
        v21 = v27 + 2;
        *v27 = v25;
        a1[7] = v27 + 2;
        LODWORD(v27) = v28;
        v24 = &v21[v28];
        result = (unsigned int)((_DWORD)v27 + 1);
      }
      else
      {
        v23 = v22;
        result = v22 + 1;
        v24 = &v21[v23];
      }
    }
    else
    {
      v48 = (_QWORD *)sub_186B270(0x18u);
      v21 = v48 + 1;
      *v48 = 2;
      result = 1;
      a1[7] = v21;
      v24 = v21;
    }
    *v24 = a2;
    *((_DWORD *)v21 - 1) = result;
    return result;
  }
  if ( !*(_WORD *)(v13 + 4) && (*(_BYTE *)(v13 + 30) & 1) != 0 || (v29 = *(_DWORD *)(a1[66] + 4 * v12), v29 == v11) )
  {
    v14 = (_QWORD *)a1[7];
    ++*(_DWORD *)(v13 + 8);
    if ( v14 )
    {
      v15 = *((_DWORD *)v14 - 1);
      if ( v15 == *((_DWORD *)v14 - 2) )
      {
        v44 = (3 * v15 + 1) >> 1;
        v45 = 8 * v44 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v45 || v15 >= v44 )
          goto LABEL_55;
        v46 = (unsigned int *)sub_186B300(v14 - 1, v45);
        v47 = v46[1];
        v14 = v46 + 2;
        *v46 = v44;
        a1[7] = v46 + 2;
        LODWORD(v46) = v47;
        v18 = &v14[v47];
        v17 = (_DWORD)v46 + 1;
      }
      else
      {
        v16 = v15;
        v17 = v15 + 1;
        v18 = &v14[v16];
      }
    }
    else
    {
      v64 = (_QWORD *)sub_186B270(0x18u);
      v14 = v64 + 1;
      *v64 = 2;
      v17 = 1;
      a1[7] = v14;
      v18 = v14;
    }
    *v18 = v13;
    *((_DWORD *)v14 - 1) = v17;
    goto LABEL_13;
  }
  v30 = v11 - v29;
  v31 = v30;
  v32 = sub_1680FB0(a1[4], v13, v30);
  v33 = v32;
  if ( !v32 )
  {
    v53 = a1[1];
    v73 = 0;
    v74 = v53;
    sub_1585D20(a1 + 21, v13, 0, v31, 0, &v73);
    v54 = v73;
    if ( v73 )
      ++*(_DWORD *)(v73 + 8);
    v55 = (_QWORD *)a1[7];
    if ( v55 )
    {
      v56 = *((_DWORD *)v55 - 1);
      if ( v56 == *((_DWORD *)v55 - 2) )
      {
        v65 = (3 * v56 + 1) >> 1;
        v66 = 8 * v65 + 8;
        if ( 8 * v56 + 8 >= v66 || v56 >= v65 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v75, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v75);
          sub_233E40((__int64)v75);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v67 = (unsigned int *)sub_186B300(v55 - 1, v66);
        v68 = v67[1];
        v55 = v67 + 2;
        *v67 = v65;
        a1[7] = v67 + 2;
        LODWORD(v67) = v68;
        v59 = &v55[v68];
        v58 = (_DWORD)v67 + 1;
      }
      else
      {
        v57 = v56;
        v58 = v56 + 1;
        v59 = &v55[v57];
      }
    }
    else
    {
      v70 = (_QWORD *)sub_186B270(0x18u);
      *v70 = 2;
      v58 = 1;
      v55 = v70 + 1;
      a1[7] = v55;
      v59 = v55;
    }
    *v59 = v54;
    v60 = v73;
    *((_DWORD *)v55 - 1) = v58;
    sub_1584390(a1, v13, v31, v60);
    v61 = v73;
    if ( v73 )
    {
      v62 = v74;
      if ( (*(_DWORD *)(v73 + 8))-- == 1 )
        sub_15D7BC0(v62, v61);
    }
    goto LABEL_13;
  }
  v34 = (__int64 *)a1[7];
  ++*(_DWORD *)(v32 + 8);
  if ( !v34 )
  {
    v69 = (_QWORD *)sub_186B270(0x18u);
    v34 = v69 + 1;
    *v69 = 2;
    v37 = 1;
    a1[7] = v34;
    v38 = v34;
    goto LABEL_29;
  }
  v35 = *((_DWORD *)v34 - 1);
  if ( v35 == *((_DWORD *)v34 - 2) )
  {
    v49 = (3 * v35 + 1) >> 1;
    v50 = 8 * v49 + 8;
    if ( 8 * v35 + 8 < (unsigned int)v50 && v35 < v49 )
    {
      v51 = (unsigned int *)sub_186B300(v34 - 1, v50);
      v52 = v51[1];
      v34 = (__int64 *)(v51 + 2);
      *v51 = v49;
      a1[7] = v51 + 2;
      LODWORD(v51) = v52;
      v38 = &v34[v52];
      v37 = (_DWORD)v51 + 1;
      goto LABEL_29;
    }
LABEL_55:
    v71 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v75, "Overflow encountered when expanding vector");
    *v71 = (char *)off_1C63128;
    sub_2333C0(v71 + 1, v75);
    sub_233E40((__int64)v75);
    __cxa_throw(v71, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v36 = v35;
  v37 = v35 + 1;
  v38 = &v34[v36];
LABEL_29:
  *v38 = v33;
  *((_DWORD *)v34 - 1) = v37;
LABEL_13:
  result = a1[5];
  if ( result )
  {
    v20 = *(_DWORD *)(result - 4);
    if ( v20 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v20 - 1) + 8) |= 2u;
  }
  return result;
}

