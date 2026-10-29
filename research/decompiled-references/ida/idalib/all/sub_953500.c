unsigned __int64 __fastcall sub_953500(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  unsigned __int64 v6; // rdi
  const __m128i *v7; // r12
  unsigned __int64 v8; // r11
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // ecx
  __int64 v13; // rax
  const __m128i *v14; // r8
  unsigned int v15; // esi
  unsigned int v16; // eax
  bool v17; // cf
  unsigned int v18; // ebx
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned int v21; // eax
  _DWORD *v22; // rax
  unsigned int v23; // r13d
  _DWORD *v24; // r14
  __int64 v25; // rax
  int v26; // r9d
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rax
  int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // r11d
  __m128i *v38; // rdi
  unsigned __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // r10d
  int v43; // edx
  int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rsi
  unsigned int v47; // edi
  __int64 v48; // rdx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rsi
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // r10
  __int64 *v59; // rax
  __int64 *v60; // r10
  __int64 v61; // rdx
  __int64 v62; // r11
  char *v65; // r10
  signed __int64 v66; // rax
  __int64 v67; // r10
  bool v68; // cc
  __int64 v69; // rcx
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r11
  __int64 *v76; // r11
  __int64 *v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r12
  char *v82; // r11
  signed __int64 v83; // rax
  __m128i *v84; // rdi
  __int64 v85; // r11
  char *v86; // r9
  __int64 v87; // rdx
  _QWORD *v88; // rdi
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rcx
  __m128i *v92; // rax
  char *v93; // rdx
  const __m128i *v94; // r12
  __m128i *v95; // rax
  __m128i v96; // xmm0
  unsigned __int64 v97; // r11
  __int64 v98; // rax
  unsigned int v99; // eax
  unsigned int v104; // eax
  unsigned int v105; // [rsp+Ch] [rbp-ACh]
  __int64 v106; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v107; // [rsp+18h] [rbp-A0h]
  unsigned int v108; // [rsp+20h] [rbp-98h]
  unsigned int v109; // [rsp+24h] [rbp-94h]
  unsigned __int64 v110; // [rsp+28h] [rbp-90h]
  const __m128i *v111; // [rsp+30h] [rbp-88h]
  unsigned int v112; // [rsp+38h] [rbp-80h]
  int v113; // [rsp+3Ch] [rbp-7Ch]
  unsigned __int64 v114; // [rsp+50h] [rbp-68h]
  _QWORD *v115; // [rsp+58h] [rbp-60h]
  _QWORD *v117; // [rsp+68h] [rbp-50h]
  _QWORD v118[9]; // [rsp+70h] [rbp-48h] BYREF

  v6 = (unsigned __int64)a4->m128i_u64 + a5;
  v7 = a4;
  v8 = (unsigned __int64)&a4->m128i_u64[-1] + a5;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_DWORD *)(a1 + 256);
  v118[1] = __readfsqword(0x28u);
  v13 = *(unsigned int *)(a1 + 24);
  v106 = v10;
  v110 = v6;
  v14 = (const __m128i *)(v11 + v13);
  v15 = *(_DWORD *)(a1 + 24);
  v105 = v15;
  v114 = v10 + v13;
  v107 = v8;
  v115 = (_QWORD *)(v11 + v13);
  v117 = (_QWORD *)(v10 + *(unsigned int *)(a1 + 28));
  v16 = 6;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v16 = *(_DWORD *)(a1 + 272);
  v17 = v16 < 4;
  v18 = v16;
  v19 = 4;
  if ( !v17 )
    v19 = v18;
  v113 = v19;
  v20 = (unsigned __int64)v7->m128i_u64 + (v7 == v14);
  v109 = *a3;
  v21 = a3[1];
  *(_DWORD *)(a1 + 300) = 0;
  v112 = v21;
  if ( v8 > v20 )
  {
    v108 = v15 - 1;
    v111 = (const __m128i *)(v6 - 32);
    v22 = (_DWORD *)a1;
    v23 = 1 << v12;
    v24 = v22;
    while ( 1 )
    {
      v29 = v24[7];
      v30 = v20 - v11 + 1;
      v31 = v30 - v29;
      if ( v23 < v30 - v29 )
        v29 = v20 - v11 + 1 - v23;
      v32 = v30 - v29;
      v33 = v106;
      if ( !v24[10] )
        v31 = v32;
      v34 = v20 - v11 + 1 - v109;
      if ( v105 <= v34 )
        v33 = v11;
      if ( v108 - v34 > 2 && v109 <= v31 )
      {
        v35 = v34 + v33;
        if ( *(_DWORD *)v35 == *(_DWORD *)(v20 + 1) )
        {
          v52 = v35 + 4;
          v53 = v20 + 5;
          v54 = v110;
          if ( v105 > v34 )
            v54 = v114;
          v55 = v53 + v54 - v52;
          if ( v110 < v55 )
            v55 = v110;
          v56 = v55 - 7;
          if ( v53 >= v55 - 7 )
          {
            v60 = (__int64 *)(v35 + 4);
            v59 = (__int64 *)(v20 + 5);
            goto LABEL_85;
          }
          v57 = *(_QWORD *)(v35 + 4);
          v58 = *(_QWORD *)(v20 + 5);
          if ( v57 == v58 )
          {
            v59 = (__int64 *)(v20 + 13);
            v60 = (__int64 *)(v35 + 12);
            if ( v56 > v20 + 13 )
            {
              v61 = *(_QWORD *)(v35 + 12);
              v62 = *(_QWORD *)(v20 + 13);
              if ( v61 != v62 )
              {
LABEL_57:
                _RDX = v62 ^ v61;
                __asm { tzcnt   rdx, rdx }
                v65 = (char *)v59 + ((unsigned int)_RDX >> 3) - v53;
                if ( (char *)v54 == &v65[v52] )
                  goto LABEL_58;
                goto LABEL_92;
              }
              while ( 1 )
              {
                ++v59;
                ++v60;
                if ( v56 <= (unsigned __int64)v59 )
                  break;
                v61 = *v60;
                v62 = *v59;
                if ( *v60 != *v59 )
                  goto LABEL_57;
              }
            }
LABEL_85:
            if ( (unsigned __int64)v59 >= v55 - 3 || *(_DWORD *)v60 != *(_DWORD *)v59 )
            {
              if ( (unsigned __int64)v59 < v55 - 1 )
                goto LABEL_88;
LABEL_89:
              if ( v55 <= (unsigned __int64)v59 )
                goto LABEL_90;
LABEL_108:
              v59 = (__int64 *)((char *)v59 + (*(_BYTE *)v60 == *(_BYTE *)v59));
              goto LABEL_90;
            }
            v59 = (__int64 *)((char *)v59 + 4);
            v60 = (__int64 *)((char *)v60 + 4);
            if ( (unsigned __int64)v59 >= v55 - 1 )
              goto LABEL_89;
LABEL_88:
            if ( *(_WORD *)v60 != *(_WORD *)v59 )
              goto LABEL_89;
            v59 = (__int64 *)((char *)v59 + 2);
            v60 = (__int64 *)((char *)v60 + 2);
            if ( v55 > (unsigned __int64)v59 )
              goto LABEL_108;
LABEL_90:
            v65 = (char *)v59 - v53;
          }
          else
          {
            _RAX = v58 ^ v57;
            __asm { tzcnt   rax, rax }
            v65 = (char *)((unsigned int)_RAX >> 3);
          }
          if ( (char *)v54 == &v65[v52] )
          {
LABEL_58:
            v66 = sub_92B7A0(&v65[v53], v115, v110);
            v65 = (char *)(v66 + v67);
          }
LABEL_92:
          ++v20;
          v27 = (unsigned __int64)(v65 + 4);
          v37 = 1;
          goto LABEL_25;
        }
      }
      v118[0] = 999999999;
      if ( v113 == 5 )
      {
        v51 = sub_932B60((__int64)v24, (_QWORD *)v20, v110, v118);
        v26 = v20 - v11;
        v27 = v51;
      }
      else
      {
        if ( v113 == 6 )
        {
          v36 = sub_932660((__int64)v24, (_QWORD *)v20, v110, v118);
          v26 = v20 - v11;
          v27 = v36;
          if ( !v36 )
            goto LABEL_9;
          goto LABEL_23;
        }
        v25 = sub_933060((__int64)v24, (_QWORD *)v20, v110, v118);
        v26 = v20 - v11;
        v27 = v25;
      }
      if ( !v27 )
        goto LABEL_9;
LABEL_23:
      if ( v27 <= 3 )
      {
LABEL_9:
        v28 = (v20 - (unsigned __int64)v7) >> 8;
        v20 += v28 + 1;
        v24[75] = v28 > 8;
        goto LABEL_10;
      }
      v37 = v118[0];
      if ( v118[0] > 3u )
      {
        v87 = (unsigned int)(v26 + 3 - LODWORD(v118[0]));
        if ( v105 <= (unsigned int)v87 )
        {
          v89 = v11 + v87;
          v88 = v115;
        }
        else
        {
          v88 = v117;
          v89 = v106 + v87;
        }
        if ( (unsigned __int64)v88 < v89 && (unsigned __int64)v7 < v20 && *(_BYTE *)(v20 - 1) == *(_BYTE *)(v89 - 1) )
        {
          v90 = v20;
          do
          {
            --v90;
            --v89;
            v91 = v27 + v20 - v90;
          }
          while ( v90 > (unsigned __int64)v7
               && v89 > (unsigned __int64)v88
               && *(_BYTE *)(v90 - 1) == *(_BYTE *)(v89 - 1) );
        }
        else
        {
          v91 = v27;
          v90 = v20;
        }
        v20 = v90;
        v27 = v91;
        v112 = v109;
        v109 = LODWORD(v118[0]) - 3;
      }
LABEL_25:
      v38 = *(__m128i **)(a2 + 24);
      v39 = v20 - (_QWORD)v7;
      if ( v20 > (unsigned __int64)v111 )
      {
        sub_92B710(v38, v7, v20, v111);
LABEL_46:
        *(_QWORD *)(a2 + 24) += v39;
        v40 = *(_QWORD *)(a2 + 8);
        if ( v39 > 0xFFFF )
        {
          v50 = v40 - *(_QWORD *)a2;
          *(_DWORD *)(a2 + 72) = 1;
          *(_DWORD *)(a2 + 76) = v50 >> 3;
        }
        goto LABEL_28;
      }
      *v38 = _mm_loadu_si128(v7);
      if ( v39 > 0x10 )
      {
        v92 = *(__m128i **)(a2 + 24);
        v92[1] = _mm_loadu_si128(v7 + 1);
        if ( (__int64)(v39 - 16) > 16 )
        {
          v93 = &v92->m128i_i8[v39];
          v94 = v7 + 2;
          v95 = v92 + 2;
          do
          {
            v96 = _mm_loadu_si128(v94);
            v95 += 2;
            v94 += 2;
            v95[-2] = v96;
            v95[-1] = _mm_loadu_si128(v94 - 1);
          }
          while ( v93 > (char *)v95 );
        }
        goto LABEL_46;
      }
      *(_QWORD *)(a2 + 24) += v39;
      v40 = *(_QWORD *)(a2 + 8);
LABEL_28:
      *(_WORD *)(v40 + 4) = v39;
      **(_DWORD **)(a2 + 8) = v37;
      v41 = *(_QWORD *)(a2 + 8);
      if ( v27 - 3 > 0xFFFF )
      {
        *(_DWORD *)(a2 + 72) = 2;
        *(_DWORD *)(a2 + 76) = (v41 - *(_QWORD *)a2) >> 3;
      }
      *(_WORD *)(v41 + 6) = v27 - 3;
      v20 += v27;
      *(_QWORD *)(a2 + 8) += 8LL;
      if ( v24[75] )
        v24[75] = 0;
      v42 = v112;
      if ( v107 < v20 )
      {
LABEL_43:
        v7 = (const __m128i *)v20;
        if ( v107 <= v20 )
          break;
      }
      else
      {
        while ( 1 )
        {
          v43 = v24[7];
          v44 = v20 - v11;
          v45 = v20 - v11 - v43;
          if ( v23 < v45 )
            v43 = v20 - v11 - v23;
          v46 = v106;
          if ( !v24[10] )
            v45 = v20 - v11 - v43;
          v47 = v44 - v42;
          if ( v105 <= v44 - v42 )
            v46 = v11;
          v48 = v46 + v47;
          if ( v42 + v108 - v44 <= 2 || v42 > v45 || *(_DWORD *)v48 != *(_DWORD *)v20 )
          {
            v112 = v42;
            goto LABEL_43;
          }
          v68 = v105 <= v47;
          v69 = v48 + 4;
          v70 = v20 + 4;
          v71 = v110;
          if ( !v68 )
            v71 = v114;
          v72 = v70 + v71 - v69;
          if ( v110 < v72 )
            v72 = v110;
          v73 = v72 - 7;
          if ( v70 >= v72 - 7 )
          {
            v77 = (__int64 *)(v48 + 4);
            v76 = (__int64 *)(v20 + 4);
            goto LABEL_94;
          }
          v74 = *(_QWORD *)(v48 + 4);
          v75 = *(_QWORD *)(v20 + 4);
          if ( v74 == v75 )
          {
            v76 = (__int64 *)(v20 + 12);
            v77 = (__int64 *)(v48 + 12);
            if ( v73 > v20 + 12 )
            {
              v78 = *(_QWORD *)(v48 + 12);
              v79 = *(_QWORD *)(v20 + 12);
              if ( v78 != v79 )
              {
LABEL_67:
                _RDX = v79 ^ v78;
                __asm { tzcnt   rax, rdx }
                v82 = (char *)v76 + ((unsigned int)_RAX >> 3) - v70;
                if ( (char *)v71 == &v82[v69] )
                  goto LABEL_68;
                goto LABEL_101;
              }
              while ( 1 )
              {
                ++v76;
                ++v77;
                if ( v73 <= (unsigned __int64)v76 )
                  break;
                v78 = *v77;
                v79 = *v76;
                if ( *v77 != *v76 )
                  goto LABEL_67;
              }
            }
LABEL_94:
            if ( (unsigned __int64)v76 < v72 - 3 && *(_DWORD *)v77 == *(_DWORD *)v76 )
            {
              v76 = (__int64 *)((char *)v76 + 4);
              v77 = (__int64 *)((char *)v77 + 4);
              if ( (unsigned __int64)v76 >= v72 - 1 )
                goto LABEL_98;
LABEL_97:
              if ( *(_WORD *)v77 != *(_WORD *)v76 )
                goto LABEL_98;
              v76 = (__int64 *)((char *)v76 + 2);
              v77 = (__int64 *)((char *)v77 + 2);
              if ( v72 <= (unsigned __int64)v76 )
              {
LABEL_99:
                v82 = (char *)v76 - v70;
                goto LABEL_100;
              }
            }
            else
            {
              if ( (unsigned __int64)v76 < v72 - 1 )
                goto LABEL_97;
LABEL_98:
              if ( v72 <= (unsigned __int64)v76 )
                goto LABEL_99;
            }
            v76 = (__int64 *)((char *)v76 + (*(_BYTE *)v77 == *(_BYTE *)v76));
            goto LABEL_99;
          }
          _R9 = v75 ^ v74;
          __asm { tzcnt   r11, r9 }
          v82 = (char *)((unsigned int)_R11 >> 3);
LABEL_100:
          if ( (char *)v71 == &v82[v69] )
          {
LABEL_68:
            v83 = sub_92B7A0(&v82[v70], v115, v110);
            v84 = *(__m128i **)(a2 + 24);
            v82 = (char *)(v83 + v85);
            v86 = v82 + 4;
            if ( (unsigned __int64)v111 < v20 )
              goto LABEL_69;
            goto LABEL_102;
          }
LABEL_101:
          v86 = v82 + 4;
          v84 = *(__m128i **)(a2 + 24);
          if ( (unsigned __int64)v111 < v20 )
          {
LABEL_69:
            sub_92B710(v84, (const __m128i *)v20, v20, v111);
            goto LABEL_103;
          }
LABEL_102:
          *v84 = _mm_loadu_si128((const __m128i *)v20);
LABEL_103:
          v97 = (unsigned __int64)(v82 + 1);
          *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
          **(_DWORD **)(a2 + 8) = 1;
          v98 = *(_QWORD *)(a2 + 8);
          if ( v97 > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 2;
            *(_DWORD *)(a2 + 76) = (v98 - *(_QWORD *)a2) >> 3;
          }
          *(_WORD *)(v98 + 6) = v97;
          v20 += (unsigned __int64)v86;
          *(_QWORD *)(a2 + 8) += 8LL;
          if ( v107 < v20 )
            break;
          v99 = v42;
          v42 = v109;
          v109 = v99;
        }
        v104 = v109;
        v7 = (const __m128i *)v20;
        v109 = v42;
        v112 = v104;
LABEL_10:
        if ( v107 <= v20 )
          break;
      }
    }
  }
  *a3 = v109;
  a3[1] = v112;
  return v110 - (_QWORD)v7;
}
