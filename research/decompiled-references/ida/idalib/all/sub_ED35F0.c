__int64 __fastcall sub_ED35F0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  _QWORD *v14; // rdx
  unsigned int v15; // r12d
  int v17; // esi
  int v18; // r9d
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r15d
  __int64 *v25; // r14
  unsigned __int64 v26; // rsi
  unsigned int v27; // ecx
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  int v37; // r9d
  __int64 v38; // r15
  __int64 *v39; // r8
  _QWORD *v40; // rcx
  __int64 *v41; // rdx
  int i; // r13d
  __int64 v43; // rcx
  unsigned int v44; // edi
  __int64 v45; // rsi
  __int64 v46; // r10
  int v47; // ecx
  int v48; // edi
  int v49; // r8d
  unsigned int v50; // edi
  __int64 v51; // r9
  int v52; // esi
  __int64 *v53; // r10
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rdx
  int v60; // r11d
  __int64 v61; // r15
  _QWORD *v62; // rcx
  __int64 *v63; // rdx
  int v64; // r10d
  __int64 v65; // rcx
  unsigned int v66; // edi
  __int64 v67; // rsi
  __int64 v68; // r9
  int v69; // ecx
  int v70; // esi
  int v71; // edi
  unsigned int v72; // r13d
  __int64 v73; // r8
  int v74; // esi
  __int64 *v75; // r9
  __int64 v76; // rcx
  _QWORD *v77; // rcx
  _QWORD *v78; // rdx
  __int64 v79; // rcx
  _QWORD *v80; // rcx
  _QWORD *v81; // rdx
  __int64 v82; // r11
  int v84; // [rsp+8h] [rbp-60h]
  __int64 v85; // [rsp+8h] [rbp-60h]
  int v86; // [rsp+10h] [rbp-58h]
  __m128 v87[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1 + 32;
  v8 = *(unsigned int *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( *v11 == a2 )
    {
LABEL_3:
      sub_ED2CA0(v87, v11, (_QWORD *)(16 * v8 + v9), v4, 1);
      v13 = v87[0].m128_u64[0];
      goto LABEL_4;
    }
    v17 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v18 = v17 + 1;
        v10 = (v8 - 1) & (v17 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v19 = *v11;
        if ( *v11 == a2 )
          goto LABEL_3;
        v17 = v18;
      }
      while ( v19 != -4096 );
    }
  }
  sub_ED2CA0(v87, (_QWORD *)(v9 + 16LL * (unsigned int)v8), (_QWORD *)(v9 + 16LL * (unsigned int)v8), v4, 1);
  v13 = v87[0].m128_u64[0];
