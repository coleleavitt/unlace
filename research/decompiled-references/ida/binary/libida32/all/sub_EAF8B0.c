__int64 __fastcall sub_EAF8B0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
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
  __int64 *v38; // r8
  _QWORD *v39; // rcx
  __int64 *v40; // rdx
  int i; // r13d
  __int64 v42; // rcx
  unsigned int v43; // edi
  __int64 v44; // rsi
  __int64 v45; // r10
  int v46; // ecx
  int v47; // edi
  int v48; // r8d
  unsigned int v49; // edi
  __int64 v50; // r9
  int v51; // esi
  __int64 *v52; // r10
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rdx
  int v59; // r11d
  _QWORD *v60; // rcx
  __int64 *v61; // rdx
  int v62; // r10d
  __int64 v63; // rcx
  unsigned int v64; // edi
  __int64 v65; // rsi
  __int64 v66; // r9
  int v67; // ecx
  int v68; // esi
  int v69; // edi
  unsigned int v70; // r13d
  __int64 v71; // r8
  int v72; // esi
  __int64 *v73; // r9
  __int64 v74; // rcx
  _QWORD *v75; // rcx
  _QWORD *v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rcx
  _QWORD *v79; // rdx
  __int64 v80; // r11
  int v82; // [rsp+8h] [rbp-60h]
  __int64 v83; // [rsp+8h] [rbp-60h]
  int v84; // [rsp+10h] [rbp-58h]
  __m128 v85[4]; // [rsp+20h] [rbp-48h] BYREF

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
      sub_EAEF60(v85, v11, (_QWORD *)(16 * v8 + v9), v4, 1);
      v13 = v85[0].m128_u64[0];
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
  sub_EAEF60(v85, (_QWORD *)(v9 + 16LL * (unsigned int)v8), (_QWORD *)(v9 + 16LL * (unsigned int)v8), v4, 1);
  v13 = v85[0].m128_u64[0];
