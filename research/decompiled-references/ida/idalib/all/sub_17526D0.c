__int64 __fastcall sub_17526D0(__int64 a1, unsigned int a2, __int64 a3, void *a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  void **v21; // rax
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  _BOOL8 v30; // r8
  char *v31; // rdi
  __int64 v32; // rbp
  __int64 v33; // r12
  void **v34; // r13
  unsigned __int64 v35; // rbp
  void **v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r13
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  char *v45; // rdi
  __int64 v46; // rbp
  __int64 v47; // r13
  void **v48; // r12
  __int64 v49; // [rsp-20h] [rbp-2D8h]
  __int64 v51; // [rsp+28h] [rbp-290h]
  __int64 v52; // [rsp+28h] [rbp-290h]
  int v53; // [rsp+30h] [rbp-288h]
  __int64 v54; // [rsp+38h] [rbp-280h]
  int v55; // [rsp+38h] [rbp-280h]
  int v56; // [rsp+40h] [rbp-278h]
  int v57; // [rsp+44h] [rbp-274h]
  _BYTE v58[16]; // [rsp+50h] [rbp-268h] BYREF
  _BYTE v59[8]; // [rsp+60h] [rbp-258h] BYREF
  unsigned __int8 v60; // [rsp+68h] [rbp-250h]
  __int64 v61; // [rsp+90h] [rbp-228h]
  __int64 v62; // [rsp+98h] [rbp-220h]
  void *v63; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-200h]
  _BYTE v65[48]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *ptr; // [rsp+F0h] [rbp-1C8h] BYREF
  __int64 v67; // [rsp+F8h] [rbp-1C0h]
  __int64 v68[12]; // [rsp+100h] [rbp-1B8h] BYREF
  int v69; // [rsp+160h] [rbp-158h]
  char v70; // [rsp+164h] [rbp-154h]
  void *v71; // [rsp+170h] [rbp-148h] BYREF
  __int64 v72; // [rsp+178h] [rbp-140h]
  _BYTE v73[96]; // [rsp+180h] [rbp-138h] BYREF
  int v74; // [rsp+1E0h] [rbp-D8h]
  char v75; // [rsp+1E4h] [rbp-D4h]
  char v76; // [rsp+1E8h] [rbp-D0h]
  __int64 v77; // [rsp+1F0h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+1F8h] [rbp-C0h]
  __int64 v79; // [rsp+200h] [rbp-B8h] BYREF
  unsigned int v80; // [rsp+208h] [rbp-B0h]
  void *v81; // [rsp+240h] [rbp-78h] BYREF
  __int64 v82; // [rsp+248h] [rbp-70h]
  __int64 v83; // [rsp+250h] [rbp-68h] BYREF
  __int64 v84; // [rsp+258h] [rbp-60h]
  __int16 v85; // [rsp+260h] [rbp-58h]
  char v86; // [rsp+262h] [rbp-56h]
  __int64 v87; // [rsp+268h] [rbp-50h]

  v11 = sub_B77AF0(a3);
  if ( v11 )
  {
    v12 = v11;
    v63 = v65;
    v64 = 0x300000000LL;
    sub_BBDAC0(v11, (__int64)&v63);
    if ( (_DWORD)v64 )
    {
      v15 = *(_QWORD *)(a1 + 544);
      v16 = a3 + 72;
      if ( !a3 )
        v16 = 0;
      v77 = a1;
      v17 = *(_QWORD *)(a1 + 9944);
      v51 = v15;
      v18 = *(_QWORD *)(a1 + 512);
      *(_QWORD *)(a1 + 544) = v16;
      v19 = *(_DWORD *)(a1 + 40);
      v54 = v18;
      LODWORD(v18) = *(_DWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 512) = 0;
      v56 = v18;
      LODWORD(v18) = *(_DWORD *)(a1 + 2632);
      *(_DWORD *)(a1 + 80) = v19;
      v20 = *(_DWORD *)(a1 + 3688);
      *(_QWORD *)(a1 + 9944) = 0;
      v78 = 1;
      v62 = v17;
      v57 = v18;
      *(_DWORD *)(a1 + 2632) = v20;
      v21 = (void **)&v79;
      do
      {
        *v21 = (void *)-4096LL;
        v21 += 2;
      }
      while ( v21 != &v81 );
      ptr = a4;
      v85 = 0;
      v81 = &v83;
      v82 = 0x100000000LL;
      v22 = *(_QWORD *)(a1 + 11280);
      v67 = a5;
      v84 = v22;
      v86 = 0;
      v87 = 0;
      LOBYTE(v68[0]) = 1;
      *(_QWORD *)(a1 + 11280) = &v77;
      v49 = (__int64)a4;
      v23 = 1;
      sub_1744760((__int64)&v71, a1, a3, (__int64)&v77, v13, v14, v49, v67, v68[0]);
      if ( v76 )
      {
        v26 = 0;
        if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35 <= 3
          && ((v26 = sub_1703690(a3, a1, v24, v25), v27 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16), (v27 & 4) == 0)
            ? (v28 = v27 & 0xFFFFFFFFFFFFFFF8LL)
            : (v28 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL)),
              v28) )
        {
          v29 = v28 - 64;
          v30 = v29 != 0;
        }
        else
        {
          v30 = 0;
          v29 = 0;
        }
        sub_19A2CD0(v59, a1, v29, v26, v30);
        ptr = v68;
        v67 = 0x400000000LL;
        if ( (_DWORD)v72 )
          sub_1744960((__int64 *)&ptr, (__int64 *)&v71);
        v69 = v74;
        v70 = v75;
        sub_1A2F130(v58, a1, a3, &ptr, &v77, 1);
        if ( ptr != v68 )
          free(ptr);
        v67 = 0x400000000LL;
        ptr = v68;
        v23 = sub_1751DC0(
                a1,
                v12,
                (__int64)v63,
                (unsigned int)v64,
                (__int64)&ptr,
                (__int64)&v71,
                a7,
                a2 | ((unsigned __int64)a2 << 32),
                a6);
        if ( ptr != v68 )
          free(ptr);
        sub_146B590((__int64)v58);
        sub_19A2DA0(v59);
        if ( v76 && v71 != v73 )
          free(v71);
      }
      v31 = (char *)v81;
      if ( !(_BYTE)v85 )
      {
        if ( (_DWORD)v82 )
        {
          v32 = 0;
          v33 = 8LL * (unsigned int)(v82 - 1) + 8;
          do
          {
            v34 = *(void ***)&v31[v32];
            if ( v34 )
            {
              if ( *v34 != v34 + 2 )
                free(*v34);
              operator delete(v34, 0x30u);
              v31 = (char *)v81;
            }
            v32 += 8;
          }
          while ( v33 != v32 );
        }
        *(_QWORD *)(v77 + 11280) = v84;
        LOBYTE(v85) = 1;
      }
      if ( v31 != (char *)&v83 )
        free(v31);
      if ( (v78 & 1) == 0 )
        operator delete(v79, 16LL * v80, 8);
      if ( v51 )
      {
        *(_QWORD *)(a1 + 544) = v51;
        *(_QWORD *)(a1 + 512) = v54;
        *(_QWORD *)(a1 + 9944) = v62;
        *(_DWORD *)(a1 + 80) = v56;
        *(_DWORD *)(a1 + 2632) = v57;
      }
      goto LABEL_39;
    }
