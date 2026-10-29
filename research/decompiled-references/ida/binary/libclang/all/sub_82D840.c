__int64 __fastcall sub_82D840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // ebp
  unsigned __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r12
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // r13
  int v22; // ecx
  unsigned int v23; // edx
  __int64 *v24; // r14
  unsigned __int64 v25; // rsi
  int v26; // r10d
  __int64 v27; // r8
  __int64 *v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  int v32; // edi
  __int64 v33; // rdx
  unsigned __int8 **v34; // rax
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rcx
  __int64 *v41; // rdi
  __int64 *i; // rax
  __int64 v43; // rdx
  int v44; // r8d
  int v45; // r8d
  __int64 v46; // r11
  unsigned int v47; // ecx
  __int64 *v48; // r9
  __int64 v49; // r10
  int v50; // eax
  int v51; // esi
  __int64 v52; // r8
  unsigned int v53; // edx
  __int64 v54; // rcx
  int v55; // r10d
  __int64 *v56; // r9
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 *v62; // r11
  __int64 *v63; // rax
  int v64; // edi
  int v65; // edi
  __int64 v66; // r10
  unsigned int v67; // ecx
  __int64 *v68; // r8
  __int64 v69; // r9
  int v70; // eax
  int v71; // ecx
  __int64 v72; // rsi
  int v73; // r9d
  __int64 *v74; // r8
  unsigned int v75; // r15d
  __int64 v76; // rdx
  __int64 *v77; // r15
  unsigned int v78; // [rsp+0h] [rbp-58h]
  unsigned int v79; // [rsp+0h] [rbp-58h]
  unsigned int v80; // [rsp+0h] [rbp-58h]
  __int64 *v81; // [rsp+0h] [rbp-58h]
  int v82; // [rsp+0h] [rbp-58h]
  int v83; // [rsp+8h] [rbp-50h]
  __int64 v84[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = *(_QWORD *)(**(_QWORD **)(a5 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 7) != 0 || (v9 & 8) != 0 )
    v8 = sub_B0CF30(**(_QWORD **)(a5 + 16), a2);
  v10 = sub_B0E910(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL));
  v11 = v10;
  if ( (*(_BYTE *)(a5 + 12) & 1) != 0 )
  {
    if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
      return 0;
    v14 = sub_B0E910(*(_QWORD *)(*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF0LL));
    v12 = sub_82B240(a1, a2, a3, v14, *(_DWORD *)(a3 + 24) >> 4);
    if ( !(_BYTE)v12 || *(char *)(v14 + 28) < 0 )
      return 0;
    v15 = sub_AB4240(*(_QWORD *)(a1 + 16), v14);
    if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
      goto LABEL_17;
    v78 = 2 * ((*(_BYTE *)(v11 + 28) & 0x7Fu) - 47 <= 2);
    if ( (*(_BYTE *)(a3 + 128) & 1) != 0 )
    {
      v33 = 2259;
    }
    else
    {
      if ( !sub_820300(a3 + 24) )
      {
        sub_69F580(v84, v11 | 4);
        v16 = *(unsigned int *)(a3 + 56);
        v17 = v84[0];
        if ( *(unsigned int *)(a3 + 60) < (unsigned __int64)(v16 + 1) )
        {
          sub_25D6060(a3 + 48, a3 + 64, v16 + 1, 8);
          v16 = *(unsigned int *)(a3 + 56);
        }
        *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v16) = v17;
        v18 = *(_DWORD *)(a3 + 56) + 1;
        *(_DWORD *)(a3 + 56) = v18;
        if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 47 <= 2 )
        {
          v19 = *(_QWORD *)(v11 + 48);
          *(_QWORD *)(a3 + 32) = 0;
          *(_QWORD *)(a3 + 40) = v19;
          *(_DWORD *)(a3 + 24) = *(_DWORD *)(a3 + 24) & 7 | (16 * v18);
        }
LABEL_17:
        v20 = *(_QWORD *)(v11 + 128);
        if ( v20
          || (sub_8226C0((__int64 *)(*(_QWORD *)(v11 + 104) + 96LL), *(_QWORD *)(v11 + 104)),
              (v20 = *(_QWORD *)(v11 + 128)) != 0) )
        {
          v20 = *(_QWORD *)(v20 + 88);
        }
        v21 = *(_QWORD *)(v15 + 72);
        v22 = 0;
        v23 = *(_DWORD *)(v21 + 104);
        v24 = *(__int64 **)(v21 + 88);
        if ( !v23 )
          goto LABEL_44;
        v25 = v23 - 1;
        v26 = 1;
        LODWORD(v27) = v25 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
        v28 = &v24[3 * (unsigned int)v27];
        v29 = nullptr;
        v30 = *v28;
        if ( v20 == *v28 )
        {
LABEL_21:
          v31 = v28[1];
LABEL_22:
          *(_QWORD *)(a3 + 16) += v31;
          return v12;
        }
        while ( v30 != -4096 )
        {
          if ( v30 == -8192 && !v29 )
            v29 = v28;
          v27 = (unsigned int)v25 & ((_DWORD)v27 + v26);
          v28 = &v24[3 * v27];
          v30 = *v28;
          if ( v20 == *v28 )
            goto LABEL_21;
          ++v26;
        }
        if ( !v29 )
          v29 = v28;
        v32 = *(_DWORD *)(v21 + 96) + 1;
        v22 = 2 * v23;
        if ( 4 * v32 < 3 * v23 )
        {
          if ( v23 >> 3 < v23 - *(_DWORD *)(v21 + 100) - v32 )
          {
LABEL_34:
            *(_DWORD *)(v21 + 96) = v32;
            if ( *v29 != -4096 )
              --*(_DWORD *)(v21 + 100);
            *v29 = v20;
            v29[1] = 0;
            *((_BYTE *)v29 + 16) = 0;
            v31 = 0;
            goto LABEL_22;
          }
          v80 = *(_DWORD *)(v21 + 104);
          v57 = ((((v25 | (v25 >> 1)) >> 2) | v25 | (v25 >> 1)) >> 4) | ((v25 | (v25 >> 1)) >> 2) | v25 | (v25 >> 1);
          v58 = ((((v57 >> 8) | v57) >> 16) | (v57 >> 8) | v57) + 1;
          if ( (unsigned int)v58 < 0x40 )
            LODWORD(v58) = 64;
          *(_DWORD *)(v21 + 104) = v58;
          v59 = (_QWORD *)sub_25CC9C0(24LL * (unsigned int)v58, 8);
          *(_QWORD *)(v21 + 88) = v59;
          v60 = 24LL * *(unsigned int *)(v21 + 104);
          v61 = &v59[(unsigned __int64)v60 / 8];
          if ( v24 )
          {
            *(_QWORD *)(v21 + 96) = 0;
            v62 = &v24[3 * v80];
            if ( v60 )
            {
              if ( (v60 & 8) == 0 || (*v59 = -4096, v59 += 3, v59 != v61) )
              {
                do
                {
                  *v59 = -4096;
                  v59 += 6;
                  *(v59 - 3) = -4096;
                }
                while ( v59 != v61 );
              }
            }
            v63 = v24;
            do
            {
              v43 = *v63;
              if ( *v63 != -8192 && v43 != -4096 )
              {
                v64 = *(_DWORD *)(v21 + 104);
                if ( !v64 )
                  goto LABEL_128;
                v65 = v64 - 1;
                v66 = *(_QWORD *)(v21 + 88);
                v67 = v65 & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
                v68 = (__int64 *)(v66 + 24LL * v67);
                v69 = *v68;
                if ( *v68 != v43 )
                {
                  v83 = 1;
                  v81 = nullptr;
                  while ( v69 != -4096 )
                  {
                    if ( v69 == -8192 )
                    {
                      if ( v81 )
                        v68 = v81;
                      v81 = v68;
                    }
                    v67 = v65 & (v83 + v67);
                    v68 = (__int64 *)(v66 + 24LL * v67);
                    v69 = *v68;
                    if ( v43 == *v68 )
                      goto LABEL_78;
                    ++v83;
                  }
                  if ( v81 )
                    v68 = v81;
                }
LABEL_78:
                *v68 = v43;
                *(__m128i *)(v68 + 1) = _mm_loadu_si128((const __m128i *)(v63 + 1));
                ++*(_DWORD *)(v21 + 96);
              }
              v63 += 3;
            }
            while ( v62 != v63 );
            operator delete();
          }
          else
          {
            *(_QWORD *)(v21 + 96) = 0;
            if ( v59 != v61 )
            {
              if ( (v60 & 8) == 0 || (*v59 = -4096, v59 += 3, v59 != v61) )
              {
                do
                {
                  *v59 = -4096;
                  v59 += 6;
                  *(v59 - 3) = -4096;
                }
                while ( v59 != v61 );
              }
            }
          }
          v70 = *(_DWORD *)(v21 + 104);
          v32 = *(_DWORD *)(v21 + 96) + 1;
          if ( v70 )
          {
            v71 = v70 - 1;
            v72 = *(_QWORD *)(v21 + 88);
            v73 = 1;
            v74 = nullptr;
            v75 = (v70 - 1) & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
            v29 = (__int64 *)(v72 + 24LL * v75);
            v76 = *v29;
            if ( v20 != *v29 )
            {
              while ( v76 != -4096 )
              {
                if ( v76 == -8192 && !v74 )
                  v74 = v29;
                v75 = v71 & (v73 + v75);
                v29 = (__int64 *)(v72 + 24LL * v75);
                v76 = *v29;
                if ( v20 == *v29 )
                  goto LABEL_34;
                ++v73;
              }
              if ( v74 )
                v29 = v74;
            }
            goto LABEL_34;
          }
        }
        else
        {
LABEL_44:
          v79 = *(_DWORD *)(v21 + 104);
          v35 = (((((((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
                    | (unsigned int)(v22 - 1)
                    | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 4)
                  | (((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
                  | (unsigned int)(v22 - 1)
                  | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 8)
                | (((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
                  | (unsigned int)(v22 - 1)
                  | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 4)
                | (((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
                | (unsigned int)(v22 - 1)
                | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 16)
              | (((((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
                  | (unsigned int)(v22 - 1)
                  | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 4)
                | (((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
                | (unsigned int)(v22 - 1)
                | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 8)
              | (((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
                | (unsigned int)(v22 - 1)
                | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 4)
              | (((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
              | (unsigned int)(v22 - 1)
              | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1);
          v36 = v35 + 1;
          if ( v36 < 0x40 )
            v36 = 64;
          *(_DWORD *)(v21 + 104) = v36;
          v37 = (_QWORD *)sub_25CC9C0(24LL * v36, 8);
          v38 = *(unsigned int *)(v21 + 104);
          *(_QWORD *)(v21 + 88) = v37;
          v39 = 24 * v38;
          v40 = &v37[3 * v38];
          if ( v24 )
          {
            *(_QWORD *)(v21 + 96) = 0;
            v41 = &v24[3 * v79];
            if ( v39 )
            {
              if ( (((_BYTE)v40 - (_BYTE)v37) & 8) == 0 || (*v37 = -4096, v37 += 3, v37 != v40) )
              {
                do
                {
                  *v37 = -4096;
                  v37 += 6;
                  *(v37 - 3) = -4096;
                }
                while ( v37 != v40 );
              }
            }
            for ( i = v24; v41 != i; i += 3 )
            {
              v43 = *i;
              if ( *i != -4096 && v43 != -8192 )
              {
                v44 = *(_DWORD *)(v21 + 104);
                if ( !v44 )
                {
LABEL_128:
                  *(_QWORD *)&dword_0 = v43;
                  BUG();
                }
                v45 = v44 - 1;
                v46 = *(_QWORD *)(v21 + 88);
                v47 = v45 & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
                v48 = (__int64 *)(v46 + 24LL * v47);
                v49 = *v48;
                if ( v43 != *v48 )
                {
                  v82 = 1;
                  v77 = nullptr;
                  while ( v49 != -4096 )
                  {
                    if ( v49 == -8192 && !v77 )
                      v77 = v48;
                    v47 = v45 & (v82 + v47);
                    v48 = (__int64 *)(v46 + 24LL * v47);
                    v49 = *v48;
                    if ( v43 == *v48 )
                      goto LABEL_56;
                    ++v82;
                  }
                  if ( v77 )
                    v48 = v77;
                }
LABEL_56:
                *v48 = v43;
                *(__m128i *)(v48 + 1) = _mm_loadu_si128((const __m128i *)(i + 1));
                ++*(_DWORD *)(v21 + 96);
              }
            }
            operator delete();
          }
          else
          {
            *(_QWORD *)(v21 + 96) = 0;
            if ( v37 != v40 )
            {
              if ( (((_BYTE)v40 - (_BYTE)v37) & 8) == 0 || (*v37 = -4096, v37 += 3, v37 != v40) )
              {
                do
                {
                  *v37 = -4096;
                  v37 += 6;
                  *(v37 - 3) = -4096;
                }
                while ( v37 != v40 );
              }
            }
          }
          v50 = *(_DWORD *)(v21 + 104);
          v32 = *(_DWORD *)(v21 + 96) + 1;
          if ( v50 )
          {
            v51 = v50 - 1;
            v52 = *(_QWORD *)(v21 + 88);
            v53 = (v50 - 1) & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
            v29 = (__int64 *)(v52 + 24LL * v53);
            v54 = *v29;
            if ( v20 != *v29 )
            {
              v55 = 1;
              v56 = nullptr;
              while ( v54 != -4096 )
              {
                if ( v54 == -8192 && !v56 )
                  v56 = v29;
                v53 = v51 & (v55 + v53);
                v29 = (__int64 *)(v52 + 24LL * v53);
                v54 = *v29;
                if ( v20 == *v29 )
                  goto LABEL_34;
                ++v55;
              }
              if ( v56 )
                v29 = v56;
            }
            goto LABEL_34;
          }
        }
        ++*(_DWORD *)(v21 + 96);
        BUG();
      }
      v33 = 2264;
    }
    v34 = (unsigned __int8 **)sub_A2E240(a1, a2, v33, 0);
    if ( v34 )
      sub_823450(v34, v78);
    *(_BYTE *)(a3 + 24) |= 1u;
    *(_DWORD *)(a3 + 56) = 0;
    goto LABEL_17;
  }
  return sub_829EC0(a1, a2, a3, a4, v10, 0);
}

