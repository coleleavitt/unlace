_QWORD *__fastcall sub_18C5570(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        double a7)
{
  _QWORD *v9; // rbx
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned __int64 *v18; // r14
  unsigned __int64 *v19; // r12
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // rbp
  _QWORD *v24; // rdi
  void *v25; // rdi
  void **v26; // rbp
  void **v27; // rbx
  __int64 v29; // rdx
  bool v30; // zf
  char *v31; // r15
  char *v32; // rbx
  __int64 v33; // rsi
  char *v34; // r15
  char *v35; // rbp
  _BYTE *i; // rax
  __int64 v37; // rsi
  unsigned int v38; // ecx
  __int64 v39; // rdi
  __int64 *v40; // r14
  __int64 *v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdi
  void **v44; // r15
  _QWORD *v45; // rdi
  _QWORD *v46; // r14
  _QWORD *v47; // rbp
  char *v48; // rdi
  unsigned __int8 v49; // al
  int v50; // edx
  _QWORD *v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // [rsp+8h] [rbp-1FF0h]
  _QWORD *v55; // [rsp+8h] [rbp-1FF0h]
  void **v56; // [rsp+8h] [rbp-1FF0h]
  unsigned int v57; // [rsp+10h] [rbp-1FE8h]
  _QWORD *v58; // [rsp+10h] [rbp-1FE8h]
  unsigned __int64 v60; // [rsp+28h] [rbp-1FD0h]
  __int64 v61; // [rsp+58h] [rbp-1FA0h] BYREF
  _QWORD v62[8]; // [rsp+60h] [rbp-1F98h] BYREF
  _QWORD v63[2]; // [rsp+A0h] [rbp-1F58h] BYREF
  void *ptr; // [rsp+B0h] [rbp-1F48h] BYREF
  unsigned int v65; // [rsp+B8h] [rbp-1F40h]
  _QWORD v66[2]; // [rsp+C0h] [rbp-1F38h] BYREF
  int v67; // [rsp+D0h] [rbp-1F28h]
  __int64 v68; // [rsp+D4h] [rbp-1F24h]
  __int16 v69; // [rsp+DCh] [rbp-1F1Ch]
  void *v70; // [rsp+E0h] [rbp-1F18h]
  unsigned __int64 *v71; // [rsp+E8h] [rbp-1F10h]
  __int64 v72; // [rsp+F0h] [rbp-1F08h]
  void **v73; // [rsp+100h] [rbp-1EF8h] BYREF
  __int64 v74; // [rsp+108h] [rbp-1EF0h]
  void *v75[336]; // [rsp+110h] [rbp-1EE8h] BYREF
  void *v76; // [rsp+B90h] [rbp-1468h]
  __int64 v77; // [rsp+B98h] [rbp-1460h]
  int v78; // [rsp+BA0h] [rbp-1458h]
  char v79; // [rsp+BA4h] [rbp-1454h]
  _QWORD v80[17]; // [rsp+BA8h] [rbp-1450h] BYREF
  int v81; // [rsp+C30h] [rbp-13C8h]
  __int64 v82; // [rsp+C38h] [rbp-13C0h]
  __int64 v83; // [rsp+C40h] [rbp-13B8h]
  void *v84; // [rsp+C48h] [rbp-13B0h]
  __int64 v85; // [rsp+C50h] [rbp-13A8h]
  _BYTE v86[32]; // [rsp+C58h] [rbp-13A0h] BYREF
  __int64 *v87; // [rsp+C78h] [rbp-1380h]
  __int64 v88; // [rsp+C80h] [rbp-1378h]
  _QWORD v89[2]; // [rsp+C88h] [rbp-1370h] BYREF
  unsigned int v90; // [rsp+C98h] [rbp-1360h]
  int v91; // [rsp+C9Ch] [rbp-135Ch]
  __int64 v92; // [rsp+CA0h] [rbp-1358h]
  char v93; // [rsp+CA8h] [rbp-1350h]
  int v94; // [rsp+CACh] [rbp-134Ch]
  int v95; // [rsp+1FB0h] [rbp-48h]

  v9 = a1;
  v10 = *(_QWORD *)(a4 + 40);
  if ( (*(_WORD *)a3 & 0x1FF) == 0x2E )
  {
    v54 = *(_DWORD *)(a3 + 40);
  }
  else
  {
    v52 = sub_EEB7E0(a3, a2, a7);
    a3 = 0;
    v54 = v52;
  }
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v10 & 7) != 0 )
    v11 = 0;
  sub_1A3A1D0(v62, a2, a6, 0, a3);
  v12 = *(_QWORD *)(a2 + 544);
  v62[7] = v11;
  v62[0] = off_2BC6E48;
  v17 = (unsigned int)sub_15F18E0(a2, v12, v13, v14, v15, v16);
  v73 = (void **)v10;
  v57 = v17;
  LODWORD(v74) = v54;
  sub_B85890(v75, v10);
  sub_1A6BD60((unsigned int)v63, a2, (unsigned int)&v73, 0, v57, 0, (__int64)v62, 1, 0, 0, 0, 1);
  v58 = a1 + 4;
  if ( !v63[0] )
    goto LABEL_7;
  if ( !v65 )
    goto LABEL_7;
  v60 = *(_QWORD *)ptr;
  if ( !*(_QWORD *)ptr )
    goto LABEL_7;
  if ( v65 > 1 )
  {
    v80[16] = 0;
    v76 = v80;
    v73 = v75;
    v84 = v86;
    v74 = 0x1000000000LL;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    v87 = v89;
    v89[0] = 0;
    v89[1] = 1;
    v90 = v54;
    v91 = 0;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v30 = *(_QWORD *)ptr == 0;
    v77 = 16;
    v78 = 0;
    v79 = 1;
    v85 = 0x400000000LL;
    v88 = 0;
    if ( !v30 )
    {
      v31 = (char *)ptr;
      v32 = (char *)ptr + 8 * v65;
      do
      {
        v33 = *(_QWORD *)v31;
        if ( (*(_BYTE *)(*(_QWORD *)v31 + 28LL) & 0x7Fu) - 34 <= 5 )
        {
          v61 = v33 | 3;
          sub_1BF10B0(a2, v33, v33 | 3, a5, a6, (unsigned int)&v73, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);
        }
        v31 += 8;
      }
      while ( v32 != v31 );
      v9 = a1;
    }
    if ( !(unsigned int)sub_1BF27B0(&v73, a2, v54, &v61) )
    {
      v53 = *(_QWORD *)(v61 + 8);
      v65 = 0;
      v60 = v53 & 0xFFFFFFFFFFFFFFF8LL;
      sub_1A39E70(v63, v53 & 0xFFFFFFFFFFFFFFF8LL);
    }
    sub_1BD27A0(&v73);
    v34 = (char *)v84;
    v35 = (char *)v84 + 8 * (unsigned int)v85;
    if ( v84 != v35 )
    {
      for ( i = v84; ; i = v84 )
      {
        v37 = 0x40000000000LL;
        v38 = (unsigned int)((v34 - i) >> 3) >> 7;
        if ( v38 <= 0x1D )
          v37 = 4096LL << v38;
        v39 = *(_QWORD *)v34;
        v34 += 8;
        operator delete(v39, v37, 16);
        if ( v35 == v34 )
          break;
      }
    }
    v40 = v87;
    v41 = &v87[2 * (unsigned int)v88];
    if ( v87 != v41 )
    {
      do
      {
        v42 = v40[1];
        v43 = *v40;
        v40 += 2;
        operator delete(v43, v42, 16);
      }
      while ( v41 != v40 );
      v41 = v87;
    }
    if ( v41 != v89 )
      free(v41);
    if ( v84 != v86 )
      free(v84);
    if ( !v79 )
      free(v76);
    v56 = v73;
    v44 = &v73[21 * (unsigned int)v74];
    if ( v73 != v44 )
    {
      do
      {
        while ( 1 )
        {
          v44 -= 21;
          v45 = v44[8];
          v46 = v44[9];
          v47 = v45;
          if ( v46 != v45 )
          {
            do
            {
              while ( 1 )
              {
                v48 = (char *)v47[3];
                if ( v48 == (char *)(v47 + 5) )
                  break;
                operator delete(v48);
                v47 += 8;
                if ( v46 == v47 )
                  goto LABEL_67;
              }
              v47 += 8;
            }
            while ( v46 != v47 );
LABEL_67:
            v45 = v44[8];
          }
          if ( !v45 )
            break;
          operator delete(v45);
          if ( v56 == v44 )
            goto LABEL_70;
        }
      }
      while ( v56 != v44 );
LABEL_70:
      v44 = v73;
    }
    if ( v44 != v75 )
      free(v44);
  }
  v49 = *(_BYTE *)(v60 + 28) & 0x7F;
  v50 = v49;
  if ( (unsigned int)v49 - 53 <= 1 || ((v49 + 52) & 0x7Fu) <= 1 )
  {
    v49 = *(_BYTE *)(sub_B72ED0(v60) + 28) & 0x7F;
    v50 = v49;
  }
  if ( (unsigned int)(v50 - 26) <= 0x1A || v49 == 71 )
  {
    *v9 = v63[0];
    v9[1] = v63[1];
    v9[2] = v58;
    v9[3] = 0x100000000LL;
    if ( v65 )
      sub_AEA1F0((char ***)v9 + 2, (char ***)&ptr);
    v51 = ptr;
    v9[5] = v66[1];
    *((_DWORD *)v9 + 12) = v67;
    *(_QWORD *)((char *)v9 + 52) = v68;
    *((_WORD *)v9 + 30) = v69;
    v9[8] = v70;
    v9[9] = v71;
    v9[10] = v72;
    if ( v51 != v66 )
      free(v51);
  }
  else
  {
LABEL_7:
    v18 = v71;
    v19 = (unsigned __int64 *)v70;
    if ( v71 != v70 )
    {
      v55 = v9;
      do
      {
        v20 = *v19;
        if ( *v19 )
        {
          v21 = v19[1];
          if ( v21 )
          {
            if ( v20 < v21 || v20 > v21 + 14848 )
            {
              v22 = *(_QWORD **)(v20 + 528);
              v23 = &v22[8 * (unsigned __int64)*(unsigned int *)(v20 + 536)];
              if ( v22 != v23 )
              {
                do
                {
                  while ( 1 )
                  {
                    v23 -= 8;
                    v24 = (_QWORD *)v23[3];
                    if ( v24 == v23 + 5 )
                      break;
                    operator delete(v24);
                    if ( v22 == v23 )
                      goto LABEL_15;
                  }
                }
                while ( v22 != v23 );
LABEL_15:
                v23 = *(_QWORD **)(v20 + 528);
              }
              if ( v23 != (_QWORD *)(v20 + 544) )
                free(v23);
              v25 = *(void **)(v20 + 416);
              if ( v25 != (void *)(v20 + 432) )
                free(v25);
              v26 = (void **)(v20 + 384);
              v27 = (void **)(v20 + 64);
              do
              {
                while ( *v26 != v26 + 2 )
                {
                  operator delete(*v26);
                  v26 -= 4;
                  if ( v26 == v27 )
                    goto LABEL_23;
                }
                v26 -= 4;
              }
              while ( v26 != v27 );
LABEL_23:
              operator delete((void *)v20, 0x3A0u);
            }
            else
            {
              v29 = *(unsigned int *)(v21 + 14976);
              *(_DWORD *)(v21 + 14976) = v29 + 1;
              *(_QWORD *)(v21 + 8 * v29 + 14848) = v20;
            }
          }
        }
        v19 += 3;
      }
      while ( v18 != v19 );
      v9 = v55;
      v19 = (unsigned __int64 *)v70;
    }
    if ( v19 )
      operator delete(v19);
    if ( ptr != v66 )
      free(ptr);
    memset(v9, 0, 0x58u);
    v9[2] = v58;
    v9[3] = 0x100000000LL;
  }
  return v9;
}
