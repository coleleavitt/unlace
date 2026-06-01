__int64 __fastcall sub_E0AD60(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 *v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r12d
  __int64 v18; // rcx
  unsigned int v19; // r15d
  __int64 *v20; // r13
  unsigned __int64 v21; // rsi
  unsigned int v22; // ecx
  __int64 *v23; // rdx
  __int64 v24; // rax
  int v25; // esi
  int v26; // r9d
  __int64 v27; // rdi
  __int64 *v28; // rdi
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // r9
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v37; // rdx
  int v38; // r8d
  int v39; // r8d
  __int64 v40; // r11
  unsigned int v41; // edi
  __int64 *v42; // rcx
  __int64 v43; // r10
  int v44; // edi
  int v45; // r8d
  unsigned int v46; // edi
  int v47; // r10d
  __int64 *v48; // r9
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *i; // rdx
  __int64 *v55; // rax
  __int64 v56; // rdx
  int v57; // edi
  int v58; // edi
  __int64 v59; // r9
  unsigned int v60; // esi
  __int64 *v61; // rcx
  __int64 v62; // r8
  int v63; // edi
  int v64; // edi
  unsigned int v65; // r14d
  int v66; // r9d
  __int64 *v67; // r8
  __int64 v68; // rcx
  _QWORD *v69; // rcx
  _QWORD *v70; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // rcx
  _QWORD *v73; // rdx
  int v74; // r15d
  __int64 *v75; // r14
  __int64 *v76; // r10
  __int64 v77; // [rsp-8h] [rbp-60h]
  int v78; // [rsp+8h] [rbp-50h]
  __m128 v79[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = a1 + 248;
  v5 = *(unsigned int *)(a1 + 264);
  v6 = *(_QWORD *)(a1 + 248);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (__int64 *)(v6 + 16LL * v7);
    v9 = *v8;
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_E09990(v79, v8, (__int64 *)(16 * v5 + v6), v2, 1);
      v10 = v79[0].m128_u64[0];
      goto LABEL_4;
    }
    v25 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v26 = v25 + 1;
        v7 = (v5 - 1) & (v25 + v7);
        v8 = (__int64 *)(v6 + 16LL * v7);
        v27 = *v8;
        if ( a2 == *v8 )
          goto LABEL_3;
        v25 = v26;
      }
      while ( v27 != -4096 );
    }
  }
  sub_E09990(v79, (__int64 *)(v6 + 16LL * (unsigned int)v5), (__int64 *)(v6 + 16LL * (unsigned int)v5), v2, 1);
  v10 = v79[0].m128_u64[0];
