__int64 __fastcall sub_987EC0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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
  __int64 v44; // rsi
  int v45; // r10d
  __int64 v46; // r8
  _QWORD *v47; // rcx
  _QWORD *v48; // rdx
  __int64 v49; // rdx
  int i; // r12d
  __int64 v51; // rcx
  unsigned int v52; // edi
  __int64 v53; // r9
  __int64 v54; // r11
  __m128i v55; // xmm1
  int v56; // esi
  int v57; // r8d
  unsigned int v58; // edi
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rsi
  int v64; // r10d
  __int64 v65; // r8
  _QWORD *v66; // rcx
  _QWORD *v67; // rdx
  __int64 v68; // rdx
  int v69; // r15d
  __int64 v70; // rcx
  unsigned int v71; // edi
  __int64 v72; // r9
  __int64 v73; // r11
  __m128i v74; // xmm2
  int v75; // esi
  int v76; // edi
  unsigned int v77; // r12d
  __int64 *v78; // r8
  int v79; // r9d
  __int64 v80; // rdx
  _QWORD *v81; // rcx
  _QWORD *v82; // rdx
  __int64 v83; // rdx
  _QWORD *v84; // rcx
  _QWORD *v85; // rdx
  int v86; // r15d
  __int64 v87; // r14
  __int64 v88; // r14
  __int64 *v89; // r9
  int v90; // r10d
  int v91; // [rsp+4h] [rbp-44h]

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
      v59 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v60 = ((v59 >> 16) | v59) + 1;
      if ( (unsigned int)v60 < 0x40 )
        LODWORD(v60) = 64;
      *((_DWORD *)a1 + 6) = v60;
      v61 = sub_22300B0(24LL * (unsigned int)v60, 8, 64, a4, a5, a6);
      a1[1] = v61;
      if ( v9 )
      {
        v62 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v63 = 24 * v8;
        v64 = v62;
        v65 = v9 + 24 * v8;
        v66 = (_QWORD *)(v61 + 24 * v62);
        v67 = (_QWORD *)v61;
        if ( (_QWORD *)v61 != v66 )
        {
          do
          {
            *v67 = -4096;
            v67 += 3;
          }
          while ( v66 != v67 );
        }
        v68 = v9;
        v69 = v64 - 1;
        do
        {
          v70 = *(_QWORD *)v68;
          if ( *(_QWORD *)v68 != -8192 && v70 != -4096 )
          {
            if ( !v64 )
            {
              *(_QWORD *)&dword_0 = *(_QWORD *)v68;
              BUG();
            }
            v71 = v69 & (((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4));
            v72 = v61 + 24LL * v71;
            v73 = *(_QWORD *)v72;
            if ( v70 != *(_QWORD *)v72 && v73 != -4096 )
            {
              v91 = 1;
              v88 = 0;
              while ( 1 )
              {
                if ( !v88 && v73 == -8192 )
                  v88 = v72;
                v71 = v69 & (v91 + v71);
                v72 = v61 + 24LL * v71;
                v73 = *(_QWORD *)v72;
                if ( v70 == *(_QWORD *)v72 )
                  break;
                if ( v73 == -4096 )
                {
                  if ( v88 )
                    v72 = v88;
                  break;
                }
                ++v91;
              }
            }
            v74 = _mm_loadu_si128((const __m128i *)(v68 + 8));
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)v72 = v70;
            *(__m128i *)(v72 + 8) = v74;
          }
          v68 += 24;
        }
        while ( v65 != v68 );
        operator delete(v9, v63, 8);
        v61 = a1[1];
        v75 = *((_DWORD *)a1 + 6);
        LODWORD(a4) = *((_DWORD *)a1 + 4) + 1;
      }
      else
      {
        v83 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v75 = v83;
        v84 = (_QWORD *)(v61 + 24 * v83);
        if ( (_QWORD *)v61 != v84 )
        {
          v85 = (_QWORD *)v61;
          do
          {
            *v85 = -4096;
            v85 += 3;
          }
          while ( v84 != v85 );
        }
        LODWORD(a4) = 1;
      }
      if ( v75 )
      {
        v76 = v75 - 1;
        v77 = (v75 - 1) & v13;
        v15 = (__int64 *)(v61 + 24LL * v77);
        v20 = *v15;
        if ( a2 != *v15 )
        {
          if ( v20 != -4096 )
          {
            v78 = (__int64 *)(v61 + 24LL * v77);
            v79 = 1;
            v15 = nullptr;
            while ( 1 )
            {
              if ( v20 == -8192 && !v15 )
                v15 = v78;
              v77 = v76 & (v79 + v77);
              v78 = (__int64 *)(v61 + 24LL * v77);
              v20 = *v78;
              if ( a2 == *v78 )
              {
                v15 = (__int64 *)(v61 + 24LL * v77);
                goto LABEL_10;
              }
              if ( v20 == -4096 )
                break;
              ++v79;
            }
            if ( v15 )
              goto LABEL_9;
            v15 = (__int64 *)(v61 + 24LL * v77);
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
    v42 = sub_22300B0(24LL * (unsigned int)v41, 8, 64, a4, a5, a6);
    a1[1] = v42;
    if ( v9 )
    {
      v43 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v44 = 24 * v8;
      v45 = v43;
      v46 = v9 + 24 * v8;
      v47 = (_QWORD *)(v42 + 24 * v43);
      v48 = (_QWORD *)v42;
      if ( (_QWORD *)v42 != v47 )
      {
        do
        {
          *v48 = -4096;
          v48 += 3;
        }
        while ( v47 != v48 );
      }
      v49 = v9;
      for ( i = v45 - 1; v46 != v49; v49 += 24 )
      {
        v51 = *(_QWORD *)v49;
        if ( *(_QWORD *)v49 != -8192 && v51 != -4096 )
        {
          if ( !v45 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)v49;
            BUG();
          }
          v52 = i & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
          v53 = v42 + 24LL * v52;
          v54 = *(_QWORD *)v53;
          if ( *(_QWORD *)v53 != v51 )
          {
            v86 = 1;
            v87 = 0;
            if ( v54 != -4096 )
            {
              while ( 1 )
              {
                if ( !v87 && v54 == -8192 )
                  v87 = v53;
                v52 = i & (v86 + v52);
                v53 = v42 + 24LL * v52;
                v54 = *(_QWORD *)v53;
                if ( v51 == *(_QWORD *)v53 )
                  break;
                if ( v54 == -4096 )
                {
                  if ( v87 )
                    v53 = v87;
                  break;
                }
                ++v86;
              }
            }
          }
          v55 = _mm_loadu_si128((const __m128i *)(v49 + 8));
          ++*((_DWORD *)a1 + 4);
          *(_QWORD *)v53 = v51;
          *(__m128i *)(v53 + 8) = v55;
        }
      }
      operator delete(v9, v44, 8);
      v42 = a1[1];
      v56 = *((_DWORD *)a1 + 6);
      LODWORD(a4) = *((_DWORD *)a1 + 4) + 1;
    }
    else
    {
      v80 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v56 = v80;
      v81 = (_QWORD *)(v42 + 24 * v80);
      if ( (_QWORD *)v42 != v81 )
      {
        v82 = (_QWORD *)v42;
        do
        {
          *v82 = -4096;
          v82 += 3;
        }
        while ( v81 != v82 );
      }
      LODWORD(a4) = 1;
    }
    if ( v56 )
    {
      v57 = v56 - 1;
      v58 = (v56 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v15 = (__int64 *)(v42 + 24LL * v58);
      v20 = *v15;
      if ( a2 != *v15 )
      {
        if ( v20 != -4096 )
        {
          v89 = (__int64 *)(v42 + 24LL * (v57 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
          v90 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v20 == -8192 && !v15 )
              v15 = v89;
            v58 = v57 & (v90 + v58);
            v89 = (__int64 *)(v42 + 24LL * v58);
            v20 = *v89;
            if ( a2 == *v89 )
            {
              v15 = (__int64 *)(v42 + 24LL * v58);
              goto LABEL_10;
            }
            if ( v20 == -4096 )
              break;
            ++v90;
          }
          if ( v15 )
            goto LABEL_9;
          v15 = (__int64 *)(v42 + 24LL * v58);
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
        v25 = sub_B75A50(a2, 0);
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
            result = sub_9878B0(*a1, a2, v26, v27, v28);
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
              if ( !(unsigned __int8)sub_B8EBA0(v36) )
                goto LABEL_20;
              result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))sub_989930)(
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
            result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))sub_987380)(
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
              result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))sub_987800)(
                         *a1,
                         a2,
                         v30,
                         v31,
                         v32);
              goto LABEL_24;
            }
            if ( !memcmp(v23 + 4, "dispatch_once", 0xDu) )
            {
              result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))sub_987A10)(
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
