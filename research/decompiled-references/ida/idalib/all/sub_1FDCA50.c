__int64 __fastcall sub_1FDCA50(__int64 a1, void *a2, char *a3, __int64 *a4)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // r9
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 *v12; // r14
  unsigned __int64 v13; // rsi
  unsigned int v14; // r13d
  __int64 v15; // rcx
  unsigned __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 result; // rax
  unsigned __int64 v19; // rdi
  int v20; // edi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *j; // rdx
  __int64 *k; // r13
  __int64 v27; // rax
  int v28; // esi
  int v29; // esi
  __int64 v30; // r9
  unsigned int v31; // ecx
  _QWORD *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // esi
  int v37; // edi
  unsigned int v38; // r15d
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  _QWORD *i; // rdx
  __int64 *v44; // r15
  int v45; // esi
  int v46; // esi
  __int64 v47; // r9
  unsigned int v48; // ecx
  _QWORD *v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdi
  int v53; // esi
  int v54; // edi
  unsigned int v55; // r13d
  unsigned __int64 v56; // r8
  unsigned __int64 *v57; // r9
  int v58; // esi
  __int64 v59; // rcx
  _QWORD *v60; // rcx
  _QWORD *v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rcx
  _QWORD *v64; // rdx
  int v65; // r8d
  _QWORD *v66; // r10
  int v67; // r10d
  _QWORD *v68; // r8
  int v69; // esi
  unsigned int v70; // [rsp+0h] [rbp-48h]
  __int64 v71; // [rsp+0h] [rbp-48h]
  unsigned int v72; // [rsp+0h] [rbp-48h]
  __int64 v73; // [rsp+0h] [rbp-48h]

  v7 = sub_FDBF00(*(_QWORD *)(a1 + 120), a2, a3, *(_QWORD *)(*a4 + 16) - *(_QWORD *)(*a4 + 8), 0);
  while ( 1 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( !v9 )
      break;
    v9 &= 0xFFFFFFFFFFFFFFF8LL;
    v10 = *(_QWORD *)(v7 + 8) & 4LL;
    v7 = v9;
    if ( !v10 || !v9 )
      goto LABEL_5;
  }
  v7 = 0;
