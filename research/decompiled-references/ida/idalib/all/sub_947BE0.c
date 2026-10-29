signed __int64 __fastcall sub_947BE0(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v7; // r12
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // r14d
  __int64 *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // rsi
  int v16; // edi
  int v17; // eax
  __int64 v18; // rax
  char *v19; // rbx
  __int64 v20; // rdx
  unsigned int v21; // esi
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rdi
  unsigned int v25; // esi
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rbx
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  char v30; // al
  __int64 v31; // r15
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  const char *v34; // rbp
  char v35; // al
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rsi
  int v40; // r10d
  __int64 v41; // rdx
  _QWORD *v42; // rdi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __m128i *v46; // rdi
  unsigned __int64 v47; // r11
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r9
  __int64 v51; // r10
  __int64 v52; // rsi
  _QWORD *v53; // rdi
  unsigned int v54; // r8d
  unsigned int v55; // r8d
  char v56; // al
  __int64 v57; // r12
  char v58; // r11
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  const char *v61; // r15
  char v62; // al
  unsigned int v63; // edx
  __int64 v64; // rsi
  __int64 v66; // rdx
  char *v67; // rdi
  char *v68; // rcx
  signed __int64 v69; // rax
  char *v70; // rcx
  signed __int64 v71; // rax
  __m128i *v72; // rdi
  signed __int64 v73; // r10
  signed __int64 v74; // r11
  unsigned __int64 v75; // r10
  __int64 v76; // rax
  int v77; // esi
  __m128i *v78; // rax
  char *v79; // rdx
  const __m128i *v80; // r12
  __m128i *v81; // rax
  __m128i v82; // xmm0
  int v83; // eax
  unsigned __int64 v84; // [rsp+8h] [rbp-D0h]
  unsigned int v85; // [rsp+14h] [rbp-C4h]
  __int64 v86; // [rsp+18h] [rbp-C0h]
  int v87; // [rsp+20h] [rbp-B8h]
  char v88; // [rsp+24h] [rbp-B4h]
  unsigned int v89; // [rsp+24h] [rbp-B4h]
  __int64 v90; // [rsp+28h] [rbp-B0h]
  __int64 *v91; // [rsp+30h] [rbp-A8h]
  const __m128i *v92; // [rsp+38h] [rbp-A0h]
  int v93; // [rsp+40h] [rbp-98h]
  int v94; // [rsp+44h] [rbp-94h]
  unsigned int v95; // [rsp+48h] [rbp-90h]
  char v96; // [rsp+4Ch] [rbp-8Ch]
  char v97; // [rsp+50h] [rbp-88h]
  __int64 v98; // [rsp+58h] [rbp-80h]
  _QWORD *v99; // [rsp+68h] [rbp-70h]
  int v100; // [rsp+70h] [rbp-68h]
  unsigned int v101; // [rsp+74h] [rbp-64h]
  char *v102; // [rsp+78h] [rbp-60h]
  _QWORD *v103; // [rsp+80h] [rbp-58h]
  _QWORD v105[9]; // [rsp+90h] [rbp-48h] BYREF

  v7 = a4;
  v9 = *(_DWORD *)(a1 + 268);
  v10 = 6;
  v11 = 6;
  v105[1] = __readfsqword(0x28u);
  v12 = (__int64 *)((char *)a4->m128i_i64 + a5);
  v13 = *(_QWORD *)(a1 + 8);
  v101 = v9;
  v91 = v12;
  v14 = (unsigned __int64)(v12 - 2);
  v84 = (unsigned __int64)(v12 - 2);
  v15 = *(unsigned int *)(a1 + 24);
  v85 = *(_DWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v11 = *(_DWORD *)(a1 + 272);
  v16 = v13 + v15;
  v99 = (_QWORD *)(v13 + v15);
  v17 = 4;
  v86 = v13;
  if ( v11 < 4 )
    v11 = 4;
  if ( v9 <= 6 )
    v10 = v9;
  if ( v10 >= 4 )
    v17 = v10;
  v94 = v17;
  v87 = *a3;
  v93 = a3[1];
  v18 = *(_QWORD *)(a1 + 248);
  v19 = *(char **)v18;
  v20 = *(unsigned int *)(v18 + 24);
  v90 = *(_QWORD *)(v18 + 8);
  LODWORD(v18) = *(_QWORD *)v18 - v90;
  v21 = v15 - v18;
  v103 = (_QWORD *)(v90 + v20);
  v102 = v19;
  v22 = *(_QWORD *)(a1 + 112);
  v100 = v18;
  v23 = *(_QWORD *)(a1 + 56);
  LODWORD(v18) = (_DWORD)v7 - v16;
  v24 = *(unsigned int *)(a1 + 44);
  v95 = v21;
  *(_DWORD *)(a1 + 300) = 0;
  v25 = v24;
  v26 = (_QWORD *)(v13 + v24);
  v27 = (unsigned __int64)v7->m128i_u64 + ((_DWORD)v19 - ((_DWORD)v90 + (_DWORD)v20) + (_DWORD)v18 == 0);
  if ( v14 >= (unsigned __int64)v26 )
  {
    v28 = v84 - (_DWORD)v26 + 1;
    if ( v28 > 8 )
      v28 = 8;
    v29 = v25 + v28;
    if ( v25 < v29 )
    {
      v30 = *(_DWORD *)(a1 + 52) + 8;
      v31 = *(_QWORD *)(a1 + 96);
      v88 = 64 - v30;
      v96 = 32 - v30;
      v98 = a2;
      do
      {
        if ( v11 == 5 )
        {
          v32 = (v31 ^ (0xCF1BBCDCBB000000LL * *v26)) >> v88;
        }
        else if ( v11 == 6 )
        {
          v32 = (v31 ^ (0xCF1BBCDCBF9B0000LL * *v26)) >> v88;
        }
        else
        {
          LODWORD(v32) = ((unsigned int)v31 ^ (-1640531535 * *(_DWORD *)v26)) >> v96;
        }
        v33 = (unsigned int)v32 >> 8 << v94;
        v34 = (const char *)(v23 + v33);
        _mm_prefetch((const char *)(v22 + 4 * v33), 1);
        if ( v101 <= 4 )
        {
          _mm_prefetch(v34, 1);
        }
        else
        {
          _mm_prefetch((const char *)(v22 + 4 * v33 + 64), 1);
          _mm_prefetch(v34, 1);
          if ( v101 != 5 )
            _mm_prefetch((const char *)(v23 + v33 + 32), 1);
        }
        v35 = v25++;
        v26 = (_QWORD *)((char *)v26 + 1);
        *(_DWORD *)(a1 + 4LL * (v35 & 7) + 64) = v32;
      }
      while ( v29 != v25 );
      a2 = v98;
    }
  }
  v89 = v85 - 1;
  v92 = (const __m128i *)(v91 - 4);
  while ( v84 > v27 )
  {
    while ( 1 )
    {
      v38 = (unsigned int)(v27 - v86 - v87 + 1);
      v39 = v86 + v38;
      if ( v85 > (unsigned int)v38 )
        v39 = v90 + v100 - v85 + (unsigned int)v38;
      if ( v89 - (unsigned int)v38 <= 2 || *(_DWORD *)(v27 + 1) != *(_DWORD *)v39 )
        break;
      v67 = (char *)(v27 + 5);
      ++v27;
      v68 = (char *)v91;
      if ( v85 > (unsigned int)v38 )
        v68 = v102;
      v69 = sub_93A7C0(v67, (_QWORD *)(v39 + 4), (unsigned __int64)v91, v68, v99);
      v40 = 1;
      v36 = v69 + 4;
LABEL_54:
      v46 = *(__m128i **)(a2 + 24);
      v47 = v27 - (_QWORD)v7;
      if ( v27 > (unsigned __int64)v92 )
      {
        sub_92B710(v46, v7, v27, v92);
LABEL_84:
        *(_QWORD *)(a2 + 24) += v47;
        v48 = *(_QWORD *)(a2 + 8);
        if ( v47 > 0xFFFF )
        {
          v66 = v48 - *(_QWORD *)a2;
          *(_DWORD *)(a2 + 72) = 1;
          *(_DWORD *)(a2 + 76) = v66 >> 3;
        }
        goto LABEL_57;
      }
      *v46 = _mm_loadu_si128(v7);
      if ( v47 > 0x10 )
      {
        v78 = *(__m128i **)(a2 + 24);
        v78[1] = _mm_loadu_si128(v7 + 1);
        if ( (__int64)(v47 - 16) > 16 )
        {
          v79 = &v78->m128i_i8[v47];
          v80 = v7 + 2;
          v81 = v78 + 2;
          do
          {
            v82 = _mm_loadu_si128(v80);
            v81 += 2;
            v80 += 2;
            v81[-2] = v82;
            v81[-1] = _mm_loadu_si128(v80 - 1);
          }
          while ( v79 > (char *)v81 );
        }
        goto LABEL_84;
      }
      *(_QWORD *)(a2 + 24) += v47;
      v48 = *(_QWORD *)(a2 + 8);
LABEL_57:
      *(_WORD *)(v48 + 4) = v47;
      **(_DWORD **)(a2 + 8) = v40;
      v49 = *(_QWORD *)(a2 + 8);
      if ( v36 - 3 > 0xFFFF )
      {
        *(_DWORD *)(a2 + 72) = 2;
        *(_DWORD *)(a2 + 76) = (v49 - *(_QWORD *)a2) >> 3;
      }
      *(_WORD *)(v49 + 6) = v36 - 3;
      v27 += v36;
      *(_QWORD *)(a2 + 8) += 8LL;
      if ( *(_DWORD *)(a1 + 300) )
      {
        v50 = *(_QWORD *)(a1 + 112);
        v51 = *(_QWORD *)(a1 + 56);
        v52 = *(unsigned int *)(a1 + 44);
        v53 = (_QWORD *)(v86 + v52);
        if ( v84 >= v86 + v52 )
        {
          v54 = v84 - (_DWORD)v53 + 1;
          if ( v54 > 8 )
            v54 = 8;
          v55 = v52 + v54;
          if ( (unsigned int)v52 < v55 )
          {
            v56 = *(_DWORD *)(a1 + 52) + 8;
            v57 = *(_QWORD *)(a1 + 96);
            v58 = 64 - v56;
            v97 = 32 - v56;
            do
            {
              if ( v11 == 5 )
              {
                v59 = (v57 ^ (0xCF1BBCDCBB000000LL * *v53)) >> v58;
              }
              else if ( v11 == 6 )
              {
                v59 = (v57 ^ (0xCF1BBCDCBF9B0000LL * *v53)) >> v58;
              }
              else
              {
                LODWORD(v59) = ((unsigned int)v57 ^ (-1640531535 * *(_DWORD *)v53)) >> v97;
              }
              v60 = (unsigned int)v59 >> 8 << v94;
              v61 = (const char *)(v51 + v60);
              _mm_prefetch((const char *)(v50 + 4 * v60), 1);
              if ( v101 <= 4 )
              {
                _mm_prefetch(v61, 1);
              }
              else
              {
                _mm_prefetch((const char *)(v50 + 4 * v60 + 64), 1);
                _mm_prefetch(v61, 1);
                if ( v101 != 5 )
                  _mm_prefetch((const char *)(v51 + v60 + 32), 1);
              }
              v62 = v52;
              LODWORD(v52) = v52 + 1;
              v53 = (_QWORD *)((char *)v53 + 1);
              *(_DWORD *)(a1 + 4LL * (v62 & 7) + 64) = v59;
            }
            while ( v55 != (_DWORD)v52 );
          }
        }
        *(_DWORD *)(a1 + 300) = 0;
      }
      if ( v84 >= v27 )
      {
        while ( 1 )
        {
          v63 = v27 - v86 - v93;
          v64 = v90 + v63 - (unsigned __int64)v95;
          if ( v85 <= v63 )
            v64 = v86 + v63;
          if ( v93 + v89 - ((_DWORD)v27 - (_DWORD)v86) <= 2 || *(_DWORD *)v27 != *(_DWORD *)v64 )
            break;
          v70 = (char *)v91;
          if ( v85 > v63 )
            v70 = v102;
          v71 = sub_93A7C0((char *)(v27 + 4), (_QWORD *)(v64 + 4), (unsigned __int64)v91, v70, v99);
          v72 = *(__m128i **)(a2 + 24);
          v73 = v71;
          v74 = v71 + 4;
          if ( (unsigned __int64)v92 < v27 )
            sub_92B710(v72, (const __m128i *)v27, v27, v92);
          else
            *v72 = _mm_loadu_si128((const __m128i *)v27);
          v75 = v73 + 1;
          *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
          **(_DWORD **)(a2 + 8) = 1;
          v76 = *(_QWORD *)(a2 + 8);
          if ( v75 > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 2;
            *(_DWORD *)(a2 + 76) = (v76 - *(_QWORD *)a2) >> 3;
          }
          *(_WORD *)(v76 + 6) = v75;
          v27 += v74;
          *(_QWORD *)(a2 + 8) += 8LL;
          if ( v84 < v27 )
          {
            v83 = v87;
            v7 = (const __m128i *)v27;
            v87 = v93;
            v93 = v83;
            goto LABEL_32;
          }
          v77 = v87;
          v87 = v93;
          v93 = v77;
        }
      }
      v7 = (const __m128i *)v27;
      if ( v84 <= v27 )
        goto LABEL_81;
    }
    v105[0] = 999999999;
    if ( v11 == 5 )
    {
      if ( v94 == 5 )
      {
        v36 = sub_9372A0(a1, (_QWORD *)v27, (unsigned __int64)v91, v105);
      }
      else if ( v94 == 6 )
      {
        v36 = sub_938740(a1, (_QWORD *)v27, v91, v105);
      }
      else
      {
        v36 = sub_934C60(a1, (_QWORD *)v27, (unsigned __int64)v91, v105);
      }
    }
    else if ( v11 == 6 )
    {
      if ( v94 == 5 )
      {
        v36 = sub_937CF0(a1, (_QWORD *)v27, (unsigned __int64)v91, v105);
      }
      else
      {
        if ( v94 != 6 )
        {
          v36 = sub_935F30(a1, (_QWORD *)v27, (unsigned __int64)v91, v105);
          if ( !v36 )
            goto LABEL_31;
          goto LABEL_42;
        }
        v36 = sub_939230(a1, (_QWORD *)v27, v91, v105);
      }
    }
    else if ( v94 == 5 )
    {
      v36 = sub_9368C0(a1, (_QWORD *)v27, (unsigned __int64)v91, v105);
    }
    else if ( v94 == 6 )
    {
      v36 = sub_939D20(a1, (_QWORD *)v27, (unsigned __int64)v91, v105);
    }
    else
    {
      v36 = sub_9355F0(a1, (_QWORD *)v27, (unsigned __int64)v91, v105);
    }
    if ( !v36 )
      goto LABEL_31;
LABEL_42:
    if ( v36 > 3 )
    {
      v40 = v105[0];
      if ( v105[0] > 3u )
      {
        v41 = (unsigned int)(v27 - v86 - LODWORD(v105[0]) + 3);
        if ( v85 <= (unsigned int)v41 )
        {
          v43 = v86 + v41;
          v42 = v99;
        }
        else
        {
          v42 = v103;
          v43 = v90 + v41 - v95;
        }
        if ( v27 > (unsigned __int64)v7 && (unsigned __int64)v42 < v43 && *(_BYTE *)(v27 - 1) == *(_BYTE *)(v43 - 1) )
        {
          v44 = v27;
          do
          {
            --v44;
            --v43;
            v45 = v36 + v27 - v44;
          }
          while ( v44 > (unsigned __int64)v7
               && v43 > (unsigned __int64)v42
               && *(_BYTE *)(v44 - 1) == *(_BYTE *)(v43 - 1) );
        }
        else
        {
          v45 = v36;
          v44 = v27;
        }
        v27 = v44;
        v36 = v45;
        v93 = v87;
        v87 = LODWORD(v105[0]) - 3;
      }
      goto LABEL_54;
    }
LABEL_31:
    v37 = ((v27 - (unsigned __int64)v7) >> 8) + 1;
    v27 += v37;
    *(_DWORD *)(a1 + 300) = v37 > 8;
LABEL_32:
    ;
  }
LABEL_81:
  *a3 = v87;
  a3[1] = v93;
  return (char *)v91 - (char *)v7;
}
