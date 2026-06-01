__int64 __fastcall sub_E2EAA0(__int64 a1, __int64 a2)
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
  __int64 v34; // rsi
  __int64 *v35; // r9
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v38; // rdx
  int v39; // r8d
  int v40; // r8d
  __int64 v41; // r11
  unsigned int v42; // edi
  __int64 *v43; // rcx
  __int64 v44; // r10
  int v45; // edi
  int v46; // r8d
  unsigned int v47; // edi
  int v48; // r10d
  __int64 *v49; // r9
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r15
  _QWORD *i; // rdx
  __int64 *v57; // rax
  __int64 v58; // rdx
  int v59; // edi
  int v60; // edi
  __int64 v61; // r9
  unsigned int v62; // esi
  __int64 *v63; // rcx
  __int64 v64; // r8
  int v65; // edi
  int v66; // edi
  unsigned int v67; // r14d
  int v68; // r9d
  __int64 *v69; // r8
  __int64 v70; // rcx
  _QWORD *v71; // rcx
  _QWORD *v72; // rdx
  __int64 v73; // rcx
  _QWORD *v74; // rcx
  _QWORD *v75; // rdx
  int v76; // r15d
  __int64 *v77; // r14
  __int64 *v78; // r10
  __int64 v79; // [rsp-8h] [rbp-60h]
  int v80; // [rsp+8h] [rbp-50h]
  __m128 v81[4]; // [rsp+10h] [rbp-48h] BYREF

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
      sub_E2D6D0(v81, v8, (__int64 *)(16 * v5 + v6), v2, 1);
      v10 = v81[0].m128_u64[0];
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
  sub_E2D6D0(v81, (__int64 *)(v6 + 16LL * (unsigned int)v5), (__int64 *)(v6 + 16LL * (unsigned int)v5), v2, 1);
  v10 = v81[0].m128_u64[0];