LABEL_5:
  v11 = *(unsigned int *)(a1 + 168);
  v12 = *(__int64 **)(a1 + 152);
  if ( !(_DWORD)v11 )
    goto LABEL_18;
  v13 = (unsigned int)(v11 - 1);
  v14 = ((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4);
  LODWORD(v15) = v13 & v14;
  v16 = (unsigned __int64 *)&v12[2 * ((unsigned int)v13 & v14)];
  v17 = *v16;
  if ( *v16 != v7 )
  {
    v20 = 1;
    v8 = nullptr;
    if ( v17 != -4096 )
    {
      while ( 1 )
      {
        if ( !v8 && v17 == -8192 )
          v8 = v16;
        v15 = (unsigned int)v13 & ((_DWORD)v15 + v20);
        v16 = (unsigned __int64 *)&v12[2 * v15];
        v17 = *v16;
        if ( *v16 == v7 )
          goto LABEL_7;
        if ( v17 == -4096 )
          break;
        ++v20;
      }
      if ( v8 )
        v16 = v8;
    }
    v6 = (unsigned int)(*(_DWORD *)(a1 + 160) + 1);
    if ( 4 * (int)v6 < (unsigned int)(3 * v11) )
    {
      if ( (int)v11 - *(_DWORD *)(a1 + 164) - (int)v6 > (unsigned int)v11 >> 3 )
      {
LABEL_13:
        v21 = *v16;
        goto LABEL_14;
      }
      v72 = v11;
      v40 = (((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4) | (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2);
      v41 = ((((v40 >> 8) | v40) >> 16) | (v40 >> 8) | v40) + 1;
      if ( (unsigned int)v41 < 0x40 )
        LODWORD(v41) = 64;
      *(_DWORD *)(a1 + 168) = v41;
      v42 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v41, 8, 64, v6, v11, v8);
      *(_QWORD *)(a1 + 152) = v42;
      if ( v12 )
      {
        *(_QWORD *)(a1 + 160) = 0;
        v73 = 2LL * v72;
        for ( i = &v42[2 * *(unsigned int *)(a1 + 168)]; i != v42; v42 += 2 )
          *v42 = -4096;
        v44 = v12;
        do
        {
          v27 = *v44;
          if ( *v44 != -4096 && v27 != -8192 )
          {
            v45 = *(_DWORD *)(a1 + 168);
            if ( !v45 )
              goto LABEL_107;
            v46 = v45 - 1;
            v47 = *(_QWORD *)(a1 + 152);
            v48 = v46 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v49 = (_QWORD *)(v47 + 16LL * v48);
            v50 = *v49;
            if ( v27 != *v49 )
            {
              v67 = 1;
              v68 = nullptr;
              if ( v50 != -4096 )
              {
                while ( 1 )
                {
                  if ( v50 == -8192 && !v68 )
                    v68 = v49;
                  v48 = v46 & (v67 + v48);
                  v49 = (_QWORD *)(v47 + 16LL * v48);
                  v50 = *v49;
                  if ( v27 == *v49 )
                    break;
                  if ( v50 == -4096 )
                  {
                    if ( v68 )
                      v49 = v68;
                    break;
                  }
                  ++v67;
                }
              }
            }
            *v49 = v27;
            v51 = v44[1];
            v44[1] = 0;
            v49[1] = v51;
            v52 = v44[1];
            ++*(_DWORD *)(a1 + 160);
            if ( v52 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8LL))(v52);
          }
          v44 += 2;
        }
        while ( &v12[v73] != v44 );
        operator delete(v12, v73 * 8, 8);
        v42 = *(_QWORD **)(a1 + 152);
        v53 = *(_DWORD *)(a1 + 168);
        LODWORD(v6) = *(_DWORD *)(a1 + 160) + 1;
      }
      else
      {
        v62 = *(unsigned int *)(a1 + 168);
        *(_QWORD *)(a1 + 160) = 0;
        v53 = v62;
        v63 = &v42[2 * v62];
        if ( v42 != v63 )
        {
          v64 = v42;
          do
          {
            *v64 = -4096;
            v64 += 2;
          }
          while ( v63 != v64 );
        }
        LODWORD(v6) = 1;
      }
      if ( v53 )
      {
        v54 = v53 - 1;
        v21 = v7;
        v55 = v54 & v14;
        v16 = &v42[2 * v55];
        v56 = *v16;
        if ( *v16 == v7 )
          goto LABEL_14;
        if ( v56 != -4096 )
        {
          v57 = &v42[2 * v55];
          v58 = 1;
          v16 = nullptr;
          while ( 1 )
          {
            if ( v56 == -8192 && !v16 )
              v16 = v57;
            v55 = v54 & (v58 + v55);
            v57 = &v42[2 * v55];
            v56 = *v57;
            if ( *v57 == v7 )
              break;
            if ( v56 == -4096 )
              goto LABEL_100;
            ++v58;
          }
LABEL_58:
          v21 = v7;
          v16 = v57;
LABEL_14:
          *(_DWORD *)(a1 + 160) = v6;
          if ( v21 != -4096 )
            --*(_DWORD *)(a1 + 164);
          goto LABEL_16;
        }
        goto LABEL_35;
      }
      goto LABEL_108;
    }
LABEL_18:
    v70 = v11;
    v22 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v11 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
    v23 = ((v22 >> 16) | v22) + 1;
    if ( (unsigned int)v23 < 0x40 )
      LODWORD(v23) = 64;
    *(_DWORD *)(a1 + 168) = v23;
    v24 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v23, 8, 64, v6, v11, v8);
    *(_QWORD *)(a1 + 152) = v24;
    if ( v12 )
    {
      *(_QWORD *)(a1 + 160) = 0;
      v71 = 2LL * v70;
      for ( j = &v24[2 * *(unsigned int *)(a1 + 168)]; j != v24; v24 += 2 )
        *v24 = -4096;
      for ( k = v12; &v12[v71] != k; k += 2 )
      {
        v27 = *k;
        if ( *k != -4096 && v27 != -8192 )
        {
          v28 = *(_DWORD *)(a1 + 168);
          if ( !v28 )
          {
LABEL_107:
            *(_QWORD *)&dword_0 = v27;
            BUG();
          }
          v29 = v28 - 1;
          v30 = *(_QWORD *)(a1 + 152);
          v31 = v29 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
          v32 = (_QWORD *)(v30 + 16LL * v31);
          v33 = *v32;
          if ( *v32 != v27 )
          {
            v65 = 1;
            v66 = nullptr;
            if ( v33 != -4096 )
            {
              while ( 1 )
              {
                if ( !v66 && v33 == -8192 )
                  v66 = v32;
                v31 = v29 & (v65 + v31);
                v32 = (_QWORD *)(v30 + 16LL * v31);
                v33 = *v32;
                if ( v27 == *v32 )
                  break;
                if ( v33 == -4096 )
                {
                  if ( v66 )
                    v32 = v66;
                  break;
                }
                ++v65;
              }
            }
          }
          *v32 = v27;
          v34 = k[1];
          k[1] = 0;
          v32[1] = v34;
          v35 = k[1];
          ++*(_DWORD *)(a1 + 160);
          if ( v35 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
        }
      }
      operator delete(v12, v71 * 8, 8);
      v24 = *(_QWORD **)(a1 + 152);
      v36 = *(_DWORD *)(a1 + 168);
      LODWORD(v6) = *(_DWORD *)(a1 + 160) + 1;
    }
    else
    {
      v59 = *(unsigned int *)(a1 + 168);
      *(_QWORD *)(a1 + 160) = 0;
      v36 = v59;
      v60 = &v24[2 * v59];
      if ( v24 != v60 )
      {
        v61 = v24;
        do
        {
          *v61 = -4096;
          v61 += 2;
        }
        while ( v60 != v61 );
      }
      LODWORD(v6) = 1;
    }
    if ( v36 )
    {
      v37 = v36 - 1;
      v21 = v7;
      v38 = v37 & (((unsigned int)v9 >> 4) ^ ((unsigned int)v9 >> 9));
      v16 = &v24[2 * v38];
      v39 = *v16;
      if ( *v16 == v7 )
        goto LABEL_14;
      if ( v39 != -4096 )
      {
        v57 = &v24[2 * v38];
        v69 = 1;
        v16 = nullptr;
        while ( 1 )
        {
          if ( v39 == -8192 && !v16 )
            v16 = v57;
          v38 = v37 & (v69 + v38);
          v57 = &v24[2 * v38];
          v39 = *v57;
          if ( *v57 == v7 )
            goto LABEL_58;
          if ( v39 == -4096 )
          {
LABEL_100:
            if ( v16 )
              goto LABEL_13;
            v16 = v57;
            break;
          }
          ++v69;
        }
      }
LABEL_35:
      *(_DWORD *)(a1 + 160) = v6;
LABEL_16:
      result = *a4;
      *v16 = v7;
      *a4 = 0;
      v16[1] = result;
      return result;
    }
LABEL_108:
    ++*(_DWORD *)(a1 + 160);
    BUG();
  }
LABEL_7:
  result = *a4;
  v19 = v16[1];
  *a4 = 0;
  v16[1] = result;
  if ( v19 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 8LL))(v19);
  return result;
}
