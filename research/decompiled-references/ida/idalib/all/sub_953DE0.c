unsigned __int64 __fastcall sub_953DE0(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v6; // r12
  __int64 v8; // rbx
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  const __m128i *v14; // r10
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edi
  int v18; // eax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // r9
  unsigned int v22; // esi
  _QWORD *v23; // rdi
  __int64 v24; // r10
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  char v27; // al
  __int64 v28; // r15
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  const char *v31; // r13
  char v32; // al
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // edx
  int v37; // r15d
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rsi
  int v43; // r10d
  __m128i *v44; // rdi
  unsigned __int64 v45; // r11
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // r10
  __int64 v50; // rsi
  _QWORD *v51; // rdi
  unsigned int v52; // r8d
  unsigned int v53; // r8d
  char v54; // al
  __int64 v55; // r12
  char v56; // r11
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  const char *v59; // r15
  char v60; // al
  unsigned int v61; // r12d
  int v62; // edx
  int v63; // eax
  unsigned int v64; // ecx
  __int64 v65; // rsi
  unsigned int v66; // edi
  __int64 v67; // rsi
  __int64 v69; // rdx
  char *v70; // rdi
  char *v71; // rcx
  signed __int64 v72; // rax
  char *v73; // rcx
  signed __int64 v74; // rax
  __m128i *v75; // rdi
  signed __int64 v76; // r9
  signed __int64 v77; // r10
  unsigned __int64 v78; // r9
  __int64 v79; // rax
  unsigned int v80; // eax
  __int64 v81; // rdx
  _QWORD *v82; // rdi
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rcx
  __m128i *v86; // rax
  char *v87; // rdx
  const __m128i *v88; // r12
  __m128i *v89; // rax
  __m128i v90; // xmm0
  unsigned int v91; // eax
  unsigned __int64 v92; // [rsp+0h] [rbp-C8h]
  __int64 v93; // [rsp+8h] [rbp-C0h]
  __int64 v94; // [rsp+10h] [rbp-B8h]
  unsigned int v95; // [rsp+18h] [rbp-B0h]
  char v96; // [rsp+1Ch] [rbp-ACh]
  unsigned int v97; // [rsp+1Ch] [rbp-ACh]
  unsigned int v98; // [rsp+20h] [rbp-A8h]
  unsigned int v99; // [rsp+24h] [rbp-A4h]
  unsigned __int64 v100; // [rsp+28h] [rbp-A0h]
  char v101; // [rsp+30h] [rbp-98h]
  const __m128i *v102; // [rsp+30h] [rbp-98h]
  unsigned int v103; // [rsp+38h] [rbp-90h]
  int v104; // [rsp+3Ch] [rbp-8Ch]
  char v105; // [rsp+40h] [rbp-88h]
  __int64 v106; // [rsp+48h] [rbp-80h]
  char v107; // [rsp+58h] [rbp-70h]
  unsigned int v108; // [rsp+5Ch] [rbp-6Ch]
  _QWORD *v109; // [rsp+60h] [rbp-68h]
  char *v110; // [rsp+68h] [rbp-60h]
  _QWORD *v112; // [rsp+78h] [rbp-50h]
  _QWORD v113[9]; // [rsp+80h] [rbp-48h] BYREF

  v6 = a4;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 6;
  v113[1] = __readfsqword(0x28u);
  v10 = (unsigned __int64)a4->m128i_u64 + a5;
  v11 = *(_QWORD *)(a1 + 8);
  v94 = v8;
  v100 = v10;
  v12 = v10 - 16;
  v13 = *(unsigned int *)(a1 + 24);
  v92 = v12;
  v14 = (const __m128i *)(v11 + v13);
  v95 = *(_DWORD *)(a1 + 24);
  v110 = (char *)(v8 + v13);
  v109 = (_QWORD *)(v11 + v13);
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v9 = *(_DWORD *)(a1 + 272);
  v93 = *(_QWORD *)(a1 + 8);
  v112 = (_QWORD *)(v8 + *(unsigned int *)(a1 + 28));
  v15 = *(_DWORD *)(a1 + 256);
  v16 = *(_DWORD *)(a1 + 268);
  v17 = 6;
  v107 = v15;
  v18 = 4;
  if ( v9 < 4 )
    v9 = 4;
  v108 = v16;
  if ( v16 <= 6 )
    v17 = v16;
  if ( v17 >= 4 )
    v18 = v17;
  v104 = v18;
  v19 = (unsigned __int64)v6->m128i_u64 + (v6 == v14);
  v99 = *a3;
  v103 = a3[1];
  v20 = *(unsigned int *)(a1 + 44);
  *(_DWORD *)(a1 + 300) = 0;
  v21 = *(_QWORD *)(a1 + 112);
  v22 = v20;
  v23 = (_QWORD *)(v11 + v20);
  v24 = *(_QWORD *)(a1 + 56);
  if ( v12 >= (unsigned __int64)v23 )
  {
    v25 = v12 - (_DWORD)v23 + 1;
    if ( v25 > 8 )
      v25 = 8;
    v26 = v22 + v25;
    if ( v22 < v26 )
    {
      v27 = *(_DWORD *)(a1 + 52) + 8;
      v28 = *(_QWORD *)(a1 + 96);
      v96 = 64 - v27;
      v101 = 32 - v27;
      v106 = a2;
      do
      {
        if ( v9 == 5 )
        {
          v29 = (v28 ^ (0xCF1BBCDCBB000000LL * *v23)) >> v96;
        }
        else if ( v9 == 6 )
        {
          v29 = (v28 ^ (0xCF1BBCDCBF9B0000LL * *v23)) >> v96;
        }
        else
        {
          LODWORD(v29) = ((unsigned int)v28 ^ (-1640531535 * *(_DWORD *)v23)) >> v101;
        }
        v30 = (unsigned int)v29 >> 8 << v104;
        v31 = (const char *)(v24 + v30);
        _mm_prefetch((const char *)(v21 + 4 * v30), 1);
        if ( v108 <= 4 )
        {
          _mm_prefetch(v31, 1);
        }
        else
        {
          _mm_prefetch((const char *)(v21 + 4 * v30 + 64), 1);
          _mm_prefetch(v31, 1);
          if ( v108 != 5 )
            _mm_prefetch((const char *)(v24 + v30 + 32), 1);
        }
        v32 = v22++;
        v23 = (_QWORD *)((char *)v23 + 1);
        *(_DWORD *)(a1 + 4LL * (v32 & 7) + 64) = v29;
      }
      while ( v26 != v22 );
      a2 = v106;
    }
  }
  if ( v92 > v19 )
  {
    v97 = 1 << v107;
    v98 = v95 - 1;
    v102 = (const __m128i *)(v100 - 32);
    while ( 1 )
    {
      while ( 1 )
      {
        v35 = v93;
        v36 = *(_DWORD *)(a1 + 28);
        v37 = v19 - v93;
        v38 = v19 - v93 + 1;
        v39 = v38 - v36;
        if ( v97 < v38 - v36 )
          v36 = v19 - v93 + 1 - v97;
        v40 = v38 - v36;
        if ( !*(_DWORD *)(a1 + 40) )
          v39 = v40;
        v41 = v37 - v99 + 1;
        if ( v95 > v41 )
          v35 = v94;
        if ( v98 - v41 <= 2 )
          break;
        if ( v99 > v39 )
          break;
        v42 = v41 + v35;
        if ( *(_DWORD *)v42 != *(_DWORD *)(v19 + 1) )
          break;
        v70 = (char *)(v19 + 5);
        ++v19;
        v71 = (char *)v100;
        if ( v95 > v41 )
          v71 = v110;
        v72 = sub_93A7C0(v70, (_QWORD *)(v42 + 4), v100, v71, v109);
        v43 = 1;
        v33 = v72 + 4;
LABEL_49:
        v44 = *(__m128i **)(a2 + 24);
        v45 = v19 - (_QWORD)v6;
        if ( v19 > (unsigned __int64)v102 )
        {
          sub_92B710(v44, v6, v19, v102);
        }
        else
        {
          *v44 = _mm_loadu_si128(v6);
          if ( v45 <= 0x10 )
          {
            *(_QWORD *)(a2 + 24) += v45;
            v46 = *(_QWORD *)(a2 + 8);
            goto LABEL_52;
          }
          v86 = *(__m128i **)(a2 + 24);
          v86[1] = _mm_loadu_si128(v6 + 1);
          if ( (__int64)(v45 - 16) > 16 )
          {
            v87 = &v86->m128i_i8[v45];
            v88 = v6 + 2;
            v89 = v86 + 2;
            do
            {
              v90 = _mm_loadu_si128(v88);
              v89 += 2;
              v88 += 2;
              v89[-2] = v90;
              v89[-1] = _mm_loadu_si128(v88 - 1);
            }
            while ( v87 > (char *)v89 );
          }
        }
        *(_QWORD *)(a2 + 24) += v45;
        v46 = *(_QWORD *)(a2 + 8);
        if ( v45 > 0xFFFF )
        {
          v69 = v46 - *(_QWORD *)a2;
          *(_DWORD *)(a2 + 72) = 1;
          *(_DWORD *)(a2 + 76) = v69 >> 3;
        }
LABEL_52:
        *(_WORD *)(v46 + 4) = v45;
        **(_DWORD **)(a2 + 8) = v43;
        v47 = *(_QWORD *)(a2 + 8);
        if ( v33 - 3 > 0xFFFF )
        {
          *(_DWORD *)(a2 + 72) = 2;
          *(_DWORD *)(a2 + 76) = (v47 - *(_QWORD *)a2) >> 3;
        }
        *(_WORD *)(v47 + 6) = v33 - 3;
        v19 += v33;
        *(_QWORD *)(a2 + 8) += 8LL;
        if ( *(_DWORD *)(a1 + 300) )
        {
          v48 = *(_QWORD *)(a1 + 112);
          v49 = *(_QWORD *)(a1 + 56);
          v50 = *(unsigned int *)(a1 + 44);
          v51 = (_QWORD *)(v93 + v50);
          if ( v92 >= v93 + v50 )
          {
            v52 = v92 - (_DWORD)v51 + 1;
            if ( v52 > 8 )
              v52 = 8;
            v53 = v50 + v52;
            if ( (unsigned int)v50 < v53 )
            {
              v54 = *(_DWORD *)(a1 + 52) + 8;
              v55 = *(_QWORD *)(a1 + 96);
              v56 = 64 - v54;
              v105 = 32 - v54;
              do
              {
                if ( v9 == 5 )
                {
                  v57 = (v55 ^ (0xCF1BBCDCBB000000LL * *v51)) >> v56;
                }
                else if ( v9 == 6 )
                {
                  v57 = (v55 ^ (0xCF1BBCDCBF9B0000LL * *v51)) >> v56;
                }
                else
                {
                  LODWORD(v57) = ((unsigned int)v55 ^ (-1640531535 * *(_DWORD *)v51)) >> v105;
                }
                v58 = (unsigned int)v57 >> 8 << v104;
                v59 = (const char *)(v49 + v58);
                _mm_prefetch((const char *)(v48 + 4 * v58), 1);
                if ( v108 <= 4 )
                {
                  _mm_prefetch(v59, 1);
                }
                else
                {
                  _mm_prefetch((const char *)(v48 + 4 * v58 + 64), 1);
                  _mm_prefetch(v59, 1);
                  if ( v108 != 5 )
                    _mm_prefetch((const char *)(v49 + v58 + 32), 1);
                }
                v60 = v50;
                LODWORD(v50) = v50 + 1;
                v51 = (_QWORD *)((char *)v51 + 1);
                *(_DWORD *)(a1 + 4LL * (v60 & 7) + 64) = v57;
              }
              while ( v53 != (_DWORD)v50 );
            }
          }
          *(_DWORD *)(a1 + 300) = 0;
        }
        if ( v92 >= v19 )
        {
          v61 = v103;
          while ( 1 )
          {
            v62 = *(_DWORD *)(a1 + 28);
            v63 = v19 - v93;
            v64 = v19 - v93 - v62;
            if ( v97 < v64 )
              v62 = v19 - v93 - v97;
            v65 = v94;
            if ( !*(_DWORD *)(a1 + 40) )
              v64 = v19 - v93 - v62;
            v66 = v63 - v61;
            if ( v95 <= v63 - v61 )
              v65 = v93;
            v67 = v66 + v65;
            if ( v61 + v98 - v63 <= 2 || v61 > v64 || *(_DWORD *)v67 != *(_DWORD *)v19 )
            {
              v103 = v61;
              goto LABEL_82;
            }
            v73 = (char *)v100;
            if ( v95 > v66 )
              v73 = v110;
            v74 = sub_93A7C0((char *)(v19 + 4), (_QWORD *)(v67 + 4), v100, v73, v109);
            v75 = *(__m128i **)(a2 + 24);
            v76 = v74;
            v77 = v74 + 4;
            if ( (unsigned __int64)v102 < v19 )
              sub_92B710(v75, (const __m128i *)v19, v19, v102);
            else
              *v75 = _mm_loadu_si128((const __m128i *)v19);
            v78 = v76 + 1;
            *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
            **(_DWORD **)(a2 + 8) = 1;
            v79 = *(_QWORD *)(a2 + 8);
            if ( v78 > 0xFFFF )
            {
              *(_DWORD *)(a2 + 72) = 2;
              *(_DWORD *)(a2 + 76) = (v79 - *(_QWORD *)a2) >> 3;
            }
            *(_WORD *)(v79 + 6) = v78;
            v19 += v77;
            *(_QWORD *)(a2 + 8) += 8LL;
            if ( v92 < v19 )
              break;
            v80 = v61;
            v61 = v99;
            v99 = v80;
          }
          v91 = v99;
          v99 = v61;
          v6 = (const __m128i *)v19;
          v103 = v91;
          goto LABEL_32;
        }
LABEL_82:
        v6 = (const __m128i *)v19;
        if ( v92 <= v19 )
          goto LABEL_83;
      }
      v113[0] = 999999999;
      if ( v9 == 5 )
        break;
      if ( v9 != 6 )
      {
        if ( v104 == 5 )
        {
          v33 = sub_92CFE0(a1, (_QWORD *)v19, v100, v113);
        }
        else if ( v104 == 6 )
        {
          v33 = sub_92DD50(a1, (_QWORD *)v19, v100, v113);
        }
        else
        {
          v33 = sub_9439C0(a1, (_QWORD *)v19, v100, v113);
        }
        goto LABEL_30;
      }
      if ( v104 == 5 )
      {
        v33 = sub_92C2A0(a1, (_QWORD *)v19, v100, v113);
        goto LABEL_30;
      }
      if ( v104 == 6 )
      {
        v33 = sub_92E420(a1, (_QWORD *)v19, v100, v113);
        goto LABEL_30;
      }
      v33 = sub_944A40(a1, (_QWORD *)v19, v100, v113);
      if ( !v33 )
        goto LABEL_31;
LABEL_47:
      if ( v33 > 3 )
      {
        v43 = v113[0];
        if ( v113[0] > 3u )
        {
          v81 = (unsigned int)(v37 - LODWORD(v113[0]) + 3);
          if ( v95 <= (unsigned int)v81 )
          {
            v83 = v93 + v81;
            v82 = v109;
          }
          else
          {
            v82 = v112;
            v83 = v94 + v81;
          }
          if ( v19 > (unsigned __int64)v6 && (unsigned __int64)v82 < v83 && *(_BYTE *)(v19 - 1) == *(_BYTE *)(v83 - 1) )
          {
            v84 = v19;
            do
            {
              --v84;
              --v83;
              v85 = v33 + v19 - v84;
            }
            while ( v84 > (unsigned __int64)v6
                 && v83 > (unsigned __int64)v82
                 && *(_BYTE *)(v84 - 1) == *(_BYTE *)(v83 - 1) );
          }
          else
          {
            v85 = v33;
            v84 = v19;
          }
          v19 = v84;
          v33 = v85;
          v103 = v99;
          v99 = LODWORD(v113[0]) - 3;
        }
        goto LABEL_49;
      }
LABEL_31:
      v34 = (v19 - (unsigned __int64)v6) >> 8;
      v19 += v34 + 1;
      *(_DWORD *)(a1 + 300) = v34 > 8;
LABEL_32:
      if ( v92 <= v19 )
        goto LABEL_83;
    }
    if ( v104 == 5 )
    {
      v33 = sub_92C940(a1, (_QWORD *)v19, v100, v113);
    }
    else if ( v104 == 6 )
    {
      v33 = sub_92D620(a1, (_QWORD *)v19, v100, v113);
    }
    else
    {
      v33 = sub_9441C0(a1, (_QWORD *)v19, v100, v113);
    }
LABEL_30:
    if ( !v33 )
      goto LABEL_31;
    goto LABEL_47;
  }
LABEL_83:
  *a3 = v99;
  a3[1] = v103;
  return v100 - (_QWORD)v6;
}
