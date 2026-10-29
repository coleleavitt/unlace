__int64 __fastcall sub_90BD00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r13d
  int v14; // r14d
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rsi
  bool v22; // zf
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 *v32; // r15
  unsigned __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  int v46; // ecx
  _QWORD *v47; // rax
  int v48; // r14d
  int v49; // r13d
  __int64 v50; // rcx
  int v51; // edx
  _QWORD *v52; // rcx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  _DWORD *v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // ecx
  size_t v58; // rsi
  unsigned int v59; // ebx
  unsigned int *v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // ecx
  size_t v63; // rsi
  unsigned int v64; // ebx
  unsigned int *v65; // rax
  _DWORD *v66; // rdx
  __int64 v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdi
  char **exception; // rbx
  __int64 v72; // [rsp+8h] [rbp-A8h]
  __int64 v73; // [rsp+10h] [rbp-A0h]
  __int64 v74; // [rsp+28h] [rbp-88h]
  __int64 v75; // [rsp+28h] [rbp-88h]
  __int64 v76; // [rsp+28h] [rbp-88h]
  int v77; // [rsp+30h] [rbp-80h]
  int v78; // [rsp+34h] [rbp-7Ch]
  __int64 v80; // [rsp+38h] [rbp-78h]
  __int64 v81; // [rsp+40h] [rbp-70h] BYREF
  __int64 v82; // [rsp+48h] [rbp-68h] BYREF
  __int64 v83; // [rsp+50h] [rbp-60h] BYREF
  __int64 v84; // [rsp+58h] [rbp-58h]
  __int64 v85; // [rsp+60h] [rbp-50h] BYREF
  __int64 v86; // [rsp+68h] [rbp-48h]

  v3 = a2;
  v5 = a3;
  v78 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v47 = *(_QWORD **)(a1 + 160);
    if ( v47 )
      v48 = *((_DWORD *)v47 - 1);
    else
      v48 = 0;
    if ( !v78 )
      goto LABEL_74;
    v76 = v5;
    v49 = 0;
    while ( 1 )
    {
      if ( v47 )
      {
        v56 = *((_DWORD *)v47 - 1);
        if ( v56 == *((_DWORD *)v47 - 2) )
        {
          v57 = (3 * v56 + 1) >> 1;
          v58 = 8 * v57 + 8;
          v59 = v57;
          if ( 8 * v56 + 8 >= (unsigned int)v58 || v56 >= v57 )
          {
LABEL_84:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(&v85, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v85);
            sub_233E40((__int64)&v85);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v60 = (unsigned int *)sub_186B300(v47 - 1, v58);
          v47 = v60 + 2;
          v61 = v60[1];
          *v60 = v59;
          *(_QWORD *)(a1 + 160) = v60 + 2;
          LODWORD(v60) = v61;
          v52 = &v47[v61];
          v51 = (_DWORD)v60 + 1;
        }
        else
        {
          v50 = v56;
          v51 = v56 + 1;
          v52 = &v47[v50];
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x18u);
        v51 = 1;
        *v69 = 2;
        v47 = v69 + 1;
        *(_QWORD *)(a1 + 160) = v47;
        v52 = v47;
      }
      *v52 = 0;
      *((_DWORD *)v47 - 1) = v51;
      v53 = *(_QWORD **)(a1 + 528);
      if ( !v53 )
        break;
      v54 = *((unsigned int *)v53 - 1);
      if ( (_DWORD)v54 != *((_DWORD *)v53 - 2) )
      {
        v55 = (_DWORD *)v53 + v54;
        goto LABEL_63;
      }
      v62 = (unsigned int)(3 * v54 + 1) >> 1;
      v63 = 4 * v62 + 8;
      v64 = v62;
      if ( 4 * (int)v54 + 8 >= (unsigned int)v63 || (unsigned int)v54 >= v62 )
        goto LABEL_84;
      ++v49;
      v65 = (unsigned int *)sub_186B300(v53 - 1, v63);
      v66 = v65 + 2;
      *v65 = v64;
      v67 = v65[1];
      *(_QWORD *)(a1 + 528) = v66;
      v66[v67] = v48;
      ++*(v66 - 1);
      if ( v49 == v78 )
      {
LABEL_73:
        v5 = v76;
LABEL_74:
        v3 = a2;
        *(_DWORD *)(a1 + 128) += v78;
        goto LABEL_4;
      }
LABEL_64:
      v47 = *(_QWORD **)(a1 + 160);
    }
    v68 = (_QWORD *)sub_186B270(0x10u);
    v53 = v68 + 1;
    *v68 = 2;
    *(_QWORD *)(a1 + 528) = v68 + 1;
    v55 = v68 + 1;
LABEL_63:
    ++v49;
    *v55 = v48;
    ++*((_DWORD *)v53 - 1);
    if ( v49 == v78 )
      goto LABEL_73;
    goto LABEL_64;
  }
