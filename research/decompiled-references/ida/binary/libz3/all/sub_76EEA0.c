__int64 __fastcall sub_76EEA0(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // r12d
  __int64 v5; // rax
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r12
  _QWORD *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rdx
  __int64 result; // rax
  int v21; // edx
  _QWORD *v22; // rdi
  unsigned int v23; // eax
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // ebp
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 *v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 *v39; // rdx
  unsigned int v40; // r13d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned int v45; // ebp
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  unsigned int v50; // ebp
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r13
  _QWORD *v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  _QWORD *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // rdi
  _QWORD *v65; // rax
  unsigned int v66; // r14d
  unsigned int v67; // ecx
  unsigned int *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  _QWORD *v71; // rdx
  char **exception; // rbp
  char **v73; // rbp
  __int64 v74; // [rsp+0h] [rbp-58h] BYREF
  __int64 v75; // [rsp+8h] [rbp-50h]
  __int64 v76[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a1[18] + 32LL);
  if ( v5 && v4 < *(_DWORD *)(v5 - 4) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_76A180(v76, "not handled by bvarray2uf");
LABEL_58:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v76);
    sub_233E40((__int64)v76);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v6 = (_QWORD *)a1[11];
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v40 = (3 * v7 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v41 || v7 >= v40 )
        goto LABEL_57;
      v42 = (unsigned int *)sub_186B300(v6 - 1, v41);
      v43 = v42[1];
      v6 = v42 + 2;
      *v42 = v40;
      a1[11] = v42 + 2;
      LODWORD(v42) = v43;
      v10 = &v6[v43];
      v9 = (_DWORD)v42 + 1;
    }
    else
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = &v6[v8];
    }
  }
  else
  {
    v44 = (_QWORD *)sub_186B270(0x18u);
    v6 = v44 + 1;
    *v44 = 2;
    v9 = 1;
    a1[11] = v6;
    v10 = v6;
  }
  *v10 = 0;
  *((_DWORD *)v6 - 1) = v9;
  v11 = a1[20];
  if ( !v11 || (v12 = *(_DWORD *)(v11 - 4), v4 >= v12) || (v13 = v12 - v4 - 1, (v14 = *(_QWORD *)(v11 + 8 * v13)) == 0) )
  {
    v22 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v22 )
    {
      v23 = *((_DWORD *)v22 - 1);
      if ( v23 == *((_DWORD *)v22 - 2) )
      {
        v26 = (3 * v23 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v27 || v23 >= v26 )
          goto LABEL_57;
        v28 = (unsigned int *)sub_186B300(v22 - 1, v27);
        v29 = v28[1];
        v22 = v28 + 2;
        *v28 = v26;
        a1[7] = v28 + 2;
        LODWORD(v28) = v29;
        v25 = &v22[v29];
        result = (unsigned int)((_DWORD)v28 + 1);
      }
      else
      {
        v24 = v23;
        result = v23 + 1;
        v25 = &v22[v24];
      }
    }
    else
    {
      v49 = (_QWORD *)sub_186B270(0x18u);
      v22 = v49 + 1;
      *v49 = 2;
      result = 1;
      a1[7] = v22;
      v25 = v22;
    }
    *v25 = a2;
    *((_DWORD *)v22 - 1) = result;
    return result;
  }
  if ( !*(_WORD *)(v14 + 4) && (*(_BYTE *)(v14 + 30) & 1) != 0 || (v30 = *(_DWORD *)(a1[66] + 4 * v13), v30 == v12) )
  {
    v15 = (_QWORD *)a1[7];
    ++*(_DWORD *)(v14 + 8);
    if ( !v15 )
    {
      v65 = (_QWORD *)sub_186B270(0x18u);
      v15 = v65 + 1;
      *v65 = 2;
      v18 = 1;
      a1[7] = v15;
      v19 = v15;
      goto LABEL_14;
    }
    v16 = *((_DWORD *)v15 - 1);
    if ( v16 != *((_DWORD *)v15 - 2) )
    {
      v17 = v16;
      v18 = v16 + 1;
      v19 = &v15[v17];
LABEL_14:
      *v19 = v14;
      *((_DWORD *)v15 - 1) = v18;
      goto LABEL_15;
    }
    v45 = (3 * v16 + 1) >> 1;
    v46 = 8 * v45 + 8;
    if ( 8 * v16 + 8 < (unsigned int)v46 && v16 < v45 )
    {
      v47 = (unsigned int *)sub_186B300(v15 - 1, v46);
      v48 = v47[1];
      v15 = v47 + 2;
      *v47 = v45;
      a1[7] = v47 + 2;
      LODWORD(v47) = v48;
      v19 = &v15[v48];
      v18 = (_DWORD)v47 + 1;
      goto LABEL_14;
    }
LABEL_57:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_76A180(v76, "Overflow encountered when expanding vector");
    goto LABEL_58;
  }
  v31 = v12 - v30;
  v32 = v31;
  v33 = sub_1680FB0(a1[4], v14, v31);
  v34 = v33;
  if ( !v33 )
  {
    v54 = a1[1];
    v74 = 0;
    v75 = v54;
    sub_1585D20(a1 + 21, v14, 0, v32, 0, &v74);
    v55 = v74;
    if ( v74 )
      ++*(_DWORD *)(v74 + 8);
    v56 = (_QWORD *)a1[7];
    if ( v56 )
    {
      v57 = *((_DWORD *)v56 - 1);
      if ( v57 == *((_DWORD *)v56 - 2) )
      {
        v66 = (3 * v57 + 1) >> 1;
        v67 = 8 * v66 + 8;
        if ( 8 * v57 + 8 >= v67 || v57 >= v66 )
        {
          v73 = (char **)__cxa_allocate_exception(0x28u);
          sub_76A180(v76, "Overflow encountered when expanding vector");
          *v73 = (char *)off_1C63128;
          sub_2333C0(v73 + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(v73, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v68 = (unsigned int *)sub_186B300(v56 - 1, v67);
        v69 = v68[1];
        v56 = v68 + 2;
        *v68 = v66;
        a1[7] = v68 + 2;
        LODWORD(v68) = v69;
        v60 = &v56[v69];
        v59 = (_DWORD)v68 + 1;
      }
      else
      {
        v58 = v57;
        v59 = v57 + 1;
        v60 = &v56[v58];
      }
    }
    else
    {
      v71 = (_QWORD *)sub_186B270(0x18u);
      *v71 = 2;
      v59 = 1;
      v56 = v71 + 1;
      a1[7] = v56;
      v60 = v56;
    }
    *v60 = v55;
    v61 = v74;
    *((_DWORD *)v56 - 1) = v59;
    sub_1584390(a1, v14, v32, v61);
    v62 = v74;
    if ( v74 )
    {
      v63 = v75;
      if ( (*(_DWORD *)(v74 + 8))-- == 1 )
        sub_15D7BC0(v63, v62);
    }
    goto LABEL_15;
  }
  v35 = (__int64 *)a1[7];
  ++*(_DWORD *)(v33 + 8);
  if ( !v35 )
  {
    v70 = (_QWORD *)sub_186B270(0x18u);
    v35 = v70 + 1;
    *v70 = 2;
    v38 = 1;
    a1[7] = v35;
    v39 = v35;
    goto LABEL_31;
  }
  v36 = *((_DWORD *)v35 - 1);
  if ( v36 == *((_DWORD *)v35 - 2) )
  {
    v50 = (3 * v36 + 1) >> 1;
    v51 = 8 * v50 + 8;
    if ( 8 * v36 + 8 < (unsigned int)v51 && v36 < v50 )
    {
      v52 = (unsigned int *)sub_186B300(v35 - 1, v51);
      v53 = v52[1];
      v35 = (__int64 *)(v52 + 2);
      *v52 = v50;
      a1[7] = v52 + 2;
      LODWORD(v52) = v53;
      v39 = &v35[v53];
      v38 = (_DWORD)v52 + 1;
      goto LABEL_31;
    }
    goto LABEL_57;
  }
  v37 = v36;
  v38 = v36 + 1;
  v39 = &v35[v37];
LABEL_31:
  *v39 = v34;
  *((_DWORD *)v35 - 1) = v38;
LABEL_15:
  result = a1[5];
  if ( result )
  {
    v21 = *(_DWORD *)(result - 4);
    if ( v21 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v21 - 1) + 8) |= 2u;
  }
  return result;
}

