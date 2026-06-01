void __fastcall sub_179F4C0(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // ecx
  int v14; // edx
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rbp
  unsigned int *v20; // rax
  int *v21; // r13
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // r9d
  __int64 v27; // rdi
  __int64 v28; // r10
  __int64 v29; // r14
  __int64 v30; // rbp
  int v31; // edx
  void *v32; // rcx
  int v33; // edi
  unsigned __int64 v34; // rsi
  __int64 v35; // rax
  void **v36; // r12
  unsigned __int64 v37; // rax
  void **v38; // rdx
  void **v39; // r15
  void **v40; // rdi
  void **v41; // rdi
  void **v42; // r15
  int v43; // ecx
  __int64 v44; // rdx
  unsigned int v45; // edi
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  unsigned int v51; // r9d
  int v52; // edx
  __int64 v53; // rax
  void *v54; // rcx
  int v55; // edi
  unsigned __int64 v56; // rsi
  __int64 v57; // r9
  __m128i v58; // xmm0
  void **v59; // rbp
  unsigned __int64 v60; // rax
  void **v61; // r15
  void **v62; // r14
  void **v63; // rdi
  void **v64; // rdi
  void **v65; // r15
  void **v66; // r14
  __int64 v67; // rdx
  __int64 v68; // rdx
  void **v69; // [rsp+8h] [rbp-A8h]
  void **v70; // [rsp+8h] [rbp-A8h]
  __int64 v71; // [rsp+10h] [rbp-A0h]
  int v72; // [rsp+48h] [rbp-68h] BYREF
  __int64 v73; // [rsp+4Ch] [rbp-64h]
  void *v74; // [rsp+58h] [rbp-58h]
  unsigned __int64 v75; // [rsp+60h] [rbp-50h]
  int v76; // [rsp+68h] [rbp-48h]

  v3 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 <= 640 )
    return;
  v4 = a1 + 40;
  v5 = a3;
  if ( !a3 )
  {
    v21 = a2;
    goto LABEL_16;
  }
  do
  {
    v7 = *(_DWORD *)(a1 + 40);
    --v5;
    v8 = *(a2 - 10);
    v9 = *(_DWORD *)(a1 + 32);
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *(_QWORD *)(a1 + 16);
    v12 = a1 + 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v3 >> 3)) >> 1);
    v13 = *(_DWORD *)v12;
    if ( v7 >= *(_DWORD *)v12 )
    {
      if ( v8 > v7 )
      {
LABEL_37:
        v72 = *(_DWORD *)a1;
        v46 = v72;
        v73 = *(_QWORD *)(a1 + 4);
        v47 = v73;
        *(_DWORD *)a1 = v7;
        v48 = *(_QWORD *)(a1 + 44);
        *(_DWORD *)(a1 + 40) = v46;
        *(_QWORD *)(a1 + 4) = v48;
        LODWORD(v48) = *(_DWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 44) = v47;
        *(_DWORD *)(a1 + 32) = v48;
        v49 = *(_QWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 72) = v9;
        *(_QWORD *)(a1 + 16) = v49;
        v50 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = v11;
        *(_QWORD *)(a1 + 24) = v50;
        *(_QWORD *)(a1 + 64) = v10;
        goto LABEL_7;
      }
      if ( v8 <= v13 )
      {
LABEL_36:
        v72 = *(_DWORD *)a1;
        v43 = v72;
        v73 = *(_QWORD *)(a1 + 4);
        v44 = v73;
        v45 = *(_DWORD *)v12;
        *(_QWORD *)(a1 + 16) = 0;
        *(_DWORD *)a1 = v45;
        *(_QWORD *)(a1 + 4) = *(_QWORD *)(v12 + 4);
        *(_DWORD *)(a1 + 32) = *(_DWORD *)(v12 + 32);
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(v12 + 24);
        *(_DWORD *)v12 = v43;
        *(_QWORD *)(v12 + 4) = v44;
        *(_DWORD *)(v12 + 32) = v9;
        *(_QWORD *)(v12 + 16) = v11;
        *(_QWORD *)(v12 + 24) = v10;
        goto LABEL_7;
      }
    }
    else
    {
      if ( v8 > v13 )
        goto LABEL_36;
      if ( v8 <= v7 )
        goto LABEL_37;
    }
    v72 = *(_DWORD *)a1;
    v14 = v72;
    v73 = *(_QWORD *)(a1 + 4);
    v15 = v73;
    v16 = *(a2 - 10);
    *(_QWORD *)(a1 + 16) = 0;
    *(_DWORD *)a1 = v16;
    *(_QWORD *)(a1 + 4) = *(_QWORD *)(a2 - 9);
    *(_DWORD *)(a1 + 32) = *(a2 - 2);
    *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 - 3);
    *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 - 2);
    *(a2 - 10) = v14;
    *(_QWORD *)(a2 - 9) = v15;
    *(a2 - 2) = v9;
    *((_QWORD *)a2 - 3) = v11;
    *((_QWORD *)a2 - 2) = v10;
