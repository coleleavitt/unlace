unsigned __int64 __fastcall sub_92E1E0(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // r11
  int v8; // r9d
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // edx
  int v13; // r13d
  unsigned __int64 v14; // r14
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  bool v19; // r10
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  _DWORD *v22; // rcx
  __int64 v23; // r13
  char *v26; // r13
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // r15
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // r9
  int v35; // r14d
  unsigned int v36; // edx
  unsigned int v37; // edx
  int v38; // ebx
  unsigned __int64 v39; // rcx
  _QWORD *v40; // rsi
  __int64 v41; // rdi
  __int64 *v42; // rax
  _QWORD *v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r11
  char *v48; // rax
  unsigned __int64 v49; // rax
  _DWORD *v50; // rsi
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rcx
  int v54; // r14d
  unsigned int v55; // edx
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // rbx
  const __m128i *v58; // rbp
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // r14
  bool v61; // r11
  _DWORD *v62; // r9
  signed __int64 v63; // rax
  unsigned __int64 v64; // rax
  int v65; // r11d
  unsigned int v66; // edx
  __m128i *v67; // rdi
  unsigned __int64 v68; // r12
  const __m128i *v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // r11
  unsigned int v74; // ebp
  unsigned int v75; // eax
  unsigned int v77; // edx
  signed __int64 v78; // rax
  __m128i *v79; // rdi
  signed __int64 v80; // r9
  signed __int64 v81; // r10
  unsigned __int64 v82; // r9
  __int64 v83; // rax
  unsigned int v84; // ebx
  __int64 v85; // rdx
  unsigned __int64 v86; // rax
  __int64 *v87; // r13
  __m128i *v88; // rax
  char *v89; // rdx
  const __m128i *v90; // rbp
  __m128i *v91; // rax
  __m128i v92; // xmm0
  _QWORD *v93; // rsi
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned int v100; // esi
  unsigned __int64 v101; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v103; // [rsp+10h] [rbp-C8h]
  int v104; // [rsp+1Ch] [rbp-BCh]
  int v105; // [rsp+30h] [rbp-A8h]
  unsigned int v106; // [rsp+34h] [rbp-A4h]
  __int64 v107; // [rsp+38h] [rbp-A0h]
  __int64 v108; // [rsp+40h] [rbp-98h]
  const __m128i *v109; // [rsp+48h] [rbp-90h]
  _DWORD *v110; // [rsp+50h] [rbp-88h]
  unsigned __int64 v111; // [rsp+58h] [rbp-80h]
  unsigned __int64 v112; // [rsp+60h] [rbp-78h]
  unsigned __int64 v113; // [rsp+68h] [rbp-70h]
  unsigned __int64 v114; // [rsp+70h] [rbp-68h]
  unsigned int v115; // [rsp+78h] [rbp-60h]
  unsigned int v116; // [rsp+7Ch] [rbp-5Ch]
  unsigned int v117; // [rsp+80h] [rbp-58h]
  bool v118; // [rsp+87h] [rbp-51h]
  _QWORD v120[9]; // [rsp+90h] [rbp-48h] BYREF

  v7 = a4;
  v8 = *(_DWORD *)(a1 + 40);
  v9 = *(unsigned int *)(a1 + 24);
  v120[1] = __readfsqword(0x28u);
  v101 = a4 + a5;
  v103 = a4 + a5 - 8;
  v10 = *(_QWORD *)(a1 + 8);
  v117 = 0;
  v11 = a3[1];
  v12 = 6;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v12 = *(_DWORD *)(a1 + 272);
  v112 = v10 + v9;
  v13 = v12;
  v115 = v11;
  if ( v12 < 4 )
    v13 = 4;
  v106 = *a3;
  v14 = a4 + ((_DWORD)a4 == (_DWORD)v10 + (_DWORD)v9);
  v15 = v14 - v10;
  v16 = 1 << *(_DWORD *)(a1 + 256);
  v17 = v14 - v10 - v9;
  if ( v16 < v17 )
    LODWORD(v9) = v15 - v16;
  v18 = v15 - v9;
  if ( !v8 )
    v17 = v18;
  if ( v11 > v17 )
  {
    v117 = v11;
    v115 = 0;
  }
  v19 = v106 != 0;
  if ( v106 <= v17 )
  {
    v118 = 0;
    v116 = 0;
  }
  else
  {
    v116 = v106;
    v106 = 0;
    v118 = v19;
    v19 = 0;
  }
  *(_DWORD *)(a1 + 300) = 0;
  if ( v103 > v14 )
  {
    v104 = v13;
    v20 = v7;
    v111 = v101 - 7;
    v113 = v101 - 3;
    v114 = v101 - 1;
    while ( 1 )
    {
      if ( *(_DWORD *)(v14 - v106 + 1) != *(_DWORD *)(v14 + 1) || !v106 )
      {
        v27 = 0;
        goto LABEL_21;
      }
      v21 = v14 + 5;
      v22 = (_DWORD *)(v14 - v106 + 5);
      if ( v14 + 5 >= v111 )
        break;
      v23 = *(_QWORD *)(v14 + 5);
      if ( *(_QWORD *)v22 == v23 )
      {
        v87 = (__int64 *)(v14 + 13);
        v93 = (_QWORD *)(v14 - v106 + 13);
        if ( v111 <= v14 + 13 )
          goto LABEL_151;
        v94 = *(_QWORD *)(v14 - v106 + 13);
        v95 = *(_QWORD *)(v14 + 13);
        if ( v95 == v94 )
        {
          while ( 1 )
          {
            ++v87;
            ++v93;
            if ( v111 <= (unsigned __int64)v87 )
              break;
            v95 = *v93;
            v94 = *v87;
            if ( *v93 != *v87 )
              goto LABEL_137;
          }
LABEL_151:
          v22 = v93;
LABEL_122:
          if ( (unsigned __int64)v87 < v113 && *v22 == *(_DWORD *)v87 )
          {
            v87 = (__int64 *)((char *)v87 + 4);
            ++v22;
          }
          if ( (unsigned __int64)v87 < v114 && *(_WORD *)v22 == *(_WORD *)v87 )
          {
            v87 = (__int64 *)((char *)v87 + 2);
            v22 = (_DWORD *)((char *)v22 + 2);
          }
          if ( v101 > (unsigned __int64)v87 )
            v87 = (__int64 *)((char *)v87 + (*(_BYTE *)v22 == *(_BYTE *)v87));
          v26 = (char *)v87 - v21;
          goto LABEL_20;
        }
LABEL_137:
        _RAX = v94 ^ v95;
        __asm { tzcnt   rax, rax }
        v26 = (char *)v87 + ((unsigned int)_RAX >> 3) - v21;
      }
      else
      {
        _RAX = v23 ^ *(_QWORD *)v22;
        __asm { tzcnt   r13, rax }
        v26 = (char *)((unsigned int)_R13 >> 3);
      }
LABEL_20:
      v27 = (unsigned __int64)(v26 + 4);
LABEL_21:
      v120[0] = 999999999;
      if ( v104 == 5 )
      {
        v28 = sub_910C40(a1, (_DWORD *)v14, v101, (unsigned int *)v120);
      }
      else if ( v104 == 6 )
      {
        v28 = sub_910C90(a1, (_DWORD *)v14, v101, (unsigned int *)v120);
      }
      else
      {
        v28 = sub_910BF0(a1, (_DWORD *)v14, v101, (unsigned int *)v120);
      }
      if ( v27 < v28 )
      {
        v30 = v120[0];
        v29 = v14;
      }
      else
      {
        v28 = v27;
        v29 = v14 + 1;
        v30 = 1;
      }
      v107 = 4LL - v106;
      if ( v28 <= 3 )
      {
        v19 = v106 != 0;
        v86 = ((v14 - v20) >> 8) + 1;
        v14 += v86;
        *(_DWORD *)(a1 + 300) = v86 > 8;
        goto LABEL_91;
      }
      v108 = a2;
      v31 = v30;
      v32 = v14;
      v109 = (const __m128i *)v20;
      v33 = v28;
      do
      {
        v34 = v32 + 1;
        v35 = v33;
        if ( !v31 )
        {
          v38 = 32;
          v105 = 0;
          goto LABEL_49;
        }
        _BitScanReverse(&v36, v31);
        v37 = v36 ^ 0x1F;
        v105 = v31;
        v38 = v37;
        if ( *(_DWORD *)(v34 - v106) != *(_DWORD *)(v32 + 1) || !v106 )
          goto LABEL_49;
        v39 = v32 + 5;
        v40 = (_QWORD *)(v34 + v107);
        if ( v32 + 5 >= v111 )
        {
          v42 = (__int64 *)(v32 + 5);
          goto LABEL_37;
        }
        v41 = *(_QWORD *)(v32 + 5);
        if ( *v40 == v41 )
        {
          v42 = (__int64 *)(v32 + 13);
          v43 = v40 + 1;
          if ( v111 <= v32 + 13 )
            goto LABEL_149;
          v44 = v40[1];
          v45 = *(_QWORD *)(v32 + 13);
          if ( v44 == v45 )
          {
            while ( 1 )
            {
              ++v42;
              ++v43;
              if ( v111 <= (unsigned __int64)v42 )
                break;
              v44 = *v43;
              v45 = *v42;
              if ( *v43 != *v42 )
                goto LABEL_35;
            }
LABEL_149:
            v40 = v43;
LABEL_37:
            if ( (unsigned __int64)v42 < v113 && *(_DWORD *)v40 == *(_DWORD *)v42 )
            {
              v42 = (__int64 *)((char *)v42 + 4);
              v40 = (_QWORD *)((char *)v40 + 4);
            }
            if ( (unsigned __int64)v42 < v114 && *(_WORD *)v40 == *(_WORD *)v42 )
            {
              v42 = (__int64 *)((char *)v42 + 2);
              v40 = (_QWORD *)((char *)v40 + 2);
            }
            if ( v101 > (unsigned __int64)v42 )
              v42 = (__int64 *)((char *)v42 + (*(_BYTE *)v40 == *(_BYTE *)v42));
            v48 = (char *)v42 - v39;
            goto LABEL_46;
          }
LABEL_35:
          _RSI = v45 ^ v44;
          __asm { tzcnt   rsi, rsi }
          v48 = (char *)v42 + ((unsigned int)_RSI >> 3) - v39;
        }
        else
        {
          _RAX = v41 ^ *v40;
          __asm { tzcnt   rax, rax }
          v48 = (char *)((unsigned int)_RAX >> 3);
        }
LABEL_46:
        v49 = (unsigned __int64)(v48 + 4);
        if ( 3 * (int)v49 > (int)(3 * v33 - 30 + v37) && v49 > 3 )
        {
          v35 = v49;
          v29 = v32 + 1;
          v33 = v49;
          v38 = 31;
          v105 = 1;
          v31 = 1;
        }
LABEL_49:
        v50 = (_DWORD *)(v32 + 1);
        v120[0] = 999999999;
        if ( v104 == 5 )
        {
          v51 = sub_910C40(a1, v50, v101, (unsigned int *)v120);
          v52 = v32 + 1;
        }
        else
        {
          if ( v104 == 6 )
            v51 = sub_910C90(a1, v50, v101, (unsigned int *)v120);
          else
            v51 = sub_910BF0(a1, v50, v101, (unsigned int *)v120);
          v52 = v32 + 1;
        }
        v53 = v120[0];
        v54 = 4 * v35;
        _BitScanReverse(&v55, v120[0]);
        if ( (int)((v55 ^ 0x1F) + 4 * v51 - 31) <= v54 + v38 - 31 + 4 || v51 <= 3 )
        {
          if ( v103 <= v52 )
            goto LABEL_78;
          v62 = (_DWORD *)(v32 + 2);
          if ( v31 )
          {
            if ( *(_DWORD *)((char *)v62 - v106) == *(_DWORD *)(v32 + 2) )
            {
              if ( v106 )
              {
                v63 = sub_907A60((_QWORD *)(v32 + 6), (_DWORD *)((char *)v62 + v107), v101);
                v62 = (_DWORD *)(v32 + 2);
                v64 = v63 + 4;
                if ( 4 * (int)v64 > v65 + 1 && v64 > 3 )
                {
                  v54 = 4 * v64;
                  v29 = v32 + 2;
                  v33 = v64;
                  v38 = 31;
                  v105 = 1;
                  v31 = 1;
                }
              }
            }
          }
          else
          {
            v38 = 32;
            v105 = 0;
          }
          v110 = v62;
          v120[0] = 999999999;
          if ( v104 == 5 )
          {
            v51 = sub_910C40(a1, v62, v101, (unsigned int *)v120);
            v52 = (unsigned __int64)v110;
          }
          else
          {
            v51 = v104 == 6
                ? sub_910C90(a1, v62, v101, (unsigned int *)v120)
                : sub_910BF0(a1, v62, v101, (unsigned int *)v120);
            v52 = (unsigned __int64)v110;
          }
          v53 = v120[0];
          _BitScanReverse(&v66, v120[0]);
          if ( (int)((v66 ^ 0x1F) + 4 * v51 - 31) <= v54 + v38 - 24 || v51 <= 3 )
          {
LABEL_78:
            v56 = v31;
            v57 = v33;
            a2 = v108;
            v58 = v109;
            if ( v56 <= 3 )
              goto LABEL_79;
            goto LABEL_57;
          }
        }
        v31 = v53;
        v33 = v51;
        v32 = v52;
        v29 = v52;
      }
      while ( v103 > v52 );
      v56 = v53;
      v57 = v51;
      a2 = v108;
      v58 = v109;
      v105 = v53;
      if ( v53 <= 3 )
      {
LABEL_79:
        v19 = v106 != 0;
        v59 = v29;
        v60 = v57;
        v61 = v115 != 0;
        goto LABEL_80;
      }
LABEL_57:
      if ( v112 < v29 + 3 - v56 && v29 > (unsigned __int64)v58 && *(_BYTE *)(v29 + 2 - v56) == *(_BYTE *)(v29 - 1) )
      {
        v59 = v29;
        do
        {
          --v59;
          v60 = v29 + v57 - v59;
        }
        while ( v112 < 3 - v56 + v59 && v59 > (unsigned __int64)v58 && *(_BYTE *)(v59 - 1) == *(_BYTE *)(v59 + 2 - v56) );
      }
      else
      {
        v60 = v57;
        v59 = v29;
      }
      v61 = v106 != 0;
      v115 = v106;
      v19 = v105 != 3;
      v106 = v105 - 3;
LABEL_80:
      v67 = *(__m128i **)(a2 + 24);
      v68 = v59 - (_QWORD)v58;
      v69 = (const __m128i *)(v101 - 32);
      if ( v59 > v101 - 32 )
      {
        sub_9079D0(v67, v58, v59, (const __m128i *)(v101 - 32));
LABEL_114:
        *(_QWORD *)(a2 + 24) += v68;
        v70 = *(_QWORD *)(a2 + 8);
        if ( v68 > 0xFFFF )
        {
          v85 = v70 - *(_QWORD *)a2;
          *(_DWORD *)(a2 + 72) = 1;
          *(_DWORD *)(a2 + 76) = v85 >> 3;
        }
        goto LABEL_83;
      }
      *v67 = _mm_loadu_si128(v58);
      if ( v68 > 0x10 )
      {
        v88 = *(__m128i **)(a2 + 24);
        v88[1] = _mm_loadu_si128(v58 + 1);
        if ( (__int64)(v68 - 16) > 16 )
        {
          v89 = &v88->m128i_i8[v68];
          v90 = v58 + 2;
          v91 = v88 + 2;
          do
          {
            v92 = _mm_loadu_si128(v90);
            v91 += 2;
            v90 += 2;
            v91[-2] = v92;
            v91[-1] = _mm_loadu_si128(v90 - 1);
          }
          while ( v89 > (char *)v91 );
        }
        goto LABEL_114;
      }
      *(_QWORD *)(a2 + 24) += v68;
      v70 = *(_QWORD *)(a2 + 8);
LABEL_83:
      *(_WORD *)(v70 + 4) = v68;
      **(_DWORD **)(a2 + 8) = v105;
      v71 = *(_QWORD *)(a2 + 8);
      if ( v60 - 3 > 0xFFFF )
      {
        *(_DWORD *)(a2 + 72) = 2;
        *(_DWORD *)(a2 + 76) = (v71 - *(_QWORD *)a2) >> 3;
      }
      *(_WORD *)(v71 + 6) = v60 - 3;
      v14 = v59 + v60;
      *(_QWORD *)(a2 + 8) += 8LL;
      if ( *(_DWORD *)(a1 + 300) )
        *(_DWORD *)(a1 + 300) = 0;
      if ( v103 >= v14 && v61 && (v72 = v115, v73 = 4, v74 = v106, *(_DWORD *)v14 == *(_DWORD *)(v14 - v115)) )
      {
        while ( 1 )
        {
          v78 = sub_907A60((_QWORD *)(v14 + 4), (_QWORD *)(v14 + v73 - v72), v101);
          v79 = *(__m128i **)(a2 + 24);
          v80 = v78;
          v81 = v78 + 4;
          if ( (unsigned __int64)v69 < v14 )
            sub_9079D0(v79, (const __m128i *)v14, v14, v69);
          else
            *v79 = _mm_loadu_si128((const __m128i *)v14);
          v82 = v80 + 1;
          *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
          **(_DWORD **)(a2 + 8) = 1;
          v83 = *(_QWORD *)(a2 + 8);
          if ( v82 > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 2;
            *(_DWORD *)(a2 + 76) = (v83 - *(_QWORD *)a2) >> 3;
          }
          v14 += v81;
          *(_WORD *)(v83 + 6) = v82;
          *(_QWORD *)(a2 + 8) += 8LL;
          v19 = v115 != 0;
          if ( v103 < v14 || !v74 )
            break;
          v72 = v74;
          if ( *(_DWORD *)(v14 - v74) != *(_DWORD *)v14 )
          {
            v84 = v115;
            v115 = v74;
            v20 = v14;
            v106 = v84;
            goto LABEL_91;
          }
          v77 = v115;
          v115 = v74;
          v74 = v77;
        }
        v100 = v115;
        v115 = v74;
        v20 = v14;
        v106 = v100;
      }
      else
      {
        v20 = v14;
      }
LABEL_91:
      if ( v103 <= v14 )
      {
        v7 = v20;
        goto LABEL_93;
      }
    }
    v87 = (__int64 *)(v14 + 5);
    goto LABEL_122;
  }
LABEL_93:
  if ( !v118 || !v19 )
  {
    if ( !v106 )
      v106 = v116;
    v116 = v117;
  }
  *a3 = v106;
  v75 = v115;
  if ( !v115 )
    v75 = v116;
  a3[1] = v75;
  return v101 - v7;
}

