__int64 __fastcall sub_4C04B0(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // ecx
  __int64 *v30; // r14
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rsi
  bool v34; // zf
  __int64 *v35; // rcx
  __int64 *v36; // r14
  __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 *v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rax
  _QWORD *v42; // rax
  int v43; // edx
  __int64 v44; // rcx
  int v45; // edx
  _QWORD *v46; // rcx
  unsigned int v47; // edx
  unsigned int v48; // ebx
  size_t v49; // rsi
  unsigned int *v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  char **exception; // rbx
  __int64 v54; // [rsp+8h] [rbp-D8h]
  __int64 v55; // [rsp+10h] [rbp-D0h]
  __int64 v56; // [rsp+18h] [rbp-C8h]
  __int64 v57; // [rsp+20h] [rbp-C0h]
  __int64 v58; // [rsp+28h] [rbp-B8h]
  unsigned int v59; // [rsp+28h] [rbp-B8h]
  __int64 *v60; // [rsp+30h] [rbp-B0h]
  __int64 v61; // [rsp+30h] [rbp-B0h]
  __int64 v62; // [rsp+48h] [rbp-98h]
  __int64 v63; // [rsp+50h] [rbp-90h]
  unsigned int v64; // [rsp+58h] [rbp-88h]
  int v65; // [rsp+5Ch] [rbp-84h]
  __int64 *v66; // [rsp+60h] [rbp-80h]
  __int64 *v67; // [rsp+60h] [rbp-80h]
  unsigned int v69; // [rsp+68h] [rbp-78h]
  __int64 *v70; // [rsp+68h] [rbp-78h]
  int v71; // [rsp+68h] [rbp-78h]
  __int64 v72; // [rsp+78h] [rbp-68h] BYREF
  __int64 v73; // [rsp+80h] [rbp-60h] BYREF
  __int64 v74; // [rsp+88h] [rbp-58h]
  __int64 v75; // [rsp+90h] [rbp-50h] BYREF
  __int64 v76; // [rsp+98h] [rbp-48h]

  v5 = a2;
  v65 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v42 = *(_QWORD **)(a1 + 160);
    if ( v42 )
      v43 = *((_DWORD *)v42 - 1);
    else
      v43 = 0;
    LODWORD(v73) = v43;
    if ( v65 )
    {
      v71 = 0;
      while ( 1 )
      {
        if ( v42 )
        {
          v47 = *((_DWORD *)v42 - 1);
          if ( v47 == *((_DWORD *)v42 - 2) )
          {
            v48 = (3 * v47 + 1) >> 1;
            v49 = 8 * v48 + 8;
            if ( 8 * v47 + 8 >= (unsigned int)v49 || v47 >= v48 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_4B1880(&v75, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v75);
              sub_233E40((__int64)&v75);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v50 = (unsigned int *)sub_186B300(v42 - 1, v49);
            v42 = v50 + 2;
            v51 = v50[1];
            *v50 = v48;
            *(_QWORD *)(a1 + 160) = v50 + 2;
            LODWORD(v50) = v51;
            v46 = &v42[v51];
            v45 = (_DWORD)v50 + 1;
          }
          else
          {
            v44 = v47;
            v45 = v47 + 1;
            v46 = &v42[v44];
          }
        }
        else
        {
          v52 = (_QWORD *)sub_186B270(0x18u);
          v45 = 1;
          *v52 = 2;
          v42 = v52 + 1;
          *(_QWORD *)(a1 + 160) = v42;
          v46 = v42;
        }
        *v46 = 0;
        *((_DWORD *)v42 - 1) = v45;
        sub_4B27C0((_QWORD *)(a1 + 528), (unsigned int *)&v73);
        if ( ++v71 == v65 )
          break;
        v42 = *(_QWORD **)(a1 + 160);
      }
      v5 = a2;
    }
    *(_DWORD *)(a1 + 128) += v65;
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
    result = sub_4B8880((_QWORD *)a1, v7, ((unsigned __int8)v8 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v13 = *(unsigned int *)(a3 + 12);
  v14 = *(_QWORD *)(a1 + 56);
  v74 = 0;
  LODWORD(v15) = *(_DWORD *)(v5 + 72);
  v16 = (__int64 *)(v14 + 8 * v13);
  v17 = *(unsigned int *)(v5 + 20);
  v60 = v16;
  v55 = *v16;
  v69 = *(_DWORD *)(v5 + 76);
  v73 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v73, v15, (__int64 *)(v5 + 80 + 16 * v17));
  v76 = 0;
  v56 = v73;
  v62 = v74;
  v18 = (__int64 *)(v5 + 80 + 16LL * *(unsigned int *)(v5 + 20));
  v75 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v75, v69, v18);
  v57 = v75;
  v63 = v76;
  v19 = (unsigned int)v15;
  v58 = (unsigned int)v15;
  if ( (_DWORD)v15 )
  {
    v15 = 0;
    v36 = v60;
    v67 = &v60[v19];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v36[1]) )
      {
        v37 = v36[1];
        v38 = v15 + 1;
        v39 = (__int64 *)(v62 + 8 * v15);
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        v40 = *v39;
        if ( *v39 )
        {
          v34 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v34 )
          {
            v64 = v38;
            v54 = v37;
            sub_15D7BC0(v56, v40);
            v38 = v64;
            v37 = v54;
          }
        }
        *v39 = v37;
        v15 = v38;
      }
      ++v36;
    }
    while ( v67 != v36 );
  }
  sub_39BEE0(&v73, v15);
  v20 = v69;
  if ( v69 )
  {
    v69 = 0;
    v30 = &v60[v58];
    v66 = &v60[v58 + v20];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v30[1]) )
      {
        v31 = v30[1];
        v32 = v69 + 1;
        v70 = (__int64 *)(v63 + 8LL * v69);
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        v33 = *v70;
        if ( *v70 )
        {
          v34 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v34 )
          {
            v59 = v32;
            v61 = v31;
            sub_15D7BC0(v57, v33);
            v32 = v59;
            v31 = v61;
          }
        }
        v35 = v70;
        v69 = v32;
        *v35 = v31;
      }
      ++v30;
    }
    while ( v66 != v30 );
  }
  sub_39BEE0(&v75, v69);
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v41 = sub_15DBA30(*(_QWORD *)(a1 + 8), v5, v15, v62, v69, v63, v55);
    v21 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  else
  {
    ++*(_DWORD *)(v5 + 8);
    sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v21 = v5;
  }
  *(_QWORD *)(a1 + 480) = v21;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v22 = *(_QWORD *)(a1 + 480);
  v72 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  sub_4B2920((_QWORD *)(a1 + 56), &v72);
  v23 = *(_QWORD *)(a1 + 160);
  if ( v23 )
    *(_DWORD *)(v23 - 4) -= v65;
  v24 = *(_QWORD *)(a1 + 528);
  if ( v24 )
    *(_DWORD *)(v24 - 4) -= v65;
  sub_15844D0(a1);
  v25 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, v5, 0, *(_QWORD *)(a1 + 480));
    v25 = *(_QWORD *)(a1 + 480);
  }
  sub_4B1860(v25, *(_QWORD *)(a1 + 488));
  v26 = *(_QWORD *)(a1 + 504);
  v27 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_4B1840(v27, v26);
  *(_QWORD *)(a1 + 496) = 0;
  v28 = *(_QWORD *)(a1 + 40);
  v29 = *(_DWORD *)(v28 - 4);
  *(_DWORD *)(v28 - 4) = v29 - 1;
  if ( *(_QWORD *)(a1 + 480) != v5 && v29 != 1 )
    *(_BYTE *)(v28 + 16LL * (unsigned int)(v29 - 2) + 8) |= 2u;
  sub_2334C0(&v75);
  return sub_2334C0(&v73);
}