LABEL_7:
    v17 = *(_DWORD *)a1;
    v18 = *(a2 - 10);
    v19 = v4;
    v20 = (unsigned int *)a2;
    while ( 1 )
    {
      v21 = (int *)v19;
      if ( *(_DWORD *)v19 < v17 )
        goto LABEL_13;
      v20 -= 10;
      if ( v18 > v17 )
      {
        do
          v20 -= 10;
        while ( *v20 > v17 );
      }
      if ( v19 >= (unsigned __int64)v20 )
        break;
      v22 = *v20;
      v23 = *(_DWORD *)v19;
      v24 = *(_QWORD *)(v19 + 4);
      v25 = *(_QWORD *)(v19 + 16);
      *(_QWORD *)(v19 + 16) = 0;
      v26 = *(_DWORD *)(v19 + 32);
      v27 = *(_QWORD *)(v19 + 24);
      *(_DWORD *)v19 = v22;
      v28 = *(_QWORD *)(v20 + 1);
      v72 = v23;
      v73 = v24;
      *(_QWORD *)(v19 + 4) = v28;
      *(_DWORD *)(v19 + 32) = v20[8];
      *(_QWORD *)(v19 + 16) = *((_QWORD *)v20 + 2);
      *(_QWORD *)(v19 + 24) = *((_QWORD *)v20 + 3);
      *((_QWORD *)v20 + 2) = v25;
      *((_QWORD *)v20 + 3) = v27;
      *v20 = v23;
      v18 = *(v20 - 10);
      *(_QWORD *)(v20 + 1) = v24;
      v20[8] = v26;
      v17 = *(_DWORD *)a1;
LABEL_13:
      v19 += 40LL;
    }
    sub_179F4C0(v19, a2, v5);
    v3 = v19 - a1;
    if ( (__int64)(v19 - a1) <= 640 )
      return;
    a2 = (int *)v19;
  }
  while ( v5 );
