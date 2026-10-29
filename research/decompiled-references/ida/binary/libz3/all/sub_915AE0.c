__int64 __fastcall sub_915AE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rsi
  int v8; // edx
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  bool v27; // zf
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  int v32; // ecx
  __int64 *v33; // r14
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rsi
  __int64 *v37; // rcx
  __int64 *v38; // r14
  __int64 v39; // rax
  unsigned int v40; // ecx
  __int64 *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rax
  _QWORD *v44; // rax
  int v45; // r12d
  __int64 v46; // rcx
  int v47; // edx
  _QWORD *v48; // rcx
  _QWORD *v49; // rdx
  __int64 v50; // rax
  _DWORD *v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // ebx
  size_t v54; // rsi
  unsigned int *v55; // rdx
  __int64 v56; // rcx
  unsigned int v57; // ebx
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  char **exception; // rbx
  __int64 v64; // [rsp+8h] [rbp-D8h]
  __int64 v65; // [rsp+10h] [rbp-D0h]
  __int64 v66; // [rsp+18h] [rbp-C8h]
  __int64 v67; // [rsp+20h] [rbp-C0h]
  __int64 v68; // [rsp+28h] [rbp-B8h]
  unsigned int v69; // [rsp+28h] [rbp-B8h]
  __int64 *v70; // [rsp+30h] [rbp-B0h]
  __int64 v71; // [rsp+30h] [rbp-B0h]
  __int64 v72; // [rsp+48h] [rbp-98h]
  __int64 v73; // [rsp+50h] [rbp-90h]
  unsigned int v74; // [rsp+58h] [rbp-88h]
  int v75; // [rsp+5Ch] [rbp-84h]
  __int64 *v76; // [rsp+60h] [rbp-80h]
  __int64 *v77; // [rsp+60h] [rbp-80h]
  unsigned int v79; // [rsp+68h] [rbp-78h]
  __int64 *v80; // [rsp+68h] [rbp-78h]
  int v81; // [rsp+68h] [rbp-78h]
  __int64 v82; // [rsp+78h] [rbp-68h] BYREF
  __int64 v83; // [rsp+80h] [rbp-60h] BYREF
  __int64 v84; // [rsp+88h] [rbp-58h]
  __int64 v85; // [rsp+90h] [rbp-50h] BYREF
  __int64 v86; // [rsp+98h] [rbp-48h]

  v5 = a2;
  v75 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v44 = *(_QWORD **)(a1 + 160);
    if ( v44 )
      v45 = *((_DWORD *)v44 - 1);
    else
      v45 = 0;
    if ( v75 )
    {
      v81 = 0;
      while ( 1 )
      {
        if ( v44 )
        {
          v52 = *((_DWORD *)v44 - 1);
          if ( v52 == *((_DWORD *)v44 - 2) )
          {
            v53 = (3 * v52 + 1) >> 1;
            v54 = 8 * v53 + 8;
            if ( 8 * v52 + 8 >= (unsigned int)v54 || v52 >= v53 )
            {
LABEL_79:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_8E4EB0(&v85, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v85);
              sub_233E40((__int64)&v85);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v55 = (unsigned int *)sub_186B300(v44 - 1, v54);
            v44 = v55 + 2;
            v56 = v55[1];
            *v55 = v53;
            *(_QWORD *)(a1 + 160) = v55 + 2;
            LODWORD(v55) = v56;
            v48 = &v44[v56];
            v47 = (_DWORD)v55 + 1;
          }
          else
          {
            v46 = v52;
            v47 = v52 + 1;
            v48 = &v44[v46];
          }
        }
        else
        {
          v62 = (_QWORD *)sub_186B270(0x18u);
          v47 = 1;
          *v62 = 2;
          v44 = v62 + 1;
          *(_QWORD *)(a1 + 160) = v44;
          v48 = v44;
        }
        *v48 = 0;
        *((_DWORD *)v44 - 1) = v47;
        v49 = *(_QWORD **)(a1 + 528);
        if ( v49 )
        {
          v50 = *((unsigned int *)v49 - 1);
          if ( (_DWORD)v50 == *((_DWORD *)v49 - 2) )
          {
            v57 = (unsigned int)(3 * v50 + 1) >> 1;
            v58 = 4 * v57 + 8;
            if ( 4 * (int)v50 + 8 >= (unsigned int)v58 || (unsigned int)v50 >= v57 )
              goto LABEL_79;
            v59 = (unsigned int *)sub_186B300(v49 - 1, v58);
            v49 = v59 + 2;
            *v59 = v57;
            v60 = v59[1];
            *(_QWORD *)(a1 + 528) = v49;
            v51 = (_DWORD *)v49 + v60;
          }
          else
          {
            v51 = (_DWORD *)v49 + v50;
          }
        }
        else
        {
          v61 = (_QWORD *)sub_186B270(0x10u);
          v49 = v61 + 1;
          *v61 = 2;
          *(_QWORD *)(a1 + 528) = v61 + 1;
          v51 = v61 + 1;
        }
        *v51 = v45;
        ++v81;
        ++*((_DWORD *)v49 - 1);
        if ( v81 == v75 )
          break;
        v44 = *(_QWORD **)(a1 + 160);
      }
      v5 = a2;
    }
    *(_DWORD *)(a1 + 128) += v75;
  }
  v6 = *(_DWORD *)(v5 + 72) + *(_DWORD *)(v5 + 76) + 1;
  while ( 1 )
  {
    v10 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v10 >= v6 )
      break;
    if ( v10 )
    {
      v11 = *(_DWORD *)(v5 + 72);
      if ( v11 < v10 )
        v12 = v5 + 8LL * (v10 - v11 - 1);
      else
        v12 = v5 + 8LL * (v10 - 1);
      v7 = *(_QWORD *)(16LL * *(unsigned int *)(v5 + 20) + v12 + 80);
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 24);
    }
    v8 = ((v10 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v8;
    result = sub_914E40(a1, v7, ((unsigned __int8)v8 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v13 = *(unsigned int *)(a3 + 12);
  v14 = *(_QWORD *)(a1 + 56);
  v84 = 0;
  LODWORD(v15) = *(_DWORD *)(v5 + 72);
  v16 = (__int64 *)(v14 + 8 * v13);
  v17 = *(unsigned int *)(v5 + 20);
  v70 = v16;
  v65 = *v16;
  v79 = *(_DWORD *)(v5 + 76);
  v83 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v83, v15, (__int64 *)(v5 + 80 + 16 * v17));
  v86 = 0;
  v67 = v83;
  v72 = v84;
  v18 = (__int64 *)(v5 + 80 + 16LL * *(unsigned int *)(v5 + 20));
  v85 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v85, v79, v18);
  v66 = v85;
  v73 = v86;
  v19 = (unsigned int)v15;
  v68 = (unsigned int)v15;
  if ( (_DWORD)v15 )
  {
    v15 = 0;
    v38 = v70;
    v77 = &v70[v19];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v38[1]) )
      {
        v39 = v38[1];
        v40 = v15 + 1;
        v41 = (__int64 *)(v72 + 8 * v15);
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        v42 = *v41;
        if ( *v41 )
        {
          v27 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v27 )
          {
            v74 = v40;
            v64 = v39;
            sub_15D7BC0(v67, v42);
            v40 = v74;
            v39 = v64;
          }
        }
        *v41 = v39;
        v15 = v40;
      }
      ++v38;
    }
    while ( v38 != v77 );
  }
  sub_39BEE0(&v83, v15);
  v20 = v79;
  if ( v79 )
  {
    v79 = 0;
    v33 = &v70[v68];
    v76 = &v70[v68 + v20];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v33[1]) )
      {
        v34 = v33[1];
        v35 = v79 + 1;
        v80 = (__int64 *)(v73 + 8LL * v79);
        if ( v34 )
          ++*(_DWORD *)(v34 + 8);
        v36 = *v80;
        if ( *v80 )
        {
          v27 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v27 )
          {
            v69 = v35;
            v71 = v34;
            sub_15D7BC0(v66, v36);
            v35 = v69;
            v34 = v71;
          }
        }
        v37 = v80;
        v79 = v35;
        *v37 = v34;
      }
      ++v33;
    }
    while ( v33 != v76 );
  }
  sub_39BEE0(&v85, v79);
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v43 = sub_15DBA30(*(_QWORD *)(a1 + 8), v5, v15, v72, v79, v73, v65);
    v21 = v43;
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  else
  {
    ++*(_DWORD *)(v5 + 8);
    sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v21 = v5;
  }
  *(_QWORD *)(a1 + 480) = v21;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v22 = *(_QWORD *)(a1 + 480);
  v82 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  sub_8F15F0((_QWORD *)(a1 + 56), &v82);
  v23 = *(_QWORD *)(a1 + 160);
  if ( v23 )
    *(_DWORD *)(v23 - 4) -= v75;
  v24 = *(_QWORD *)(a1 + 528);
  if ( v24 )
    *(_DWORD *)(v24 - 4) -= v75;
  sub_15844D0(a1);
  v25 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, v5, 0, v25);
    v25 = *(_QWORD *)(a1 + 480);
  }
  if ( v25 )
  {
    v26 = *(_QWORD *)(a1 + 488);
    v27 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v27 )
      sub_15D7BC0(v26, v25);
  }
  v28 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v28 && (v29 = *(_QWORD *)(a1 + 504), v27 = *(_DWORD *)(v28 + 8) == 1, --*(_DWORD *)(v28 + 8), v27) )
  {
    sub_15D7BC0(v29, v28);
    v30 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v30 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  v31 = *(_QWORD *)(a1 + 40);
  v32 = *(_DWORD *)(v31 - 4);
  *(_DWORD *)(v31 - 4) = v32 - 1;
  if ( v5 != v30 && v32 != 1 )
    *(_BYTE *)(v31 + 16LL * (unsigned int)(v32 - 2) + 8) |= 2u;
  sub_2334C0(&v85);
  return sub_2334C0(&v83);
}

