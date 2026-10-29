__int64 __fastcall sub_3A8660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // r15d
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 *v29; // rax
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // r15
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rax
  int v48; // r15d
  int v49; // r13d
  _QWORD *v50; // rdx
  __int64 v51; // rax
  _DWORD *v52; // rax
  unsigned int v53; // edx
  unsigned int v54; // r8d
  size_t v55; // rsi
  unsigned int *v56; // rax
  _DWORD *v57; // rdx
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdi
  char **exception; // rbx
  __int64 v62; // [rsp+0h] [rbp-C0h]
  __int64 v63; // [rsp+8h] [rbp-B8h]
  int v64; // [rsp+8h] [rbp-B8h]
  __int64 v65; // [rsp+10h] [rbp-B0h]
  __int64 v66; // [rsp+28h] [rbp-98h]
  __int64 v67; // [rsp+28h] [rbp-98h]
  int v69; // [rsp+34h] [rbp-8Ch]
  __int64 v70; // [rsp+38h] [rbp-88h]
  __int64 v71; // [rsp+38h] [rbp-88h]
  unsigned int v72; // [rsp+38h] [rbp-88h]
  __int64 v73; // [rsp+48h] [rbp-78h] BYREF
  __int64 v74; // [rsp+50h] [rbp-70h] BYREF
  __int64 v75; // [rsp+58h] [rbp-68h] BYREF
  __int64 v76; // [rsp+60h] [rbp-60h] BYREF
  __int64 v77; // [rsp+68h] [rbp-58h]
  __int64 v78; // [rsp+70h] [rbp-50h] BYREF
  __int64 v79; // [rsp+78h] [rbp-48h]

  v3 = a2;
  v4 = a1;
  v70 = a2;
  v69 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0();
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v47 = *(_QWORD *)(a1 + 160);
    if ( v47 )
      v48 = *(_DWORD *)(v47 - 4);
    else
      v48 = 0;
    if ( !v69 )
      goto LABEL_65;
    v49 = 0;
    while ( 1 )
    {
      if ( !v47 || (v53 = *(_DWORD *)(v47 - 4), v53 == *(_DWORD *)(v47 - 8)) )
      {
        sub_23A6F0((unsigned int **)(a1 + 160));
        v47 = *(_QWORD *)(a1 + 160);
        v53 = *(_DWORD *)(v47 - 4);
      }
      *(_QWORD *)(v47 + 8LL * v53) = 0;
      *(_DWORD *)(v47 - 4) = v53 + 1;
      v50 = *(_QWORD **)(a1 + 528);
      if ( !v50 )
        break;
      v51 = *((unsigned int *)v50 - 1);
      if ( (_DWORD)v51 != *((_DWORD *)v50 - 2) )
      {
        v52 = (_DWORD *)v50 + v51;
        goto LABEL_56;
      }
      v54 = (unsigned int)(3 * v51 + 1) >> 1;
      v55 = 4 * v54 + 8;
      v72 = v54;
      if ( 4 * (int)v51 + 8 >= (unsigned int)v55 || (unsigned int)v51 >= v54 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_399470(&v78, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v78);
        sub_233E40((__int64)&v78);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v49;
      v56 = (unsigned int *)sub_186B300(v50 - 1, v55);
      v57 = v56 + 2;
      *v56 = v72;
      v58 = v56[1];
      *(_QWORD *)(a1 + 528) = v57;
      v57[v58] = v48;
      ++*(v57 - 1);
      if ( v49 == v69 )
      {
LABEL_64:
        v4 = a1;
        v70 = a2;
LABEL_65:
        v3 = v70;
        *(_DWORD *)(v4 + 128) += v69;
        goto LABEL_4;
      }
LABEL_57:
      v47 = *(_QWORD *)(a1 + 160);
    }
    v59 = (_QWORD *)sub_186B270(0x10u);
    v50 = v59 + 1;
    *v59 = 2;
    *(_QWORD *)(a1 + 528) = v59 + 1;
    v52 = v59 + 1;
LABEL_56:
    ++v49;
    *v52 = v48;
    ++*((_DWORD *)v50 - 1);
    if ( v49 == v69 )
      goto LABEL_64;
    goto LABEL_57;
  }