LABEL_4:
  v11 = (__int64 *)(*(_QWORD *)(a1 + 248) + 16LL * *(unsigned int *)(a1 + 264));
  sub_E09990(v79, v11, v11, v2, 1);
  if ( v79[0].m128_u64[0] != v10 )
    return *(unsigned int *)(v10 + 8) | 0x100000000LL;
  v13 = *(_QWORD *)(a2 + 8);
  v79[0].m128_u64[0] = a2 | 2;
  v14 = sub_E08C40(a1, (__int64 *)v79, v13, 1, 0, 0, 0);
  v17 = v14;
  result = 0;
  v18 = v77;
  if ( BYTE4(v14) )
  {
    v19 = *(_DWORD *)(a1 + 264);
    v20 = *(__int64 **)(a1 + 248);
    if ( !v19 )
      goto LABEL_22;
    v21 = v19 - 1;
    v22 = v21 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v23 = &v20[2 * v22];
    v24 = *v23;
    if ( *v23 == a2 )
    {
LABEL_10:
      *((_DWORD *)v23 + 2) = v17;
      return v17 | 0x100000000LL;
    }
    v15 = 1;
    v28 = nullptr;
    if ( v24 != -4096 )
    {
      while ( 1 )
      {
        if ( v24 == -8192 && !v28 )
          v28 = v23;
        v16 = (unsigned int)(v15 + 1);
        v22 = v21 & (v15 + v22);
        v23 = &v20[2 * v22];
        v24 = *v23;
        if ( a2 == *v23 )
          goto LABEL_10;
        if ( v24 == -4096 )
          break;
        v15 = (unsigned int)v16;
      }
      if ( v28 )
        v23 = v28;
    }
    v18 = (unsigned int)(*(_DWORD *)(a1 + 256) + 1);
    if ( 4 * (int)v18 < 3 * v19 )
    {
      if ( v19 - *(_DWORD *)(a1 + 260) - (unsigned int)v18 > v19 >> 3 )
      {
        v29 = *v23;
        goto LABEL_19;
      }
      v49 = (v21 >> 1) | v21 | (((v21 >> 1) | v21) >> 2);
      v50 = (((v49 >> 4) | v49) >> 8) | (v49 >> 4) | v49;
      v51 = ((v50 >> 16) | v50) + 1;
      if ( (unsigned int)v51 < 0x40 )
        LODWORD(v51) = 64;
      *(_DWORD *)(a1 + 264) = v51;
      v52 = (_QWORD *)sub_220C370(16LL * (unsigned int)v51, 8, 64, v18, v15, v16);
      *(_QWORD *)(a1 + 248) = v52;
      if ( v20 )
      {
        v53 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        for ( i = &v52[2 * v53]; i != v52; v52 += 2 )
          *v52 = -4096;
        v55 = v20;
        do
        {
          v56 = *v55;
          if ( *v55 != -8192 && v56 != -4096 )
          {
            v57 = *(_DWORD *)(a1 + 264);
            if ( !v57 )
            {
              *(_QWORD *)&dword_0 = *v55;
              BUG();
            }
            v58 = v57 - 1;
            v59 = *(_QWORD *)(a1 + 248);
            v60 = v58 & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
            v61 = (__int64 *)(v59 + 16LL * v60);
            v62 = *v61;
            if ( v56 != *v61 && v62 != -4096 )
            {
              v78 = 1;
              v76 = nullptr;
              while ( 1 )
              {
                if ( !v76 && v62 == -8192 )
                  v76 = v61;
                v60 = v58 & (v78 + v60);
                v61 = (__int64 *)(v59 + 16LL * v60);
                v62 = *v61;
                if ( v56 == *v61 )
                  break;
                if ( v62 == -4096 )
                {
                  if ( v76 )
                    v61 = v76;
                  break;
                }
                ++v78;
              }
            }
            *v61 = v56;
            *((_DWORD *)v61 + 2) = *((_DWORD *)v55 + 2);
            ++*(_DWORD *)(a1 + 256);
          }
          v55 += 2;
        }
        while ( &v20[2 * v19] != v55 );
        operator delete();
        v52 = *(_QWORD **)(a1 + 248);
        v63 = *(_DWORD *)(a1 + 264);
        LODWORD(v18) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v71 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v63 = v71;
        v72 = &v52[2 * v71];
        if ( v52 != v72 )
        {
          v73 = v52;
          do
          {
            *v73 = -4096;
            v73 += 2;
          }
          while ( v72 != v73 );
        }
        LODWORD(v18) = 1;
      }
      if ( v63 )
      {
        v64 = v63 - 1;
        v65 = v64 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v23 = &v52[2 * v65];
        v29 = *v23;
        if ( a2 != *v23 )
        {
          v66 = 1;
          v67 = nullptr;
          if ( v29 != -4096 )
          {
            while ( 1 )
            {
              if ( !v67 && v29 == -8192 )
                v67 = v23;
              v65 = v64 & (v66 + v65);
              v23 = &v52[2 * v65];
              v29 = *v23;
              if ( a2 == *v23 )
                goto LABEL_19;
              if ( v29 == -4096 )
              {
                if ( !v67 )
                  break;
                v29 = *v67;
                v23 = v67;
                goto LABEL_19;
              }
              ++v66;
            }
          }
LABEL_38:
          *(_DWORD *)(a1 + 256) = v18;
LABEL_21:
          *v23 = a2;
          *((_DWORD *)v23 + 2) = 0;
          goto LABEL_10;
        }
        goto LABEL_19;
      }
    }
    else
    {
LABEL_22:
      v30 = (((((((2 * v19 - 1) | ((unsigned __int64)(2 * v19 - 1) >> 1)) >> 2)
              | (2 * v19 - 1)
              | ((unsigned __int64)(2 * v19 - 1) >> 1)) >> 4)
            | (((2 * v19 - 1) | ((unsigned __int64)(2 * v19 - 1) >> 1)) >> 2)
            | (2 * v19 - 1)
            | ((unsigned __int64)(2 * v19 - 1) >> 1)) >> 8)
          | (((((2 * v19 - 1) | ((unsigned __int64)(2 * v19 - 1) >> 1)) >> 2)
            | (2 * v19 - 1)
            | ((unsigned __int64)(2 * v19 - 1) >> 1)) >> 4)
          | (((2 * v19 - 1) | ((unsigned __int64)(2 * v19 - 1) >> 1)) >> 2)
          | (2 * v19 - 1)
          | ((unsigned __int64)(2 * v19 - 1) >> 1);
      v31 = ((v30 >> 16) | v30) + 1;
      if ( (unsigned int)v31 < 0x40 )
        LODWORD(v31) = 64;
      *(_DWORD *)(a1 + 264) = v31;
      v32 = (_QWORD *)sub_220C370(16LL * (unsigned int)v31, 8, 64, v18, v15, v16);
      *(_QWORD *)(a1 + 248) = v32;
      if ( v20 )
      {
        v33 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v34 = &v20[2 * v19];
        for ( j = &v32[2 * v33]; j != v32; v32 += 2 )
          *v32 = -4096;
        for ( k = v20; v34 != k; k += 2 )
        {
          v37 = *k;
          if ( *k != -8192 && v37 != -4096 )
          {
            v38 = *(_DWORD *)(a1 + 264);
            if ( !v38 )
            {
              *(_QWORD *)&dword_0 = *k;
              BUG();
            }
            v39 = v38 - 1;
            v40 = *(_QWORD *)(a1 + 248);
            v41 = v39 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
            v42 = (__int64 *)(v40 + 16LL * v41);
            v43 = *v42;
            if ( *v42 != v37 )
            {
              v74 = 1;
              v75 = nullptr;
              if ( v43 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v75 && v43 == -8192 )
                    v75 = v42;
                  v41 = v39 & (v74 + v41);
                  v42 = (__int64 *)(v40 + 16LL * v41);
                  v43 = *v42;
                  if ( v37 == *v42 )
                    break;
                  if ( v43 == -4096 )
                  {
                    if ( v75 )
                      v42 = v75;
                    break;
                  }
                  ++v74;
                }
              }
            }
            *v42 = v37;
            *((_DWORD *)v42 + 2) = *((_DWORD *)k + 2);
            ++*(_DWORD *)(a1 + 256);
          }
        }
        operator delete();
        v32 = *(_QWORD **)(a1 + 248);
        v44 = *(_DWORD *)(a1 + 264);
        LODWORD(v18) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v68 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v44 = v68;
        v69 = &v32[2 * v68];
        if ( v32 != v69 )
        {
          v70 = v32;
          do
          {
            *v70 = -4096;
            v70 += 2;
          }
          while ( v69 != v70 );
        }
        LODWORD(v18) = 1;
      }
      if ( v44 )
      {
        v45 = v44 - 1;
        v46 = (v44 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v23 = &v32[2 * v46];
        v29 = *v23;
        if ( a2 != *v23 )
        {
          v47 = 1;
          v48 = nullptr;
          if ( v29 != -4096 )
          {
            while ( 1 )
            {
              if ( !v48 && v29 == -8192 )
                v48 = v23;
              v46 = v45 & (v47 + v46);
              v23 = &v32[2 * v46];
              v29 = *v23;
              if ( a2 == *v23 )
                goto LABEL_19;
              if ( v29 == -4096 )
              {
                if ( !v48 )
                  goto LABEL_38;
                v29 = *v48;
                v23 = v48;
                goto LABEL_19;
              }
              ++v47;
            }
          }
          goto LABEL_38;
        }
LABEL_19:
        *(_DWORD *)(a1 + 256) = v18;
        if ( v29 != -4096 )
          --*(_DWORD *)(a1 + 260);
        goto LABEL_21;
      }
    }
    ++*(_DWORD *)(a1 + 256);
    BUG();
  }
  return result;
}