LABEL_38:
    v23 = 0;
    *(_BYTE *)(a6 + 128) = 1;
    goto LABEL_39;
  }
  v35 = sub_B77A30(a3);
  v63 = v65;
  v64 = 0x300000000LL;
  sub_BBDAC0(v35, (__int64)&v63);
  if ( !(_DWORD)v64 )
    goto LABEL_38;
  v77 = a1;
  v78 = 1;
  v37 = (void **)&v79;
  do
  {
    *v37 = (void *)-4096LL;
    v37 += 2;
  }
  while ( v37 != &v81 );
  v81 = &v83;
  v82 = 0x100000000LL;
  v38 = *(_QWORD *)(a1 + 11280);
  v85 = 0;
  v84 = v38;
  v86 = 0;
  v87 = 0;
  *(_QWORD *)(a1 + 11280) = &v77;
  v39 = *(_QWORD *)(v35 + 48);
  ptr = v68;
  v67 = 0x400000000LL;
  v69 = 0;
  v70 = 0;
  sub_1DC3850((unsigned int)v59, a1, a2, v35, (_DWORD)a4, a5, a2 | ((unsigned __int64)a2 << 32));
  v23 = v60;
  if ( v60 )
  {
    sub_1DBADA0(v59);
  }
  else
  {
    v40 = 0;
    if ( v39 )
      v40 = v39 + 72;
    v61 = 0;
    sub_1DBA4B0((unsigned int)&v71, a1, v39, v40, 0, 1);
    sub_17445F0((char ***)&ptr, (char ***)&v71);
    v69 = v74;
    v70 = v75;
    if ( v71 != v73 )
      free(v71);
    sub_1DBADA0(v59);
    v41 = *(_QWORD *)(a1 + 512);
    v42 = *(_QWORD *)(a1 + 544);
    *(_QWORD *)(a1 + 544) = v40;
    v43 = (unsigned int)v64;
    v52 = v41;
    v44 = *(_QWORD *)(a1 + 9944);
    v71 = v73;
    v62 = v44;
    v53 = *(_DWORD *)(a1 + 80);
    LODWORD(v44) = *(_DWORD *)(a1 + 2632);
    v72 = 0x400000000LL;
    v55 = v44;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
    LODWORD(v44) = *(_DWORD *)(a1 + 3688);
    *(_QWORD *)(a1 + 512) = 0;
    *(_QWORD *)(a1 + 9944) = 0;
    *(_DWORD *)(a1 + 2632) = v44;
    v23 = sub_1751DC0(
            a1,
            v35,
            (__int64)v63,
            v43,
            (__int64)&v71,
            (__int64)&ptr,
            a7,
            a2 | ((unsigned __int64)a2 << 32),
            a6);
    if ( v71 != v73 )
      free(v71);
    if ( v42 )
    {
      *(_QWORD *)(a1 + 544) = v42;
      *(_QWORD *)(a1 + 512) = v52;
      *(_QWORD *)(a1 + 9944) = v62;
      *(_DWORD *)(a1 + 80) = v53;
      *(_DWORD *)(a1 + 2632) = v55;
    }
  }
  if ( ptr != v68 )
    free(ptr);
  v45 = (char *)v81;
  if ( !(_BYTE)v85 )
  {
    if ( (_DWORD)v82 )
    {
      v46 = 0;
      v47 = 8LL * (unsigned int)(v82 - 1) + 8;
      do
      {
        v48 = *(void ***)&v45[v46];
        if ( v48 )
        {
          if ( *v48 != v48 + 2 )
            free(*v48);
          operator delete(v48, 0x30u);
          v45 = (char *)v81;
        }
        v46 += 8;
      }
      while ( v47 != v46 );
    }
    *(_QWORD *)(v77 + 11280) = v84;
    LOBYTE(v85) = 1;
  }
  if ( v45 != (char *)&v83 )
    free(v45);
  if ( (v78 & 1) == 0 )
    operator delete(v79, 16LL * v80, 8);
LABEL_39:
  if ( v63 != v65 )
    free(v63);
  return v23;
}
