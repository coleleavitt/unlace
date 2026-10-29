__int64 __fastcall sub_F5F3C0(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rbx
  int *v16; // rbx
  __int64 v17; // r15
  int v18; // ebp
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // esi
  int v26; // r11d
  unsigned int i; // edx
  __int64 v28; // rdi
  __int64 v29; // r8
  __int64 v30; // r14
  __int64 *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // esi
  int v39; // r15d
  __int64 *v40; // rdi
  __int64 v41; // r15
  unsigned int v42; // esi
  int v43; // r10d
  __int64 *v44; // rax
  unsigned int v45; // edx
  __int64 *v46; // rcx
  __int64 v47; // rdi
  _QWORD *v48; // rax
  __int64 v49; // rdx
  char *v50; // r12
  char *v51; // r13
  char *v52; // rbp
  char *v53; // rdi
  int v55; // edi
  bool v56; // zf
  __int64 v57; // rdi
  __int64 v58; // rdx
  int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // edx
  __int64 v62; // [rsp+0h] [rbp-138h]
  int *v63; // [rsp+8h] [rbp-130h]
  __int64 v64; // [rsp+10h] [rbp-128h]
  unsigned __int64 v65; // [rsp+18h] [rbp-120h]
  __int64 *v66; // [rsp+20h] [rbp-118h]
  __int64 *v67; // [rsp+28h] [rbp-110h]
  __int64 *v68; // [rsp+30h] [rbp-108h]
  __int64 *v69; // [rsp+58h] [rbp-E0h] BYREF
  unsigned __int64 v70; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v71; // [rsp+68h] [rbp-D0h]
  __int64 v72; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+78h] [rbp-C0h]
  unsigned int v74; // [rsp+80h] [rbp-B8h]
  __int64 v75; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+98h] [rbp-A0h]
  unsigned int v77; // [rsp+A0h] [rbp-98h]
  __int64 v78[2]; // [rsp+B0h] [rbp-88h] BYREF
  int v79; // [rsp+C0h] [rbp-78h]
  _QWORD v80[2]; // [rsp+D0h] [rbp-68h] BYREF
  int v81; // [rsp+E0h] [rbp-58h]
  void *ptr; // [rsp+E8h] [rbp-50h]
  __int64 v83; // [rsp+F0h] [rbp-48h]
  _BYTE v84[64]; // [rsp+F8h] [rbp-40h] BYREF

  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = a2;
  v6 = sub_B685F0((__int64)a2);
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = sub_EBA840(v6, a2, v7, v8, v9, v10);
  v68 = (__int64 *)(a1 + 40);
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78[0] = 0;
  v78[1] = 0;
  v79 = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  sub_F5F160(a1, a2, 0, 0, a3, (__int64)&v72, (__int64)&v75, v78);
  v80[0] = 0;
  ptr = v84;
  v80[1] = 0;
  v81 = 0;
  v83 = 0;
  sub_B4B310((__int64)a2, (__int64)v80, v11, v12, v13, v14);
  v15 = (char *)ptr;
  v67 = (__int64 *)((char *)ptr + 48 * (unsigned int)v83);
  if ( v67 == ptr )
    goto LABEL_59;
  v66 = (__int64 *)ptr;
  do
  {
    v16 = (int *)v66[4];
    v17 = *v66;
    v63 = &v16[30 * *((unsigned int *)v66 + 10)];
    if ( v63 == v16 )
      goto LABEL_49;
    v62 = *v66;
    v65 = (unsigned __int64)(((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4)) << 32;
    v64 = v17 + 72;
    do
    {
      v18 = *v16;
      v19 = *(_QWORD *)(sub_B68470(v64) + 16);
      if ( (v19 & 4) != 0 )
        v23 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v23 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      v24 = v23 - 64;
      v25 = v74;
      LODWORD(v71) = v18;
      if ( v23 )
        v23 -= 64LL;
      v70 = v23;
      if ( !v74 )
      {
        v69 = nullptr;
LABEL_65:
        v25 = 2 * v74;
        goto LABEL_66;
      }
      v22 = v72;
      v26 = 1;
      v20 = nullptr;
      for ( i = (v74 - 1)
              & (((0xBF58476D1CE4E5B9LL
                 * ((unsigned int)(37 * v18)
                  | ((unsigned __int64)(((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4)) << 32))) >> 31)
               ^ (756364221 * v18)); ; i = (v74 - 1) & v60 )
      {
        v28 = v72 + 24LL * i;
        v29 = *(_QWORD *)v28;
        if ( v23 == *(_QWORD *)v28 && v18 == *(_DWORD *)(v28 + 8) )
        {
          v30 = *(_QWORD *)(v28 + 16);
          goto LABEL_21;
        }
        if ( v29 == -4096 )
          break;
        if ( v29 == -8192 && *(_DWORD *)(v28 + 8) == -2 && !v20 )
          v20 = (__int64 *)(v72 + 24LL * i);
LABEL_91:
        v60 = v26 + i;
        ++v26;
      }
      if ( *(_DWORD *)(v28 + 8) != -1 )
        goto LABEL_91;
      v24 = 3 * v74;
      if ( !v20 )
        v20 = (__int64 *)v28;
      v55 = v73 + 1;
      v69 = v20;
      v21 = (unsigned int)(4 * (v73 + 1));
      if ( (unsigned int)v21 >= (unsigned int)v24 )
        goto LABEL_65;
      v24 = v74 - HIDWORD(v73) - v55;
      v21 = v74 >> 3;
      if ( (unsigned int)v24 <= (unsigned int)v21 )
      {
LABEL_66:
        sub_F5EE50((__int64)&v72, v25, v24, (__int64)v20, v21, v22);
        sub_F5A820(&v72, (__int64 *)&v70, &v69);
        v23 = v70;
        v18 = v71;
        v20 = v69;
        v55 = v73 + 1;
      }
      v56 = *v20 == -4096;
      LODWORD(v73) = v55;
      if ( !v56 || *((_DWORD *)v20 + 2) != -1 )
        --HIDWORD(v73);
      *v20 = v23;
      v30 = 0;
      *((_DWORD *)v20 + 2) = v18;
      v20[2] = 0;
LABEL_21:
      v31 = *((__int64 **)v16 + 1);
      v32 = *(_QWORD *)(sub_B68470(*v31 + 72) + 16);
      if ( (v32 & 4) != 0 )
        v35 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v35 = v32 & 0xFFFFFFFFFFFFFFF8LL;
      v36 = v35 - 64;
      v37 = *((unsigned int *)v31 + 2);
      v38 = v77;
      if ( v35 )
        v35 -= 64LL;
      LODWORD(v71) = *((_DWORD *)v31 + 2);
      v70 = v35;
      if ( !v77 )
      {
        v69 = nullptr;
LABEL_81:
        v38 = 2 * v77;
        goto LABEL_82;
      }
      v39 = 1;
      v40 = nullptr;
      v36 = (v77 - 1)
          & ((unsigned int)((0xBF58476D1CE4E5B9LL
                           * ((unsigned int)(37 * v37)
                            | ((unsigned __int64)(((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4)) << 32))) >> 31)
           ^ (756364221 * (_DWORD)v37));
      while ( 2 )
      {
        v33 = v75 + 24LL * (unsigned int)v36;
        v34 = *(_QWORD *)v33;
        if ( v35 == *(_QWORD *)v33 && (_DWORD)v37 == *(_DWORD *)(v33 + 8) )
        {
          v41 = *(_QWORD *)(v33 + 16);
          goto LABEL_37;
        }
        if ( v34 != -4096 )
        {
          if ( v34 == -8192 && *(_DWORD *)(v33 + 8) == -2 && !v40 )
            v40 = (__int64 *)(v75 + 24LL * (unsigned int)v36);
          goto LABEL_89;
        }
        if ( *(_DWORD *)(v33 + 8) != -1 )
        {
LABEL_89:
          v59 = v39 + v36;
          ++v39;
          v36 = (v77 - 1) & v59;
          continue;
        }
        break;
      }
      if ( !v40 )
        v40 = (__int64 *)(v75 + 24LL * (unsigned int)v36);
      v33 = (unsigned int)(v76 + 1);
      v36 = 3 * v77;
      v34 = (unsigned int)(4 * v33);
      v69 = v40;
      if ( (unsigned int)v34 >= (unsigned int)v36 )
        goto LABEL_81;
      v36 = v77 - HIDWORD(v76) - (unsigned int)v33;
      v34 = v77 >> 3;
      if ( (unsigned int)v36 <= (unsigned int)v34 )
      {
LABEL_82:
        sub_F5EE50((__int64)&v75, v38, v36, v37, v33, v34);
        sub_F5A820(&v75, (__int64 *)&v70, &v69);
        v35 = v70;
        v37 = (unsigned int)v71;
        v40 = v69;
        v33 = (unsigned int)(v76 + 1);
      }
      v56 = *v40 == -4096;
      LODWORD(v76) = v33;
      if ( !v56 || *((_DWORD *)v40 + 2) != -1 )
        --HIDWORD(v76);
      *v40 = v35;
      v41 = 0;
      *((_DWORD *)v40 + 2) = v37;
      v40[2] = 0;
LABEL_37:
      v42 = *(_DWORD *)(a1 + 56);
      v71 = v30;
      v70 = v62;
      if ( !v42 )
      {
        v69 = nullptr;
LABEL_73:
        v42 *= 2;
        goto LABEL_74;
      }
      v34 = v42 - 1;
      v33 = *(_QWORD *)(a1 + 40);
      v43 = 1;
      v44 = nullptr;
      v45 = v34 & (((0xBF58476D1CE4E5B9LL * (v65 | (unsigned int)(37 * v30))) >> 31) ^ (484763065 * (v65 | (37 * v30))));
      while ( 2 )
      {
        v46 = (__int64 *)(v33 + 40LL * v45);
        v47 = *v46;
        if ( v62 == *v46 && v30 == v46[1] )
        {
          v48 = v46 + 2;
          goto LABEL_48;
        }
        if ( v47 != -4096 )
        {
          if ( v47 == -8192 && v46[1] == 0x7FFFFFFFFFFFFFFELL && !v44 )
            v44 = (__int64 *)(v33 + 40LL * v45);
          goto LABEL_93;
        }
        if ( v46[1] != 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_93:
          v61 = v43 + v45;
          ++v43;
          v45 = v34 & v61;
          continue;
        }
        break;
      }
      v36 = 3 * v42;
      if ( !v44 )
        v44 = v46;
      v37 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
      v69 = v44;
      if ( 4 * (int)v37 >= (unsigned int)v36 )
        goto LABEL_73;
      v57 = v62;
      v36 = v42 - *(_DWORD *)(a1 + 52) - (unsigned int)v37;
      v33 = v42 >> 3;
      if ( (unsigned int)v36 <= (unsigned int)v33 )
      {
LABEL_74:
        sub_F55A30((__int64)v68, v42, v36, v37, v33, v34);
        sub_F55660(v68, (__int64 *)&v70, &v69);
        v57 = v70;
        LODWORD(v37) = *(_DWORD *)(a1 + 48) + 1;
        v44 = v69;
      }
      v56 = *v44 == -4096;
      *(_DWORD *)(a1 + 48) = v37;
      if ( !v56 || v44[1] != 0x7FFFFFFFFFFFFFFFLL )
        --*(_DWORD *)(a1 + 52);
      v58 = v71;
      *v44 = v57;
      v48 = v44 + 2;
      *v48 = 0;
      *(v48 - 1) = v58;
      v48[1] = 0;
      v48[2] = 0;
LABEL_48:
      v49 = *v31;
      v48[2] = v41;
      v16 += 30;
      *v48 = v49;
      v48[1] = v31[2];
    }
    while ( v63 != v16 );
LABEL_49:
    v66 += 6;
  }
  while ( v67 != v66 );
  v50 = (char *)ptr;
  v15 = (char *)ptr + 48 * (unsigned int)v83;
  if ( ptr != v15 )
  {
    do
    {
      v15 -= 48;
      v51 = *((char **)v15 + 4);
      v52 = &v51[120 * *((unsigned int *)v15 + 10)];
      if ( v51 != v52 )
      {
        do
        {
          while ( 1 )
          {
            v52 -= 120;
            v53 = *((char **)v52 + 1);
            if ( v53 == v52 + 24 )
              break;
            free(v53);
            if ( v51 == v52 )
              goto LABEL_54;
          }
        }
        while ( v51 != v52 );
LABEL_54:
        v51 = *((char **)v15 + 4);
      }
      if ( v51 != v15 + 48 )
        free(v51);
      operator delete();
    }
    while ( v50 != v15 );
    v15 = (char *)ptr;
  }
LABEL_59:
  if ( v15 != v84 )
    free(v15);
  operator delete();
  operator delete();
  operator delete();
  return operator delete();
}