LABEL_4:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * *(unsigned int *)(a1 + 48));
  sub_ED2CA0(v87, v14, v14, v4, 1);
  if ( v87[0].m128_u64[0] == v13 )
  {
    v20 = sub_1022630(*(_QWORD *)a1, a3, a4, 0);
    v24 = *(_DWORD *)(a1 + 48);
    v25 = *(__int64 **)(a1 + 32);
    v15 = v20;
    if ( !v24 )
      goto LABEL_21;
    v26 = v24 - 1;
    v27 = v26 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v28 = &v25[2 * v27];
    v29 = *v28;
    if ( a2 == *v28 )
    {
LABEL_13:
      *((_DWORD *)v28 + 2) = v15;
      return v15;
    }
    v22 = 1;
    v30 = nullptr;
    if ( v29 != -4096 )
    {
      while ( 1 )
      {
        if ( v29 == -8192 && !v30 )
          v30 = v28;
        v23 = (unsigned int)(v22 + 1);
        v27 = v26 & (v22 + v27);
        v28 = &v25[2 * v27];
        v29 = *v28;
        if ( *v28 == a2 )
          goto LABEL_13;
        if ( v29 == -4096 )
          break;
        v22 = (unsigned int)v23;
      }
      if ( v30 )
        v28 = v30;
    }
    v21 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
    if ( 4 * (int)v21 < 3 * v24 )
    {
      if ( v24 - *(_DWORD *)(a1 + 44) - (unsigned int)v21 > v24 >> 3 )
      {
        v31 = *v28;
        goto LABEL_18;
      }
      v54 = (v26 >> 1) | v26 | (((v26 >> 1) | v26) >> 2);
      v55 = (((v54 >> 4) | v54) >> 8) | (v54 >> 4) | v54;
      v56 = ((v55 >> 16) | v55) + 1;
      if ( (unsigned int)v56 < 0x40 )
        LODWORD(v56) = 64;
      *(_DWORD *)(a1 + 48) = v56;
      v57 = sub_22300B0(16LL * (unsigned int)v56, 8, 64, v21, v22, v23);
      *(_QWORD *)(a1 + 32) = v57;
      if ( v25 )
      {
        v58 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v59 = (_QWORD *)v57;
        v60 = v58;
        v61 = 2LL * v24;
        v62 = (_QWORD *)(v57 + 16 * v58);
        if ( (_QWORD *)v57 != v62 )
        {
          do
          {
            *v59 = -4096;
            v59 += 2;
          }
          while ( v62 != v59 );
        }
        v63 = v25;
        v64 = v60 - 1;
        do
        {
          v65 = *v63;
          if ( *v63 != -4096 && v65 != -8192 )
          {
            if ( !v60 )
            {
              *(_QWORD *)&dword_0 = *v63;
              BUG();
            }
            v66 = v64 & (((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4));
            v67 = v57 + 16LL * v66;
            v68 = *(_QWORD *)v67;
            if ( v65 != *(_QWORD *)v67 && v68 != -4096 )
            {
              v86 = 1;
              v85 = 0;
              while ( 1 )
              {
                if ( !v85 )
                {
                  if ( v68 != -8192 )
                    v67 = 0;
                  v85 = v67;
                }
                v66 = v64 & (v86 + v66);
                v67 = v57 + 16LL * v66;
                v68 = *(_QWORD *)v67;
                if ( v65 == *(_QWORD *)v67 )
                  break;
                if ( v68 == -4096 )
                {
                  if ( v85 )
                    v67 = v85;
                  break;
                }
                ++v86;
              }
            }
            *(_QWORD *)v67 = v65;
            v69 = *((_DWORD *)v63 + 2);
            ++*(_DWORD *)(a1 + 40);
            *(_DWORD *)(v67 + 8) = v69;
          }
          v63 += 2;
        }
        while ( &v25[v61] != v63 );
        operator delete(v25, v61 * 8, 8);
        v57 = *(_QWORD *)(a1 + 32);
        v70 = *(_DWORD *)(a1 + 48);
        LODWORD(v21) = *(_DWORD *)(a1 + 40) + 1;
      }
      else
      {
        v79 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v70 = v79;
        v80 = (_QWORD *)(v57 + 16 * v79);
        if ( (_QWORD *)v57 != v80 )
        {
          v81 = (_QWORD *)v57;
          do
          {
            *v81 = -4096;
            v81 += 2;
          }
          while ( v80 != v81 );
        }
        LODWORD(v21) = 1;
      }
      if ( v70 )
      {
        v71 = v70 - 1;
        v31 = a2;
        v72 = v71 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v28 = (__int64 *)(v57 + 16LL * v72);
        v73 = *v28;
        if ( *v28 == a2 )
          goto LABEL_18;
        v74 = 1;
        v75 = nullptr;
        if ( v73 != -4096 )
        {
          while ( 1 )
          {
            if ( v73 == -8192 && !v75 )
              v75 = v28;
            v72 = v71 & (v74 + v72);
            v28 = (__int64 *)(v57 + 16LL * v72);
            v73 = *v28;
            if ( *v28 == a2 )
              break;
            if ( v73 == -4096 )
            {
              if ( !v75 )
                goto LABEL_37;
              v31 = *v75;
              v28 = v75;
              goto LABEL_18;
            }
            ++v74;
          }
LABEL_58:
          v31 = a2;
LABEL_18:
          *(_DWORD *)(a1 + 40) = v21;
          if ( v31 != -4096 )
            --*(_DWORD *)(a1 + 44);
          goto LABEL_20;
        }
        goto LABEL_37;
      }
    }
    else
    {
LABEL_21:
      v32 = (((((((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
              | (2 * v24 - 1)
              | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 4)
            | (((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
            | (2 * v24 - 1)
            | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 8)
          | (((((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
            | (2 * v24 - 1)
            | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 4)
          | (((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
          | (2 * v24 - 1)
          | ((unsigned __int64)(2 * v24 - 1) >> 1);
      v33 = ((v32 >> 16) | v32) + 1;
      if ( (unsigned int)v33 < 0x40 )
        LODWORD(v33) = 64;
      *(_DWORD *)(a1 + 48) = v33;
      v34 = sub_22300B0(16LL * (unsigned int)v33, 8, 64, v21, v22, v23);
      *(_QWORD *)(a1 + 32) = v34;
      if ( v25 )
      {
        v35 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v36 = (_QWORD *)v34;
        v37 = v35;
        v38 = 2LL * v24;
        v39 = &v25[v38];
        v40 = (_QWORD *)(v34 + 16 * v35);
        if ( (_QWORD *)v34 != v40 )
        {
          do
          {
            *v36 = -4096;
            v36 += 2;
          }
          while ( v40 != v36 );
        }
        v41 = v25;
        for ( i = v37 - 1; v39 != v41; v41 += 2 )
        {
          v43 = *v41;
          if ( *v41 != -8192 && v43 != -4096 )
          {
            if ( !v37 )
            {
              *(_QWORD *)&dword_0 = *v41;
              BUG();
            }
            v44 = i & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
            v45 = v34 + 16LL * v44;
            v46 = *(_QWORD *)v45;
            if ( *(_QWORD *)v45 != v43 && v46 != -4096 )
            {
              v84 = 1;
              v82 = 0;
              while ( 1 )
              {
                if ( !v82 && v46 == -8192 )
                  v82 = v45;
                v44 = i & (v84 + v44);
                v45 = v34 + 16LL * v44;
                v46 = *(_QWORD *)v45;
                if ( v43 == *(_QWORD *)v45 )
                  break;
                if ( v46 == -4096 )
                {
                  if ( v82 )
                    v45 = v82;
                  break;
                }
                ++v84;
              }
            }
            *(_QWORD *)v45 = v43;
            v47 = *((_DWORD *)v41 + 2);
            ++*(_DWORD *)(a1 + 40);
            *(_DWORD *)(v45 + 8) = v47;
          }
        }
        operator delete(v25, v38 * 8, 8);
        v34 = *(_QWORD *)(a1 + 32);
        v48 = *(_DWORD *)(a1 + 48);
        LODWORD(v21) = *(_DWORD *)(a1 + 40) + 1;
      }
      else
      {
        v76 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v48 = v76;
        v77 = (_QWORD *)(v34 + 16 * v76);
        if ( (_QWORD *)v34 != v77 )
        {
          v78 = (_QWORD *)v34;
          do
          {
            *v78 = -4096;
            v78 += 2;
          }
          while ( v77 != v78 );
        }
        LODWORD(v21) = 1;
      }
      if ( v48 )
      {
        v49 = v48 - 1;
        v31 = a2;
        v50 = (v48 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v28 = (__int64 *)(v34 + 16LL * v50);
        v51 = *v28;
        if ( *v28 == a2 )
          goto LABEL_18;
        v52 = 1;
        v53 = nullptr;
        if ( v51 != -4096 )
        {
          while ( 1 )
          {
            if ( !v53 && v51 == -8192 )
              v53 = v28;
            v50 = v49 & (v52 + v50);
            v28 = (__int64 *)(v34 + 16LL * v50);
            v51 = *v28;
            if ( *v28 == a2 )
              goto LABEL_58;
            if ( v51 == -4096 )
            {
              if ( !v53 )
                break;
              v31 = *v53;
              v28 = v53;
              goto LABEL_18;
            }
            ++v52;
          }
        }
LABEL_37:
        *(_DWORD *)(a1 + 40) = v21;
LABEL_20:
        *v28 = a2;
        *((_DWORD *)v28 + 2) = 0;
        goto LABEL_13;
      }
    }
    ++*(_DWORD *)(a1 + 40);
    BUG();
  }
  return *(unsigned int *)(v13 + 8);
}
