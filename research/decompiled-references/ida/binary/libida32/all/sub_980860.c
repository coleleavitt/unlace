__int64 __fastcall sub_980860(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned int *v7; // rax
  __int64 v8; // r12
  unsigned __int64 v10; // rax
  unsigned int v11; // edi
  __int64 *v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 *v14; // rdx
  __int64 result; // rax
  __int64 v16; // rbp
  int v17; // r15d
  int v18; // r13d
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int16 v23; // ax
  __int64 v24; // rbp
  __int64 v25; // rcx
  __int64 *v26; // r13
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  int v34; // r11d
  __int64 *v35; // r8
  _QWORD *v36; // rcx
  __int64 *v37; // rdx
  int i; // r10d
  __int64 v39; // rcx
  unsigned int v40; // edi
  _QWORD *v41; // rsi
  __int64 v42; // r9
  int v43; // edi
  int v44; // esi
  unsigned int v45; // edi
  unsigned int v46; // r10d
  __int64 *v47; // r11
  int v48; // r8d
  __int64 *v49; // r10
  __int64 v50; // rcx
  _QWORD *v51; // rcx
  _QWORD *v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // r11
  __int64 v59; // rdx
  int v60; // r8d
  _QWORD *k; // rdx
  __int64 *v62; // rax
  int v63; // r10d
  unsigned int v64; // esi
  _QWORD *v65; // rdx
  __int64 v66; // rdi
  int v67; // ecx
  int v68; // eax
  unsigned int v69; // r15d
  __int64 *v70; // rdi
  __int64 v71; // rdx
  _QWORD *n; // rdx
  unsigned int v73; // r11d
  unsigned int v74; // r10d
  unsigned int *v75; // [rsp+0h] [rbp-78h]
  unsigned int v77; // [rsp+14h] [rbp-64h]
  unsigned int v78; // [rsp+18h] [rbp-60h]
  unsigned int v79; // [rsp+18h] [rbp-60h]
  __int64 v80; // [rsp+18h] [rbp-60h]
  _QWORD *v81; // [rsp+20h] [rbp-58h]
  unsigned int j; // [rsp+28h] [rbp-50h]
  _QWORD *v83; // [rsp+28h] [rbp-50h]
  unsigned int m; // [rsp+30h] [rbp-48h]

  v6 = *(_QWORD *)(a2 + 8);
  v77 = *(_DWORD *)(a2 + 8) & 1;
  if ( (v6 & 1) == 0 )
  {
    if ( !v6 )
      BUG();
    if ( (*(_BYTE *)(v6 + 28) & 0x7F) != 0x4E )
      return sub_9800B0(a1, a2, a3, *(_QWORD *)(a2 + 8) & 1LL, a5, a6);
    return a1[1].m128i_i64[0];
  }
  v7 = (unsigned int *)(v6 & 0xFFFFFFFFFFFFFFFELL);
  v75 = v7 + 2;
  if ( (*(_BYTE *)(*((_QWORD *)v7 + 1) + 28LL) & 0x7F) == 0x4E )
    return a1[1].m128i_i64[0];
  v8 = (__int64)&v7[2 * *v7 + 2];
  if ( v75 != (unsigned int *)v8 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v8 - 8);
      v17 = *(_DWORD *)(v16 + 24);
      v18 = v17;
      if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 40 <= 6 )
      {
        v19 = sub_B4F900(*(_QWORD *)(v8 - 8));
        if ( v19 )
          v18 = (unsigned __int64)sub_EC8B80(v19) >> 32;
        else
          v18 = *(_DWORD *)(v16 + 24);
      }
      v20 = sub_ECAC60(24, a1->m128i_i64[0], 8);
      v23 = *(_WORD *)v20 & 0xFE00;
      LOBYTE(v23) = -11;
      *(_WORD *)v20 = v23;
      if ( unk_2CAD564 )
        sub_EC5E10(245);
      *(_QWORD *)(v20 + 8) = v16;
      v24 = a1->m128i_i64[1];
      *(_DWORD *)(v20 + 20) = v18;
      *(_DWORD *)(v20 + 16) = v17;
      v25 = *(unsigned int *)(v24 + 104);
      v26 = *(__int64 **)(v24 + 88);
      if ( !(_DWORD)v25 )
        goto LABEL_13;
      v10 = (unsigned int)(v25 - 1);
      v11 = v10 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
      v12 = &v26[2 * v11];
      v13 = *v12;
      if ( v20 != *v12 )
        break;
