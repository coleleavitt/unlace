unsigned __int64 __fastcall sub_6B9820(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 *v6; // r13
  unsigned int v7; // r15d
  unsigned __int64 result; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rsi
  int v15; // r8d
  __int64 *v16; // rcx
  unsigned int v17; // edi
  __int64 *v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // r12
  unsigned __int64 *v21; // r13
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdi
  _QWORD *v28; // rdx
  int v29; // esi
  __int64 v30; // rdi
  _QWORD *v31; // rcx
  __int64 *v32; // r9
  __int64 *i; // rax
  __int64 v34; // rdx
  int v35; // edi
  int v36; // edi
  __int64 v37; // r11
  int v38; // r15d
  _QWORD *v39; // r14
  __int64 v40; // r8
  _QWORD *v41; // rcx
  __int64 v42; // r10
  int v43; // edi
  int v44; // esi
  unsigned int v45; // eax
  __int64 v46; // r8
  int v47; // r10d
  __int64 *v48; // r9
  __int64 v49; // rax
  unsigned int v50; // r8d
  unsigned int v51; // eax
  _QWORD *v52; // rax
  __int64 v53; // rdi
  _QWORD *v54; // rdx
  int v55; // esi
  __int64 v56; // rdi
  _QWORD *v57; // rcx
  __int64 *v58; // r8
  __int64 *v59; // rax
  __int64 v60; // rdx
  int v61; // r9d
  int v62; // r9d
  __int64 v63; // r11
  unsigned int v64; // edi
  _QWORD *v65; // rcx
  __int64 v66; // r10
  int v67; // esi
  int v68; // r9d
  __int64 *v69; // r8
  unsigned int v70; // r14d
  __int64 v71; // rax
  _QWORD *v72; // r15
  int v73; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v6 = *(__int64 **)(a1 + 1696);
  v7 = *(_DWORD *)(a1 + 1712);
  result = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (_BYTE)result != 80 )
    goto LABEL_14;
  v9 = *(_QWORD *)(a3 + 40);
  if ( !v7 )
    return result;
  v10 = v7 - 1;
  v11 = v10 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
  result = (unsigned __int64)&v6[2 * v11];
  v12 = *(_QWORD *)result;
  if ( v9 == *(_QWORD *)result )
  {
LABEL_4:
    if ( (__int64 *)result == &v6[2 * v7] )
      return result;
    v13 = *(_QWORD *)(result + 8);
    v14 = *(unsigned int *)(v13 + 56);
    if ( v14 + *(unsigned int *)(v13 + 8) != 1 )
      goto LABEL_6;
    if ( !(_DWORD)v14 )
    {
      if ( (*(_BYTE *)(**(_QWORD **)v13 + 28LL) & 0x7F) == 0x50 )
        v4 = **(_QWORD **)v13;
      goto LABEL_6;
    }
    sub_6A7ED0(v13, a1);
    v6 = *(__int64 **)(a1 + 1696);
    v7 = *(_DWORD *)(a1 + 1712);
    if ( (*(_BYTE *)(**(_QWORD **)v13 + 28LL) & 0x7F) == 0x50 )
      v4 = **(_QWORD **)v13;
LABEL_14:
    v22 = 0;
    if ( !v7 )
      goto LABEL_15;
    v10 = v7 - 1;
LABEL_6:
    v15 = 1;
    v16 = nullptr;
    v17 = v10 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v18 = &v6[2 * v17];
    v19 = *v18;
    if ( *v18 == a2 )
    {
LABEL_7:
      v20 = v18[1];
      v21 = (unsigned __int64 *)(v18 + 1);
      if ( v20 )
      {
LABEL_8:
        result = *(unsigned int *)(v20 + 8);
        if ( *(unsigned int *)(v20 + 12) < result + 1 )
        {
          sub_25D6060(v20, v20 + 16, result + 1, 8);
          result = *(unsigned int *)(v20 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v20 + 8 * result) = v4;
        ++*(_DWORD *)(v20 + 8);
        return result;
      }
LABEL_51:
      v49 = *(_QWORD *)(a1 + 2192);
      *(_QWORD *)(a1 + 2272) += 96LL;
      v20 = (v49 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(a1 + 2200) >= v20 + 96 && v49 )
        *(_QWORD *)(a1 + 2192) = v20 + 96;
      else
        v20 = sub_6A76A0(a1 + 2192, 96, 3);
      *(_QWORD *)v20 = v20 + 16;
      *(_QWORD *)(v20 + 48) = v20 + 64;
      *(_QWORD *)(v20 + 8) = 0x400000000LL;
      *(_QWORD *)(v20 + 56) = 0x400000000LL;
      *v21 = v20;
      goto LABEL_8;
    }
    while ( v19 != -4096 )
    {
      if ( v19 == -8192 && !v16 )
        v16 = v18;
      v17 = v10 & (v15 + v17);
      v18 = &v6[2 * v17];
      v19 = *v18;
      if ( *v18 == a2 )
        goto LABEL_7;
      ++v15;
    }
    if ( !v16 )
      v16 = v18;
    v43 = *(_DWORD *)(a1 + 1704) + 1;
    v22 = 2 * v7;
    if ( 4 * v43 < 3 * v7 )
    {
      if ( v7 >> 3 < v7 - (v43 + *(_DWORD *)(a1 + 1708)) )
      {
LABEL_48:
        *(_DWORD *)(a1 + 1704) = v43;
        if ( *v16 != -4096 )
          --*(_DWORD *)(a1 + 1708);
        *v16 = a2;
        v21 = (unsigned __int64 *)(v16 + 1);
        v16[1] = 0;
        goto LABEL_51;
      }
      v51 = (((((((((v10 | (v10 >> 1)) >> 2) | v10 | (v10 >> 1)) >> 4) | ((v10 | (v10 >> 1)) >> 2) | v10 | (v10 >> 1)) >> 8)
             | ((((v10 | (v10 >> 1)) >> 2) | v10 | (v10 >> 1)) >> 4)
             | ((v10 | (v10 >> 1)) >> 2)
             | v10
             | (v10 >> 1)) >> 16)
           | ((((((v10 | (v10 >> 1)) >> 2) | v10 | (v10 >> 1)) >> 4) | ((v10 | (v10 >> 1)) >> 2) | v10 | (v10 >> 1)) >> 8)
           | ((((v10 | (v10 >> 1)) >> 2) | v10 | (v10 >> 1)) >> 4)
           | ((v10 | (v10 >> 1)) >> 2)
           | v10
           | (v10 >> 1))
          + 1;
      if ( v51 < 0x40 )
        v51 = 64;
      *(_DWORD *)(a1 + 1712) = v51;
      v52 = (_QWORD *)sub_25CC9C0(16LL * v51, 8);
      v53 = *(unsigned int *)(a1 + 1712);
      *(_QWORD *)(a1 + 1696) = v52;
      v54 = v52;
      v55 = v53;
      v56 = 16 * v53;
      v57 = &v52[(unsigned __int64)v56 / 8];
      if ( v6 )
      {
        *(_QWORD *)(a1 + 1704) = 0;
        v58 = &v6[2 * v7];
        if ( v56 )
        {
          if ( (v56 & 0x10) == 0 || (*v52 = -4096, v54 = v52 + 2, v52 + 2 != v57) )
          {
            do
            {
              *v54 = -4096;
              v54 += 4;
              *(v54 - 2) = -4096;
            }
            while ( v54 != v57 );
          }
        }
        v59 = v6;
        do
        {
          v60 = *v59;
          if ( *v59 != -8192 && v60 != -4096 )
          {
            v61 = *(_DWORD *)(a1 + 1712);
            if ( !v61 )
            {
              *(_QWORD *)&dword_0 = *v59;
              BUG();
            }
            v62 = v61 - 1;
            v63 = *(_QWORD *)(a1 + 1696);
            v64 = v62 & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
            v65 = (_QWORD *)(v63 + 16LL * v64);
            v66 = *v65;
            if ( v60 != *v65 )
            {
              v73 = 1;
              v72 = nullptr;
              while ( v66 != -4096 )
              {
                if ( v66 == -8192 && !v72 )
                  v72 = v65;
                v64 = v62 & (v73 + v64);
                v65 = (_QWORD *)(v63 + 16LL * v64);
                v66 = *v65;
                if ( v60 == *v65 )
                  goto LABEL_84;
                ++v73;
              }
              if ( v72 )
                v65 = v72;
            }
LABEL_84:
            *v65 = v60;
            v65[1] = v59[1];
            ++*(_DWORD *)(a1 + 1704);
          }
          v59 += 2;
        }
        while ( v58 != v59 );
        operator delete();
        v54 = *(_QWORD **)(a1 + 1696);
        v55 = *(_DWORD *)(a1 + 1712);
        v43 = *(_DWORD *)(a1 + 1704) + 1;
      }
      else
      {
        *(_QWORD *)(a1 + 1704) = 0;
        if ( v52 != v57 )
        {
          if ( (v56 & 0x10) == 0 || (*v52 = -4096, v52 += 2, v52 != v57) )
          {
            do
            {
              *v52 = -4096;
              v52 += 4;
              *(v52 - 2) = -4096;
            }
            while ( v52 != v57 );
          }
        }
        v43 = 1;
      }
      if ( v55 )
      {
        v67 = v55 - 1;
        v68 = 1;
        v69 = nullptr;
        v70 = v67 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v16 = &v54[2 * v70];
        v71 = *v16;
        if ( *v16 != a2 )
        {
          while ( v71 != -4096 )
          {
            if ( !v69 && v71 == -8192 )
              v69 = v16;
            v70 = v67 & (v68 + v70);
            v16 = &v54[2 * v70];
            v71 = *v16;
            if ( *v16 == a2 )
              goto LABEL_48;
            ++v68;
          }
          if ( v69 )
            v16 = v69;
        }
        goto LABEL_48;
      }
LABEL_124:
      *(_DWORD *)(a1 + 1704) = v43;
      BUG();
    }
LABEL_15:
    v23 = (unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1);
    v24 = (((v23 >> 2) | v23) >> 4) | (v23 >> 2) | v23;
    v25 = ((((v24 >> 8) | v24) >> 16) | (v24 >> 8) | v24) + 1;
    if ( (unsigned int)v25 < 0x40 )
      LODWORD(v25) = 64;
    *(_DWORD *)(a1 + 1712) = v25;
    v26 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v25, 8);
    v27 = *(unsigned int *)(a1 + 1712);
    *(_QWORD *)(a1 + 1696) = v26;
    v28 = v26;
    v29 = v27;
    v30 = 16 * v27;
    v31 = &v26[(unsigned __int64)v30 / 8];
    if ( v6 )
    {
      *(_QWORD *)(a1 + 1704) = 0;
      v32 = &v6[2 * v7];
      if ( v30 )
      {
        if ( (v30 & 0x10) == 0 || (*v26 = -4096, v28 = v26 + 2, v26 + 2 != v31) )
        {
          do
          {
            *v28 = -4096;
            v28 += 4;
            *(v28 - 2) = -4096;
          }
          while ( v28 != v31 );
        }
      }
      for ( i = v6; v32 != i; i += 2 )
      {
        v34 = *i;
        if ( *i != -4096 && v34 != -8192 )
        {
          v35 = *(_DWORD *)(a1 + 1712);
          if ( !v35 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v36 = v35 - 1;
          v37 = *(_QWORD *)(a1 + 1696);
          v38 = 1;
          v39 = nullptr;
          LODWORD(v40) = v36 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
          v41 = (_QWORD *)(v37 + 16LL * (unsigned int)v40);
          v42 = *v41;
          if ( v34 != *v41 )
          {
            while ( v42 != -4096 )
            {
              if ( v42 == -8192 && !v39 )
                v39 = v41;
              v40 = v36 & (unsigned int)(v40 + v38);
              v41 = (_QWORD *)(v37 + 16 * v40);
              v42 = *v41;
              if ( v34 == *v41 )
                goto LABEL_27;
              ++v38;
            }
            if ( v39 )
              v41 = v39;
          }
LABEL_27:
          *v41 = v34;
          v41[1] = i[1];
          ++*(_DWORD *)(a1 + 1704);
        }
      }
      operator delete();
      v28 = *(_QWORD **)(a1 + 1696);
      v29 = *(_DWORD *)(a1 + 1712);
      v43 = *(_DWORD *)(a1 + 1704) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1704) = 0;
      if ( v26 != v31 )
      {
        if ( (v30 & 0x10) == 0 || (*v26 = -4096, v26 += 2, v26 != v31) )
        {
          do
          {
            *v26 = -4096;
            v26 += 4;
            *(v26 - 2) = -4096;
          }
          while ( v26 != v31 );
        }
      }
      v43 = 1;
    }
    if ( v29 )
    {
      v44 = v29 - 1;
      v45 = v44 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v16 = &v28[2 * v45];
      v46 = *v16;
      if ( *v16 != a2 )
      {
        v47 = 1;
        v48 = nullptr;
        while ( v46 != -4096 )
        {
          if ( v46 == -8192 && !v48 )
            v48 = v16;
          v45 = v44 & (v47 + v45);
          v16 = &v28[2 * v45];
          v46 = *v16;
          if ( *v16 == a2 )
            goto LABEL_48;
          ++v47;
        }
        if ( v48 )
          v16 = v48;
      }
      goto LABEL_48;
    }
    goto LABEL_124;
  }
  result = 1;
  while ( v12 != -4096 )
  {
    v50 = result + 1;
    v11 = v10 & (result + v11);
    result = (unsigned __int64)&v6[2 * v11];
    v12 = *(_QWORD *)result;
    if ( v9 == *(_QWORD *)result )
      goto LABEL_4;
    result = v50;
  }
  return result;
}

