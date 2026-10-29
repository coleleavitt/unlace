__int64 __fastcall sub_E2D730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  int v18; // r9d
  __int64 *v19; // r10
  int v20; // edi
  __int64 v21; // r9
  __int64 v22; // r8
  _QWORD *v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 *v29; // r10
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v32; // rdx
  int v33; // r9d
  int v34; // r9d
  __int64 v35; // r14
  unsigned int v36; // r8d
  __int64 *v37; // rdi
  __int64 v38; // r11
  int v39; // r8d
  int v40; // r10d
  unsigned int v41; // r9d
  __int64 v42; // rsi
  _QWORD *v43; // rsi
  _QWORD *v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r8
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rsi
  _QWORD *i; // rdx
  __int64 *v52; // rax
  __int64 v53; // rdx
  int v54; // r9d
  int v55; // r9d
  __int64 v56; // r14
  unsigned int v57; // r8d
  __int64 *v58; // rdi
  __int64 v59; // r11
  int v60; // r8d
  int v61; // r10d
  unsigned int v62; // r9d
  __int64 v63; // rsi
  _QWORD *v64; // rsi
  _QWORD *v65; // rdx
  __int64 *v66; // r15
  __int64 *v67; // r15
  __int64 *v68; // r11
  int v69; // r14d
  int v70; // r12d
  unsigned int v71; // r14d
  __int64 *v72; // r12
  int v73; // r14d
  int v74; // r8d
  unsigned int v75; // r14d
  __int64 v76; // [rsp+8h] [rbp-60h]
  __int64 v77; // [rsp+8h] [rbp-60h]
  __int64 v78; // [rsp+8h] [rbp-60h]
  __int64 v79; // [rsp+8h] [rbp-60h]
  int v80; // [rsp+8h] [rbp-60h]
  int v81; // [rsp+8h] [rbp-60h]
  __int64 v82; // [rsp+18h] [rbp-50h] BYREF
  __m128 v83[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a1 + 104;
  v8 = *(_DWORD *)(a1 + 120);
  v9 = *(_QWORD *)(a1 + 80);
  v10 = *(_QWORD *)(a1 + 88);
  v11 = *(__int64 **)(a1 + 104);
  v82 = a2;
  if ( v8 )
  {
    v12 = a2;
    a5 = v8 - 1;
    LODWORD(v13) = a5 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v14 = &v11[2 * (unsigned int)v13];
    v15 = *v14;
    if ( v12 == *v14 )
    {
LABEL_3:
      sub_E2D6D0(v83, v14, &v11[2 * v8], v6, 1);
      v16 = v83[0].m128_u64[0];
      return *(unsigned int *)(v16 + 8);
    }
    v18 = 1;
    v19 = nullptr;
    if ( v15 != -4096 )
    {
      while ( 1 )
      {
        if ( !v19 && v15 == -8192 )
          v19 = v14;
        v13 = (unsigned int)a5 & ((_DWORD)v13 + v18);
        v14 = &v11[2 * v13];
        v15 = *v14;
        if ( v12 == *v14 )
          goto LABEL_3;
        if ( v15 == -4096 )
          break;
        ++v18;
      }
      if ( v19 )
        v14 = v19;
    }
    v20 = *(_DWORD *)(a1 + 112) + 1;
    a6 = (unsigned int)(4 * v20);
    if ( (unsigned int)a6 < 3 * v8 )
    {
      v21 = v8 >> 3;
      if ( v8 - *(_DWORD *)(a1 + 116) - v20 > (unsigned int)v21 )
      {
LABEL_8:
        v22 = *v14;
        goto LABEL_9;
      }
      v78 = v6;
      v45 = (((a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2)) >> 4) | (a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2);
      v46 = v45 >> 8;
      v47 = (((v46 | v45) >> 16) | v46 | v45) + 1;
      if ( (unsigned int)v47 < 0x40 )
        LODWORD(v47) = 64;
      *(_DWORD *)(a1 + 120) = v47;
      v48 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v47, 8, 64, v6, v46, v21);
      v6 = v78;
      *(_QWORD *)(a1 + 104) = v48;
      if ( v11 )
      {
        v49 = *(unsigned int *)(a1 + 120);
        *(_QWORD *)(a1 + 112) = 0;
        v50 = 2LL * v8;
        for ( i = &v48[2 * v49]; i != v48; v48 += 2 )
          *v48 = -4096;
        v52 = v11;
        do
        {
          v53 = *v52;
          if ( *v52 != -4096 && v53 != -8192 )
          {
            v54 = *(_DWORD *)(a1 + 120);
            if ( !v54 )
            {
              *(_QWORD *)&dword_0 = *v52;
              BUG();
            }
            v55 = v54 - 1;
            v56 = *(_QWORD *)(a1 + 104);
            v57 = v55 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
            v58 = (__int64 *)(v56 + 16LL * v57);
            v59 = *v58;
            if ( v53 != *v58 && v59 != -4096 )
            {
              v81 = 1;
              v67 = nullptr;
              while ( 1 )
              {
                if ( v59 == -8192 && !v67 )
                  v67 = v58;
                v57 = v55 & (v81 + v57);
                v58 = (__int64 *)(v56 + 16LL * v57);
                v59 = *v58;
                if ( v53 == *v58 )
                  break;
                if ( v59 == -4096 )
                {
                  if ( v67 )
                    v58 = v67;
                  break;
                }
                ++v81;
              }
            }
            *v58 = v53;
            *((_DWORD *)v58 + 2) = *((_DWORD *)v52 + 2);
            ++*(_DWORD *)(a1 + 112);
          }
          v52 += 2;
        }
        while ( &v11[v50] != v52 );
        v79 = v6;
        operator delete(v11, v50 * 8, 8);
        v48 = *(_QWORD **)(a1 + 104);
        v60 = *(_DWORD *)(a1 + 120);
        v20 = *(_DWORD *)(a1 + 112) + 1;
        v6 = v79;
      }
      else
      {
        v63 = *(unsigned int *)(a1 + 120);
        *(_QWORD *)(a1 + 112) = 0;
        v60 = v63;
        v64 = &v48[2 * v63];
        if ( v48 != v64 )
        {
          v65 = v48;
          do
          {
            *v65 = -4096;
            v65 += 2;
          }
          while ( v64 != v65 );
        }
        v20 = 1;
      }
      if ( v60 )
      {
        v61 = v60 - 1;
        v62 = (v60 - 1) & (((unsigned int)v82 >> 9) ^ ((unsigned int)v82 >> 4));
        v14 = &v48[2 * v62];
        v12 = *v14;
        v22 = *v14;
        if ( v82 != *v14 )
        {
          if ( v12 == -4096 )
          {
            v12 = v82;
            goto LABEL_30;
          }
          v72 = &v48[2 * (v61 & (((unsigned int)v82 >> 9) ^ ((unsigned int)v82 >> 4)))];
          v73 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v12 == -8192 && !v14 )
              v14 = v72;
            v74 = v73 + 1;
            v75 = v62 + v73;
            v62 = v61 & v75;
            v72 = &v48[2 * (v61 & v75)];
            v12 = *v72;
            if ( v82 == *v72 )
            {
              v22 = *v72;
              v14 = &v48[2 * (v61 & v75)];
              goto LABEL_9;
            }
            if ( v12 == -4096 )
              break;
            v73 = v74;
          }
          if ( !v14 )
          {
            v12 = v82;
            v14 = &v48[2 * (v61 & v75)];
            goto LABEL_30;
          }
          v22 = *v14;
          v12 = v82;
        }
LABEL_9:
        *(_DWORD *)(a1 + 112) = v20;
        if ( v22 != -4096 )
          --*(_DWORD *)(a1 + 116);
        goto LABEL_11;
      }
