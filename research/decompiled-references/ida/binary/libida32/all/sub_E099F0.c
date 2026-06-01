__int64 __fastcall sub_E099F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
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
  __int64 *v28; // r10
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v31; // rdx
  int v32; // r9d
  int v33; // r9d
  __int64 v34; // r14
  unsigned int v35; // r8d
  __int64 *v36; // rdi
  __int64 v37; // r11
  int v38; // r8d
  int v39; // r10d
  unsigned int v40; // r9d
  __int64 v41; // rsi
  _QWORD *v42; // rsi
  _QWORD *v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 *v49; // r10
  _QWORD *i; // rdx
  __int64 *v51; // rax
  __int64 v52; // rdx
  int v53; // r9d
  int v54; // r9d
  __int64 v55; // r14
  unsigned int v56; // r8d
  __int64 *v57; // rdi
  __int64 v58; // r11
  int v59; // r8d
  int v60; // r10d
  unsigned int v61; // r9d
  __int64 v62; // rsi
  _QWORD *v63; // rsi
  _QWORD *v64; // rdx
  __int64 *v65; // r15
  __int64 *v66; // r15
  __int64 *v67; // r11
  int v68; // r14d
  int v69; // r12d
  unsigned int v70; // r14d
  __int64 *v71; // r12
  int v72; // r14d
  int v73; // r8d
  unsigned int v74; // r14d
  __int64 v75; // [rsp+8h] [rbp-60h]
  __int64 v76; // [rsp+8h] [rbp-60h]
  __int64 v77; // [rsp+8h] [rbp-60h]
  __int64 v78; // [rsp+8h] [rbp-60h]
  int v79; // [rsp+8h] [rbp-60h]
  int v80; // [rsp+8h] [rbp-60h]
  __int64 v81; // [rsp+18h] [rbp-50h] BYREF
  __m128 v82[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a1 + 104;
  v8 = *(_DWORD *)(a1 + 120);
  v9 = *(_QWORD *)(a1 + 80);
  v10 = *(_QWORD *)(a1 + 88);
  v11 = *(__int64 **)(a1 + 104);
  v81 = a2;
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
      sub_E09990(v82, v14, &v11[2 * v8], v6, 1);
      v16 = v82[0].m128_u64[0];
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
      v77 = v6;
      v44 = (((a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2)) >> 4) | (a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2);
      v45 = v44 >> 8;
      v46 = (((v45 | v44) >> 16) | v45 | v44) + 1;
      if ( (unsigned int)v46 < 0x40 )
        LODWORD(v46) = 64;
      *(_DWORD *)(a1 + 120) = v46;
      v47 = (_QWORD *)sub_220C370(16LL * (unsigned int)v46, 8, 64, v6, v45, v21);
      v6 = v77;
      *(_QWORD *)(a1 + 104) = v47;
      if ( v11 )
      {
        v48 = *(unsigned int *)(a1 + 120);
        *(_QWORD *)(a1 + 112) = 0;
        v49 = &v11[2 * v8];
        for ( i = &v47[2 * v48]; i != v47; v47 += 2 )
          *v47 = -4096;
        v51 = v11;
        do
        {
          v52 = *v51;
          if ( *v51 != -4096 && v52 != -8192 )
          {
            v53 = *(_DWORD *)(a1 + 120);
            if ( !v53 )
            {
              *(_QWORD *)&dword_0 = *v51;
              BUG();
            }
            v54 = v53 - 1;
            v55 = *(_QWORD *)(a1 + 104);
            v56 = v54 & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
            v57 = (__int64 *)(v55 + 16LL * v56);
            v58 = *v57;
            if ( v52 != *v57 && v58 != -4096 )
            {
              v80 = 1;
              v66 = nullptr;
              while ( 1 )
              {
                if ( v58 == -8192 && !v66 )
                  v66 = v57;
                v56 = v54 & (v80 + v56);
                v57 = (__int64 *)(v55 + 16LL * v56);
                v58 = *v57;
                if ( v52 == *v57 )
                  break;
                if ( v58 == -4096 )
                {
                  if ( v66 )
                    v57 = v66;
                  break;
                }
                ++v80;
              }
            }
            *v57 = v52;
            *((_DWORD *)v57 + 2) = *((_DWORD *)v51 + 2);
            ++*(_DWORD *)(a1 + 112);
          }
          v51 += 2;
        }
        while ( v49 != v51 );
        v78 = v6;
        operator delete();
        v47 = *(_QWORD **)(a1 + 104);
        v59 = *(_DWORD *)(a1 + 120);
        v20 = *(_DWORD *)(a1 + 112) + 1;
        v6 = v78;
      }
      else
      {
        v62 = *(unsigned int *)(a1 + 120);
        *(_QWORD *)(a1 + 112) = 0;
        v59 = v62;
        v63 = &v47[2 * v62];
        if ( v47 != v63 )
        {
          v64 = v47;
          do
          {
            *v64 = -4096;
            v64 += 2;
          }
          while ( v63 != v64 );
        }
        v20 = 1;
      }
      if ( v59 )
      {
        v60 = v59 - 1;
        v61 = (v59 - 1) & (((unsigned int)v81 >> 9) ^ ((unsigned int)v81 >> 4));
        v14 = &v47[2 * v61];
        v12 = *v14;
        v22 = *v14;
        if ( v81 != *v14 )
        {
          if ( v12 == -4096 )
          {
            v12 = v81;
            goto LABEL_30;
          }
          v71 = &v47[2 * (v60 & (((unsigned int)v81 >> 9) ^ ((unsigned int)v81 >> 4)))];
          v72 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v12 == -8192 && !v14 )
              v14 = v71;
            v73 = v72 + 1;
            v74 = v61 + v72;
            v61 = v60 & v74;
            v71 = &v47[2 * (v60 & v74)];
            v12 = *v71;
            if ( v81 == *v71 )
            {
              v22 = *v71;
              v14 = &v47[2 * (v60 & v74)];
              goto LABEL_9;
            }
            if ( v12 == -4096 )
              break;
            v72 = v73;
          }
          if ( !v14 )
          {
            v12 = v81;
            v14 = &v47[2 * (v60 & v74)];
            goto LABEL_30;
          }
          v22 = *v14;
          v12 = v81;
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
  v75 = v6;
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
  v26 = (_QWORD *)sub_220C370(16LL * (unsigned int)v25, 8, 64, v6, a5, a6);
  v6 = v75;
  *(_QWORD *)(a1 + 104) = v26;
  if ( v11 )
  {
    v27 = *(unsigned int *)(a1 + 120);
    *(_QWORD *)(a1 + 112) = 0;
    v28 = &v11[2 * v8];
    for ( j = &v26[2 * v27]; j != v26; v26 += 2 )
      *v26 = -4096;
    for ( k = v11; v28 != k; k += 2 )
    {
      v31 = *k;
      if ( *k != -8192 && v31 != -4096 )
      {
        v32 = *(_DWORD *)(a1 + 120);
        if ( !v32 )
        {
          *(_QWORD *)&dword_0 = *k;
          BUG();
        }
        v33 = v32 - 1;
        v34 = *(_QWORD *)(a1 + 104);
        v35 = v33 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
        v36 = (__int64 *)(v34 + 16LL * v35);
        v37 = *v36;
        if ( *v36 != v31 && v37 != -4096 )
        {
          v79 = 1;
          v65 = nullptr;
          while ( 1 )
          {
            if ( !v65 && v37 == -8192 )
              v65 = v36;
            v35 = v33 & (v79 + v35);
            v36 = (__int64 *)(v34 + 16LL * v35);
            v37 = *v36;
            if ( v31 == *v36 )
              break;
            if ( v37 == -4096 )
            {
              if ( v65 )
                v36 = v65;
              break;
            }
            ++v79;
          }
        }
        *v36 = v31;
        *((_DWORD *)v36 + 2) = *((_DWORD *)k + 2);
        ++*(_DWORD *)(a1 + 112);
      }
    }
    v76 = v6;
    operator delete();
    v26 = *(_QWORD **)(a1 + 104);
    v38 = *(_DWORD *)(a1 + 120);
    v20 = *(_DWORD *)(a1 + 112) + 1;
    v6 = v76;
  }
  else
  {
    v41 = *(unsigned int *)(a1 + 120);
    *(_QWORD *)(a1 + 112) = 0;
    v38 = v41;
    v42 = &v26[2 * v41];
    if ( v26 != v42 )
    {
      v43 = v26;
      do
      {
        *v43 = -4096;
        v43 += 2;
      }
      while ( v42 != v43 );
    }
    v20 = 1;
  }
  if ( !v38 )
    goto LABEL_110;
  v12 = v81;
  v39 = v38 - 1;
  v40 = (v38 - 1) & (((unsigned int)v81 >> 9) ^ ((unsigned int)v81 >> 4));
  v14 = &v26[2 * v40];
  v22 = *v14;
  if ( *v14 == v81 )
    goto LABEL_9;
  if ( v22 != -4096 )
  {
    v67 = &v26[2 * (v39 & (((unsigned int)v81 >> 9) ^ ((unsigned int)v81 >> 4)))];
    v68 = 1;
    v14 = nullptr;
    while ( 1 )
    {
      if ( v22 == -8192 && !v14 )
        v14 = v67;
      v69 = v68 + 1;
      v70 = v40 + v68;
      v40 = v39 & v70;
      v67 = &v26[2 * (v39 & v70)];
      v22 = *v67;
      if ( v81 == *v67 )
      {
        v14 = &v26[2 * (v39 & v70)];
        goto LABEL_9;
      }
      if ( v22 == -4096 )
        break;
      v68 = v69;
    }
    if ( v14 )
      goto LABEL_8;
    v14 = &v26[2 * (v39 & v70)];
  }
LABEL_30:
  *(_DWORD *)(a1 + 112) = v20;
LABEL_11:
  *v14 = v12;
  *((_DWORD *)v14 + 2) = (v10 - v9) >> 3;
  sub_E09990(v82, v14, (__int64 *)(*(_QWORD *)(a1 + 104) + 16LL * *(unsigned int *)(a1 + 120)), v6, 1);
  v16 = v82[0].m128_u64[0];
  v23 = *(_QWORD **)(a1 + 88);
  if ( v23 == *(_QWORD **)(a1 + 96) )
  {
    sub_E05480(a1 + 80, v23, &v81);
  }
  else
  {
    *v23 = v81;
    *(_QWORD *)(a1 + 88) += 8LL;
  }
  return *(unsigned int *)(v16 + 8);
}

