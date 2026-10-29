__int64 __fastcall sub_574140(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int *v8; // r14
  unsigned int v9; // r13d
  _QWORD *v10; // rax
  _DWORD *v11; // rdi
  unsigned int v12; // r14d
  unsigned int v13; // edx
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // r15d
  unsigned int v19; // r13d
  unsigned int v20; // r14d
  unsigned int v21; // ecx
  unsigned int *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // esi
  _QWORD *v27; // rax
  unsigned int *v28; // rdx
  unsigned int v29; // esi
  unsigned int v30; // eax
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r11
  _QWORD *v34; // rdi
  __int64 v35; // rsi
  char v36; // r12
  unsigned __int64 v37; // r10
  unsigned int *v38; // rax
  __int64 v39; // rdx
  __int64 *v40; // r12
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // r10d
  __int64 v44; // r15
  _QWORD *v45; // rdi
  __int64 v46; // rsi
  char v47; // r11
  unsigned __int64 v48; // r13
  unsigned int *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned int v52; // r13d
  __int64 v53; // rsi
  char v54; // r15
  __int64 v55; // r14
  __int64 v56; // r9
  unsigned int *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rdx
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  unsigned __int64 *v64; // rcx
  __int64 result; // rax
  unsigned int v66; // r12d
  unsigned int v67; // ecx
  unsigned int *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  char **v73; // rbp
  char **v74; // rbp
  char **exception; // rbp
  unsigned __int64 v76; // [rsp+0h] [rbp-108h]
  char *v77; // [rsp+8h] [rbp-100h]
  _QWORD *v79; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v80; // [rsp+30h] [rbp-D8h]
  char v81; // [rsp+3Bh] [rbp-CDh]
  unsigned int v82; // [rsp+3Ch] [rbp-CCh]
  _QWORD *v84; // [rsp+48h] [rbp-C0h]
  _QWORD *i; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v86; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v87; // [rsp+70h] [rbp-98h] BYREF
  __int128 v88; // [rsp+78h] [rbp-90h] BYREF
  __int64 v89; // [rsp+90h] [rbp-78h] BYREF
  __int128 v90; // [rsp+98h] [rbp-70h]
  __int64 v91[11]; // [rsp+B0h] [rbp-58h] BYREF

  v8 = (unsigned int *)a1[2];
  i = nullptr;
  v86 = nullptr;
  if ( !v8 )
  {
    v71 = a1[4];
    if ( !v71 )
      goto LABEL_80;
    goto LABEL_74;
  }
  v9 = *(v8 - 1);
  if ( !v9 )
  {
    v71 = a1[4];
    if ( !v71 )
      goto LABEL_19;
LABEL_74:
    v18 = *(_DWORD *)(v71 - 4);
    goto LABEL_75;
  }
  v10 = (_QWORD *)sub_186B270(0x18u);
  *v10 = 2;
  v11 = v10 + 1;
  for ( i = v10 + 1; ; i = v14 + 2 )
  {
    v15 = *(v11 - 2);
    if ( v15 >= v9 )
      break;
    v12 = (3 * v15 + 1) >> 1;
    v13 = 8 * v12 + 8;
    if ( 8 * v15 + 8 >= v13 || v15 >= v12 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v91, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v91);
      sub_233E40((__int64)v91);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v14 = (unsigned int *)sub_186B300(v11 - 2, v13);
    v11 = v14 + 2;
    *v14 = v12;
  }
  *(v11 - 1) = v9;
  memset(v11, 0, 8LL * v9);
  v16 = a1[4];
  v17 = v86;
  if ( !v16 )
  {
    v8 = (unsigned int *)a1[2];
    if ( v86 )
    {
      v18 = 0;
LABEL_79:
      *((_DWORD *)v86 - 1) = v18;
      if ( !v8 )
        goto LABEL_80;
LABEL_19:
      v26 = *(v8 - 1);
      goto LABEL_20;
    }
    goto LABEL_18;
  }
  v18 = *(_DWORD *)(v16 - 4);
  if ( v86 )
  {
    v19 = *((_DWORD *)v86 - 1);
    if ( v19 >= v18 )
    {
      v8 = (unsigned int *)a1[2];
      goto LABEL_79;
    }
    goto LABEL_15;
  }
LABEL_75:
  if ( !v18 )
  {
    v8 = (unsigned int *)a1[2];
    goto LABEL_18;
  }
  v72 = (_QWORD *)sub_186B270(0x18u);
  *v72 = 2;
  v19 = 0;
  v17 = v72 + 1;
  v86 = v72 + 1;
LABEL_15:
  while ( 1 )
  {
    v23 = *((_DWORD *)v17 - 2);
    if ( v23 >= v18 )
      break;
    v20 = (3 * v23 + 1) >> 1;
    v21 = 8 * v20 + 8;
    if ( 8 * v23 + 8 >= v21 || v23 >= v20 )
    {
      v73 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v91, "Overflow encountered when expanding vector");
      *v73 = (char *)off_1C63128;
      sub_2333C0(v73 + 1, v91);
      sub_233E40((__int64)v91);
      __cxa_throw(v73, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v22 = (unsigned int *)sub_186B300(v17 - 1, v21);
    v17 = v22 + 2;
    *v22 = v20;
    v86 = v22 + 2;
  }
  *((_DWORD *)v17 - 1) = v18;
  v8 = (unsigned int *)a1[2];
  v24 = 8LL * v19;
  v25 = 8LL * v18;
  if ( v24 != v25 )
    memset(&v17[(unsigned __int64)v24 / 8], 0, v25 - v24);
LABEL_18:
  if ( v8 )
    goto LABEL_19;
LABEL_80:
  v8 = nullptr;
  v26 = 0;
LABEL_20:
  v27 = sub_56C1C0(a3, v26, v8);
  v28 = (unsigned int *)a1[4];
  v84 = v27;
  if ( v28 )
    v29 = *(v28 - 1);
  else
    v29 = 0;
  v79 = sub_56C1C0(a4, v29, v28);
  v80 = *(_QWORD *)(a2 + 152);
  if ( v80 == 0xFFFFFFFF )
    v80 = *(_QWORD *)(a2 + 80);
  v30 = *(_DWORD *)(a2 + 72);
  v87 = 0;
  v89 = 0;
  v82 = v30;
  v81 = 0;
  v76 = 0;
  v88 = 0;
  v90 = 0;
  if ( !v80 )
    goto LABEL_56;
  do
  {
    v31 = a1[1];
    if ( v31 )
    {
      v32 = *(unsigned int *)(v31 - 4);
      if ( (_DWORD)v32 )
      {
        v33 = *(_QWORD *)(a2 + 40);
        v34 = i;
        v35 = 0;
        v36 = 0;
        v37 = *(_QWORD *)(a2 + 88) + v76;
        do
        {
          v38 = (unsigned int *)(v33 + 32LL * *(unsigned int *)(v31 + 4 * v35));
          v39 = *((_QWORD *)v38 + 1) & (*(_QWORD *)(v37 + *v38) >> v38[1]);
          if ( v39 != v34[v35] )
          {
            v34[v35] = v39;
            v36 = 1;
          }
          ++v35;
        }
        while ( v35 != v32 );
        if ( v36 )
        {
          (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD **))(*v84 + 24LL))(&v87, v84, &i);
          v81 = v87;
        }
      }
    }
    if ( v81 )
    {
      v40 = (__int64 *)&v88;
      v77 = (char *)&v88 + 8;
    }
    else
    {
      v77 = *((char **)&v88 + 1);
      v40 = (__int64 *)v88;
      if ( *((_QWORD *)&v88 + 1) == (_QWORD)v88 )
        goto LABEL_55;
    }
    v41 = a1[3];
    v42 = *v40;
    if ( v41 )
    {
LABEL_36:
      v43 = *(_DWORD *)(v41 - 4);
      if ( !v43 )
        goto LABEL_64;
      v44 = *(_QWORD *)(a2 + 40);
      v45 = v86;
      v46 = 0;
      v47 = 0;
      v48 = *(_QWORD *)(a2 + 88) + v76;
      do
      {
        v49 = (unsigned int *)(v44 + 32LL * *(unsigned int *)(v41 + 4 * v46));
        v50 = *((_QWORD *)v49 + 1) & (*(_QWORD *)(v48 + *v49) >> v49[1]);
        if ( v50 != v45[v46] )
        {
          v45[v46] = v50;
          v47 = 1;
        }
        ++v46;
      }
      while ( v46 != v43 );
      v51 = a1[5];
      if ( !v51 || (v52 = *(_DWORD *)(v51 - 4)) == 0 )
      {
LABEL_48:
        if ( v47 )
          (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD **))(*v79 + 24LL))(&v89, v79, &v86);
        goto LABEL_50;
      }
