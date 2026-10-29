__int64 __fastcall sub_EAEFD0(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r12d
  int v17; // esi
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // r13
  unsigned int v21; // r14d
  int v22; // eax
  _DWORD *v23; // rax
  unsigned int v24; // r15d
  __int64 *v25; // r14
  unsigned __int64 v26; // rsi
  unsigned int v27; // ecx
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int8 v30; // dl
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // r12
  __int64 *v34; // rdi
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  int v41; // r9d
  __int64 *v42; // r8
  _QWORD *v43; // rcx
  __int64 *v44; // rdx
  int i; // r13d
  __int64 v46; // rcx
  unsigned int v47; // edi
  __int64 v48; // rsi
  __int64 v49; // r10
  int v50; // ecx
  unsigned int v51; // edi
  unsigned int v52; // r8d
  unsigned int v53; // edi
  __int64 v54; // r9
  int v55; // esi
  __int64 *v56; // r10
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rdx
  int v63; // r11d
  _QWORD *v64; // rcx
  __int64 *v65; // rdx
  int v66; // r10d
  __int64 v67; // rcx
  unsigned int v68; // edi
  __int64 v69; // rsi
  __int64 v70; // r9
  int v71; // ecx
  unsigned int v72; // esi
  unsigned int v73; // edi
  unsigned int v74; // r13d
  __int64 v75; // r8
  int v76; // esi
  __int64 *v77; // r9
  __int64 v78; // rcx
  _QWORD *v79; // rcx
  _QWORD *v80; // rdx
  __int64 v81; // rcx
  _QWORD *v82; // rcx
  _QWORD *v83; // rdx
  __int64 *v84; // rdi
  __int64 v85; // rcx
  _DWORD *v86; // rax
  _DWORD *v87; // rdx
  unsigned int v88; // r15d
  __int64 v89; // r11
  int v90; // [rsp+8h] [rbp-60h]
  __int64 v91; // [rsp+8h] [rbp-60h]
  int v92; // [rsp+10h] [rbp-58h]
  __m128 v93[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (__int64)(a1 + 14);
  v5 = a1[18];
  v6 = *((_QWORD *)a1 + 7);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (__int64 *)(v6 + 16LL * v7);
    v9 = *v8;
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_EAEF60(v93, v8, (_QWORD *)(16 * v5 + v6), v2, 1);
      v10 = v93[0].m128_u64[0];
      goto LABEL_4;
    }
    v17 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v18 = v17 + 1;
        v7 = (v5 - 1) & (v17 + v7);
        v8 = (__int64 *)(v6 + 16LL * v7);
        v19 = *v8;
        if ( *v8 == a2 )
          goto LABEL_3;
        v17 = v18;
      }
      while ( v19 != -4096 );
    }
  }
  sub_EAEF60(v93, (_QWORD *)(v6 + 16LL * (unsigned int)v5), (_QWORD *)(v6 + 16LL * (unsigned int)v5), v2, 1);
  v10 = v93[0].m128_u64[0];
