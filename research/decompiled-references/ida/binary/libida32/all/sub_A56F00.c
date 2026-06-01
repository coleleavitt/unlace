__int64 __fastcall sub_A56F00(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned int v13; // esi
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 *v19; // r13
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  int v25; // r10d
  __int64 *v26; // r8
  _QWORD *v27; // rcx
  __int64 *v28; // rdx
  int i; // r11d
  __int64 v30; // rcx
  unsigned int v31; // edi
  _QWORD *v32; // rsi
  __int64 v33; // r9
  int v34; // edi
  int v35; // esi
  int v36; // r8d
  __int64 v37; // rdi
  __int64 v38; // rcx
  int v39; // r11d
  __int64 *v40; // r10
  int v42; // r9d
  __int64 *v43; // r10
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  int v52; // r11d
  _QWORD *v53; // rcx
  __int64 *v54; // rdx
  __int64 v55; // r9
  __int64 v56; // rcx
  unsigned int v57; // esi
  _QWORD *v58; // rax
  __int64 v59; // rdi
  int v60; // edi
  int v61; // edi
  __int64 v62; // r8
  int v63; // r11d
  __int64 *v64; // r10
  __int64 *v65; // r9
  __int64 v66; // rcx
  _QWORD *v67; // rcx
  _QWORD *v68; // rdx
  __int64 v69; // rcx
  _QWORD *v70; // rcx
  _QWORD *v71; // rdx
  unsigned int v72; // [rsp+8h] [rbp-60h]
  unsigned int v73; // [rsp+8h] [rbp-60h]
  int v74; // [rsp+8h] [rbp-60h]
  __int64 v75; // [rsp+10h] [rbp-58h]
  _QWORD *v76; // [rsp+10h] [rbp-58h]
  int v77; // [rsp+18h] [rbp-50h]
  _QWORD *v78; // [rsp+18h] [rbp-50h]
  int v79; // [rsp+20h] [rbp-48h]

  v3 = sub_EBA840(a1, a2);
  v8 = *(_QWORD *)(v3 + 72);
  v9 = *(_QWORD *)(v8 + 56);
  if ( v9 )
  {
    v10 = v3;
    v11 = 0;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v9 + 128);
      if ( v17
        || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v4, v5, v6, v7),
            v17 = *(_QWORD *)(v9 + 128),
            v8 = *(_QWORD *)(v10 + 72),
            v17) )
      {
        v17 = *(_QWORD *)(v17 + 88);
      }
      v18 = *(unsigned int *)(v8 + 80);
      v19 = *(__int64 **)(v8 + 64);
      if ( !(_DWORD)v18 )
        goto LABEL_9;
      v12 = (unsigned int)(v18 - 1);
      v6 = ((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4);
      v13 = v12 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v14 = &v19[2 * v13];
      v15 = *v14;
      if ( v17 != *v14 )
        break;
LABEL_4:
      v11 += v14[1];
LABEL_5:
      v16 = sub_EBA840(a1, v9);
      v8 = *(_QWORD *)(v16 + 72);
      v10 = v16;
      v9 = *(_QWORD *)(v8 + 56);
      if ( !v9 )
        return v11;
    }
    v42 = 1;
    v43 = nullptr;
    if ( v15 != -4096 )
    {
      while ( 1 )
      {
        if ( v15 == -8192 && !v43 )
          v43 = v14;
        v13 = v12 & (v42 + v13);
        v14 = &v19[2 * v13];
        v15 = *v14;
        if ( v17 == *v14 )
          goto LABEL_4;
        if ( v15 == -4096 )
          break;
        ++v42;
      }
      if ( v43 )
        v14 = v43;
    }
    v35 = *(_DWORD *)(v8 + 72) + 1;
    v7 = (unsigned int)(4 * v35);
    if ( (unsigned int)v7 >= 3 * (int)v18 )
    {
LABEL_9:
      v72 = *(_DWORD *)(v8 + 80);
      v20 = ((((((((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v18 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v18 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v18 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v18 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 16;
      v21 = (v20
           | (((((((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v18 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v18 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v18 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v18 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1))
          + 1;
      if ( (unsigned int)v21 < 0x40 )
        LODWORD(v21) = 64;
      *(_DWORD *)(v8 + 80) = v21;
      v22 = sub_220C370(16LL * (unsigned int)v21, 8, v20, v18, v6, v7);
      *(_QWORD *)(v8 + 64) = v22;
      if ( v19 )
      {
        v23 = *(unsigned int *)(v8 + 80);
        *(_QWORD *)(v8 + 72) = 0;
        v24 = (_QWORD *)v22;
        v25 = v23;
        v26 = &v19[2 * v72];
        v27 = (_QWORD *)(v22 + 16 * v23);
        if ( (_QWORD *)v22 != v27 )
        {
          do
          {
            *v24 = -4096;
            v24 += 2;
          }
          while ( v27 != v24 );
        }
        v28 = v19;
        for ( i = v25 - 1; v26 != v28; v28 += 2 )
        {
          v30 = *v28;
          if ( *v28 != -4096 && v30 != -8192 )
          {
            if ( !v25 )
            {
              *(_QWORD *)&dword_0 = *v28;
              BUG();
            }
            v31 = i & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
            v32 = (_QWORD *)(v22 + 16LL * v31);
            v33 = *v32;
            if ( v30 != *v32 && v33 != -4096 )
            {
              v77 = 1;
              v76 = nullptr;
              while ( 1 )
              {
                if ( v33 == -8192 )
                {
                  if ( v76 )
                    v32 = v76;
                  v76 = v32;
                }
                v31 = i & (v77 + v31);
                v32 = (_QWORD *)(v22 + 16LL * v31);
                v33 = *v32;
                if ( v30 == *v32 )
                  break;
                if ( v33 == -4096 )
                {
                  if ( v76 )
                    v32 = v76;
                  break;
                }
                ++v77;
              }
            }
            *v32 = v30;
            v32[1] = v28[1];
            ++*(_DWORD *)(v8 + 72);
          }
        }
        operator delete();
        v22 = *(_QWORD *)(v8 + 64);
        v34 = *(_DWORD *)(v8 + 80);
        v35 = *(_DWORD *)(v8 + 72) + 1;
      }
      else
      {
        v66 = *(unsigned int *)(v8 + 80);
        *(_QWORD *)(v8 + 72) = 0;
        v34 = v66;
        v67 = (_QWORD *)(v22 + 16 * v66);
        if ( (_QWORD *)v22 != v67 )
        {
          v68 = (_QWORD *)v22;
          do
          {
            *v68 = -4096;
            v68 += 2;
          }
          while ( v67 != v68 );
        }
        v35 = 1;
      }
      if ( !v34 )
        goto LABEL_111;
      v36 = v34 - 1;
      LODWORD(v37) = (v34 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v14 = (__int64 *)(v22 + 16LL * (unsigned int)v37);
      v38 = *v14;
      if ( v17 == *v14 )
        goto LABEL_33;
      v39 = 1;
      v40 = nullptr;
      if ( v38 != -4096 )
      {
        while ( 1 )
        {
          if ( v38 != -8192 || v40 )
            v14 = v40;
          v37 = v36 & (unsigned int)(v37 + v39);
          v65 = (__int64 *)(v22 + 16 * v37);
          v38 = *v65;
          if ( v17 == *v65 )
            break;
          if ( v38 == -4096 )
            goto LABEL_95;
          ++v39;
          v40 = v14;
          v14 = (__int64 *)(v22 + 16 * v37);
        }
LABEL_55:
        v14 = v65;
LABEL_33:
        *(_DWORD *)(v8 + 72) = v35;
        if ( v38 != -4096 )
          --*(_DWORD *)(v8 + 76);
        goto LABEL_35;
      }
    }
    else
    {
      v44 = (unsigned int)v18 >> 3;
      if ( (int)v18 - *(_DWORD *)(v8 + 76) - v35 > (unsigned int)v44 )
      {
LABEL_32:
        v38 = *v14;
        goto LABEL_33;
      }
      v73 = *(_DWORD *)(v8 + 80);
      v45 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v46 = v45 >> 16;
      v47 = ((v45 >> 16) | v45) + 1;
      if ( (unsigned int)v47 < 0x40 )
        LODWORD(v47) = 64;
      *(_DWORD *)(v8 + 80) = v47;
      v48 = sub_220C370(16LL * (unsigned int)v47, 8, v46, v18, v6, v44);
      v49 = ((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4);
      *(_QWORD *)(v8 + 64) = v48;
      if ( v19 )
      {
        v50 = *(unsigned int *)(v8 + 80);
        *(_QWORD *)(v8 + 72) = 0;
        v51 = (_QWORD *)v48;
        v52 = v50;
        v75 = 2LL * v73;
        v53 = (_QWORD *)(v48 + 16 * v50);
        if ( (_QWORD *)v48 != v53 )
        {
          do
          {
            *v51 = -4096;
            v51 += 2;
          }
          while ( v53 != v51 );
        }
        v54 = v19;
        v55 = v48;
        v74 = v52 - 1;
        do
        {
          v56 = *v54;
          if ( *v54 != -8192 && v56 != -4096 )
          {
            if ( !v52 )
            {
              *(_QWORD *)&dword_0 = *v54;
              BUG();
            }
            v57 = v74 & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
            v58 = (_QWORD *)(v55 + 16LL * v57);
            v59 = *v58;
            if ( v56 != *v58 && v59 != -4096 )
            {
              v79 = 1;
              v78 = nullptr;
              while ( 1 )
              {
                if ( v59 == -8192 )
                {
                  if ( v78 )
                    v58 = v78;
                  v78 = v58;
                }
                v57 = v74 & (v79 + v57);
                v58 = (_QWORD *)(v55 + 16LL * v57);
                v59 = *v58;
                if ( v56 == *v58 )
                  break;
                if ( v59 == -4096 )
                {
                  if ( v78 )
                    v58 = v78;
                  break;
                }
                ++v79;
              }
            }
            *v58 = v56;
            v58[1] = v54[1];
            ++*(_DWORD *)(v8 + 72);
          }
          v54 += 2;
        }
        while ( &v19[v75] != v54 );
        operator delete();
        v48 = *(_QWORD *)(v8 + 64);
        v60 = *(_DWORD *)(v8 + 80);
        v49 = ((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4);
        v35 = *(_DWORD *)(v8 + 72) + 1;
      }
      else
      {
        v69 = *(unsigned int *)(v8 + 80);
        *(_QWORD *)(v8 + 72) = 0;
        v60 = v69;
        v70 = (_QWORD *)(v48 + 16 * v69);
        if ( (_QWORD *)v48 != v70 )
        {
          v71 = (_QWORD *)v48;
          do
          {
            *v71 = -4096;
            v71 += 2;
          }
          while ( v70 != v71 );
        }
        v35 = 1;
      }
      if ( !v60 )
      {
LABEL_111:
        ++*(_DWORD *)(v8 + 72);
        BUG();
      }
      v61 = v60 - 1;
      LODWORD(v62) = v61 & v49;
      v14 = (__int64 *)(v48 + 16LL * (unsigned int)v62);
      v38 = *v14;
      if ( v17 == *v14 )
        goto LABEL_33;
      v63 = 1;
      v64 = nullptr;
      if ( v38 != -4096 )
      {
        while ( 1 )
        {
          if ( v38 != -8192 || v64 )
            v14 = v64;
          v62 = v61 & (unsigned int)(v62 + v63);
          v65 = (__int64 *)(v48 + 16 * v62);
          v38 = *v65;
          if ( v17 == *v65 )
            goto LABEL_55;
          if ( v38 == -4096 )
          {
LABEL_95:
            if ( v14 )
              goto LABEL_32;
            v14 = v65;
            break;
          }
          ++v63;
          v64 = v14;
          v14 = (__int64 *)(v48 + 16 * v62);
        }
      }
    }
    *(_DWORD *)(v8 + 72) = v35;
LABEL_35:
    *v14 = v17;
    v14[1] = 0;
    goto LABEL_5;
  }
  return 0;
}