LABEL_6:
      v14 = (unsigned __int64 *)(v12 + 1);
      v8 -= 8;
      *v14 = a2;
      result = sub_9800B0(a1, v20, (__int64)v14, v25, v21, v22);
      if ( v75 == (unsigned int *)v8 )
        return result;
    }
    v48 = v77;
    v49 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v49 && v13 == -8192 )
          v49 = v12;
        v22 = (unsigned int)(v48 + 1);
        v21 = v11 + v48;
        v11 = v10 & v21;
        v12 = &v26[2 * ((unsigned int)v10 & (unsigned int)v21)];
        v13 = *v12;
        if ( v20 == *v12 )
          goto LABEL_6;
        if ( v13 == -4096 )
          break;
        v48 = v22;
      }
      if ( v49 )
        v12 = v49;
    }
    v44 = *(_DWORD *)(v24 + 96) + 1;
    v21 = (unsigned int)(4 * v44);
    if ( (unsigned int)v21 >= 3 * (int)v25 )
    {
LABEL_13:
      v27 = (unsigned int)(2 * v25 - 1);
      v78 = *(_DWORD *)(v24 + 104);
      v28 = ((((((v27 | (v27 >> 1)) >> 2) | v27 | (v27 >> 1)) >> 4) | ((v27 | (v27 >> 1)) >> 2) | v27 | (v27 >> 1)) >> 8)
          | ((((v27 | (v27 >> 1)) >> 2) | v27 | (v27 >> 1)) >> 4)
          | ((v27 | (v27 >> 1)) >> 2)
          | v27
          | (v27 >> 1);
      v29 = v28 >> 16;
      v30 = ((v28 >> 16) | v28) + 1;
      if ( v30 < 0x40 )
        v30 = 64;
      *(_DWORD *)(v24 + 104) = v30;
      v31 = sub_220C370(16LL * v30, 8, v29, 64, v21, v22);
      *(_QWORD *)(v24 + 88) = v31;
      if ( v26 )
      {
        v32 = *(unsigned int *)(v24 + 104);
        *(_QWORD *)(v24 + 96) = 0;
        v33 = (_QWORD *)v31;
        v34 = v32;
        v35 = &v26[2 * v78];
        v36 = (_QWORD *)(v31 + 16 * v32);
        if ( (_QWORD *)v31 != v36 )
        {
          do
          {
            *v33 = -4096;
            v33 += 2;
          }
          while ( v36 != v33 );
        }
        v37 = v26;
        for ( i = v34 - 1; v35 != v37; v37 += 2 )
        {
          v39 = *v37;
          if ( *v37 != -8192 && v39 != -4096 )
          {
            if ( !v34 )
              goto LABEL_122;
            v40 = i & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
            v41 = (_QWORD *)(v31 + 16LL * v40);
            v42 = *v41;
            if ( v39 != *v41 && v42 != -4096 )
            {
              v81 = nullptr;
              for ( j = v77; ; ++j )
              {
                if ( !v81 )
                {
                  if ( v42 != -8192 )
                    v41 = nullptr;
                  v81 = v41;
                }
                v40 = i & (j + v40);
                v41 = (_QWORD *)(v31 + 16LL * v40);
                v42 = *v41;
                if ( v39 == *v41 )
                  break;
                if ( v42 == -4096 )
                {
                  if ( v81 )
                    v41 = v81;
                  break;
                }
              }
            }
            *v41 = v39;
            v41[1] = v37[1];
            ++*(_DWORD *)(v24 + 96);
          }
        }
        operator delete();
        v31 = *(_QWORD *)(v24 + 88);
        v43 = *(_DWORD *)(v24 + 104);
        v44 = *(_DWORD *)(v24 + 96) + 1;
      }
      else
      {
        v50 = *(unsigned int *)(v24 + 104);
        *(_QWORD *)(v24 + 96) = 0;
        v43 = v50;
        v51 = (_QWORD *)(v31 + 16 * v50);
        if ( (_QWORD *)v31 != v51 )
        {
          v52 = (_QWORD *)v31;
          do
          {
            *v52 = -4096;
            v52 += 2;
          }
          while ( v51 != v52 );
        }
        v44 = v77;
      }
      if ( !v43 )
        goto LABEL_120;
      v21 = (unsigned int)(v43 - 1);
      v45 = v21 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
      v12 = (__int64 *)(v31 + 16LL * v45);
      v25 = *v12;
      if ( v20 == *v12 )
        goto LABEL_40;
      v46 = v77;
      v47 = nullptr;
      if ( v25 != -4096 )
      {
        while ( 1 )
        {
          if ( v25 != -8192 || v47 )
            v12 = v47;
          v73 = v46 + 1;
          v74 = v45 + v46;
          v45 = v21 & v74;
          v22 = v31 + 16LL * ((unsigned int)v21 & v74);
          v25 = *(_QWORD *)v22;
          if ( v20 == *(_QWORD *)v22 )
          {
            v12 = (__int64 *)(v31 + 16LL * ((unsigned int)v21 & v74));
            goto LABEL_40;
          }
          if ( v25 == -4096 )
            break;
          v46 = v73;
          v47 = v12;
          v12 = (__int64 *)v22;
        }
        if ( v12 )
          goto LABEL_39;
        v12 = (__int64 *)(v31 + 16LL * ((unsigned int)v21 & v74));
      }
    }
    else
    {
      v21 = (unsigned int)v25 >> 3;
      if ( (int)v25 - *(_DWORD *)(v24 + 100) - v44 > (unsigned int)v21 )
      {
LABEL_39:
        v25 = *v12;
LABEL_40:
        *(_DWORD *)(v24 + 96) = v44;
        if ( v25 != -4096 )
          --*(_DWORD *)(v24 + 100);
        goto LABEL_42;
      }
      v79 = *(_DWORD *)(v24 + 104);
      v53 = (((v10 >> 1) | v10) >> 2) | (v10 >> 1) | v10;
      v54 = (((v53 >> 4) | v53) >> 8) | (v53 >> 4) | v53;
      v55 = v54 >> 16;
      v56 = ((v54 >> 16) | v54) + 1;
      if ( (unsigned int)v56 < 0x40 )
        LODWORD(v56) = 64;
      *(_DWORD *)(v24 + 104) = v56;
      v57 = (_QWORD *)sub_220C370(16LL * (unsigned int)v56, 8, v55, 64, v21, v22);
      v58 = v57;
      *(_QWORD *)(v24 + 88) = v57;
      if ( v26 )
      {
        v59 = *(unsigned int *)(v24 + 104);
        *(_QWORD *)(v24 + 96) = 0;
        v60 = v59;
        v80 = 2LL * v79;
        for ( k = &v57[2 * v59]; k != v57; v57 += 2 )
          *v57 = -4096;
        v62 = v26;
        v63 = v60 - 1;
        do
        {
          v39 = *v62;
          if ( *v62 != -4096 && v39 != -8192 )
          {
            if ( !v60 )
            {
LABEL_122:
              *(_QWORD *)&dword_0 = v39;
              BUG();
            }
            v64 = v63 & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
            v65 = &v58[2 * v64];
            v66 = *v65;
            if ( v39 != *v65 && v66 != -4096 )
            {
              v83 = nullptr;
              for ( m = v77; ; ++m )
              {
                if ( v66 == -8192 )
                {
                  if ( v83 )
                    v65 = v83;
                  v83 = v65;
                }
                v64 = v63 & (m + v64);
                v65 = &v58[2 * v64];
                v66 = *v65;
                if ( v39 == *v65 )
                  break;
                if ( v66 == -4096 )
                {
                  if ( v83 )
                    v65 = v83;
                  break;
                }
              }
            }
            *v65 = v39;
            v65[1] = v62[1];
            ++*(_DWORD *)(v24 + 96);
          }
          v62 += 2;
        }
        while ( &v26[v80] != v62 );
        operator delete();
        v58 = *(_QWORD **)(v24 + 88);
        v67 = *(_DWORD *)(v24 + 104);
        v44 = *(_DWORD *)(v24 + 96) + 1;
      }
      else
      {
        v71 = *(unsigned int *)(v24 + 104);
        *(_QWORD *)(v24 + 96) = 0;
        v67 = v71;
        for ( n = &v57[2 * v71]; n != v57; v57 += 2 )
          *v57 = -4096;
        v44 = v77;
      }
      if ( !v67 )
      {
LABEL_120:
        ++*(_DWORD *)(v24 + 96);
        BUG();
      }
      v68 = v67 - 1;
      v69 = (v67 - 1) & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
      v12 = &v58[2 * v69];
      v25 = *v12;
      if ( v20 == *v12 )
        goto LABEL_40;
      v21 = v77;
      v22 = 0;
      if ( v25 != -4096 )
      {
        while ( 1 )
        {
          if ( v22 || v25 != -8192 )
            v12 = (__int64 *)v22;
          v22 = (unsigned int)(v21 + 1);
          v21 = v68 & (v69 + (unsigned int)v21);
          v69 = v21;
          v70 = &v58[2 * (unsigned int)v21];
          v25 = *v70;
          if ( v20 == *v70 )
          {
            v12 = &v58[2 * (unsigned int)v21];
            goto LABEL_40;
          }
          if ( v25 == -4096 )
            break;
          LODWORD(v21) = v22;
          v22 = (__int64)v12;
          v12 = v70;
        }
        if ( v12 )
          goto LABEL_39;
        v12 = &v58[2 * (unsigned int)v21];
      }
    }
    *(_DWORD *)(v24 + 96) = v44;
LABEL_42:
    *v12 = v20;
    v12[1] = 0;
    goto LABEL_6;
  }
  return 0;
}