LABEL_4:
  v11 = (_QWORD *)(*((_QWORD *)a1 + 7) + 16LL * a1[18]);
  sub_EAEF60(v93, v11, v11, v2, 1);
  if ( v93[0].m128_u64[0] == v10 )
  {
    v20 = *(_QWORD *)a1;
    v21 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
    if ( v21 < *(_DWORD *)(*(_QWORD *)a1 + 476LL) || v21 >= *(_DWORD *)(v20 + 480) )
      v22 = sub_FF9850(*(_QWORD *)a1);
    else
      v22 = *(_DWORD *)(v20 + 472);
    v93[0].m128_i8[0] = 0;
    if ( (unsigned int)(v22 + 1) > 1 )
    {
      if ( v22 >= 0 )
      {
        v23 = (_DWORD *)(*(_QWORD *)(v20 + 184) + 24LL * (unsigned int)v22);
        goto LABEL_17;
      }
      v31 = (unsigned int)(-2 - v22);
      v32 = *(_QWORD *)(*(_QWORD *)(v20 + 320) + 8LL * ((unsigned int)(-2 - v22) >> 6));
      if ( _bittest64(&v32, v31) )
      {
        v33 = (_QWORD *)(*(_QWORD *)(v20 + 272) + 8 * ((unsigned __int64)(int)v31 >> 5));
        if ( *v33 )
        {
          v23 = (_DWORD *)(*v33 + 24 * (v31 & 0x1F));
LABEL_17:
          v15 = 0;
          if ( v23 )
            v15 = v21 - (*v23 & 0x7FFFFFFF);
          goto LABEL_19;
        }
        v84 = (__int64 *)(*(_QWORD *)(v20 + 288) & 0xFFFFFFFFFFFFFFF8LL);
        v85 = *v84;
        v84[10] += 768;
        v86 = (_DWORD *)((v85 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v84[1] >= (unsigned __int64)(v86 + 192) && v85 )
          *v84 = (__int64)(v86 + 192);
        else
          v86 = (_DWORD *)sub_962430((__int64)v84, 768, 768, 3, v13, v14);
        *v33 = v86;
        v87 = v86 + 192;
        do
        {
          *v86 = 0;
          v86 += 6;
          *((_OWORD *)v86 - 1) = 0;
          *((_QWORD *)v86 - 1) = 0;
        }
        while ( v86 != v87 );
        v88 = v31 & 0x1F;
        v30 = v93[0].m128_i8[0];
        v12 = 3LL * v88;
        v23 = (_DWORD *)(*v33 + 24LL * v88);
      }
      else
      {
        v23 = (_DWORD *)sub_FFBBF0(v20, (unsigned int)v31, v93);
        v30 = v93[0].m128_i8[0];
      }
      if ( !v30 )
        goto LABEL_17;
    }
    v15 = 0;
LABEL_19:
    v24 = a1[18];
    v25 = *((__int64 **)a1 + 7);
    if ( !v24 )
      goto LABEL_36;
    v26 = v24 - 1;
    v27 = v26 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v28 = &v25[2 * v27];
    v29 = *v28;
    if ( *v28 == a2 )
    {
LABEL_21:
      *((_DWORD *)v28 + 2) = v15;
      return v15;
    }
    v13 = 1;
    v34 = nullptr;
    if ( v29 != -4096 )
    {
      while ( 1 )
      {
        if ( v29 == -8192 && !v34 )
          v34 = v28;
        v14 = (unsigned int)(v13 + 1);
        v27 = v26 & (v13 + v27);
        v28 = &v25[2 * v27];
        v29 = *v28;
        if ( *v28 == a2 )
          goto LABEL_21;
        if ( v29 == -4096 )
          break;
        v13 = (unsigned int)v14;
      }
      if ( v34 )
        v28 = v34;
    }
    v12 = a1[16] + 1;
    if ( 4 * (int)v12 < 3 * v24 )
    {
      if ( v24 - a1[17] - (unsigned int)v12 > v24 >> 3 )
      {
        v35 = *v28;
        goto LABEL_33;
      }
      v57 = (v26 >> 1) | v26 | (((v26 >> 1) | v26) >> 2);
      v58 = (((v57 >> 4) | v57) >> 8) | (v57 >> 4) | v57;
      v59 = ((v58 >> 16) | v58) + 1;
      if ( (unsigned int)v59 < 0x40 )
        LODWORD(v59) = 64;
      a1[18] = v59;
      v60 = sub_220C370(16LL * (unsigned int)v59, 8, 64, v12, v13, v14);
      *((_QWORD *)a1 + 7) = v60;
      if ( v25 )
      {
        v61 = a1[18];
        *((_QWORD *)a1 + 8) = 0;
        v62 = (_QWORD *)v60;
        v63 = v61;
        v64 = (_QWORD *)(v60 + 16 * v61);
        if ( (_QWORD *)v60 != v64 )
        {
          do
          {
            *v62 = -4096;
            v62 += 2;
          }
          while ( v64 != v62 );
        }
        v65 = v25;
        v66 = v63 - 1;
        do
        {
          v67 = *v65;
          if ( *v65 != -8192 && v67 != -4096 )
          {
            if ( !v63 )
            {
              *(_QWORD *)&dword_0 = *v65;
              BUG();
            }
            v68 = v66 & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
            v69 = v60 + 16LL * v68;
            v70 = *(_QWORD *)v69;
            if ( *(_QWORD *)v69 != v67 && v70 != -4096 )
            {
              v92 = 1;
              v91 = 0;
              while ( 1 )
              {
                if ( !v91 )
                {
                  if ( v70 != -8192 )
                    v69 = 0;
                  v91 = v69;
                }
                v68 = v66 & (v92 + v68);
                v69 = v60 + 16LL * v68;
                v70 = *(_QWORD *)v69;
                if ( v67 == *(_QWORD *)v69 )
                  break;
                if ( v70 == -4096 )
                {
                  if ( v91 )
                    v69 = v91;
                  break;
                }
                ++v92;
              }
            }
            *(_QWORD *)v69 = v67;
            v71 = *((_DWORD *)v65 + 2);
            ++a1[16];
            *(_DWORD *)(v69 + 8) = v71;
          }
          v65 += 2;
        }
        while ( &v25[2 * v24] != v65 );
        operator delete();
        v60 = *((_QWORD *)a1 + 7);
        v72 = a1[18];
        LODWORD(v12) = a1[16] + 1;
      }
      else
      {
        v81 = a1[18];
        *((_QWORD *)a1 + 8) = 0;
        v72 = v81;
        v82 = (_QWORD *)(v60 + 16 * v81);
        if ( (_QWORD *)v60 != v82 )
        {
          v83 = (_QWORD *)v60;
          do
          {
            *v83 = -4096;
            v83 += 2;
          }
          while ( v82 != v83 );
        }
        LODWORD(v12) = 1;
      }
      if ( v72 )
      {
        v73 = v72 - 1;
        v35 = a2;
        v74 = v73 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v28 = (__int64 *)(v60 + 16LL * v74);
        v75 = *v28;
        if ( *v28 == a2 )
          goto LABEL_33;
        v76 = 1;
        v77 = nullptr;
        if ( v75 != -4096 )
        {
          while ( 1 )
          {
            if ( v75 == -8192 && !v77 )
              v77 = v28;
            v74 = v73 & (v76 + v74);
            v28 = (__int64 *)(v60 + 16LL * v74);
            v75 = *v28;
            if ( *v28 == a2 )
              break;
            if ( v75 == -4096 )
            {
              if ( !v77 )
                goto LABEL_52;
              v35 = *v77;
              v28 = v77;
              goto LABEL_33;
            }
            ++v76;
          }
LABEL_73:
          v35 = a2;
LABEL_33:
          a1[16] = v12;
          if ( v35 != -4096 )
            --a1[17];
          goto LABEL_35;
        }
        goto LABEL_52;
      }
    }
    else
    {
LABEL_36:
      v36 = (((((((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
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
      v37 = ((v36 >> 16) | v36) + 1;
      if ( (unsigned int)v37 < 0x40 )
        LODWORD(v37) = 64;
      a1[18] = v37;
      v38 = sub_220C370(16LL * (unsigned int)v37, 8, 64, v12, v13, v14);
      *((_QWORD *)a1 + 7) = v38;
      if ( v25 )
      {
        v39 = a1[18];
        *((_QWORD *)a1 + 8) = 0;
        v40 = (_QWORD *)v38;
        v41 = v39;
        v42 = &v25[2 * v24];
        v43 = (_QWORD *)(v38 + 16 * v39);
        if ( (_QWORD *)v38 != v43 )
        {
          do
          {
            *v40 = -4096;
            v40 += 2;
          }
          while ( v43 != v40 );
        }
        v44 = v25;
        for ( i = v41 - 1; v42 != v44; v44 += 2 )
        {
          v46 = *v44;
          if ( *v44 != -4096 && v46 != -8192 )
          {
            if ( !v41 )
            {
              *(_QWORD *)&dword_0 = *v44;
              BUG();
            }
            v47 = i & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
            v48 = v38 + 16LL * v47;
            v49 = *(_QWORD *)v48;
            if ( *(_QWORD *)v48 != v46 && v49 != -4096 )
            {
              v90 = 1;
              v89 = 0;
              while ( 1 )
              {
                if ( v49 == -8192 && !v89 )
                  v89 = v48;
                v47 = i & (v90 + v47);
                v48 = v38 + 16LL * v47;
                v49 = *(_QWORD *)v48;
                if ( v46 == *(_QWORD *)v48 )
                  break;
                if ( v49 == -4096 )
                {
                  if ( v89 )
                    v48 = v89;
                  break;
                }
                ++v90;
              }
            }
            *(_QWORD *)v48 = v46;
            v50 = *((_DWORD *)v44 + 2);
            ++a1[16];
            *(_DWORD *)(v48 + 8) = v50;
          }
        }
        operator delete();
        v38 = *((_QWORD *)a1 + 7);
        v51 = a1[18];
        LODWORD(v12) = a1[16] + 1;
      }
      else
      {
        v78 = a1[18];
        *((_QWORD *)a1 + 8) = 0;
        v51 = v78;
        v79 = (_QWORD *)(v38 + 16 * v78);
        if ( (_QWORD *)v38 != v79 )
        {
          v80 = (_QWORD *)v38;
          do
          {
            *v80 = -4096;
            v80 += 2;
          }
          while ( v79 != v80 );
        }
        LODWORD(v12) = 1;
      }
      if ( v51 )
      {
        v52 = v51 - 1;
        v35 = a2;
        v53 = (v51 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v28 = (__int64 *)(v38 + 16LL * v53);
        v54 = *v28;
        if ( *v28 == a2 )
          goto LABEL_33;
        v55 = 1;
        v56 = nullptr;
        if ( v54 != -4096 )
        {
          while ( 1 )
          {
            if ( !v56 && v54 == -8192 )
              v56 = v28;
            v53 = v52 & (v55 + v53);
            v28 = (__int64 *)(v38 + 16LL * v53);
            v54 = *v28;
            if ( *v28 == a2 )
              goto LABEL_73;
            if ( v54 == -4096 )
            {
              if ( !v56 )
                break;
              v35 = *v56;
              v28 = v56;
              goto LABEL_33;
            }
            ++v55;
          }
        }
LABEL_52:
        a1[16] = v12;
LABEL_35:
        *v28 = a2;
        *((_DWORD *)v28 + 2) = 0;
        goto LABEL_21;
      }
    }
    ++a1[16];
    BUG();
  }
  return *(unsigned int *)(v10 + 8);
}

