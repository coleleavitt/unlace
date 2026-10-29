__int64 __fastcall sub_145A750(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // r12
  __int16 v8; // ax
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 *v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r15d
  __int64 *v17; // r13
  unsigned __int64 v18; // rsi
  unsigned int v19; // ecx
  __int64 *v20; // rdx
  __int64 result; // rax
  int v22; // edi
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rsi
  int v29; // r10d
  __int64 *v30; // r9
  _QWORD *v31; // rcx
  __int64 *v32; // rdx
  int i; // r15d
  __int64 v34; // rcx
  unsigned int v35; // r8d
  _QWORD *v36; // rdi
  __int64 v37; // r11
  __int64 v38; // rcx
  int v39; // esi
  int v40; // r8d
  unsigned int v41; // edi
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  int v46; // r9d
  __int64 v47; // r15
  _QWORD *v48; // rcx
  __int64 *v49; // rdx
  int v50; // r11d
  __int64 v51; // rcx
  unsigned int v52; // edi
  _QWORD *v53; // rsi
  __int64 v54; // r10
  __int64 v55; // rcx
  int v56; // esi
  int v57; // edi
  unsigned int v58; // r14d
  __int64 *v59; // r8
  int v60; // r9d
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rcx
  _QWORD *v66; // rdx
  _QWORD *v67; // r14
  __int64 *v68; // r9
  int v69; // r10d
  int v70; // [rsp+8h] [rbp-50h]
  _QWORD *v71; // [rsp+8h] [rbp-50h]
  int v72; // [rsp+10h] [rbp-48h]

  v4 = sub_13F1C60(a3);
  if ( !v4 )
    BUG();
  v7 = (__int64 *)v4[2];
  v8 = *(_WORD *)(a2 + 16);
  v9 = 0;
  v10 = *v7;
  if ( (unsigned __int16)(v8 - 7) > 0xCu && v8 != 1 )
    v9 = *(_QWORD *)(a2 + 8);
  v11 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 96) += 24LL;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 24) >= v12 + 24 && v11 )
    *(_QWORD *)(a1 + 16) = v12 + 24;
  else
    v12 = sub_986170(a1 + 16, 24, 24, 3, v5, v6);
  *(_QWORD *)(v12 + 16) = v9;
  *(_DWORD *)v12 = 2;
  *(_QWORD *)(v12 + 4) = v10;
  sub_145A0C0((__int64 *)a1, (_DWORD *)v12);
  v16 = *(_DWORD *)(a1 + 208);
  v17 = *(__int64 **)(a1 + 192);
  if ( !v16 )
    goto LABEL_28;
  v18 = v16 - 1;
  v19 = v18 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v20 = &v17[2 * v19];
  result = *v20;
  if ( v7 != (__int64 *)*v20 )
  {
    v22 = 1;
    v14 = nullptr;
    if ( result != -4096 )
    {
      while ( 1 )
      {
        if ( !v14 && result == -8192 )
          v14 = v20;
        v15 = (unsigned int)(v22 + 1);
        v19 = v18 & (v22 + v19);
        v20 = &v17[2 * v19];
        result = *v20;
        if ( v7 == (__int64 *)*v20 )
          goto LABEL_8;
        if ( result == -4096 )
          break;
        ++v22;
      }
      if ( v14 )
        v20 = v14;
    }
    v13 = (unsigned int)(*(_DWORD *)(a1 + 200) + 1);
    if ( 4 * (int)v13 < 3 * v16 )
    {
      result = v16 - *(_DWORD *)(a1 + 204) - (unsigned int)v13;
      if ( (unsigned int)result > v16 >> 3 )
      {
LABEL_15:
        v23 = *v20;
        goto LABEL_16;
      }
      v42 = (((((v18 >> 1) | v18 | (((v18 >> 1) | v18) >> 2)) >> 4) | (v18 >> 1) | v18 | (((v18 >> 1) | v18) >> 2)) >> 8)
          | (((v18 >> 1) | v18 | (((v18 >> 1) | v18) >> 2)) >> 4)
          | (v18 >> 1)
          | v18
          | (((v18 >> 1) | v18) >> 2);
      v43 = ((v42 >> 16) | v42) + 1;
      if ( (unsigned int)v43 < 0x40 )
        LODWORD(v43) = 64;
      *(_DWORD *)(a1 + 208) = v43;
      result = sub_22300B0(16LL * (unsigned int)v43, 8, 64, v13, v14, v15);
      *(_QWORD *)(a1 + 192) = result;
      if ( v17 )
      {
        v44 = *(unsigned int *)(a1 + 208);
        v45 = (_QWORD *)result;
        *(_QWORD *)(a1 + 200) = 0;
        v46 = v44;
        v47 = 2LL * v16;
        v48 = (_QWORD *)(result + 16 * v44);
        if ( (_QWORD *)result != v48 )
        {
          do
          {
            *v45 = -4096;
            v45 += 2;
          }
          while ( v48 != v45 );
        }
        v49 = v17;
        v50 = v46 - 1;
        do
        {
          v51 = *v49;
          if ( *v49 != -8192 && v51 != -4096 )
          {
            if ( !v46 )
            {
              *(_QWORD *)&dword_0 = *v49;
              BUG();
            }
            v52 = v50 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
            v53 = (_QWORD *)(result + 16LL * v52);
            v54 = *v53;
            if ( *v53 != v51 && v54 != -4096 )
            {
              v72 = 1;
              v71 = nullptr;
              while ( 1 )
              {
                if ( v54 == -8192 )
                {
                  if ( v71 )
                    v53 = v71;
                  v71 = v53;
                }
                v52 = v50 & (v72 + v52);
                v53 = (_QWORD *)(result + 16LL * v52);
                v54 = *v53;
                if ( v51 == *v53 )
                  break;
                if ( v54 == -4096 )
                {
                  if ( v71 )
                    v53 = v71;
                  break;
                }
                ++v72;
              }
            }
            *v53 = v51;
            v55 = v49[1];
            ++*(_DWORD *)(a1 + 200);
            v53[1] = v55;
          }
          v49 += 2;
        }
        while ( &v17[v47] != v49 );
        operator delete(v17, v47 * 8, 8);
        result = *(_QWORD *)(a1 + 192);
        v56 = *(_DWORD *)(a1 + 208);
        LODWORD(v13) = *(_DWORD *)(a1 + 200) + 1;
      }
      else
      {
        v64 = *(unsigned int *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = 0;
        v56 = v64;
        v65 = (_QWORD *)(result + 16 * v64);
        if ( (_QWORD *)result != v65 )
        {
          v66 = (_QWORD *)result;
          do
          {
            *v66 = -4096;
            v66 += 2;
          }
          while ( v65 != v66 );
        }
        LODWORD(v13) = 1;
      }
      if ( v56 )
      {
        v57 = v56 - 1;
        v58 = (v56 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
        v20 = (__int64 *)(result + 16LL * v58);
        v23 = *v20;
        if ( v7 != (__int64 *)*v20 )
        {
          if ( v23 != -4096 )
          {
            v59 = (__int64 *)(result + 16LL * v58);
            v60 = 1;
            v20 = nullptr;
            while ( 1 )
            {
              if ( v23 == -8192 && !v20 )
                v20 = v59;
              v58 = v57 & (v60 + v58);
              v59 = (__int64 *)(result + 16LL * v58);
              v23 = *v59;
              if ( v7 == (__int64 *)*v59 )
              {
                v20 = (__int64 *)(result + 16LL * v58);
                goto LABEL_16;
              }
              if ( v23 == -4096 )
                break;
              ++v60;
            }
            if ( v20 )
              goto LABEL_15;
            v20 = (__int64 *)(result + 16LL * v58);
          }
LABEL_44:
          *(_DWORD *)(a1 + 200) = v13;
LABEL_18:
          *v20 = (__int64)v7;
          v20[1] = 0;
          goto LABEL_8;
        }
        goto LABEL_16;
      }
      goto LABEL_116;
    }
LABEL_28:
    v24 = (((((((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
            | (2 * v16 - 1)
            | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 4)
          | (((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
          | (2 * v16 - 1)
          | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 8)
        | (((((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
          | (2 * v16 - 1)
          | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 4)
        | (((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
        | (2 * v16 - 1)
        | ((unsigned __int64)(2 * v16 - 1) >> 1);
    v25 = ((v24 >> 16) | v24) + 1;
    if ( (unsigned int)v25 < 0x40 )
      LODWORD(v25) = 64;
    *(_DWORD *)(a1 + 208) = v25;
    result = sub_22300B0(16LL * (unsigned int)v25, 8, 64, v13, v14, v15);
    *(_QWORD *)(a1 + 192) = result;
    if ( v17 )
    {
      v26 = *(unsigned int *)(a1 + 208);
      v27 = (_QWORD *)result;
      *(_QWORD *)(a1 + 200) = 0;
      v28 = 2LL * v16;
      v29 = v26;
      v30 = &v17[v28];
      v31 = (_QWORD *)(result + 16 * v26);
      if ( (_QWORD *)result != v31 )
      {
        do
        {
          *v27 = -4096;
          v27 += 2;
        }
        while ( v31 != v27 );
      }
      v32 = v17;
      for ( i = v29 - 1; v30 != v32; v32 += 2 )
      {
        v34 = *v32;
        if ( *v32 != -8192 && v34 != -4096 )
        {
          if ( !v29 )
          {
            *(_QWORD *)&dword_0 = *v32;
            BUG();
          }
          v35 = i & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
          v36 = (_QWORD *)(result + 16LL * v35);
          v37 = *v36;
          if ( *v36 != v34 && v37 != -4096 )
          {
            v70 = 1;
            v67 = nullptr;
            while ( 1 )
            {
              if ( !v67 && v37 == -8192 )
                v67 = v36;
              v35 = i & (v70 + v35);
              v36 = (_QWORD *)(result + 16LL * v35);
              v37 = *v36;
              if ( v34 == *v36 )
                break;
              if ( v37 == -4096 )
              {
                if ( v67 )
                  v36 = v67;
                break;
              }
              ++v70;
            }
          }
          *v36 = v34;
          v38 = v32[1];
          ++*(_DWORD *)(a1 + 200);
          v36[1] = v38;
        }
      }
      operator delete(v17, v28 * 8, 8);
      result = *(_QWORD *)(a1 + 192);
      v39 = *(_DWORD *)(a1 + 208);
      LODWORD(v13) = *(_DWORD *)(a1 + 200) + 1;
    }
    else
    {
      v61 = *(unsigned int *)(a1 + 208);
      *(_QWORD *)(a1 + 200) = 0;
      v39 = v61;
      v62 = (_QWORD *)(result + 16 * v61);
      if ( (_QWORD *)result != v62 )
      {
        v63 = (_QWORD *)result;
        do
        {
          *v63 = -4096;
          v63 += 2;
        }
        while ( v62 != v63 );
      }
      LODWORD(v13) = 1;
    }
    if ( v39 )
    {
      v40 = v39 - 1;
      v41 = (v39 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
      v20 = (__int64 *)(result + 16LL * v41);
      v23 = *v20;
      if ( v7 != (__int64 *)*v20 )
      {
        if ( v23 != -4096 )
        {
          v68 = (__int64 *)(result + 16LL * (v40 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4))));
          v69 = 1;
          v20 = nullptr;
          while ( 1 )
          {
            if ( v23 == -8192 && !v20 )
              v20 = v68;
            v41 = v40 & (v69 + v41);
            v68 = (__int64 *)(result + 16LL * v41);
            v23 = *v68;
            if ( v7 == (__int64 *)*v68 )
            {
              v20 = (__int64 *)(result + 16LL * v41);
              goto LABEL_16;
            }
            if ( v23 == -4096 )
              break;
            ++v69;
          }
          if ( v20 )
            goto LABEL_15;
          v20 = (__int64 *)(result + 16LL * v41);
        }
        goto LABEL_44;
      }
LABEL_16:
      *(_DWORD *)(a1 + 200) = v13;
      if ( v23 != -4096 )
        --*(_DWORD *)(a1 + 204);
      goto LABEL_18;
    }
LABEL_116:
    ++*(_DWORD *)(a1 + 200);
    BUG();
  }
LABEL_8:
  v20[1] = v12;
  return result;
}
