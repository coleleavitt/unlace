__int64 __fastcall sub_C179A0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, int a6)
{
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rsi
  int v11; // edx
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  bool v29; // zf
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // ecx
  __int64 *v35; // r14
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rsi
  __int64 *v39; // rcx
  __int64 *v40; // r14
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 *v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rax
  _QWORD *v46; // rax
  int v47; // r12d
  __int64 v48; // rcx
  int v49; // edx
  _QWORD *v50; // rdx
  __int64 v51; // rax
  _DWORD *v52; // rax
  unsigned int v53; // edx
  unsigned int v54; // ebx
  size_t v55; // rsi
  unsigned int *v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // ebx
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  char **exception; // rbx
  int v65; // [rsp+0h] [rbp-E0h]
  int v66; // [rsp+8h] [rbp-D8h]
  __int64 v67; // [rsp+8h] [rbp-D8h]
  int v68; // [rsp+10h] [rbp-D0h]
  __int64 v69; // [rsp+10h] [rbp-D0h]
  __int64 v70; // [rsp+18h] [rbp-C8h]
  __int64 v71; // [rsp+18h] [rbp-C8h]
  __int64 v72; // [rsp+20h] [rbp-C0h]
  __int64 v73; // [rsp+20h] [rbp-C0h]
  __int64 v74; // [rsp+28h] [rbp-B8h]
  unsigned int v75; // [rsp+28h] [rbp-B8h]
  __int64 *v76; // [rsp+30h] [rbp-B0h]
  __int64 v77; // [rsp+30h] [rbp-B0h]
  __int64 v78; // [rsp+48h] [rbp-98h]
  __int64 v79; // [rsp+50h] [rbp-90h]
  unsigned int v80; // [rsp+58h] [rbp-88h]
  int v81; // [rsp+5Ch] [rbp-84h]
  __int64 *v82; // [rsp+60h] [rbp-80h]
  __int64 *v83; // [rsp+60h] [rbp-80h]
  unsigned int v85; // [rsp+68h] [rbp-78h]
  __int64 *v86; // [rsp+68h] [rbp-78h]
  int v87; // [rsp+68h] [rbp-78h]
  __int64 v88; // [rsp+78h] [rbp-68h] BYREF
  __int64 v89; // [rsp+80h] [rbp-60h] BYREF
  __int64 v90; // [rsp+88h] [rbp-58h]
  __int64 v91; // [rsp+90h] [rbp-50h] BYREF
  __int64 v92; // [rsp+98h] [rbp-48h]

  v8 = a2;
  v81 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v46 = *(_QWORD **)(a1 + 160);
    if ( v46 )
      v47 = *((_DWORD *)v46 - 1);
    else
      v47 = 0;
    if ( v81 )
    {
      v87 = 0;
      while ( 1 )
      {
        if ( v46 )
        {
          v53 = *((_DWORD *)v46 - 1);
          if ( v53 == *((_DWORD *)v46 - 2) )
          {
            v54 = (3 * v53 + 1) >> 1;
            v55 = 8 * v54 + 8;
            if ( 8 * v53 + 8 >= (unsigned int)v55 || v53 >= v54 )
            {
LABEL_79:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C0E620(&v91, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v91);
              sub_233E40((__int64)&v91);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v56 = (unsigned int *)sub_186B300(v46 - 1, v55);
            v46 = v56 + 2;
            v57 = v56[1];
            *v56 = v54;
            *(_QWORD *)(a1 + 160) = v56 + 2;
            LODWORD(v56) = v57;
            a4 = &v46[v57];
            v49 = (_DWORD)v56 + 1;
          }
          else
          {
            v48 = v53;
            v49 = v53 + 1;
            a4 = &v46[v48];
          }
        }
        else
        {
          v63 = (_QWORD *)sub_186B270(0x18u);
          v49 = 1;
          *v63 = 2;
          v46 = v63 + 1;
          *(_QWORD *)(a1 + 160) = v46;
          a4 = v46;
        }
        *a4 = 0;
        *((_DWORD *)v46 - 1) = v49;
        v50 = *(_QWORD **)(a1 + 528);
        if ( v50 )
        {
          v51 = *((unsigned int *)v50 - 1);
          if ( (_DWORD)v51 == *((_DWORD *)v50 - 2) )
          {
            v58 = (unsigned int)(3 * v51 + 1) >> 1;
            v59 = 4 * v58 + 8;
            if ( 4 * (int)v51 + 8 >= (unsigned int)v59 || (unsigned int)v51 >= v58 )
              goto LABEL_79;
            v60 = (unsigned int *)sub_186B300(v50 - 1, v59);
            v50 = v60 + 2;
            *v60 = v58;
            v61 = v60[1];
            *(_QWORD *)(a1 + 528) = v50;
            v52 = (_DWORD *)v50 + v61;
          }
          else
          {
            v52 = (_DWORD *)v50 + v51;
          }
        }
        else
        {
          v62 = (_QWORD *)sub_186B270(0x10u);
          v50 = v62 + 1;
          *v62 = 2;
          *(_QWORD *)(a1 + 528) = v62 + 1;
          v52 = v62 + 1;
        }
        *v52 = v47;
        ++v87;
        ++*((_DWORD *)v50 - 1);
        if ( v87 == v81 )
          break;
        v46 = *(_QWORD **)(a1 + 160);
      }
      v8 = a2;
    }
    *(_DWORD *)(a1 + 128) += v81;
  }
  v9 = *(_DWORD *)(v8 + 72) + *(_DWORD *)(v8 + 76) + 1;
  while ( 1 )
  {
    v13 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v13 >= v9 )
      break;
    if ( v13 )
    {
      v14 = *(_DWORD *)(v8 + 72);
      if ( v14 < v13 )
        a4 = (_QWORD *)(v8 + 8LL * (v13 - v14 - 1));
      else
        a4 = (_QWORD *)(v8 + 8LL * (v13 - 1));
      v10 = a4[2 * *(unsigned int *)(v8 + 20) + 10];
    }
    else
    {
      v10 = *(_QWORD *)(v8 + 24);
    }
    v11 = ((v13 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v11;
    result = sub_C1A5C0(a1, v10, ((unsigned __int8)v11 >> 4) & 3, (_DWORD)a4, a5, a6, v65, v66, v68, v70, v72);
    if ( !(_BYTE)result )
      return result;
  }
  v15 = *(unsigned int *)(a3 + 12);
  v16 = *(_QWORD *)(a1 + 56);
  v90 = 0;
  LODWORD(v17) = *(_DWORD *)(v8 + 72);
  v18 = (__int64 *)(v16 + 8 * v15);
  v19 = *(unsigned int *)(v8 + 20);
  v76 = v18;
  v69 = *v18;
  v85 = *(_DWORD *)(v8 + 76);
  v89 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v89, v17, (__int64 *)(v8 + 80 + 16 * v19));
  v92 = 0;
  v73 = v89;
  v78 = v90;
  v20 = (__int64 *)(v8 + 80 + 16LL * *(unsigned int *)(v8 + 20));
  v91 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v91, v85, v20);
  v71 = v91;
  v79 = v92;
  v21 = (unsigned int)v17;
  v74 = (unsigned int)v17;
  if ( (_DWORD)v17 )
  {
    v17 = 0;
    v40 = v76;
    v83 = &v76[v21];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v40[1]) )
      {
        v41 = v40[1];
        v42 = v17 + 1;
        v43 = (__int64 *)(v78 + 8 * v17);
        if ( v41 )
          ++*(_DWORD *)(v41 + 8);
        v44 = *v43;
        if ( *v43 )
        {
          v29 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v29 )
          {
            v80 = v42;
            v67 = v41;
            sub_15D7BC0(v73, v44);
            v42 = v80;
            v41 = v67;
          }
        }
        *v43 = v41;
        v17 = v42;
      }
      ++v40;
    }
    while ( v40 != v83 );
  }
  sub_39BEE0(&v89, v17);
  v22 = v85;
  if ( v85 )
  {
    v85 = 0;
    v35 = &v76[v74];
    v82 = &v76[v74 + v22];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v35[1]) )
      {
        v36 = v35[1];
        v37 = v85 + 1;
        v86 = (__int64 *)(v79 + 8LL * v85);
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        v38 = *v86;
        if ( *v86 )
        {
          v29 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v29 )
          {
            v75 = v37;
            v77 = v36;
            sub_15D7BC0(v71, v38);
            v37 = v75;
            v36 = v77;
          }
        }
        v39 = v86;
        v85 = v37;
        *v39 = v36;
      }
      ++v35;
    }
    while ( v35 != v82 );
  }
  sub_39BEE0(&v91, v85);
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v45 = sub_15DBA30(*(_QWORD *)(a1 + 8), v8, v17, v78, v85, v79, v69);
    v23 = v45;
    if ( v45 )
      ++*(_DWORD *)(v45 + 8);
    sub_C0E600(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  else
  {
    ++*(_DWORD *)(v8 + 8);
    sub_C0E600(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v23 = v8;
  }
  *(_QWORD *)(a1 + 480) = v23;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v24 = *(_QWORD *)(a1 + 480);
  v88 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  sub_C10880((_QWORD *)(a1 + 56), &v88);
  v25 = *(_QWORD *)(a1 + 160);
  if ( v25 )
    *(_DWORD *)(v25 - 4) -= v81;
  v26 = *(_QWORD *)(a1 + 528);
  if ( v26 )
    *(_DWORD *)(v26 - 4) -= v81;
  sub_15844D0(a1);
  v27 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, v8, 0, v27);
    v27 = *(_QWORD *)(a1 + 480);
  }
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 + 488);
    v29 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v29 )
      sub_15D7BC0(v28, v27);
  }
  v30 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v30 && (v31 = *(_QWORD *)(a1 + 504), v29 = *(_DWORD *)(v30 + 8) == 1, --*(_DWORD *)(v30 + 8), v29) )
  {
    sub_15D7BC0(v31, v30);
    v32 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v32 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  v33 = *(_QWORD *)(a1 + 40);
  v34 = *(_DWORD *)(v33 - 4);
  *(_DWORD *)(v33 - 4) = v34 - 1;
  if ( v8 != v32 && v34 != 1 )
    *(_BYTE *)(v33 + 16LL * (unsigned int)(v34 - 2) + 8) |= 2u;
  sub_2334C0(&v91);
  return sub_2334C0(&v89);
}