LABEL_4:
  while ( 1 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(v3 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_3A8320(v4, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v10 = *(unsigned int *)(a3 + 12);
  v11 = *(_QWORD *)(v4 + 56);
  v12 = v3;
  v71 = v3;
  v13 = *(_DWORD *)(v3 + 72);
  v14 = *(_DWORD *)(v12 + 76);
  v77 = 0;
  v15 = *(_QWORD *)(v11 + 8 * v10);
  v16 = *(unsigned int *)(v12 + 20);
  v66 = v12 + 80;
  v76 = *(_QWORD *)(v4 + 8);
  sub_3A6490((__int64)&v76, v13, (__int64 *)(v12 + 80 + 16 * v16));
  v17 = v66;
  v79 = 0;
  v67 = v77;
  v18 = (__int64 *)(v17 + 16LL * *(unsigned int *)(v71 + 20));
  v78 = *(_QWORD *)(v4 + 8);
  sub_3A6490((__int64)&v78, v14, v18);
  v65 = v79;
  v62 = *(_QWORD *)(v4 + 8);
  v19 = sub_15DBA30(v62, v71, v13, v67, v14, v79, v15);
  v20 = *(_QWORD *)(v4 + 496);
  v21 = v19;
  v22 = *(_QWORD *)(v4 + 504);
  if ( v19 )
  {
    ++*(_DWORD *)(v19 + 8);
    sub_399410(v20, v22);
    *(_QWORD *)(v4 + 496) = 0;
    if ( v71 == v21 )
    {
LABEL_14:
      ++*(_DWORD *)(v21 + 8);
      goto LABEL_15;
    }
  }
  else
  {
    sub_399410(v20, v22);
    *(_QWORD *)(v4 + 496) = 0;
  }
  v23 = *(_QWORD *)(v4 + 504);
  v24 = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  if ( v24 )
  {
    ++*(_DWORD *)(v24 + 8);
    sub_399410(0, v23);
    *(_QWORD *)(v4 + 496) = v24;
    v25 = sub_15DE700(*(_QWORD *)(v4 + 8));
    v26 = v25;
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    sub_399410(*(_QWORD *)(v4 + 496), *(_QWORD *)(v4 + 504));
    *(_QWORD *)(v4 + 496) = v26;
    v27 = sub_15DE750(*(_QWORD *)(v4 + 8));
  }
  else
  {
    sub_399410(0, v23);
    v60 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 496) = 0;
    v27 = sub_15DE370(v60);
  }
  v28 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  sub_399410(*(_QWORD *)(v4 + 496), *(_QWORD *)(v4 + 504));
  *(_QWORD *)(v4 + 496) = v28;
  if ( v21 )
    goto LABEL_14;
LABEL_15:
  sub_399450(*(_QWORD *)(v4 + 480), *(_QWORD *)(v4 + 488));
  v29 = *(__int64 **)(v4 + 144);
  v30 = *(_WORD *)(v15 + 4) == 0;
  *(_QWORD *)(v4 + 480) = v21;
  v31 = *v29;
  v75 = v15;
  if ( v30 && (*(_BYTE *)(v15 + 30) & 1) != 0 )
  {
    ++*(_DWORD *)(v15 + 8);
    sub_399450(v21, *(_QWORD *)(v4 + 488));
  }
  else
  {
    v15 = sub_15DBA30(*(_QWORD *)(v31 + 8), v21, 0, 0, 1, (unsigned int)&v75, v15);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    sub_399450(*(_QWORD *)(v4 + 480), *(_QWORD *)(v4 + 488));
  }
  *(_QWORD *)(v4 + 480) = v15;
  v32 = sub_15E2470(*(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 496), 0);
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v63 = v32;
  sub_399410(*(_QWORD *)(v4 + 496), *(_QWORD *)(v4 + 504));
  v33 = v63;
  v34 = *(_QWORD *)(v4 + 88);
  *(_QWORD *)(v4 + 496) = v63;
  if ( v34 )
  {
    v35 = (__int64 *)(v34 + 8LL * *(unsigned int *)(a3 + 12));
    v36 = v34 + 8LL * *(unsigned int *)(v34 - 4);
    v64 = *(_DWORD *)(a3 + 12);
    if ( (unsigned __int64)v35 >= v36 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v37 = *v35;
        if ( *v35 )
        {
          v38 = *(_QWORD *)(v4 + 80);
          v30 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v30 )
            break;
        }
        if ( (unsigned __int64)++v35 >= v36 )
          goto LABEL_29;
      }
      sub_15D7BC0(v38, v37);
      ++v35;
    }
    while ( (unsigned __int64)v35 < v36 );
LABEL_29:
    v34 = *(_QWORD *)(v4 + 88);
    v33 = *(_QWORD *)(v4 + 496);
    if ( v34 )
LABEL_30:
      *(_DWORD *)(v34 - 4) = v64;
  }
  v73 = v33;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  sub_399A70((__int64 *)(v4 + 88), &v73);
  if ( v21 )
  {
    v30 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(v62, v21);
  }
  sub_39BEE0((__int64 *)(v4 + 48), *(_DWORD *)(a3 + 12));
  v39 = *(_QWORD *)(v4 + 480);
  v74 = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  sub_399930((unsigned int **)(v4 + 56), &v74);
  v40 = *(_QWORD *)(v4 + 160);
  if ( v40 )
    *(_DWORD *)(v40 - 4) -= v69;
  v41 = *(_QWORD *)(v4 + 528);
  if ( v41 )
    *(_DWORD *)(v41 - 4) -= v69;
  sub_15844D0(v4);
  v42 = *(_QWORD *)(v4 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(v4, v71, *(_QWORD *)(v4 + 480), *(_QWORD *)(v4 + 496));
    v42 = *(_QWORD *)(v4 + 480);
  }
  sub_399450(v42, *(_QWORD *)(v4 + 488));
  v43 = *(_QWORD *)(v4 + 504);
  v44 = *(_QWORD *)(v4 + 496);
  *(_QWORD *)(v4 + 480) = 0;
  sub_399410(v44, v43);
  v45 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 496) = 0;
  v46 = *(_DWORD *)(v45 - 4);
  *(_DWORD *)(v45 - 4) = v46 - 1;
  if ( *(_QWORD *)(v4 + 480) != v71 && v46 != 1 )
    *(_BYTE *)(v45 + 16LL * (unsigned int)(v46 - 2) + 8) |= 2u;
  v79 = v65;
  sub_2334C0(&v78);
  v77 = v67;
  return sub_2334C0(&v76);
}

