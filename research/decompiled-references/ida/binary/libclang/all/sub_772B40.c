__int64 __fastcall sub_772B40(__int64 a1, __int64 *a2)
{
  int v2; // eax
  unsigned int v5; // edx
  __int64 v6; // r12
  _QWORD *v7; // r14
  unsigned __int64 v8; // rcx
  int v9; // r8d
  _QWORD *v10; // r15
  unsigned int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  int v16; // esi
  __int64 v17; // rdx
  char *v18; // rbp
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r12
  _QWORD *v28; // rbp
  _QWORD *v29; // rdi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // r8
  unsigned int v35; // edx
  int v36; // edi
  __int64 v37; // r8
  _QWORD *v38; // rcx
  _QWORD *v39; // r9
  _QWORD *i; // rax
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // r8d
  _QWORD *v44; // r11
  int v45; // r15d
  __int64 v46; // r13
  __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // r10
  int v50; // edi
  unsigned int v51; // edx
  __int64 v52; // rcx
  int v53; // r9d
  _QWORD *v54; // r8
  _QWORD *v55; // rdx
  unsigned int v56; // eax
  _QWORD *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdx
  int v60; // edi
  __int64 v61; // rsi
  _QWORD *v62; // rcx
  _QWORD *v63; // r8
  _QWORD *v64; // rax
  int v65; // edi
  int v66; // edi
  _QWORD *v67; // r11
  unsigned int v68; // esi
  __int64 v69; // rcx
  __int64 v70; // r10
  int v71; // edi
  int v72; // r8d
  _QWORD *v73; // rcx
  unsigned int v74; // r13d
  __int64 v75; // rdx
  char *v76; // rbp
  _QWORD *v77; // rdx
  __int64 v78; // r15
  unsigned int v79; // [rsp+8h] [rbp-A0h]
  int v80; // [rsp+Ch] [rbp-9Ch]
  __int128 v81; // [rsp+10h] [rbp-98h]
  __int64 v82; // [rsp+20h] [rbp-88h]
  char *v83; // [rsp+28h] [rbp-80h]
  __int64 v84; // [rsp+30h] [rbp-78h]
  char v85; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v86[3]; // [rsp+40h] [rbp-68h] BYREF
  int v87; // [rsp+58h] [rbp-50h]
  _BYTE *v88; // [rsp+60h] [rbp-48h]
  __int64 v89; // [rsp+68h] [rbp-40h]
  _BYTE v90[56]; // [rsp+70h] [rbp-38h] BYREF

  v2 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *a2;
  v7 = *(_QWORD **)a1;
  if ( !v5 )
    goto LABEL_28;
  v8 = v5 - 1;
  v9 = 1;
  v10 = nullptr;
  v11 = v8 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
  v12 = &v7[2 * v11];
  v13 = *v12;
  if ( v6 == *v12 )
  {
LABEL_3:
    v14 = *((unsigned int *)v12 + 2);
    return *(_QWORD *)(a1 + 24) + 48 * v14 + 8;
  }
  while ( v13 != -4096 )
  {
    if ( v13 == -8192 && !v10 )
      v10 = v12;
    v11 = v8 & (v9 + v11);
    v12 = &v7[2 * v11];
    v13 = *v12;
    if ( v6 == *v12 )
      goto LABEL_3;
    ++v9;
  }
  if ( !v10 )
    v10 = v12;
  v16 = *(_DWORD *)(a1 + 8) + 1;
  v2 = 2 * v5;
  if ( 4 * v16 >= 3 * v5 )
  {
LABEL_28:
    v79 = v5;
    v30 = (unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1);
    v31 = (((v30 >> 2) | v30) >> 4) | (v30 >> 2) | v30;
    v32 = ((((v31 >> 8) | v31) >> 16) | (v31 >> 8) | v31) + 1;
    if ( (unsigned int)v32 < 0x40 )
      LODWORD(v32) = 64;
    *(_DWORD *)(a1 + 16) = v32;
    v33 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v32, 8);
    v34 = *(unsigned int *)(a1 + 16);
    v35 = v79;
    *(_QWORD *)a1 = v33;
    v36 = v34;
    v37 = 16 * v34;
    v38 = &v33[(unsigned __int64)v37 / 8];
    if ( v7 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v39 = &v7[2 * v35];
      if ( v37 )
      {
        if ( (v37 & 0x10) == 0 || (*v33 = -4096, v33 += 2, v33 != v38) )
        {
          do
          {
            *v33 = -4096;
            v33 += 4;
            *(v33 - 2) = -4096;
          }
          while ( v33 != v38 );
        }
      }
      for ( i = v7; v39 != i; i += 2 )
      {
        v41 = *i;
        if ( *i != -4096 && v41 != -8192 )
        {
          v42 = *(_DWORD *)(a1 + 16);
          if ( !v42 )
          {
LABEL_114:
            *(_QWORD *)&dword_0 = v41;
            BUG();
          }
          v43 = v42 - 1;
          v44 = *(_QWORD **)a1;
          v45 = 1;
          v46 = 0;
          LODWORD(v47) = v43 & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
          v48 = *(_QWORD *)a1 + 16LL * (unsigned int)v47;
          v49 = *(_QWORD *)v48;
          if ( *(_QWORD *)v48 != v41 )
          {
            while ( v49 != -4096 )
            {
              if ( v49 == -8192 && !v46 )
                v46 = v48;
              v79 = v45 + 1;
              v47 = v43 & (unsigned int)(v47 + v45);
              v48 = (__int64)&v44[2 * v47];
              v49 = *(_QWORD *)v48;
              if ( v41 == *(_QWORD *)v48 )
                goto LABEL_40;
              v45 = v79;
            }
            if ( v46 )
              v48 = v46;
          }
LABEL_40:
          *(_QWORD *)v48 = v41;
          *(_DWORD *)(v48 + 8) = *((_DWORD *)i + 2);
          ++*(_DWORD *)(a1 + 8);
        }
      }
      operator delete();
      v33 = *(_QWORD **)a1;
      v36 = *(_DWORD *)(a1 + 16);
      v16 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      if ( v33 != v38 )
      {
        v55 = v33;
        if ( (v37 & 0x10) == 0 || (v55 = v33 + 2, *v33 = -4096, v33 + 2 != v38) )
        {
          do
          {
            *v55 = -4096;
            v55 += 4;
            *(v55 - 2) = -4096;
          }
          while ( v55 != v38 );
        }
      }
      v16 = 1;
    }
    if ( v36 )
    {
      v50 = v36 - 1;
      v51 = v50 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
      v10 = &v33[2 * v51];
      v52 = *v10;
      if ( v6 != *v10 )
      {
        v53 = 1;
        v54 = nullptr;
        while ( v52 != -4096 )
        {
          if ( v52 == -8192 && !v54 )
            v54 = v10;
          v51 = v50 & (v53 + v51);
          v10 = &v33[2 * v51];
          v52 = *v10;
          if ( v6 == *v10 )
            goto LABEL_15;
          ++v53;
        }
        if ( v54 )
          v10 = v54;
      }
      goto LABEL_15;
    }
    goto LABEL_115;
  }
  if ( v5 >> 3 >= v5 - *(_DWORD *)(a1 + 12) - v16 )
  {
    v79 = v5;
    v56 = (((((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
           | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
           | ((v8 | (v8 >> 1)) >> 2)
           | v8
           | (v8 >> 1)) >> 16)
         | ((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
         | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
         | ((v8 | (v8 >> 1)) >> 2)
         | v8
         | (v8 >> 1))
        + 1;
    if ( v56 < 0x40 )
      v56 = 64;
    *(_DWORD *)(a1 + 16) = v56;
    v57 = (_QWORD *)sub_25CC9C0(16LL * v56, 8);
    v58 = *(unsigned int *)(a1 + 16);
    v59 = v79;
    *(_QWORD *)a1 = v57;
    v60 = v58;
    v61 = 16 * v58;
    v62 = &v57[(unsigned __int64)v61 / 8];
    if ( v7 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v63 = &v7[2 * v59];
      if ( v61 )
      {
        if ( (v61 & 0x10) == 0 || (*v57 = -4096, v57 += 2, v57 != v62) )
        {
          do
          {
            *v57 = -4096;
            v57 += 4;
            *(v57 - 2) = -4096;
          }
          while ( v57 != v62 );
        }
      }
      v64 = v7;
      do
      {
        v41 = *v64;
        if ( *v64 != -4096 && v41 != -8192 )
        {
          v65 = *(_DWORD *)(a1 + 16);
          if ( !v65 )
            goto LABEL_114;
          v66 = v65 - 1;
          v67 = *(_QWORD **)a1;
          v68 = v66 & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
          v69 = *(_QWORD *)a1 + 16LL * v68;
          v70 = *(_QWORD *)v69;
          if ( v41 != *(_QWORD *)v69 )
          {
            v79 = 1;
            v78 = 0;
            v80 = v66;
            while ( v70 != -4096 )
            {
              if ( !v78 && v70 == -8192 )
                v78 = v69;
              v68 = v80 & (v79 + v68);
              v69 = (__int64)&v67[2 * v68];
              v70 = *(_QWORD *)v69;
              if ( v41 == *(_QWORD *)v69 )
                goto LABEL_67;
              ++v79;
            }
            if ( v78 )
              v69 = v78;
          }
LABEL_67:
          *(_QWORD *)v69 = v41;
          *(_DWORD *)(v69 + 8) = *((_DWORD *)v64 + 2);
          ++*(_DWORD *)(a1 + 8);
        }
        v64 += 2;
      }
      while ( v63 != v64 );
      operator delete();
      v57 = *(_QWORD **)a1;
      v60 = *(_DWORD *)(a1 + 16);
      v16 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      if ( v57 != v62 )
      {
        v77 = v57;
        if ( (v61 & 0x10) == 0 || (v77 = v57 + 2, *v57 = -4096, v57 + 2 != v62) )
        {
          do
          {
            *v77 = -4096;
            v77 += 4;
            *(v77 - 2) = -4096;
          }
          while ( v77 != v62 );
        }
      }
      v16 = 1;
    }
    if ( v60 )
    {
      v71 = v60 - 1;
      v72 = 1;
      v73 = nullptr;
      v74 = v71 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
      v10 = &v57[2 * v74];
      v75 = *v10;
      if ( v6 != *v10 )
      {
        while ( v75 != -4096 )
        {
          if ( !v73 && v75 == -8192 )
            v73 = v10;
          v74 = v71 & (v72 + v74);
          v10 = &v57[2 * v74];
          v75 = *v10;
          if ( v6 == *v10 )
            goto LABEL_15;
          ++v72;
        }
        if ( v73 )
          v10 = v73;
      }
      goto LABEL_15;
    }
LABEL_115:
    *(_DWORD *)(a1 + 8) = v16;
    BUG();
  }
LABEL_15:
  *(_DWORD *)(a1 + 8) = v16;
  if ( *v10 != -4096 )
    --*(_DWORD *)(a1 + 12);
  *v10 = v6;
  v82 = 0;
  v83 = &v85;
  *((_DWORD *)v10 + 2) = 0;
  v17 = *a2;
  v18 = (char *)v86;
  v19 = *(unsigned int *)(a1 + 36);
  v88 = v90;
  v20 = *(unsigned int *)(a1 + 32);
  v86[0] = v17;
  v84 = 0;
  v21 = *(_QWORD *)(a1 + 24);
  v22 = v20 + 1;
  v87 = 0;
  v86[1] = 0;
  v86[2] = 0;
  v89 = 0;
  v81 = 0;
  if ( v19 < v20 + 1 )
  {
    if ( (unsigned __int64)v86 < v21 || (unsigned __int64)v86 >= v21 + 48 * v20 )
    {
      sub_7729C0(a1 + 24, v22);
      v21 = *(_QWORD *)(a1 + 24);
      v20 = *(unsigned int *)(a1 + 32);
      v17 = v86[0];
    }
    else
    {
      v76 = (char *)v86 - v21;
      sub_7729C0(a1 + 24, v22);
      v21 = *(_QWORD *)(a1 + 24);
      v20 = *(unsigned int *)(a1 + 32);
      v18 = &v76[v21];
      v17 = *(_QWORD *)v18;
    }
  }
  v23 = 48 * v20 + v21;
  *(_QWORD *)v23 = v17;
  v24 = *((_QWORD *)v18 + 1);
  *((_QWORD *)v18 + 1) = 0;
  *(_QWORD *)(v23 + 8) = v24;
  v25 = *((_QWORD *)v18 + 2);
  *((_QWORD *)v18 + 2) = 0;
  *(_QWORD *)(v23 + 16) = v25;
  LODWORD(v25) = *((_DWORD *)v18 + 6);
  *((_DWORD *)v18 + 6) = 0;
  *(_DWORD *)(v23 + 24) = v25;
  *(_QWORD *)(v23 + 32) = v23 + 48;
  *(_QWORD *)(v23 + 40) = 0;
  if ( *((_DWORD *)v18 + 10) )
    sub_772640(v23 + 32, (__int64)(v18 + 32));
  v26 = (unsigned int)v89;
  v27 = v88;
  ++*(_DWORD *)(a1 + 32);
  v28 = &v27[15 * v26];
  if ( v27 != v28 )
  {
    do
    {
      v28 -= 15;
      v29 = (_QWORD *)v28[1];
      if ( v29 != v28 + 3 )
        free(v29);
    }
    while ( v27 != v28 );
    v28 = v88;
  }
  if ( v28 != (_QWORD *)v90 )
    free(v28);
  operator delete();
  operator delete();
  v14 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
  *((_DWORD *)v10 + 2) = v14;
  return *(_QWORD *)(a1 + 24) + 48 * v14 + 8;
}

