void __fastcall sub_6D2940(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  __int64 v7; // r15
  __int64 *v8; // r14
  unsigned __int64 v9; // rdx
  int v10; // edi
  __int64 *v11; // r8
  unsigned int v12; // r13d
  unsigned int v13; // esi
  __int64 *v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  void (*v18)(); // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 *v27; // r9
  __int64 *i; // rax
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // r8d
  __int64 v32; // r11
  int v33; // r15d
  __int64 *v34; // r13
  __int64 v35; // rdi
  __int64 *v36; // rcx
  __int64 v37; // r10
  int v38; // ecx
  int v39; // esi
  unsigned int v40; // edx
  __int64 v41; // rdi
  __int64 v42; // rax
  _QWORD *v43; // rax
  unsigned int v44; // eax
  _QWORD *v45; // rax
  __int64 v46; // rcx
  int v47; // esi
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  __int64 *v50; // r8
  __int64 *v51; // rax
  __int64 v52; // rdx
  int v53; // r9d
  int v54; // r9d
  __int64 v55; // r11
  unsigned int v56; // edi
  __int64 *v57; // rcx
  __int64 v58; // r10
  int v59; // esi
  int v60; // r9d
  __int64 *v61; // rdi
  unsigned int v62; // r13d
  __int64 v63; // rdx
  _QWORD *v64; // rcx
  _QWORD *v65; // rcx
  __int64 *v66; // r15
  int v67; // r10d
  __int64 *v68; // r9
  __int64 *v69; // [rsp+0h] [rbp-48h]
  int v70; // [rsp+0h] [rbp-48h]

  if ( a3 <= 1 )
    return;
  v3 = 0;
  v7 = *(unsigned int *)(a1 + 2024);
  v8 = *(__int64 **)(a1 + 2008);
  if ( !(_DWORD)v7 )
    goto LABEL_10;
  v9 = (unsigned int)(v7 - 1);
  v10 = 1;
  v11 = nullptr;
  v12 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v13 = v9 & v12;
  v14 = &v8[2 * ((unsigned int)v9 & v12)];
  v15 = *v14;
  if ( *v14 != a2 )
  {
    while ( v15 != -4096 )
    {
      if ( v15 == -8192 && !v11 )
        v11 = v14;
      v13 = v9 & (v10 + v13);
      v14 = &v8[2 * v13];
      v15 = *v14;
      if ( *v14 == a2 )
        goto LABEL_4;
      ++v10;
    }
    if ( !v11 )
      v11 = v14;
    v38 = *(_DWORD *)(a1 + 2016) + 1;
    v3 = 2 * v7;
    if ( 4 * v38 < (unsigned int)(3 * v7) )
    {
      if ( (unsigned int)v7 >> 3 < (int)v7 - *(_DWORD *)(a1 + 2020) - v38 )
      {
LABEL_27:
        *(_DWORD *)(a1 + 2016) = v38;
        if ( *v11 != -4096 )
          --*(_DWORD *)(a1 + 2020);
        *v11 = a2;
        *((_DWORD *)v11 + 2) = 0;
        v15 = *(unsigned int *)(a1 + 2044);
        v42 = *(unsigned int *)(a1 + 2040);
        if ( v15 < v42 + 1 )
        {
          v69 = v11;
          sub_25D6060(a1 + 2032, a1 + 2048, v42 + 1, 16);
          v42 = *(unsigned int *)(a1 + 2040);
          v11 = v69;
        }
        v43 = (_QWORD *)(*(_QWORD *)(a1 + 2032) + 16 * v42);
        *v43 = a2;
        v43[1] = 0;
        v16 = *(unsigned int *)(a1 + 2040);
        *(_DWORD *)(a1 + 2040) = v16 + 1;
        *((_DWORD *)v11 + 2) = v16;
        goto LABEL_5;
      }
      v44 = (((((((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4) | ((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 8)
             | ((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4)
             | ((v9 | (v9 >> 1)) >> 2)
             | v9
             | (v9 >> 1)) >> 16)
           | ((((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4) | ((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 8)
           | ((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4)
           | ((v9 | (v9 >> 1)) >> 2)
           | v9
           | (v9 >> 1))
          + 1;
      if ( v44 < 0x40 )
        v44 = 64;
      *(_DWORD *)(a1 + 2024) = v44;
      v45 = (_QWORD *)sub_25CC9C0(16LL * v44, 8);
      v46 = *(unsigned int *)(a1 + 2024);
      *(_QWORD *)(a1 + 2008) = v45;
      v47 = v46;
      v48 = 16 * v46;
      v49 = &v45[(unsigned __int64)v48 / 8];
      if ( v8 )
      {
        *(_QWORD *)(a1 + 2016) = 0;
        v50 = &v8[2 * v7];
        if ( v48 )
        {
          if ( (v48 & 0x10) == 0 || (*v45 = -4096, v45 += 2, v45 != v49) )
          {
            do
            {
              *v45 = -4096;
              v45 += 4;
              *(v45 - 2) = -4096;
            }
            while ( v45 != v49 );
          }
        }
        v51 = v8;
        do
        {
          v52 = *v51;
          if ( *v51 != -8192 && v52 != -4096 )
          {
            v53 = *(_DWORD *)(a1 + 2024);
            if ( !v53 )
            {
              *(_QWORD *)&dword_0 = *v51;
              BUG();
            }
            v54 = v53 - 1;
            v55 = *(_QWORD *)(a1 + 2008);
            v56 = v54 & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
            v57 = (__int64 *)(v55 + 16LL * v56);
            v58 = *v57;
            if ( *v57 != v52 )
            {
              v70 = 1;
              v66 = nullptr;
              while ( v58 != -4096 )
              {
                if ( v58 == -8192 && !v66 )
                  v66 = v57;
                v56 = v54 & (v70 + v56);
                v57 = (__int64 *)(v55 + 16LL * v56);
                v58 = *v57;
                if ( v52 == *v57 )
                  goto LABEL_54;
                ++v70;
              }
              if ( v66 )
                v57 = v66;
            }
LABEL_54:
            *v57 = v52;
            *((_DWORD *)v57 + 2) = *((_DWORD *)v51 + 2);
            ++*(_DWORD *)(a1 + 2016);
          }
          v51 += 2;
        }
        while ( v50 != v51 );
        operator delete();
        v45 = *(_QWORD **)(a1 + 2008);
        v47 = *(_DWORD *)(a1 + 2024);
        v38 = *(_DWORD *)(a1 + 2016) + 1;
      }
      else
      {
        *(_QWORD *)(a1 + 2016) = 0;
        if ( v45 != v49 )
        {
          v65 = v45;
          if ( (((_BYTE)v49 - (_BYTE)v45) & 0x10) == 0 || (v65 = v45 + 2, *v45 = -4096, v45 + 2 != v49) )
          {
            do
            {
              *v65 = -4096;
              v65 += 4;
              *(v65 - 2) = -4096;
            }
            while ( v65 != v49 );
          }
        }
        v38 = 1;
      }
      if ( v47 )
      {
        v59 = v47 - 1;
        v60 = 1;
        v61 = nullptr;
        v62 = v59 & v12;
        v11 = &v45[2 * v62];
        v63 = *v11;
        if ( *v11 != a2 )
        {
          while ( v63 != -4096 )
          {
            if ( !v61 && v63 == -8192 )
              v61 = v11;
            v62 = v59 & (v60 + v62);
            v11 = &v45[2 * v62];
            v63 = *v11;
            if ( *v11 == a2 )
              goto LABEL_27;
            ++v60;
          }
          if ( v61 )
            v11 = v61;
        }
        goto LABEL_27;
      }
LABEL_107:
      *(_DWORD *)(a1 + 2016) = v38;
      BUG();
    }
LABEL_10:
    v19 = (unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1);
    v20 = (((v19 >> 2) | v19) >> 4) | (v19 >> 2) | v19;
    v21 = ((((v20 >> 8) | v20) >> 16) | (v20 >> 8) | v20) + 1;
    if ( (unsigned int)v21 < 0x40 )
      LODWORD(v21) = 64;
    *(_DWORD *)(a1 + 2024) = v21;
    v22 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v21, 8);
    v23 = *(unsigned int *)(a1 + 2024);
    *(_QWORD *)(a1 + 2008) = v22;
    v24 = v23;
    v25 = 16 * v23;
    v26 = &v22[(unsigned __int64)v25 / 8];
    if ( v8 )
    {
      *(_QWORD *)(a1 + 2016) = 0;
      v27 = &v8[2 * (unsigned int)v7];
      if ( v25 )
      {
        if ( (v25 & 0x10) == 0 || (*v22 = -4096, v22 += 2, v22 != v26) )
        {
          do
          {
            *v22 = -4096;
            v22 += 4;
            *(v22 - 2) = -4096;
          }
          while ( v22 != v26 );
        }
      }
      for ( i = v8; v27 != i; i += 2 )
      {
        v29 = *i;
        if ( *i != -4096 && v29 != -8192 )
        {
          v30 = *(_DWORD *)(a1 + 2024);
          if ( !v30 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v31 = v30 - 1;
          v32 = *(_QWORD *)(a1 + 2008);
          v33 = 1;
          v34 = nullptr;
          LODWORD(v35) = v31 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
          v36 = (__int64 *)(v32 + 16LL * (unsigned int)v35);
          v37 = *v36;
          if ( v29 != *v36 )
          {
            while ( v37 != -4096 )
            {
              if ( v37 == -8192 && !v34 )
                v34 = v36;
              v35 = v31 & (unsigned int)(v35 + v33);
              v36 = (__int64 *)(v32 + 16 * v35);
              v37 = *v36;
              if ( v29 == *v36 )
                goto LABEL_22;
              ++v33;
            }
            if ( v34 )
              v36 = v34;
          }
LABEL_22:
          *v36 = v29;
          *((_DWORD *)v36 + 2) = *((_DWORD *)i + 2);
          ++*(_DWORD *)(a1 + 2016);
        }
      }
      operator delete();
      v22 = *(_QWORD **)(a1 + 2008);
      v24 = *(_DWORD *)(a1 + 2024);
      v38 = *(_DWORD *)(a1 + 2016) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 2016) = 0;
      if ( v22 != v26 )
      {
        v64 = v22;
        if ( (((_BYTE)v26 - (_BYTE)v22) & 0x10) == 0 || (v64 = v22 + 2, *v22 = -4096, v22 + 2 != v26) )
        {
          do
          {
            *v64 = -4096;
            v64 += 4;
            *(v64 - 2) = -4096;
          }
          while ( v64 != v26 );
        }
      }
      v38 = 1;
    }
    if ( v24 )
    {
      v39 = v24 - 1;
      v40 = v39 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v11 = &v22[2 * v40];
      v41 = *v11;
      if ( *v11 != a2 )
      {
        v67 = 1;
        v68 = nullptr;
        while ( v41 != -4096 )
        {
          if ( v41 == -8192 && !v68 )
            v68 = v11;
          v40 = v39 & (v67 + v40);
          v11 = &v22[2 * v40];
          v41 = *v11;
          if ( *v11 == a2 )
            goto LABEL_27;
          ++v67;
        }
        if ( v68 )
          v11 = v68;
      }
      goto LABEL_27;
    }
    goto LABEL_107;
  }
LABEL_4:
  v16 = *((unsigned int *)v14 + 2);
LABEL_5:
  *(_DWORD *)(*(_QWORD *)(a1 + 2032) + 16 * v16 + 8) = a3;
  v17 = *(_QWORD *)(a1 + 18208);
  if ( v17 )
  {
    v18 = *(void (**)())(*(_QWORD *)v17 + 208LL);
    if ( v18 != nullsub_87 )
      ((void (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64, __int64 *))v18)(v17, a2, a3, v15, v11);
  }
}

