__int64 __fastcall sub_20CA1B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // r12
  unsigned int v10; // r15d
  __int64 *v11; // r13
  unsigned __int64 v12; // rsi
  unsigned int v13; // r14d
  unsigned int v14; // ecx
  __int64 *v15; // rdx
  int v16; // edx
  __int64 v17; // r8
  int v18; // esi
  unsigned int v19; // ecx
  __int64 *v20; // rdx
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rsi
  int v27; // r10d
  __int64 *v28; // r9
  _QWORD *v29; // rcx
  __int64 *v30; // rdx
  int i; // r15d
  __int64 v32; // rcx
  unsigned int v33; // r8d
  _QWORD *v34; // rdi
  __int64 v35; // r11
  int v36; // esi
  int v37; // r8d
  unsigned int v38; // edi
  __int64 v39; // rsi
  int v40; // edi
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  int v45; // r9d
  __int64 v46; // r15
  _QWORD *v47; // rcx
  __int64 *v48; // rdx
  int v49; // r11d
  __int64 v50; // rcx
  unsigned int v51; // edi
  _QWORD *v52; // rsi
  __int64 v53; // r10
  int v54; // esi
  int v55; // edi
  unsigned int v56; // r14d
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  _QWORD *v62; // rdx
  int v63; // edx
  int v64; // r10d
  __int64 v65; // r9
  _QWORD *v66; // r14
  __int64 *v67; // r9
  int v68; // r10d
  __int64 *v69; // r8
  int v70; // r9d
  int v71; // [rsp+0h] [rbp-50h]
  _QWORD *v72; // [rsp+0h] [rbp-50h]
  int v73; // [rsp+8h] [rbp-48h]

  result = **(_QWORD **)(a1 + 8);
  if ( a2 )
  {
    *(_BYTE *)(a1 + 7) |= 0x10u;
    v9 = *(_QWORD *)result;
    v10 = *(_DWORD *)(*(_QWORD *)result + 176LL);
    v11 = *(__int64 **)(*(_QWORD *)result + 160LL);
    if ( !v10 )
      goto LABEL_10;
    v12 = v10 - 1;
    v13 = ((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4);
    v14 = v12 & v13;
    v15 = &v11[2 * ((unsigned int)v12 & v13)];
    result = *v15;
    if ( a1 == *v15 )
    {
LABEL_4:
      v15[1] = a2;
      return result;
    }
    v40 = 1;
    a5 = nullptr;
    if ( result != -4096 )
    {
      while ( 1 )
      {
        if ( result == -8192 && !a5 )
          a5 = v15;
        a6 = (unsigned int)(v40 + 1);
        v14 = v12 & (v40 + v14);
        v15 = &v11[2 * v14];
        result = *v15;
        if ( a1 == *v15 )
          goto LABEL_4;
        if ( result == -4096 )
          break;
        ++v40;
      }
      if ( a5 )
        v15 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(v9 + 168) + 1);
    if ( 4 * (int)a4 < 3 * v10 )
    {
      result = v10 - *(_DWORD *)(v9 + 172) - (unsigned int)a4;
      if ( (unsigned int)result > v10 >> 3 )
      {
LABEL_31:
        v39 = *v15;
        goto LABEL_25;
      }
      v41 = (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2);
      v42 = ((((v41 >> 8) | v41) >> 16) | (v41 >> 8) | v41) + 1;
      if ( (unsigned int)v42 < 0x40 )
        LODWORD(v42) = 64;
      *(_DWORD *)(v9 + 176) = v42;
      result = sub_22300B0(16LL * (unsigned int)v42, 8, 64, a4, a5, a6);
      *(_QWORD *)(v9 + 160) = result;
      if ( v11 )
      {
        v43 = *(unsigned int *)(v9 + 176);
        v44 = (_QWORD *)result;
        *(_QWORD *)(v9 + 168) = 0;
        v45 = v43;
        v46 = 2LL * v10;
        v47 = (_QWORD *)(result + 16 * v43);
        if ( (_QWORD *)result != v47 )
        {
          do
          {
            *v44 = -4096;
            v44 += 2;
          }
          while ( v47 != v44 );
        }
        v48 = v11;
        v49 = v45 - 1;
        do
        {
          v50 = *v48;
          if ( *v48 != -4096 && v50 != -8192 )
          {
            if ( !v45 )
            {
              *(_QWORD *)&dword_0 = *v48;
              BUG();
            }
            v51 = v49 & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
            v52 = (_QWORD *)(result + 16LL * v51);
            v53 = *v52;
            if ( v50 != *v52 && v53 != -4096 )
            {
              v73 = 1;
              v72 = nullptr;
              while ( 1 )
              {
                if ( v53 == -8192 )
                {
                  if ( v72 )
                    v52 = v72;
                  v72 = v52;
                }
                v51 = v49 & (v73 + v51);
                v52 = (_QWORD *)(result + 16LL * v51);
                v53 = *v52;
                if ( v50 == *v52 )
                  break;
                if ( v53 == -4096 )
                {
                  if ( v72 )
                    v52 = v72;
                  break;
                }
                ++v73;
              }
            }
            *v52 = v50;
            v52[1] = v48[1];
            ++*(_DWORD *)(v9 + 168);
          }
          v48 += 2;
        }
        while ( &v11[v46] != v48 );
        operator delete(v11, v46 * 8, 8);
        result = *(_QWORD *)(v9 + 160);
        v54 = *(_DWORD *)(v9 + 176);
        LODWORD(a4) = *(_DWORD *)(v9 + 168) + 1;
      }
      else
      {
        v60 = *(unsigned int *)(v9 + 176);
        *(_QWORD *)(v9 + 168) = 0;
        v54 = v60;
        v61 = (_QWORD *)(result + 16 * v60);
        if ( (_QWORD *)result != v61 )
        {
          v62 = (_QWORD *)result;
          do
          {
            *v62 = -4096;
            v62 += 2;
          }
          while ( v61 != v62 );
        }
        LODWORD(a4) = 1;
      }
      if ( v54 )
      {
        v55 = v54 - 1;
        v56 = (v54 - 1) & v13;
        v15 = (__int64 *)(result + 16LL * v56);
        v39 = *v15;
        if ( a1 == *v15 )
        {
LABEL_25:
          *(_DWORD *)(v9 + 168) = a4;
          if ( v39 != -4096 )
            --*(_DWORD *)(v9 + 172);
          goto LABEL_27;
        }
        if ( v39 != -4096 )
        {
          v69 = (__int64 *)(result + 16LL * v56);
          v70 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( !v15 && v39 == -8192 )
              v15 = v69;
            v56 = v55 & (v70 + v56);
            v69 = (__int64 *)(result + 16LL * v56);
            v39 = *v69;
            if ( a1 == *v69 )
            {
              v15 = (__int64 *)(result + 16LL * v56);
              goto LABEL_25;
            }
            if ( v39 == -4096 )
              break;
            ++v70;
          }
          if ( v15 )
            goto LABEL_31;
          v15 = (__int64 *)(result + 16LL * v56);
        }
LABEL_48:
        *(_DWORD *)(v9 + 168) = a4;
LABEL_27:
        *v15 = a1;
        v15[1] = 0;
        goto LABEL_4;
      }
    }
    else
    {
LABEL_10:
      v22 = (((((((2 * v10 - 1) | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 2)
              | (2 * v10 - 1)
              | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 4)
            | (((2 * v10 - 1) | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 2)
            | (2 * v10 - 1)
            | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 8)
          | (((((2 * v10 - 1) | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 2)
            | (2 * v10 - 1)
            | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 4)
          | (((2 * v10 - 1) | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 2)
          | (2 * v10 - 1)
          | ((unsigned __int64)(2 * v10 - 1) >> 1);
      v23 = ((v22 >> 16) | v22) + 1;
      if ( (unsigned int)v23 < 0x40 )
        LODWORD(v23) = 64;
      *(_DWORD *)(v9 + 176) = v23;
      result = sub_22300B0(16LL * (unsigned int)v23, 8, 64, a4, a5, a6);
      *(_QWORD *)(v9 + 160) = result;
      if ( v11 )
      {
        v24 = *(unsigned int *)(v9 + 176);
        v25 = (_QWORD *)result;
        *(_QWORD *)(v9 + 168) = 0;
        v26 = 2LL * v10;
        v27 = v24;
        v28 = &v11[v26];
        v29 = (_QWORD *)(result + 16 * v24);
        if ( (_QWORD *)result != v29 )
        {
          do
          {
            *v25 = -4096;
            v25 += 2;
          }
          while ( v29 != v25 );
        }
        v30 = v11;
        for ( i = v27 - 1; v28 != v30; v30 += 2 )
        {
          v32 = *v30;
          if ( *v30 != -8192 && v32 != -4096 )
          {
            if ( !v27 )
            {
              *(_QWORD *)&dword_0 = *v30;
              BUG();
            }
            v33 = i & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
            v34 = (_QWORD *)(result + 16LL * v33);
            v35 = *v34;
            if ( *v34 != v32 && v35 != -4096 )
            {
              v71 = 1;
              v66 = nullptr;
              while ( 1 )
              {
                if ( v35 == -8192 && !v66 )
                  v66 = v34;
                v33 = i & (v71 + v33);
                v34 = (_QWORD *)(result + 16LL * v33);
                v35 = *v34;
                if ( v32 == *v34 )
                  break;
                if ( v35 == -4096 )
                {
                  if ( v66 )
                    v34 = v66;
                  break;
                }
                ++v71;
              }
            }
            *v34 = v32;
            v34[1] = v30[1];
            ++*(_DWORD *)(v9 + 168);
          }
        }
        operator delete(v11, v26 * 8, 8);
        result = *(_QWORD *)(v9 + 160);
        v36 = *(_DWORD *)(v9 + 176);
        LODWORD(a4) = *(_DWORD *)(v9 + 168) + 1;
      }
      else
      {
        v57 = *(unsigned int *)(v9 + 176);
        *(_QWORD *)(v9 + 168) = 0;
        v36 = v57;
        v58 = (_QWORD *)(result + 16 * v57);
        if ( (_QWORD *)result != v58 )
        {
          v59 = (_QWORD *)result;
          do
          {
            *v59 = -4096;
            v59 += 2;
          }
          while ( v58 != v59 );
        }
        LODWORD(a4) = 1;
      }
      if ( v36 )
      {
        v37 = v36 - 1;
        v38 = (v36 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
        v15 = (__int64 *)(result + 16LL * v38);
        v39 = *v15;
        if ( a1 == *v15 )
          goto LABEL_25;
        if ( v39 != -4096 )
        {
          v67 = (__int64 *)(result + 16LL * (v37 & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4))));
          v68 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v39 == -8192 && !v15 )
              v15 = v67;
            v38 = v37 & (v68 + v38);
            v67 = (__int64 *)(result + 16LL * v38);
            v39 = *v67;
            if ( a1 == *v67 )
            {
              v15 = (__int64 *)(result + 16LL * v38);
              goto LABEL_25;
            }
            if ( v39 == -4096 )
              break;
            ++v68;
          }
          if ( v15 )
            goto LABEL_31;
          v15 = (__int64 *)(result + 16LL * v38);
        }
        goto LABEL_48;
      }
    }
    ++*(_DWORD *)(v9 + 168);
    BUG();
  }
  if ( (*(_BYTE *)(a1 + 7) & 0x10) != 0 )
  {
    result = *(_QWORD *)result;
    v16 = *(_DWORD *)(result + 176);
    v17 = *(_QWORD *)(result + 160);
    if ( v16 )
    {
      v18 = v16 - 1;
      v19 = (v16 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
      v20 = (__int64 *)(v17 + 16LL * v19);
      v21 = *v20;
      if ( *v20 != a1 )
      {
        v63 = 1;
        if ( v21 == -4096 )
          goto LABEL_6;
        while ( 1 )
        {
          v64 = v63 + 1;
          v19 = v18 & (v63 + v19);
          v20 = (__int64 *)(v17 + 16LL * v19);
          v65 = *v20;
          if ( a1 == *v20 )
            break;
          v63 = v64;
          if ( v65 == -4096 )
            goto LABEL_6;
        }
      }
      *v20 = -8192;
      --*(_DWORD *)(result + 168);
      ++*(_DWORD *)(result + 172);
    }
  }
LABEL_6:
  *(_BYTE *)(a1 + 7) &= ~0x10u;
  return result;
}