LABEL_43:
      v53 = 0;
      v54 = 0;
      v55 = *(_QWORD *)(a3 + 40);
      v56 = *(_QWORD *)(a3 + 88) + v42;
      do
      {
        v57 = (unsigned int *)(v55 + 32LL * *(unsigned int *)(v51 + 4 * v53));
        v58 = *((_QWORD *)v57 + 1) & (*(_QWORD *)(v56 + *v57) >> v57[1]);
        v59 = &v45[(unsigned int)(v43 + v53)];
        if ( v58 != *v59 )
        {
          *v59 = v58;
          v54 = 1;
        }
        ++v53;
      }
      while ( (unsigned int)v53 < v52 );
      v47 |= v54;
      goto LABEL_48;
    }
    while ( 1 )
    {
LABEL_64:
      v51 = a1[5];
      if ( v51 )
      {
        v52 = *(_DWORD *)(v51 - 4);
        if ( v52 )
        {
          v45 = v86;
          v47 = 0;
          v43 = 0;
          goto LABEL_43;
        }
      }
LABEL_50:
      if ( (_BYTE)v89 || (_QWORD)v90 != *((_QWORD *)&v90 + 1) )
        break;
      if ( ++v40 == (__int64 *)v77 )
        goto LABEL_55;
      v41 = a1[3];
      v42 = *v40;
      if ( v41 )
        goto LABEL_36;
    }
    v60 = (_QWORD *)*a5;
    if ( *a5 )
    {
      v61 = *((_DWORD *)v60 - 1);
      if ( v61 == *((_DWORD *)v60 - 2) )
      {
        v66 = (3 * v61 + 1) >> 1;
        v67 = 8 * v66 + 8;
        if ( 8 * v61 + 8 >= v67 || v61 >= v66 )
        {
          v74 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v91, "Overflow encountered when expanding vector");
          *v74 = (char *)off_1C63128;
          sub_2333C0(v74 + 1, v91);
          sub_233E40((__int64)v91);
          __cxa_throw(v74, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v68 = (unsigned int *)sub_186B300(v60 - 1, v67);
        v69 = v68[1];
        v60 = v68 + 2;
        *v68 = v66;
        LODWORD(v68) = v69;
        *a5 = v60;
        v64 = &v60[v69];
        v63 = (_DWORD)v68 + 1;
      }
      else
      {
        v62 = v61;
        v63 = v61 + 1;
        v64 = &v60[v62];
      }
    }
    else
    {
      v70 = (_QWORD *)sub_186B270(0x18u);
      *v70 = 2;
      v60 = v70 + 1;
      *a5 = v70 + 1;
      v64 = v70 + 1;
      v63 = 1;
    }
    *v64 = v76;
    *((_DWORD *)v60 - 1) = v63;
LABEL_55:
    v76 += v82;
  }
  while ( v76 < v80 );
LABEL_56:
  if ( v86 )
    sub_186B220(v86 - 1);
  result = (__int64)i;
  if ( i )
    return sub_186B220(i - 1);
  return result;
}

