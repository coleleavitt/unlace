__int64 __fastcall sub_964180(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  int v13; // r12d
  unsigned int v14; // ecx
  __int64 *v15; // rdx
  __int64 v16; // rax
  _BYTE *v17; // r12
  __int64 result; // rax
  int v19; // edi
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned int *v23; // r14
  unsigned __int64 v24; // r13
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // r10d
  __int64 v45; // r8
  _QWORD *v46; // rcx
  _QWORD *v47; // rdx
  __int64 v48; // rdx
  int i; // r12d
  __int64 v50; // rcx
  unsigned int v51; // edi
  __int64 v52; // r9
  __int64 v53; // r11
  __m128i v54; // xmm1
  int v55; // esi
  int v56; // r8d
  unsigned int v57; // edi
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  int v62; // r10d
  __int64 v63; // r8
  _QWORD *v64; // rcx
  _QWORD *v65; // rdx
  __int64 v66; // rdx
  int v67; // r15d
  __int64 v68; // rcx
  unsigned int v69; // edi
  __int64 v70; // r9
  __int64 v71; // r11
  __m128i v72; // xmm2
  int v73; // esi
  int v74; // edi
  unsigned int v75; // r12d
  __int64 *v76; // r8
  int v77; // r9d
  __int64 v78; // rdx
  _QWORD *v79; // rcx
  _QWORD *v80; // rdx
  __int64 v81; // rdx
  _QWORD *v82; // rcx
  _QWORD *v83; // rdx
  int v84; // r15d
  __int64 v85; // r14
  __int64 v86; // r14
  __int64 *v87; // r9
  int v88; // r10d
  int v89; // [rsp+4h] [rbp-44h]

  v8 = *((unsigned int *)a1 + 6);
  v9 = a1[1];
  if ( !(_DWORD)v8 )
    goto LABEL_51;
  v10 = a2;
  v11 = a2;
  v12 = (unsigned int)(v8 - 1);
  v13 = (v11 >> 9) ^ (v10 >> 4);
  v14 = v12 & v13;
  v15 = (__int64 *)(v9 + 24LL * ((unsigned int)v12 & v13));
  v16 = *v15;
  if ( a2 != *v15 )
  {
    v19 = 1;
    a5 = nullptr;
    if ( v16 != -4096 )
    {
      while ( 1 )
      {
        if ( v16 == -8192 && !a5 )
          a5 = v15;
        a6 = (unsigned int)(v19 + 1);
        v14 = v12 & (v19 + v14);
        v15 = (__int64 *)(v9 + 24LL * v14);
        v16 = *v15;
        if ( a2 == *v15 )
          goto LABEL_3;
        if ( v16 == -4096 )
          break;
        ++v19;
      }
      if ( a5 )
        v15 = a5;
    }
    a4 = (unsigned int)(*((_DWORD *)a1 + 4) + 1);
    if ( 4 * (int)a4 < (unsigned int)(3 * v8) )
    {
      if ( (int)v8 - *((_DWORD *)a1 + 5) - (int)a4 > (unsigned int)v8 >> 3 )
      {
LABEL_9:
        v20 = *v15;
        goto LABEL_10;
      }
      v58 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v59 = ((v58 >> 16) | v58) + 1;
      if ( (unsigned int)v59 < 0x40 )
        LODWORD(v59) = 64;
      *((_DWORD *)a1 + 6) = v59;
      v60 = sub_220C370(24LL * (unsigned int)v59, 8, 64, a4, a5, a6);
      a1[1] = v60;
      if ( v9 )
      {
        v61 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v62 = v61;
        v63 = v9 + 24 * v8;
        v64 = (_QWORD *)(v60 + 24 * v61);
        v65 = (_QWORD *)v60;
        if ( (_QWORD *)v60 != v64 )
        {
          do
          {
            *v65 = -4096;
            v65 += 3;
          }
          while ( v64 != v65 );
        }
        v66 = v9;
        v67 = v62 - 1;
        do
        {
          v68 = *(_QWORD *)v66;
          if ( *(_QWORD *)v66 != -8192 && v68 != -4096 )
          {
            if ( !v62 )
            {
              *(_QWORD *)&dword_0 = *(_QWORD *)v66;
              BUG();
            }
            v69 = v67 & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
            v70 = v60 + 24LL * v69;
            v71 = *(_QWORD *)v70;
            if ( v68 != *(_QWORD *)v70 && v71 != -4096 )
            {
              v89 = 1;
              v86 = 0;
              while ( 1 )
              {
                if ( !v86 && v71 == -8192 )
                  v86 = v70;
                v69 = v67 & (v89 + v69);
                v70 = v60 + 24LL * v69;
                v71 = *(_QWORD *)v70;
                if ( v68 == *(_QWORD *)v70 )
                  break;
                if ( v71 == -4096 )
                {
                  if ( v86 )
                    v70 = v86;
                  break;
                }
                ++v89;
              }
            }
            v72 = _mm_loadu_si128((const __m128i *)(v66 + 8));
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)v70 = v68;
            *(__m128i *)(v70 + 8) = v72;
          }
          v66 += 24;
        }
        while ( v63 != v66 );
        operator delete();
        v60 = a1[1];
        v73 = *((_DWORD *)a1 + 6);
        LODWORD(a4) = *((_DWORD *)a1 + 4) + 1;
      }
      else
      {
        v81 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v73 = v81;
        v82 = (_QWORD *)(v60 + 24 * v81);
        if ( (_QWORD *)v60 != v82 )
        {
          v83 = (_QWORD *)v60;
          do
          {
            *v83 = -4096;
            v83 += 3;
          }
          while ( v82 != v83 );
        }
        LODWORD(a4) = 1;
      }
      if ( v73 )
      {
        v74 = v73 - 1;
        v75 = (v73 - 1) & v13;
        v15 = (__int64 *)(v60 + 24LL * v75);
        v20 = *v15;
        if ( a2 != *v15 )
        {
          if ( v20 != -4096 )
          {
            v76 = (__int64 *)(v60 + 24LL * v75);
            v77 = 1;
            v15 = nullptr;
            while ( 1 )
            {
              if ( v20 == -8192 && !v15 )
                v15 = v76;
              v75 = v74 & (v77 + v75);
              v76 = (__int64 *)(v60 + 24LL * v75);
              v20 = *v76;
              if ( a2 == *v76 )
              {
                v15 = (__int64 *)(v60 + 24LL * v75);
                goto LABEL_10;
              }
              if ( v20 == -4096 )
                break;
              ++v77;
            }
            if ( v15 )
              goto LABEL_9;
            v15 = (__int64 *)(v60 + 24LL * v75);
          }
LABEL_67:
          *((_DWORD *)a1 + 4) = a4;
LABEL_12:
          *v15 = a2;
          v17 = v15 + 1;
          *(_OWORD *)(v15 + 1) = 0;
          *((_BYTE *)v15 + 16) = 0;
          goto LABEL_13;
        }
        goto LABEL_10;
      }
      goto LABEL_141;
    }
LABEL_51:
    v40 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v8 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
    v41 = ((v40 >> 16) | v40) + 1;
    if ( (unsigned int)v41 < 0x40 )
      LODWORD(v41) = 64;
    *((_DWORD *)a1 + 6) = v41;
    v42 = sub_220C370(24LL * (unsigned int)v41, 8, 64, a4, a5, a6);
    a1[1] = v42;
    if ( v9 )
    {
      v43 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v44 = v43;
      v45 = v9 + 24 * v8;
      v46 = (_QWORD *)(v42 + 24 * v43);
      v47 = (_QWORD *)v42;
      if ( (_QWORD *)v42 != v46 )
      {
        do
        {
          *v47 = -4096;
          v47 += 3;
        }
        while ( v46 != v47 );
      }
      v48 = v9;
      for ( i = v44 - 1; v45 != v48; v48 += 24 )
      {
        v50 = *(_QWORD *)v48;
        if ( *(_QWORD *)v48 != -8192 && v50 != -4096 )
        {
          if ( !v44 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)v48;
            BUG();
          }
          v51 = i & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
          v52 = v42 + 24LL * v51;
          v53 = *(_QWORD *)v52;
          if ( *(_QWORD *)v52 != v50 )
          {
            v84 = 1;
            v85 = 0;
            if ( v53 != -4096 )
            {
              while ( 1 )
              {
                if ( !v85 && v53 == -8192 )
                  v85 = v52;
                v51 = i & (v84 + v51);
                v52 = v42 + 24LL * v51;
                v53 = *(_QWORD *)v52;
                if ( v50 == *(_QWORD *)v52 )
                  break;
                if ( v53 == -4096 )
                {
                  if ( v85 )
                    v52 = v85;
                  break;
                }
                ++v84;
              }
            }
          }
          v54 = _mm_loadu_si128((const __m128i *)(v48 + 8));
          ++*((_DWORD *)a1 + 4);
          *(_QWORD *)v52 = v50;
          *(__m128i *)(v52 + 8) = v54;
        }
      }
      operator delete();
      v42 = a1[1];
      v55 = *((_DWORD *)a1 + 6);
      LODWORD(a4) = *((_DWORD *)a1 + 4) + 1;
    }
    else
    {
      v78 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v55 = v78;
      v79 = (_QWORD *)(v42 + 24 * v78);
      if ( (_QWORD *)v42 != v79 )
      {
        v80 = (_QWORD *)v42;
        do
        {
          *v80 = -4096;
          v80 += 3;
        }
        while ( v79 != v80 );
      }
      LODWORD(a4) = 1;
    }
    if ( v55 )
    {
      v56 = v55 - 1;
      v57 = (v55 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v15 = (__int64 *)(v42 + 24LL * v57);
      v20 = *v15;
      if ( a2 != *v15 )
      {
        if ( v20 != -4096 )
        {
          v87 = (__int64 *)(v42 + 24LL * (v56 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
          v88 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v20 == -8192 && !v15 )
              v15 = v87;
            v57 = v56 & (v88 + v57);
            v87 = (__int64 *)(v42 + 24LL * v57);
            v20 = *v87;
            if ( a2 == *v87 )
            {
              v15 = (__int64 *)(v42 + 24LL * v57);
              goto LABEL_10;
            }
            if ( v20 == -4096 )
              break;
            ++v88;
          }
          if ( v15 )
            goto LABEL_9;
          v15 = (__int64 *)(v42 + 24LL * v57);
        }
        goto LABEL_67;
      }
LABEL_10:
      *((_DWORD *)a1 + 4) = a4;
      if ( v20 != -4096 )
        --*((_DWORD *)a1 + 5);
      goto LABEL_12;
    }
LABEL_141:
    ++*((_DWORD *)a1 + 4);
    BUG();
  }