LABEL_4:
  v11 = (__int64 *)(*(_QWORD *)(a1 + 248) + 16LL * *(unsigned int *)(a1 + 264));
  sub_E2D6D0(v81, v11, v11, v2, 1);
  if ( v81[0].m128_u64[0] != v10 )
    return *(unsigned int *)(v10 + 8) | 0x100000000LL;
  v13 = *(_QWORD *)(a2 + 8);
  v81[0].m128_u64[0] = a2 | 2;
  v14 = sub_E2C980(a1, (__int64 *)v81, v13, 1, 0, 0, 0);
  v17 = v14;
  result = 0;
  v18 = v79;
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
      v50 = (v21 >> 1) | v21 | (((v21 >> 1) | v21) >> 2);
      v51 = (((v50 >> 4) | v50) >> 8) | (v50 >> 4) | v50;
      v52 = ((v51 >> 16) | v51) + 1;
      if ( (unsigned int)v52 < 0x40 )
        LODWORD(v52) = 64;
      *(_DWORD *)(a1 + 264) = v52;
      v53 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v52, 8, 64, v18, v15, v16);
      *(_QWORD *)(a1 + 248) = v53;
      if ( v20 )
      {
        v54 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v55 = 2LL * v19;
        for ( i = &v53[2 * v54]; i != v53; v53 += 2 )
          *v53 = -4096;
        v57 = v20;
        do
        {
          v58 = *v57;
          if ( *v57 != -8192 && v58 != -4096 )
          {
            v59 = *(_DWORD *)(a1 + 264);
            if ( !v59 )
            {
              *(_QWORD *)&dword_0 = *v57;
              BUG();
            }
            v60 = v59 - 1;
            v61 = *(_QWORD *)(a1 + 248);
            v62 = v60 & (((unsigned int)v58 >> 9) ^ ((unsigned int)v58 >> 4));
            v63 = (__int64 *)(v61 + 16LL * v62);
            v64 = *v63;
            if ( v58 != *v63 && v64 != -4096 )
            {
              v80 = 1;
              v78 = nullptr;
              while ( 1 )
              {
                if ( !v78 && v64 == -8192 )
                  v78 = v63;
                v62 = v60 & (v80 + v62);
                v63 = (__int64 *)(v61 + 16LL * v62);
                v64 = *v63;
                if ( v58 == *v63 )
                  break;
                if ( v64 == -4096 )
                {
                  if ( v78 )
                    v63 = v78;
                  break;
                }
                ++v80;
              }
            }
            *v63 = v58;
            *((_DWORD *)v63 + 2) = *((_DWORD *)v57 + 2);
            ++*(_DWORD *)(a1 + 256);
          }
          v57 += 2;
        }
        while ( &v20[v55] != v57 );
        operator delete(v20, v55 * 8, 8);
        v53 = *(_QWORD **)(a1 + 248);
        v65 = *(_DWORD *)(a1 + 264);
        LODWORD(v18) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v73 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v65 = v73;
        v74 = &v53[2 * v73];
        if ( v53 != v74 )
        {
          v75 = v53;
          do
          {
            *v75 = -4096;
            v75 += 2;
          }
          while ( v74 != v75 );
        }
        LODWORD(v18) = 1;
      }
      if ( v65 )
      {
        v66 = v65 - 1;
        v67 = v66 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v23 = &v53[2 * v67];
        v29 = *v23;
        if ( a2 != *v23 )
        {
          v68 = 1;
          v69 = nullptr;
          if ( v29 != -4096 )
          {
            while ( 1 )
            {
              if ( !v69 && v29 == -8192 )
                v69 = v23;
              v67 = v66 & (v68 + v67);
              v23 = &v53[2 * v67];
              v29 = *v23;
              if ( a2 == *v23 )
                goto LABEL_19;
              if ( v29 == -4096 )
              {
                if ( !v69 )
                  break;
                v29 = *v69;
                v23 = v69;
                goto LABEL_19;
              }
              ++v68;
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
      v32 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v31, 8, 64, v18, v15, v16);
      *(_QWORD *)(a1 + 248) = v32;
      if ( v20 )
      {
        v33 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v34 = 2LL * v19;
        v35 = &v20[v34];
        for ( j = &v32[2 * v33]; j != v32; v32 += 2 )
          *v32 = -4096;
        for ( k = v20; v35 != k; k += 2 )
        {
          v38 = *k;
          if ( *k != -8192 && v38 != -4096 )
          {
            v39 = *(_DWORD *)(a1 + 264);
            if ( !v39 )
            {
              *(_QWORD *)&dword_0 = *k;
              BUG();
            }
            v40 = v39 - 1;
            v41 = *(_QWORD *)(a1 + 248);
            v42 = v40 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
            v43 = (__int64 *)(v41 + 16LL * v42);
            v44 = *v43;
            if ( *v43 != v38 )
            {
              v76 = 1;
              v77 = nullptr;
              if ( v44 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v77 && v44 == -8192 )
                    v77 = v43;
                  v42 = v40 & (v76 + v42);
                  v43 = (__int64 *)(v41 + 16LL * v42);
                  v44 = *v43;
                  if ( v38 == *v43 )
                    break;
                  if ( v44 == -4096 )
                  {
                    if ( v77 )
                      v43 = v77;
                    break;
                  }
                  ++v76;
                }
              }
            }
            *v43 = v38;
            *((_DWORD *)v43 + 2) = *((_DWORD *)k + 2);
            ++*(_DWORD *)(a1 + 256);
          }
        }
        operator delete(v20, v34 * 8, 8);
        v32 = *(_QWORD **)(a1 + 248);
        v45 = *(_DWORD *)(a1 + 264);
        LODWORD(v18) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v70 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v45 = v70;
        v71 = &v32[2 * v70];
        if ( v32 != v71 )
        {
          v72 = v32;
          do
          {
            *v72 = -4096;
            v72 += 2;
          }
          while ( v71 != v72 );
        }
        LODWORD(v18) = 1;
      }
      if ( v45 )
      {
        v46 = v45 - 1;
        v47 = (v45 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v23 = &v32[2 * v47];
        v29 = *v23;
        if ( a2 != *v23 )
        {
          v48 = 1;
          v49 = nullptr;
          if ( v29 != -4096 )
          {
            while ( 1 )
            {
              if ( !v49 && v29 == -8192 )
                v49 = v23;
              v47 = v46 & (v48 + v47);
              v23 = &v32[2 * v47];
              v29 = *v23;
              if ( a2 == *v23 )
                goto LABEL_19;
              if ( v29 == -4096 )
              {
                if ( !v49 )
                  goto LABEL_38;
                v29 = *v49;
                v23 = v49;
                goto LABEL_19;
              }
              ++v48;
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