LABEL_16:
  v71 = 0xCCCCCCCCCCCCCCCDLL * (v3 >> 3);
  v29 = (v71 - 2) >> 1;
  v30 = a1 + 40 * v29;
  while ( 1 )
  {
    v31 = *(_DWORD *)v30;
    v32 = *(void **)(v30 + 16);
    *(_QWORD *)(v30 + 16) = 0;
    v33 = *(_DWORD *)(v30 + 32);
    v34 = *(_QWORD *)(v30 + 24);
    v35 = *(_QWORD *)(v30 + 4);
    v72 = v31;
    v74 = v32;
    v76 = v33;
    v75 = v34;
    v73 = v35;
    sub_179EF90(a1, v29, v71, (__int64)&v72);
    v36 = (void **)v74;
    if ( v74 )
    {
      v37 = v75;
      if ( v75 )
      {
        if ( (unsigned __int64)v74 < v75 || (unsigned __int64)v74 > v75 + 14848 )
        {
          v38 = *((void ***)v74 + 66);
          v39 = &v38[8 * (unsigned __int64)*((unsigned int *)v74 + 134)];
          if ( v38 != v39 )
          {
            do
            {
              while ( 1 )
              {
                v39 -= 8;
                v40 = (void **)v39[3];
                if ( v40 == v39 + 5 )
                  break;
                v69 = v38;
                operator delete(v40);
                v38 = v69;
                if ( v69 == v39 )
                  goto LABEL_23;
              }
            }
            while ( v38 != v39 );
LABEL_23:
            v39 = (void **)v36[66];
          }
          if ( v39 != v36 + 68 )
            free(v39);
          v41 = (void **)v36[52];
          if ( v41 != v36 + 54 )
            free(v41);
          v42 = v36 + 48;
          v70 = v36 + 8;
          do
          {
            while ( *v42 != v42 + 2 )
            {
              operator delete(*v42);
              v42 -= 4;
              if ( v70 == v42 )
                goto LABEL_31;
            }
            v42 -= 4;
          }
          while ( v70 != v42 );
LABEL_31:
          operator delete(v36, 0x3A0u);
        }
        else
        {
          v68 = *(unsigned int *)(v75 + 14976);
          *(_DWORD *)(v75 + 14976) = v68 + 1;
          *(_QWORD *)(v37 + 8 * v68 + 14848) = v36;
        }
      }
    }
    v30 -= 40;
    if ( !v29 )
      break;
    --v29;
  }
  do
  {
    v51 = *(_DWORD *)a1;
    v21 -= 10;
    v52 = *v21;
    v53 = *(_QWORD *)(v21 + 1);
    v54 = *((void **)v21 + 2);
    *((_QWORD *)v21 + 2) = 0;
    v55 = v21[8];
    v56 = *((_QWORD *)v21 + 3);
    *v21 = v51;
    v57 = *(_QWORD *)(a1 + 4);
    v72 = v52;
    *(_QWORD *)(v21 + 1) = v57;
    v21[8] = *(_DWORD *)(a1 + 32);
    v58 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v73 = v53;
    *((__m128i *)v21 + 1) = v58;
    *(_QWORD *)(a1 + 16) = 0;
    v74 = v54;
    v76 = v55;
    v75 = v56;
    sub_179EF90(a1, 0, 0xCCCCCCCCCCCCCCCDLL * (((__int64)v21 - a1) >> 3), (__int64)&v72);
    v59 = (void **)v74;
    if ( v74 )
    {
      v60 = v75;
      if ( v75 )
      {
        if ( (unsigned __int64)v74 < v75 || (unsigned __int64)v74 > v75 + 14848 )
        {
          v61 = *((void ***)v74 + 66);
          v62 = &v61[8 * (unsigned __int64)*((unsigned int *)v74 + 134)];
          if ( v61 != v62 )
          {
            do
            {
              while ( 1 )
              {
                v62 -= 8;
                v63 = (void **)v62[3];
                if ( v63 == v62 + 5 )
                  break;
                operator delete(v63);
                if ( v61 == v62 )
                  goto LABEL_44;
              }
            }
            while ( v61 != v62 );
LABEL_44:
            v62 = (void **)v59[66];
          }
          if ( v62 != v59 + 68 )
            free(v62);
          v64 = (void **)v59[52];
          if ( v64 != v59 + 54 )
            free(v64);
          v65 = v59 + 48;
          v66 = v59 + 8;
          do
          {
            while ( *v65 != v65 + 2 )
            {
              operator delete(*v65);
              v65 -= 4;
              if ( v65 == v66 )
                goto LABEL_52;
            }
            v65 -= 4;
          }
          while ( v65 != v66 );
LABEL_52:
          operator delete(v59, 0x3A0u);
        }
        else
        {
          v67 = *(unsigned int *)(v75 + 14976);
          *(_DWORD *)(v75 + 14976) = v67 + 1;
          *(_QWORD *)(v60 + 8 * v67 + 14848) = v59;
        }
      }
    }
  }
  while ( (__int64)v21 - a1 > 40 );
}
