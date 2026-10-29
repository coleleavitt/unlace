__int64 __fastcall sub_909B50(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  bool v28; // zf
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  int v33; // ecx
  __int64 *v34; // r14
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rsi
  __int64 *v38; // rcx
  __int64 *v39; // r14
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 *v42; // r12
  __int64 v43; // rsi
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
  unsigned int v68; // [rsp+20h] [rbp-C0h]
  __int64 v69; // [rsp+28h] [rbp-B8h]
  __int64 *v70; // [rsp+30h] [rbp-B0h]
  __int64 v71; // [rsp+30h] [rbp-B0h]
  unsigned int v72; // [rsp+48h] [rbp-98h]
  int v73; // [rsp+4Ch] [rbp-94h]
  __int64 v74; // [rsp+50h] [rbp-90h]
  __int64 v75; // [rsp+58h] [rbp-88h]
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
  v73 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v44 = *(_QWORD **)(a1 + 160);
    if ( v44 )
      v45 = *((_DWORD *)v44 - 1);
    else
      v45 = 0;
    if ( v73 )
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
LABEL_81:
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
              goto LABEL_81;
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
        if ( v81 == v73 )
          break;
        v44 = *(_QWORD **)(a1 + 160);
      }
      v5 = a2;
    }
    *(_DWORD *)(a1 + 128) += v73;
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
    result = sub_905400((_QWORD *)a1, v7, ((unsigned __int8)v8 >> 4) & 3);
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
  v69 = *v16;
  v79 = *(_DWORD *)(v5 + 76);
  v83 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v83, v15, (__int64 *)(v5 + 80 + 16 * v17));
  v86 = 0;
  v66 = v83;
  v74 = v84;
  v18 = (__int64 *)(v5 + 80 + 16LL * *(unsigned int *)(v5 + 20));
  v85 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v85, v79, v18);
  v65 = v85;
  v75 = v86;
  v19 = (unsigned int)v15;
  v67 = (unsigned int)v15;
  if ( (_DWORD)v15 )
  {
    v15 = 0;
    v39 = v70;
    v77 = &v70[v19];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v39[1]) )
      {
        v40 = v39[1];
        v41 = v15 + 1;
        v42 = (__int64 *)(v74 + 8 * v15);
        if ( v40 )
          ++*(_DWORD *)(v40 + 8);
        v43 = *v42;
        if ( *v42 )
        {
          v28 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v28 )
          {
            v72 = v41;
            v64 = v40;
            sub_15D7BC0(v66, v43);
            v41 = v72;
            v40 = v64;
          }
        }
        *v42 = v40;
        v15 = v41;
      }
      ++v39;
    }
    while ( v39 != v77 );
  }
  sub_39BEE0(&v83, v15);
  v20 = v79;
  if ( v79 )
  {
    v79 = 0;
    v34 = &v70[v67];
    v76 = &v70[v67 + v20];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v34[1]) )
      {
        v35 = v34[1];
        v36 = v79 + 1;
        v80 = (__int64 *)(v75 + 8LL * v79);
        if ( v35 )
          ++*(_DWORD *)(v35 + 8);
        v37 = *v80;
        if ( *v80 )
        {
          v28 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v28 )
          {
            v68 = v36;
            v71 = v35;
            sub_15D7BC0(v65, v37);
            v36 = v68;
            v35 = v71;
          }
        }
        v38 = v80;
        v79 = v36;
        *v38 = v35;
      }
      ++v34;
    }
    while ( v34 != v76 );
  }
  sub_39BEE0(&v85, v79);
  if ( !(unsigned __int8)sub_157ED20(*(_QWORD *)(a1 + 144), v5, v69, v74, v75, (int)a1 + 480, a1 + 496) )
  {
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v21 = sub_15DBA30(*(_QWORD *)(a1 + 8), v5, v15, v74, v79, v75, v69);
      v22 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v22;
    }
    else
    {
      ++*(_DWORD *)(v5 + 8);
      sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v5;
    }
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v23 = *(_QWORD *)(a1 + 480);
  v82 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  sub_8F15F0((_QWORD *)(a1 + 56), &v82);
  v24 = *(_QWORD *)(a1 + 160);
  if ( v24 )
    *(_DWORD *)(v24 - 4) -= v73;
  v25 = *(_QWORD *)(a1 + 528);
  if ( v25 )
    *(_DWORD *)(v25 - 4) -= v73;
  sub_15844D0(a1);
  v26 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, v5, 0, v26);
    v26 = *(_QWORD *)(a1 + 480);
    if ( v26 )
    {
LABEL_26:
      v27 = *(_QWORD *)(a1 + 488);
      v28 = (*(_DWORD *)(v26 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v27, v26);
    }
  }
  else if ( v26 )
  {
    goto LABEL_26;
  }
  v29 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v29 && (v30 = *(_QWORD *)(a1 + 504), v28 = *(_DWORD *)(v29 + 8) == 1, --*(_DWORD *)(v29 + 8), v28) )
  {
    sub_15D7BC0(v30, v29);
    v31 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v31 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  v32 = *(_QWORD *)(a1 + 40);
  v33 = *(_DWORD *)(v32 - 4);
  *(_DWORD *)(v32 - 4) = v33 - 1;
  if ( v5 != v31 && v33 != 1 )
    *(_BYTE *)(v32 + 16LL * (unsigned int)(v33 - 2) + 8) |= 2u;
  sub_2334C0(&v85);
  return sub_2334C0(&v83);
}