LABEL_110:
      ++*(_DWORD *)(a1 + 112);
      BUG();
    }
  }
  v76 = v6;
  v24 = (((((((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
          | (2 * v8 - 1)
          | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 4)
        | (((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
        | (2 * v8 - 1)
        | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 8)
      | (((((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
        | (2 * v8 - 1)
        | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 4)
      | (((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
      | (2 * v8 - 1)
      | ((unsigned __int64)(2 * v8 - 1) >> 1);
  v25 = ((v24 >> 16) | v24) + 1;
  if ( (unsigned int)v25 < 0x40 )
    LODWORD(v25) = 64;
  *(_DWORD *)(a1 + 120) = v25;
  v26 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v25, 8, 64, v6, a5, a6);
  v6 = v76;
  *(_QWORD *)(a1 + 104) = v26;
  if ( v11 )
  {
    v27 = *(unsigned int *)(a1 + 120);
    *(_QWORD *)(a1 + 112) = 0;
    v28 = 2LL * v8;
    v29 = &v11[v28];
    for ( j = &v26[2 * v27]; j != v26; v26 += 2 )
      *v26 = -4096;
    for ( k = v11; v29 != k; k += 2 )
    {
      v32 = *k;
      if ( *k != -8192 && v32 != -4096 )
      {
        v33 = *(_DWORD *)(a1 + 120);
        if ( !v33 )
        {
          *(_QWORD *)&dword_0 = *k;
          BUG();
        }
        v34 = v33 - 1;
        v35 = *(_QWORD *)(a1 + 104);
        v36 = v34 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
        v37 = (__int64 *)(v35 + 16LL * v36);
        v38 = *v37;
        if ( *v37 != v32 && v38 != -4096 )
        {
          v80 = 1;
          v66 = nullptr;
          while ( 1 )
          {
            if ( !v66 && v38 == -8192 )
              v66 = v37;
            v36 = v34 & (v80 + v36);
            v37 = (__int64 *)(v35 + 16LL * v36);
            v38 = *v37;
            if ( v32 == *v37 )
              break;
            if ( v38 == -4096 )
            {
              if ( v66 )
                v37 = v66;
              break;
            }
            ++v80;
          }
        }
        *v37 = v32;
        *((_DWORD *)v37 + 2) = *((_DWORD *)k + 2);
        ++*(_DWORD *)(a1 + 112);
      }
    }
    v77 = v6;
    operator delete(v11, v28 * 8, 8);
    v26 = *(_QWORD **)(a1 + 104);
    v39 = *(_DWORD *)(a1 + 120);
    v20 = *(_DWORD *)(a1 + 112) + 1;
    v6 = v77;
  }
  else
  {
    v42 = *(unsigned int *)(a1 + 120);
    *(_QWORD *)(a1 + 112) = 0;
    v39 = v42;
    v43 = &v26[2 * v42];
    if ( v26 != v43 )
    {
      v44 = v26;
      do
      {
        *v44 = -4096;
        v44 += 2;
      }
      while ( v43 != v44 );
    }
    v20 = 1;
  }
  if ( !v39 )
    goto LABEL_110;
  v12 = v82;
  v40 = v39 - 1;
  v41 = (v39 - 1) & (((unsigned int)v82 >> 9) ^ ((unsigned int)v82 >> 4));
  v14 = &v26[2 * v41];
  v22 = *v14;
  if ( *v14 == v82 )
    goto LABEL_9;
  if ( v22 != -4096 )
  {
    v68 = &v26[2 * (v40 & (((unsigned int)v82 >> 9) ^ ((unsigned int)v82 >> 4)))];
    v69 = 1;
    v14 = nullptr;
    while ( 1 )
    {
      if ( v22 == -8192 && !v14 )
        v14 = v68;
      v70 = v69 + 1;
      v71 = v41 + v69;
      v41 = v40 & v71;
      v68 = &v26[2 * (v40 & v71)];
      v22 = *v68;
      if ( v82 == *v68 )
      {
        v14 = &v26[2 * (v40 & v71)];
        goto LABEL_9;
      }
      if ( v22 == -4096 )
        break;
      v69 = v70;
    }
    if ( v14 )
      goto LABEL_8;
    v14 = &v26[2 * (v40 & v71)];
  }
LABEL_30:
  *(_DWORD *)(a1 + 112) = v20;
LABEL_11:
  *v14 = v12;
  *((_DWORD *)v14 + 2) = (v10 - v9) >> 3;
  sub_E2D6D0(v83, v14, (__int64 *)(*(_QWORD *)(a1 + 104) + 16LL * *(unsigned int *)(a1 + 120)), v6, 1);
  v16 = v83[0].m128_u64[0];
  v23 = *(_QWORD **)(a1 + 88);
  if ( v23 == *(_QWORD **)(a1 + 96) )
  {
    sub_E291C0(a1 + 80, v23, &v82);
  }
  else
  {
    *v23 = v82;
    *(_QWORD *)(a1 + 88) += 8LL;
  }
  return *(unsigned int *)(v16 + 8);
}
