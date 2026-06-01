__int64 __fastcall sub_6BA0A0(__int64 a1, __int64 a2, const void *a3, __int64 a4)
{
  int v4; // eax
  unsigned int v9; // edx
  __int64 *v10; // r14
  unsigned int v11; // r15d
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  int v14; // r10d
  __int64 *v15; // rcx
  int v16; // r15d
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r12
  unsigned __int64 *v21; // r14
  signed __int64 v22; // rbp
  __int64 result; // rax
  unsigned __int64 v24; // rdx
  int v25; // edi
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdi
  int v32; // esi
  __int64 v33; // rdi
  _QWORD *v34; // rcx
  __int64 *v35; // r8
  __int64 *i; // rax
  __int64 v37; // rdx
  int v38; // r9d
  int v39; // r9d
  __int64 v40; // r11
  unsigned int v41; // edi
  _QWORD *v42; // rcx
  __int64 v43; // r10
  int v44; // esi
  unsigned int v45; // edx
  __int64 v46; // r8
  int v47; // r10d
  __int64 *v48; // r9
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdi
  int v53; // esi
  __int64 v54; // rdi
  _QWORD *v55; // rcx
  __int64 *v56; // r11
  __int64 *v57; // rax
  __int64 v58; // rdx
  int v59; // r8d
  int v60; // r8d
  __int64 v61; // r10
  unsigned int v62; // edi
  _QWORD *v63; // rcx
  __int64 v64; // r9
  int v65; // esi
  int v66; // r9d
  __int64 *v67; // r8
  unsigned int v68; // r15d
  __int64 v69; // rdx
  _QWORD *v70; // rdx
  _QWORD *v71; // rdx
  _QWORD *v72; // r15
  unsigned int v73; // [rsp+0h] [rbp-48h]
  unsigned int v74; // [rsp+0h] [rbp-48h]
  int v75; // [rsp+0h] [rbp-48h]
  _QWORD *v76; // [rsp+0h] [rbp-48h]
  int v77; // [rsp+8h] [rbp-40h]

  v4 = 0;
  v9 = *(_DWORD *)(a1 + 1712);
  v10 = *(__int64 **)(a1 + 1696);
  if ( !v9 )
    goto LABEL_26;
  v11 = a2;
  v12 = a2;
  v13 = v9 - 1;
  v14 = 1;
  v15 = nullptr;
  v16 = (v12 >> 9) ^ (v11 >> 4);
  LODWORD(v17) = v13 & v16;
  v18 = &v10[2 * ((unsigned int)v13 & v16)];
  v19 = *v18;
  if ( *v18 == a2 )
  {
LABEL_3:
    v20 = v18[1];
    v21 = (unsigned __int64 *)(v18 + 1);
    if ( v20 )
      goto LABEL_4;
    goto LABEL_22;
  }
  while ( v19 != -4096 )
  {
    if ( v19 == -8192 && !v15 )
      v15 = v18;
    v17 = (unsigned int)v13 & ((_DWORD)v17 + v14);
    v18 = &v10[2 * v17];
    v19 = *v18;
    if ( *v18 == a2 )
      goto LABEL_3;
    ++v14;
  }
  if ( !v15 )
    v15 = v18;
  v25 = *(_DWORD *)(a1 + 1704) + 1;
  v4 = 2 * v9;
  if ( 4 * v25 >= 3 * v9 )
  {
LABEL_26:
    v73 = v9;
    v27 = (unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1);
    v28 = (((v27 >> 2) | v27) >> 4) | (v27 >> 2) | v27;
    v29 = ((((v28 >> 8) | v28) >> 16) | (v28 >> 8) | v28) + 1;
    if ( (unsigned int)v29 < 0x40 )
      LODWORD(v29) = 64;
    *(_DWORD *)(a1 + 1712) = v29;
    v30 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v29, 8);
    v31 = *(unsigned int *)(a1 + 1712);
    *(_QWORD *)(a1 + 1696) = v30;
    v32 = v31;
    v33 = 16 * v31;
    v34 = &v30[(unsigned __int64)v33 / 8];
    if ( v10 )
    {
      *(_QWORD *)(a1 + 1704) = 0;
      v35 = &v10[2 * v73];
      if ( v33 )
      {
        if ( (v33 & 0x10) == 0 || (*v30 = -4096, v30 += 2, v30 != v34) )
        {
          do
          {
            *v30 = -4096;
            v30 += 4;
            *(v30 - 2) = -4096;
          }
          while ( v30 != v34 );
        }
      }
      for ( i = v10; v35 != i; i += 2 )
      {
        v37 = *i;
        if ( *i != -4096 && v37 != -8192 )
        {
          v38 = *(_DWORD *)(a1 + 1712);
          if ( !v38 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v39 = v38 - 1;
          v40 = *(_QWORD *)(a1 + 1696);
          v41 = v39 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
          v42 = (_QWORD *)(v40 + 16LL * v41);
          v43 = *v42;
          if ( v37 != *v42 )
          {
            v75 = 1;
            v72 = nullptr;
            while ( v43 != -4096 )
            {
              if ( v43 == -8192 && !v72 )
                v72 = v42;
              v41 = v39 & (v75 + v41);
              v42 = (_QWORD *)(v40 + 16LL * v41);
              v43 = *v42;
              if ( v37 == *v42 )
                goto LABEL_38;
              ++v75;
            }
            if ( v72 )
              v42 = v72;
          }
LABEL_38:
          *v42 = v37;
          v42[1] = i[1];
          ++*(_DWORD *)(a1 + 1704);
        }
      }
      operator delete();
      v30 = *(_QWORD **)(a1 + 1696);
      v32 = *(_DWORD *)(a1 + 1712);
      v25 = *(_DWORD *)(a1 + 1704) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1704) = 0;
      if ( v30 != v34 )
      {
        v70 = v30;
        if ( (v33 & 0x10) == 0 || (v70 = v30 + 2, *v30 = -4096, v30 + 2 != v34) )
        {
          do
          {
            *v70 = -4096;
            v70 += 4;
            *(v70 - 2) = -4096;
          }
          while ( v70 != v34 );
        }
      }
      v25 = 1;
    }
    if ( v32 )
    {
      v44 = v32 - 1;
      v45 = v44 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v15 = &v30[2 * v45];
      v46 = *v15;
      if ( *v15 != a2 )
      {
        v47 = 1;
        v48 = nullptr;
        while ( v46 != -4096 )
        {
          if ( v46 == -8192 && !v48 )
            v48 = v15;
          v45 = v44 & (v47 + v45);
          v15 = &v30[2 * v45];
          v46 = *v15;
          if ( *v15 == a2 )
            goto LABEL_19;
          ++v47;
        }
        if ( v48 )
          v15 = v48;
      }
      goto LABEL_19;
    }
    goto LABEL_113;
  }
  if ( v9 >> 3 >= v9 - *(_DWORD *)(a1 + 1708) - v25 )
  {
    v74 = v9;
    v49 = ((((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 4) | ((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1);
    v50 = ((((v49 >> 8) | v49) >> 16) | (v49 >> 8) | v49) + 1;
    if ( (unsigned int)v50 < 0x40 )
      LODWORD(v50) = 64;
    *(_DWORD *)(a1 + 1712) = v50;
    v51 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v50, 8);
    v52 = *(unsigned int *)(a1 + 1712);
    *(_QWORD *)(a1 + 1696) = v51;
    v53 = v52;
    v54 = 16 * v52;
    v55 = &v51[(unsigned __int64)v54 / 8];
    if ( v10 )
    {
      *(_QWORD *)(a1 + 1704) = 0;
      v56 = &v10[2 * v74];
      if ( v54 )
      {
        if ( (v54 & 0x10) == 0 || (*v51 = -4096, v51 += 2, v51 != v55) )
        {
          do
          {
            *v51 = -4096;
            v51 += 4;
            *(v51 - 2) = -4096;
          }
          while ( v51 != v55 );
        }
      }
      v57 = v10;
      do
      {
        v58 = *v57;
        if ( *v57 != -4096 && v58 != -8192 )
        {
          v59 = *(_DWORD *)(a1 + 1712);
          if ( !v59 )
          {
            *(_QWORD *)&dword_0 = *v57;
            BUG();
          }
          v60 = v59 - 1;
          v61 = *(_QWORD *)(a1 + 1696);
          v62 = v60 & (((unsigned int)v58 >> 9) ^ ((unsigned int)v58 >> 4));
          v63 = (_QWORD *)(v61 + 16LL * v62);
          v64 = *v63;
          if ( v58 != *v63 )
          {
            v77 = 1;
            v76 = nullptr;
            while ( v64 != -4096 )
            {
              if ( v64 == -8192 )
              {
                if ( v76 )
                  v63 = v76;
                v76 = v63;
              }
              v62 = v60 & (v77 + v62);
              v63 = (_QWORD *)(v61 + 16LL * v62);
              v64 = *v63;
              if ( v58 == *v63 )
                goto LABEL_60;
              ++v77;
            }
            if ( v76 )
              v63 = v76;
          }
LABEL_60:
          *v63 = v58;
          v63[1] = v57[1];
          ++*(_DWORD *)(a1 + 1704);
        }
        v57 += 2;
      }
      while ( v56 != v57 );
      operator delete();
      v51 = *(_QWORD **)(a1 + 1696);
      v53 = *(_DWORD *)(a1 + 1712);
      v25 = *(_DWORD *)(a1 + 1704) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1704) = 0;
      if ( v51 != v55 )
      {
        v71 = v51;
        if ( (v54 & 0x10) == 0 || (v71 = v51 + 2, *v51 = -4096, v51 + 2 != v55) )
        {
          do
          {
            *v71 = -4096;
            v71 += 4;
            *(v71 - 2) = -4096;
          }
          while ( v71 != v55 );
        }
      }
      v25 = 1;
    }
    if ( v53 )
    {
      v65 = v53 - 1;
      v66 = 1;
      v67 = nullptr;
      v68 = v65 & v16;
      v15 = &v51[2 * v68];
      v69 = *v15;
      if ( *v15 != a2 )
      {
        while ( v69 != -4096 )
        {
          if ( !v67 && v69 == -8192 )
            v67 = v15;
          v68 = v65 & (v66 + v68);
          v15 = &v51[2 * v68];
          v69 = *v15;
          if ( *v15 == a2 )
            goto LABEL_19;
          ++v66;
        }
        if ( v67 )
          v15 = v67;
      }
      goto LABEL_19;
    }
LABEL_113:
    *(_DWORD *)(a1 + 1704) = v25;
    BUG();
  }
LABEL_19:
  *(_DWORD *)(a1 + 1704) = v25;
  if ( *v15 != -4096 )
    --*(_DWORD *)(a1 + 1708);
  *v15 = a2;
  v21 = (unsigned __int64 *)(v15 + 1);
  v15[1] = 0;
LABEL_22:
  v26 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 96LL;
  v20 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 2200) >= v20 + 96 && v26 )
    *(_QWORD *)(a1 + 2192) = v20 + 96;
  else
    v20 = sub_6A76A0(a1 + 2192, 96, 3);
  *(_QWORD *)v20 = v20 + 16;
  *(_QWORD *)(v20 + 48) = v20 + 64;
  *(_QWORD *)(v20 + 8) = 0x400000000LL;
  *(_QWORD *)(v20 + 56) = 0x400000000LL;
  *v21 = v20;
LABEL_4:
  v22 = 8 * a4;
  result = *(unsigned int *)(v20 + 56);
  v24 = result + (v22 >> 3);
  if ( *(unsigned int *)(v20 + 60) < v24 )
  {
    sub_25D6060(v20 + 48, v20 + 64, v24, 8);
    result = *(unsigned int *)(v20 + 56);
  }
  if ( v22 )
  {
    memcpy((void *)(*(_QWORD *)(v20 + 48) + 8 * result), a3, v22);
    result = *(unsigned int *)(v20 + 56);
  }
  *(_DWORD *)(v20 + 56) = result + (v22 >> 3);
  return result;
}