LABEL_3:
  v17 = v15 + 1;
  if ( *((_BYTE *)v15 + 16) )
    return v15[1];
LABEL_13:
  v21 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)v17 = 0;
  result = 0;
  v17[8] = 1;
  if ( (v21 & 7) == 0 )
  {
    v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v22 )
    {
      v23 = *(unsigned int **)(v22 + 16);
      v24 = *v23;
      if ( *v23 )
      {
        v25 = sub_B51D10(a2, 0);
        if ( v25 )
        {
          if ( v25 <= 0x27E )
          {
            if ( v25 < 0x27D && v25 != 134 )
              goto LABEL_20;
            goto LABEL_23;
          }
          if ( v25 - 965 <= 1 )
          {
LABEL_23:
            result = sub_963B70(*a1, a2, v26, v27, v28);
            goto LABEL_24;
          }
        }
        else
        {
          if ( v24 <= 0x15 )
          {
            if ( v24 == 9 )
            {
              if ( *((_QWORD *)v23 + 2) != 0x636E6F5F6C6C6163LL || *((_BYTE *)v23 + 24) != 101 )
                goto LABEL_20;
              v36 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
                v36 = (_QWORD *)*v36;
              if ( !(unsigned __int8)sub_B6AE60(v36) )
                goto LABEL_20;
              result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))sub_965BF0)(
                         *a1,
                         a2,
                         v37,
                         v38,
                         v39);
LABEL_24:
              v17[8] = 1;
              *(_QWORD *)v17 = result;
              return result;
            }
          }
          else if ( !(*((_QWORD *)v23 + 2) ^ 0x63696D6F7441534FLL | *((_QWORD *)v23 + 3) ^ 0x41657261706D6F43LL)
                 && v23[8] == 2001953902
                 && *((_WORD *)v23 + 18) == 28769
                 || v24 > 0x18
                 && !(*((_QWORD *)v23 + 2) ^ 0x6F74615F636A626FLL | *((_QWORD *)v23 + 3) ^ 0x61706D6F4363696DLL)
                 && *((_QWORD *)v23 + 4) == 0x617753646E416572LL
                 && *((_BYTE *)v23 + 40) == 112 )
          {
            result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))sub_963640)(
                       *a1,
                       a2,
                       0,
                       v27,
                       v28);
            goto LABEL_24;
          }
          if ( v24 == 13 )
          {
            if ( !memcmp(v23 + 4, "dispatch_sync", 0xDu) )
            {
              result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))sub_963AC0)(
                         *a1,
                         a2,
                         v30,
                         v31,
                         v32);
              goto LABEL_24;
            }
            if ( !memcmp(v23 + 4, "dispatch_once", 0xDu) )
            {
              result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))sub_963CD0)(
                         *a1,
                         a2,
                         v33,
                         v34,
                         v35);
              goto LABEL_24;
            }
          }
        }
LABEL_20:
        v29 = a1[4];
        if ( v29 )
        {
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 16LL))(v29, a2);
          v17[8] = 1;
          *(_QWORD *)v17 = result;
        }
        else
        {
          return *(_QWORD *)v17;
        }
      }
    }
  }
  return result;
}