LABEL_4:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * *(unsigned int *)(a1 + 48));
  sub_EAEF60(v85, v14, v14, v4, 1);
  if ( v85[0].m128_u64[0] == v13 )
  {
    v20 = sub_FFE8F0(*(_QWORD *)a1, a3, a4, 0);
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
      v53 = (v26 >> 1) | v26 | (((v26 >> 1) | v26) >> 2);
      v54 = (((v53 >> 4) | v53) >> 8) | (v53 >> 4) | v53;
      v55 = ((v54 >> 16) | v54) + 1;
      if ( (unsigned int)v55 < 0x40 )
        LODWORD(v55) = 64;
      *(_DWORD *)(a1 + 48) = v55;
      v56 = sub_220C370(16LL * (unsigned int)v55, 8, 64, v21, v22, v23);
      *(_QWORD *)(a1 + 32) = v56;
      if ( v25 )
      {
        v57 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v58 = (_QWORD *)v56;
        v59 = v57;
        v60 = (_QWORD *)(v56 + 16 * v57);
        if ( (_QWORD *)v56 != v60 )
        {
          do
          {
            *v58 = -4096;
            v58 += 2;
          }
          while ( v60 != v58 );
        }
        v61 = v25;
        v62 = v59 - 1;
        do
        {
          v63 = *v61;
          if ( *v61 != -4096 && v63 != -8192 )
          {
            if ( !v59 )
            {
              *(_QWORD *)&dword_0 = *v61;
              BUG();
            }
            v64 = v62 & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
            v65 = v56 + 16LL * v64;
            v66 = *(_QWORD *)v65;
            if ( v63 != *(_QWORD *)v65 && v66 != -4096 )
            {
              v84 = 1;
              v83 = 0;
              while ( 1 )
              {
                if ( !v83 )
                {
                  if ( v66 != -8192 )
                    v65 = 0;
                  v83 = v65;
                }
                v64 = v62 & (v84 + v64);
                v65 = v56 + 16LL * v64;
                v66 = *(_QWORD *)v65;
                if ( v63 == *(_QWORD *)v65 )
                  break;
                if ( v66 == -4096 )
                {
                  if ( v83 )
                    v65 = v83;
                  break;
                }
                ++v84;
              }
            }
            *(_QWORD *)v65 = v63;
            v67 = *((_DWORD *)v61 + 2);
            ++*(_DWORD *)(a1 + 40);
            *(_DWORD *)(v65 + 8) = v67;
          }
          v61 += 2;
        }
        while ( &v25[2 * v24] != v61 );
        operator delete();
        v56 = *(_QWORD *)(a1 + 32);
        v68 = *(_DWORD *)(a1 + 48);
        LODWORD(v21) = *(_DWORD *)(a1 + 40) + 1;
      }
      else
      {
        v77 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v68 = v77;
        v78 = (_QWORD *)(v56 + 16 * v77);
        if ( (_QWORD *)v56 != v78 )
        {
          v79 = (_QWORD *)v56;
          do
          {
            *v79 = -4096;
            v79 += 2;
          }
          while ( v78 != v79 );
        }
        LODWORD(v21) = 1;
      }
      if ( v68 )
      {
        v69 = v68 - 1;
        v31 = a2;
        v70 = v69 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v28 = (__int64 *)(v56 + 16LL * v70);
        v71 = *v28;
        if ( *v28 == a2 )
          goto LABEL_18;
        v72 = 1;
        v73 = nullptr;
        if ( v71 != -4096 )
        {
          while ( 1 )
          {
            if ( v71 == -8192 && !v73 )
              v73 = v28;
            v70 = v69 & (v72 + v70);
            v28 = (__int64 *)(v56 + 16LL * v70);
            v71 = *v28;
            if ( *v28 == a2 )
              break;
            if ( v71 == -4096 )
            {
              if ( !v73 )
                goto LABEL_37;
              v31 = *v73;
              v28 = v73;
              goto LABEL_18;
            }
            ++v72;
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
      v34 = sub_220C370(16LL * (unsigned int)v33, 8, 64, v21, v22, v23);
      *(_QWORD *)(a1 + 32) = v34;
      if ( v25 )
      {
        v35 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v36 = (_QWORD *)v34;
        v37 = v35;
        v38 = &v25[2 * v24];
        v39 = (_QWORD *)(v34 + 16 * v35);
        if ( (_QWORD *)v34 != v39 )
        {
          do
          {
            *v36 = -4096;
            v36 += 2;
          }
          while ( v39 != v36 );
        }
        v40 = v25;
        for ( i = v37 - 1; v38 != v40; v40 += 2 )
        {
          v42 = *v40;
          if ( *v40 != -8192 && v42 != -4096 )
          {
            if ( !v37 )
            {
              *(_QWORD *)&dword_0 = *v40;
              BUG();
            }
            v43 = i & (((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4));
            v44 = v34 + 16LL * v43;
            v45 = *(_QWORD *)v44;
            if ( *(_QWORD *)v44 != v42 && v45 != -4096 )
            {
              v82 = 1;
              v80 = 0;
              while ( 1 )
              {
                if ( !v80 && v45 == -8192 )
                  v80 = v44;
                v43 = i & (v82 + v43);
                v44 = v34 + 16LL * v43;
                v45 = *(_QWORD *)v44;
                if ( v42 == *(_QWORD *)v44 )
                  break;
                if ( v45 == -4096 )
                {
                  if ( v80 )
                    v44 = v80;
                  break;
                }
                ++v82;
              }
            }
            *(_QWORD *)v44 = v42;
            v46 = *((_DWORD *)v40 + 2);
            ++*(_DWORD *)(a1 + 40);
            *(_DWORD *)(v44 + 8) = v46;
          }
        }
        operator delete();
        v34 = *(_QWORD *)(a1 + 32);
        v47 = *(_DWORD *)(a1 + 48);
        LODWORD(v21) = *(_DWORD *)(a1 + 40) + 1;
      }
      else
      {
        v74 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v47 = v74;
        v75 = (_QWORD *)(v34 + 16 * v74);
        if ( (_QWORD *)v34 != v75 )
        {
          v76 = (_QWORD *)v34;
          do
          {
            *v76 = -4096;
            v76 += 2;
          }
          while ( v75 != v76 );
        }
        LODWORD(v21) = 1;
      }
      if ( v47 )
      {
        v48 = v47 - 1;
        v31 = a2;
        v49 = (v47 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v28 = (__int64 *)(v34 + 16LL * v49);
        v50 = *v28;
        if ( *v28 == a2 )
          goto LABEL_18;
        v51 = 1;
        v52 = nullptr;
        if ( v50 != -4096 )
        {
          while ( 1 )
          {
            if ( !v52 && v50 == -8192 )
              v52 = v28;
            v49 = v48 & (v51 + v49);
            v28 = (__int64 *)(v34 + 16LL * v49);
            v50 = *v28;
            if ( *v28 == a2 )
              goto LABEL_58;
            if ( v50 == -4096 )
            {
              if ( !v52 )
                break;
              v31 = *v52;
              v28 = v52;
              goto LABEL_18;
            }
            ++v51;
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

