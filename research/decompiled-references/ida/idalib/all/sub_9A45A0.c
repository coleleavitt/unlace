__int64 __fastcall sub_9A45A0(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v35; // r15
  __int64 *v36; // r8
  _QWORD *v37; // rcx
  __int64 *v38; // rdx
  int i; // r10d
  __int64 v40; // rcx
  unsigned int v41; // edi
  _QWORD *v42; // rsi
  __int64 v43; // r9
  int v44; // edi
  int v45; // esi
  unsigned int v46; // edi
  unsigned int v47; // r10d
  __int64 *v48; // r11
  int v49; // r8d
  __int64 *v50; // r10
  __int64 v51; // rcx
  _QWORD *v52; // rcx
  _QWORD *v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // r11
  __int64 v60; // rdx
  int v61; // r8d
  _QWORD *k; // rdx
  __int64 *v63; // rax
  int v64; // r10d
  unsigned int v65; // esi
  _QWORD *v66; // rdx
  __int64 v67; // rdi
  int v68; // ecx
  int v69; // eax
  unsigned int v70; // r15d
  __int64 *v71; // rdi
  __int64 v72; // rdx
  _QWORD *n; // rdx
  unsigned int v74; // r11d
  unsigned int v75; // r10d
  unsigned int *v76; // [rsp+0h] [rbp-78h]
  unsigned int v78; // [rsp+14h] [rbp-64h]
  unsigned int v79; // [rsp+18h] [rbp-60h]
  unsigned int v80; // [rsp+18h] [rbp-60h]
  __int64 v81; // [rsp+18h] [rbp-60h]
  _QWORD *v82; // [rsp+20h] [rbp-58h]
  unsigned int j; // [rsp+28h] [rbp-50h]
  _QWORD *v84; // [rsp+28h] [rbp-50h]
  unsigned int m; // [rsp+30h] [rbp-48h]

  v6 = *(_QWORD *)(a2 + 8);
  v78 = *(_DWORD *)(a2 + 8) & 1;
  if ( (v6 & 1) == 0 )
  {
    if ( !v6 )
      BUG();
    if ( (*(_BYTE *)(v6 + 28) & 0x7F) != 0x4E )
      return sub_9A3DF0(a1, a2, a3, *(_QWORD *)(a2 + 8) & 1LL, a5, a6);
    return a1[1].m128i_i64[0];
  }
  v7 = (unsigned int *)(v6 & 0xFFFFFFFFFFFFFFFELL);
  v76 = v7 + 2;
  if ( (*(_BYTE *)(*((_QWORD *)v7 + 1) + 28LL) & 0x7F) == 0x4E )
    return a1[1].m128i_i64[0];
  v8 = (__int64)&v7[2 * *v7 + 2];
  if ( v76 != (unsigned int *)v8 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v8 - 8);
      v17 = *(_DWORD *)(v16 + 24);
      v18 = v17;
      if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 40 <= 6 )
      {
        v19 = sub_B73640(*(_QWORD *)(v8 - 8));
        if ( v19 )
          v18 = (unsigned __int64)sub_EEC8C0(v19) >> 32;
        else
          v18 = *(_DWORD *)(v16 + 24);
      }
      v20 = sub_EEE9A0(24, a1->m128i_i64[0], 8);
      v23 = *(_WORD *)v20 & 0xFE00;
      LOBYTE(v23) = -11;
      *(_WORD *)v20 = v23;
      if ( unk_2CD7484 )
        sub_EE9B50(245);
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
      result = sub_9A3DF0(a1, v20, (__int64)v14, v25, v21, v22);
      if ( v76 == (unsigned int *)v8 )
        return result;
    }
    v49 = v78;
    v50 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v50 && v13 == -8192 )
          v50 = v12;
        v22 = (unsigned int)(v49 + 1);
        v21 = v11 + v49;
        v11 = v10 & v21;
        v12 = &v26[2 * ((unsigned int)v10 & (unsigned int)v21)];
        v13 = *v12;
        if ( v20 == *v12 )
          goto LABEL_6;
        if ( v13 == -4096 )
          break;
        v49 = v22;
      }
      if ( v50 )
        v12 = v50;
    }
    v45 = *(_DWORD *)(v24 + 96) + 1;
    v21 = (unsigned int)(4 * v45);
    if ( (unsigned int)v21 >= 3 * (int)v25 )
    {
LABEL_13:
      v27 = (unsigned int)(2 * v25 - 1);
      v79 = *(_DWORD *)(v24 + 104);
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
      v31 = sub_22300B0(16LL * v30, 8, v29, 64, v21, v22);
      *(_QWORD *)(v24 + 88) = v31;
      if ( v26 )
      {
        v32 = *(unsigned int *)(v24 + 104);
        *(_QWORD *)(v24 + 96) = 0;
        v33 = (_QWORD *)v31;
        v34 = v32;
        v35 = 2LL * v79;
        v36 = &v26[v35];
        v37 = (_QWORD *)(v31 + 16 * v32);
        if ( (_QWORD *)v31 != v37 )
        {
          do
          {
            *v33 = -4096;
            v33 += 2;
          }
          while ( v37 != v33 );
        }
        v38 = v26;
        for ( i = v34 - 1; v36 != v38; v38 += 2 )
        {
          v40 = *v38;
          if ( *v38 != -8192 && v40 != -4096 )
          {
            if ( !v34 )
              goto LABEL_122;
            v41 = i & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
            v42 = (_QWORD *)(v31 + 16LL * v41);
            v43 = *v42;
            if ( v40 != *v42 && v43 != -4096 )
            {
              v82 = nullptr;
              for ( j = v78; ; ++j )
              {
                if ( !v82 )
                {
                  if ( v43 != -8192 )
                    v42 = nullptr;
                  v82 = v42;
                }
                v41 = i & (j + v41);
                v42 = (_QWORD *)(v31 + 16LL * v41);
                v43 = *v42;
                if ( v40 == *v42 )
                  break;
                if ( v43 == -4096 )
                {
                  if ( v82 )
                    v42 = v82;
                  break;
                }
              }
            }
            *v42 = v40;
            v42[1] = v38[1];
            ++*(_DWORD *)(v24 + 96);
          }
        }
        operator delete(v26, v35 * 8, 8);
        v31 = *(_QWORD *)(v24 + 88);
        v44 = *(_DWORD *)(v24 + 104);
        v45 = *(_DWORD *)(v24 + 96) + 1;
      }
      else
      {
        v51 = *(unsigned int *)(v24 + 104);
        *(_QWORD *)(v24 + 96) = 0;
        v44 = v51;
        v52 = (_QWORD *)(v31 + 16 * v51);
        if ( (_QWORD *)v31 != v52 )
        {
          v53 = (_QWORD *)v31;
          do
          {
            *v53 = -4096;
            v53 += 2;
          }
          while ( v52 != v53 );
        }
        v45 = v78;
      }
      if ( !v44 )
        goto LABEL_120;
      v21 = (unsigned int)(v44 - 1);
      v46 = v21 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
      v12 = (__int64 *)(v31 + 16LL * v46);
      v25 = *v12;
      if ( v20 == *v12 )
        goto LABEL_40;
      v47 = v78;
      v48 = nullptr;
      if ( v25 != -4096 )
      {
        while ( 1 )
        {
          if ( v25 != -8192 || v48 )
            v12 = v48;
          v74 = v47 + 1;
          v75 = v46 + v47;
          v46 = v21 & v75;
          v22 = v31 + 16LL * ((unsigned int)v21 & v75);
          v25 = *(_QWORD *)v22;
          if ( v20 == *(_QWORD *)v22 )
          {
            v12 = (__int64 *)(v31 + 16LL * ((unsigned int)v21 & v75));
            goto LABEL_40;
          }
          if ( v25 == -4096 )
            break;
          v47 = v74;
          v48 = v12;
          v12 = (__int64 *)v22;
        }
        if ( v12 )
          goto LABEL_39;
        v12 = (__int64 *)(v31 + 16LL * ((unsigned int)v21 & v75));
      }
    }
    else
    {
      v21 = (unsigned int)v25 >> 3;
      if ( (int)v25 - *(_DWORD *)(v24 + 100) - v45 > (unsigned int)v21 )
      {
LABEL_39:
        v25 = *v12;
LABEL_40:
        *(_DWORD *)(v24 + 96) = v45;
        if ( v25 != -4096 )
          --*(_DWORD *)(v24 + 100);
        goto LABEL_42;
      }
      v80 = *(_DWORD *)(v24 + 104);
      v54 = (((v10 >> 1) | v10) >> 2) | (v10 >> 1) | v10;
      v55 = (((v54 >> 4) | v54) >> 8) | (v54 >> 4) | v54;
      v56 = v55 >> 16;
      v57 = ((v55 >> 16) | v55) + 1;
      if ( (unsigned int)v57 < 0x40 )
        LODWORD(v57) = 64;
      *(_DWORD *)(v24 + 104) = v57;
      v58 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v57, 8, v56, 64, v21, v22);
      v59 = v58;
      *(_QWORD *)(v24 + 88) = v58;
      if ( v26 )
      {
        v60 = *(unsigned int *)(v24 + 104);
        *(_QWORD *)(v24 + 96) = 0;
        v61 = v60;
        v81 = 2LL * v80;
        for ( k = &v58[2 * v60]; k != v58; v58 += 2 )
          *v58 = -4096;
        v63 = v26;
        v64 = v61 - 1;
        do
        {
          v40 = *v63;
          if ( *v63 != -4096 && v40 != -8192 )
          {
            if ( !v61 )
            {
LABEL_122:
              *(_QWORD *)&dword_0 = v40;
              BUG();
            }
            v65 = v64 & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
            v66 = &v59[2 * v65];
            v67 = *v66;
            if ( v40 != *v66 && v67 != -4096 )
            {
              v84 = nullptr;
              for ( m = v78; ; ++m )
              {
                if ( v67 == -8192 )
                {
                  if ( v84 )
                    v66 = v84;
                  v84 = v66;
                }
                v65 = v64 & (m + v65);
                v66 = &v59[2 * v65];
                v67 = *v66;
                if ( v40 == *v66 )
                  break;
                if ( v67 == -4096 )
                {
                  if ( v84 )
                    v66 = v84;
                  break;
                }
              }
            }
            *v66 = v40;
            v66[1] = v63[1];
            ++*(_DWORD *)(v24 + 96);
          }
          v63 += 2;
        }
        while ( &v26[v81] != v63 );
        operator delete(v26, v81 * 8, 8);
        v59 = *(_QWORD **)(v24 + 88);
        v68 = *(_DWORD *)(v24 + 104);
        v45 = *(_DWORD *)(v24 + 96) + 1;
      }
      else
      {
        v72 = *(unsigned int *)(v24 + 104);
        *(_QWORD *)(v24 + 96) = 0;
        v68 = v72;
        for ( n = &v58[2 * v72]; n != v58; v58 += 2 )
          *v58 = -4096;
        v45 = v78;
      }
      if ( !v68 )
      {
LABEL_120:
        ++*(_DWORD *)(v24 + 96);
        BUG();
      }
      v69 = v68 - 1;
      v70 = (v68 - 1) & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
      v12 = &v59[2 * v70];
      v25 = *v12;
      if ( v20 == *v12 )
        goto LABEL_40;
      v21 = v78;
      v22 = 0;
      if ( v25 != -4096 )
      {
        while ( 1 )
        {
          if ( v22 || v25 != -8192 )
            v12 = (__int64 *)v22;
          v22 = (unsigned int)(v21 + 1);
          v21 = v69 & (v70 + (unsigned int)v21);
          v70 = v21;
          v71 = &v59[2 * (unsigned int)v21];
          v25 = *v71;
          if ( v20 == *v71 )
          {
            v12 = &v59[2 * (unsigned int)v21];
            goto LABEL_40;
          }
          if ( v25 == -4096 )
            break;
          LODWORD(v21) = v22;
          v22 = (__int64)v12;
          v12 = v71;
        }
        if ( v12 )
          goto LABEL_39;
        v12 = &v59[2 * (unsigned int)v21];
      }
    }
    *(_DWORD *)(v24 + 96) = v45;
LABEL_42:
    *v12 = v20;
    v12[1] = 0;
    goto LABEL_6;
  }
  return 0;
}
