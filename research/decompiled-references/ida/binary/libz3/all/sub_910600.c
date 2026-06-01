__int64 __fastcall sub_910600(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r15
  __int64 v18; // rdx
  __int64 *v19; // r14
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // ecx
  __int64 *v31; // rbx
  unsigned __int64 v32; // r13
  __int64 v33; // rsi
  __int64 *v34; // rbx
  unsigned __int64 v35; // r14
  __int64 v36; // rsi
  _QWORD *v37; // rax
  int v38; // r14d
  int v39; // r13d
  __int64 v40; // rcx
  int v41; // edx
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  __int64 v44; // rax
  _DWORD *v45; // rax
  unsigned int v46; // edx
  unsigned int v47; // ecx
  size_t v48; // rsi
  unsigned int v49; // ebx
  unsigned int *v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // ecx
  size_t v53; // rsi
  unsigned int v54; // ebx
  unsigned int *v55; // rax
  _DWORD *v56; // rdx
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  char **exception; // rbx
  __int64 v61; // [rsp+10h] [rbp-A0h]
  __int64 v62; // [rsp+18h] [rbp-98h]
  __int64 v63; // [rsp+20h] [rbp-90h]
  int v64; // [rsp+28h] [rbp-88h]
  __int64 v65; // [rsp+28h] [rbp-88h]
  int v66; // [rsp+34h] [rbp-7Ch]
  __int64 v68; // [rsp+38h] [rbp-78h]
  __int64 v69; // [rsp+48h] [rbp-68h] BYREF
  __int64 v70; // [rsp+50h] [rbp-60h] BYREF
  __int64 *v71; // [rsp+58h] [rbp-58h]
  __int64 v72; // [rsp+60h] [rbp-50h] BYREF
  __int64 *v73; // [rsp+68h] [rbp-48h]

  v3 = a2;
  v5 = a3;
  v66 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v37 = *(_QWORD **)(a1 + 160);
    if ( v37 )
      v38 = *((_DWORD *)v37 - 1);
    else
      v38 = 0;
    if ( !v66 )
      goto LABEL_63;
    v65 = v5;
    v39 = 0;
    while ( 1 )
    {
      if ( v37 )
      {
        v46 = *((_DWORD *)v37 - 1);
        if ( v46 == *((_DWORD *)v37 - 2) )
        {
          v47 = (3 * v46 + 1) >> 1;
          v48 = 8 * v47 + 8;
          v49 = v47;
          if ( 8 * v46 + 8 >= (unsigned int)v48 || v46 >= v47 )
          {
LABEL_68:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(&v72, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v72);
            sub_233E40((__int64)&v72);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v50 = (unsigned int *)sub_186B300(v37 - 1, v48);
          v37 = v50 + 2;
          v51 = v50[1];
          *v50 = v49;
          *(_QWORD *)(a1 + 160) = v50 + 2;
          LODWORD(v50) = v51;
          v42 = &v37[v51];
          v41 = (_DWORD)v50 + 1;
        }
        else
        {
          v40 = v46;
          v41 = v46 + 1;
          v42 = &v37[v40];
        }
      }
      else
      {
        v58 = (_QWORD *)sub_186B270(0x18u);
        v41 = 1;
        *v58 = 2;
        v37 = v58 + 1;
        *(_QWORD *)(a1 + 160) = v37;
        v42 = v37;
      }
      *v42 = 0;
      *((_DWORD *)v37 - 1) = v41;
      v43 = *(_QWORD **)(a1 + 528);
      if ( !v43 )
        break;
      v44 = *((unsigned int *)v43 - 1);
      if ( (_DWORD)v44 != *((_DWORD *)v43 - 2) )
      {
        v45 = (_DWORD *)v43 + v44;
        goto LABEL_52;
      }
      v52 = (unsigned int)(3 * v44 + 1) >> 1;
      v53 = 4 * v52 + 8;
      v54 = v52;
      if ( 4 * (int)v44 + 8 >= (unsigned int)v53 || (unsigned int)v44 >= v52 )
        goto LABEL_68;
      ++v39;
      v55 = (unsigned int *)sub_186B300(v43 - 1, v53);
      v56 = v55 + 2;
      *v55 = v54;
      v57 = v55[1];
      *(_QWORD *)(a1 + 528) = v56;
      v56[v57] = v38;
      ++*(v56 - 1);
      if ( v39 == v66 )
      {
LABEL_62:
        v5 = v65;
LABEL_63:
        v3 = a2;
        *(_DWORD *)(a1 + 128) += v66;
        goto LABEL_4;
      }
LABEL_53:
      v37 = *(_QWORD **)(a1 + 160);
    }
    v59 = (_QWORD *)sub_186B270(0x10u);
    v43 = v59 + 1;
    *v59 = 2;
    *(_QWORD *)(a1 + 528) = v59 + 1;
    v45 = v59 + 1;
LABEL_52:
    ++v39;
    *v45 = v38;
    ++*((_DWORD *)v43 - 1);
    if ( v39 == v66 )
      goto LABEL_62;
    goto LABEL_53;
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
    result = sub_90F960(a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v10 = *(unsigned int *)(v5 + 12);
  v11 = *(_QWORD *)(a1 + 56);
  v12 = v3;
  v68 = v3;
  v13 = *(_DWORD *)(v3 + 72);
  v14 = v3 + 80;
  v71 = nullptr;
  v15 = *(_QWORD *)(v11 + 8 * v10);
  v16 = *(unsigned int *)(v12 + 20);
  v61 = v15;
  LODWORD(v15) = *(_DWORD *)(v14 - 4);
  v70 = *(_QWORD *)(a1 + 8);
  v64 = v15;
  sub_3A6490((__int64)&v70, v13, (__int64 *)(v14 + 16 * v16));
  v17 = v71;
  v73 = nullptr;
  v62 = v70;
  v18 = 16LL * *(unsigned int *)(v68 + 20);
  v72 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v72, v64, (__int64 *)(v14 + v18));
  v19 = v73;
  v63 = v72;
  if ( (*(_BYTE *)(v5 + 8) & 2) != 0 )
  {
    v20 = sub_15DBA30(*(_QWORD *)(a1 + 8), v68, v13, (_DWORD)v17, v64, (_DWORD)v73, v61);
    if ( !v20 )
      goto LABEL_8;
  }
  else
  {
    v20 = v68;
  }
  ++*(_DWORD *)(v20 + 8);
LABEL_8:
  sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  *(_QWORD *)(a1 + 480) = v20;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v5 + 12));
  v21 = *(_QWORD *)(a1 + 480);
  v69 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  sub_8F15F0((_QWORD *)(a1 + 56), &v69);
  v22 = *(_QWORD *)(a1 + 160);
  if ( v22 )
    *(_DWORD *)(v22 - 4) -= v66;
  v23 = *(_QWORD *)(a1 + 528);
  if ( v23 )
    *(_DWORD *)(v23 - 4) -= v66;
  sub_15844D0(a1);
  v24 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    sub_1584390(a1, v68, 0, v24);
    v24 = *(_QWORD *)(a1 + 480);
  }
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 488);
    v26 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v25, v24);
  }
  v27 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v27 && (v28 = *(_QWORD *)(a1 + 504), v26 = *(_DWORD *)(v27 + 8) == 1, --*(_DWORD *)(v27 + 8), v26) )
  {
    sub_15D7BC0(v28, v27);
    v29 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v29 = 0;
  }
  result = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 496) = 0;
  v30 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v30 - 1;
  if ( v68 != v29 && v30 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v30 - 2) + 8) |= 2u;
  if ( v19 )
  {
    v31 = v19;
    v32 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
    if ( (unsigned __int64)v19 < v32 )
    {
      do
      {
        while ( 1 )
        {
          v33 = *v31;
          if ( *v31 )
          {
            v26 = (*(_DWORD *)(v33 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( (unsigned __int64)++v31 >= v32 )
            goto LABEL_32;
        }
        ++v31;
        sub_15D7BC0(v63, v33);
      }
      while ( (unsigned __int64)v31 < v32 );
    }
LABEL_32:
    result = sub_186B220(v19 - 1);
  }
  if ( v17 )
  {
    v34 = v17;
    if ( v17 < &v17[*((unsigned int *)v17 - 1)] )
    {
      v35 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            v26 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( (unsigned __int64)++v34 >= v35 )
            return sub_186B220(v17 - 1);
        }
        ++v34;
        sub_15D7BC0(v62, v36);
      }
      while ( (unsigned __int64)v34 < v35 );
    }
    return sub_186B220(v17 - 1);
  }
  return result;
}