LABEL_4:
  while ( 1 )
  {
    v9 = *(_DWORD *)(v5 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(v3 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(v5 + 8) = v7;
    result = sub_90B800(a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v10 = *(unsigned int *)(v5 + 12);
  v11 = *(_QWORD *)(a1 + 56);
  v12 = v3;
  v80 = v3;
  v13 = *(_DWORD *)(v3 + 72);
  v14 = *(_DWORD *)(v3 + 76);
  v84 = 0;
  v15 = *(_QWORD *)(v11 + 8 * v10);
  v16 = *(unsigned int *)(v12 + 20);
  v74 = v12 + 80;
  v83 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v83, v13, (__int64 *)(v12 + 80 + 16 * v16));
  v17 = v74;
  v86 = 0;
  v75 = v84;
  v18 = (__int64 *)(v17 + 16LL * *(unsigned int *)(v80 + 20));
  v85 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v85, v14, v18);
  v73 = v86;
  v72 = *(_QWORD *)(a1 + 8);
  v19 = sub_15DBA30(v72, v80, v13, v75, v14, v86, v15);
  v20 = *(_QWORD *)(a1 + 504);
  v21 = *(_QWORD *)(a1 + 496);
  if ( v19 )
  {
    ++*(_DWORD *)(v19 + 8);
    if ( v21 )
    {
      v22 = (*(_DWORD *)(v21 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(v20, v21);
    }
    *(_QWORD *)(a1 + 496) = 0;
    if ( v80 == v19 )
      goto LABEL_18;
    goto LABEL_10;
  }
  if ( v21 )
  {
    v22 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v22 )
    {
      sub_15D7BC0(v20, v21);
      *(_QWORD *)(a1 + 496) = 0;
LABEL_10:
      v20 = *(_QWORD *)(a1 + 504);
      goto LABEL_11;
    }
  }
  *(_QWORD *)(a1 + 496) = 0;
LABEL_11:
  v23 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(v5 + 12));
  if ( v23 )
  {
    ++*(_DWORD *)(v23 + 8);
    sub_8E4DD0(0, v20);
    *(_QWORD *)(a1 + 496) = v23;
    v24 = sub_15DE700(*(_QWORD *)(a1 + 8));
    v25 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    sub_8E4DD0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    v26 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 496) = v25;
    v27 = sub_15DE750(v26);
  }
  else
  {
    sub_8E4DD0(0, v20);
    v70 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 496) = 0;
    v27 = sub_15DE370(v70);
  }
  v28 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  sub_8E4DD0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
  *(_QWORD *)(a1 + 496) = v28;
  if ( v19 )
LABEL_18:
    ++*(_DWORD *)(v19 + 8);
  v29 = *(_QWORD *)(a1 + 480);
  if ( v29 )
  {
    v30 = *(_QWORD *)(a1 + 488);
    v22 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v30, v29);
  }
  v31 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v19;
  if ( v31 )
  {
    v32 = (__int64 *)(v31 + 8LL * *(unsigned int *)(v5 + 12));
    v33 = v31 + 8LL * *(unsigned int *)(v31 - 4);
    v77 = *(_DWORD *)(v5 + 12);
    if ( (unsigned __int64)v32 >= v33 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          v35 = *(_QWORD *)(a1 + 80);
          v22 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v32 >= v33 )
          goto LABEL_29;
      }
      sub_15D7BC0(v35, v34);
      ++v32;
    }
    while ( (unsigned __int64)v32 < v33 );
LABEL_29:
    v31 = *(_QWORD *)(a1 + 88);
    if ( v31 )
LABEL_30:
      *(_DWORD *)(v31 - 4) = v77;
  }
  v36 = *(_QWORD *)(a1 + 496);
  v81 = v36;
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  sub_8ECC90((_QWORD *)(a1 + 88), &v81);
  if ( v19 )
  {
    v22 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v72, v19);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v5 + 12));
  v37 = *(_QWORD *)(a1 + 480);
  v82 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  sub_8F15F0((_QWORD *)(a1 + 56), &v82);
  v38 = *(_QWORD *)(a1 + 160);
  if ( v38 )
    *(_DWORD *)(v38 - 4) -= v78;
  v39 = *(_QWORD *)(a1 + 528);
  if ( v39 )
    *(_DWORD *)(v39 - 4) -= v78;
  sub_15844D0(a1);
  v40 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, v80, v40, *(_QWORD *)(a1 + 496));
    v40 = *(_QWORD *)(a1 + 480);
  }
  if ( v40 )
  {
    v41 = *(_QWORD *)(a1 + 488);
    v22 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v41, v40);
  }
  v42 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v42 && (v43 = *(_QWORD *)(a1 + 504), v22 = *(_DWORD *)(v42 + 8) == 1, --*(_DWORD *)(v42 + 8), v22) )
  {
    sub_15D7BC0(v43, v42);
    v44 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v44 = 0;
  }
  v45 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 496) = 0;
  v46 = *(_DWORD *)(v45 - 4);
  *(_DWORD *)(v45 - 4) = v46 - 1;
  if ( v80 != v44 && v46 != 1 )
    *(_BYTE *)(v45 + 16LL * (unsigned int)(v46 - 2) + 8) |= 2u;
  v86 = v73;
  sub_2334C0(&v85);
  v84 = v75;
  return sub_2334C0(&v83);
}

