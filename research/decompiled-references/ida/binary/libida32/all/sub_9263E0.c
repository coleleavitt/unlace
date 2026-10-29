signed __int64 __fastcall sub_9263E0(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  char *v5; // r8
  __int64 v9; // r15
  int v10; // ebp
  unsigned int v11; // esi
  unsigned int v12; // eax
  bool v13; // cf
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ecx
  unsigned __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r12
  unsigned int v26; // r10d
  unsigned int v27; // r10d
  unsigned int v28; // eax
  __int64 v29; // r11
  int v30; // r14d
  unsigned __int64 v31; // rax
  unsigned int v32; // r10d
  __int64 v33; // rdx
  _QWORD *v34; // rsi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __m128i *v38; // rdi
  unsigned __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r11
  int v43; // ebx
  unsigned int v44; // ecx
  __int64 v45; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  char *v51; // r10
  char *v52; // rdx
  unsigned __int64 v53; // rdi
  __int64 v54; // r8
  __int64 v55; // r9
  char *v56; // r12
  __int64 *v57; // r8
  __int64 v58; // rax
  __int64 v59; // r9
  char *v62; // r12
  char *v63; // r9
  unsigned __int64 v64; // rdx
  signed __int64 v65; // rax
  int v66; // r10d
  __int64 v67; // r11
  signed __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  bool v70; // cc
  char *v71; // rcx
  unsigned __int64 v72; // rdx
  signed __int64 v73; // rax
  signed __int64 v74; // r12
  __int64 v75; // r10
  signed __int64 v76; // r9
  __m128i *v77; // rdi
  unsigned __int64 v78; // r12
  __int64 v79; // rax
  int v80; // eax
  __m128i *v81; // rax
  char *v82; // rcx
  __m128i *v83; // rax
  const __m128i *v84; // rdx
  __m128i v85; // xmm0
  int v88; // eax
  int v89; // [rsp+4h] [rbp-F4h]
  const __m128i *v91; // [rsp+10h] [rbp-E8h]
  char *v92; // [rsp+10h] [rbp-E8h]
  char *v93; // [rsp+20h] [rbp-D8h]
  unsigned int v94; // [rsp+28h] [rbp-D0h]
  unsigned int v95; // [rsp+2Ch] [rbp-CCh]
  unsigned __int64 v96; // [rsp+30h] [rbp-C8h]
  int v97; // [rsp+38h] [rbp-C0h]
  int v98; // [rsp+3Ch] [rbp-BCh]
  __int64 v99; // [rsp+40h] [rbp-B8h]
  int v100; // [rsp+50h] [rbp-A8h]
  int v101; // [rsp+60h] [rbp-98h]
  const __m128i *v102; // [rsp+68h] [rbp-90h]
  __int64 v103; // [rsp+70h] [rbp-88h]
  int v104; // [rsp+78h] [rbp-80h]
  unsigned int v105; // [rsp+7Ch] [rbp-7Ch]
  char *v106; // [rsp+80h] [rbp-78h]
  _QWORD *v107; // [rsp+88h] [rbp-70h]
  char *v108; // [rsp+98h] [rbp-60h]
  _QWORD *v109; // [rsp+A0h] [rbp-58h]
  _QWORD v111[9]; // [rsp+B0h] [rbp-48h] BYREF

  v5 = &a4->m128i_i8[a5];
  v9 = *(_QWORD *)(a1 + 8);
  v91 = a4;
  v111[1] = __readfsqword(0x28u);
  v93 = v5;
  v96 = (unsigned __int64)(v5 - 8);
  v10 = v9 + *(_DWORD *)(a1 + 24);
  v11 = *(_DWORD *)(a1 + 24);
  v94 = v11;
  v12 = 6;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v12 = *(_DWORD *)(a1 + 272);
  v107 = (_QWORD *)(v9 + *(unsigned int *)(a1 + 24));
  v13 = v12 < 4;
  v14 = v12;
  v15 = 4;
  if ( !v13 )
    v15 = v14;
  v98 = v15;
  v89 = *a3;
  v101 = a3[1];
  v16 = *(_QWORD *)(a1 + 248);
  v17 = *(_QWORD *)(v16 + 8);
  v99 = v17;
  v109 = (_QWORD *)(v17 + *(unsigned int *)(v16 + 24));
  v106 = *(char **)v16;
  v18 = *(_QWORD *)v16 - v17;
  v105 = v11 - v18;
  *(_DWORD *)(a1 + 300) = 0;
  v19 = (unsigned __int64)a4->m128i_u64 + ((_DWORD)v106 - (_DWORD)v109 + (_DWORD)a4 - v10 == 0);
  if ( (unsigned __int64)(v5 - 8) > v19 )
  {
    v95 = v11 - 1;
    v104 = v18 - v11;
    v102 = (const __m128i *)(v5 - 32);
    while ( 1 )
    {
      v20 = (unsigned int)(1 - v89 + v19 - v9);
      v21 = v9 + v20;
      if ( v94 > (unsigned int)v20 )
        v21 = v99 + (unsigned int)(v20 + v104);
      v22 = 0;
      if ( v95 - (unsigned int)v20 > 2 && *(_DWORD *)(v19 + 1) == *(_DWORD *)v21 )
        break;
LABEL_11:
      v111[0] = 999999999;
      if ( v98 == 5 )
      {
        v23 = sub_91E3B0(a1, (_QWORD *)v19, v93, v111);
      }
      else if ( v98 == 6 )
      {
        v23 = sub_91F430(a1, (_QWORD *)v19, v93, v111);
      }
      else
      {
        v23 = sub_91EC00(a1, (_QWORD *)v19, (unsigned __int64)v93, v111);
      }
      if ( v23 > v22 )
      {
        v25 = v111[0];
        v24 = v19;
        if ( v23 > 3 )
        {
LABEL_16:
          v103 = a2;
          _BitScanReverse(&v26, v25);
          v27 = v26 ^ 0x1F;
          while ( 1 )
          {
            v28 = ++v19 - v9 - v89;
            v29 = v9 + v28;
            if ( v94 > v28 )
              v29 = v99 + v104 + v28;
            v30 = v23;
            v97 = v25;
            v100 = v27;
            if ( v95 + v89 - ((_DWORD)v19 - (_DWORD)v9) > 2 && *(_DWORD *)v19 == *(_DWORD *)v29 )
            {
              v63 = v93;
              if ( v94 > v28 )
                v63 = v106;
              v108 = v63;
              v64 = (unsigned __int64)&v63[v19 - v29];
              if ( (unsigned __int64)v93 < v64 )
                v64 = (unsigned __int64)v93;
              v65 = sub_907A60((_QWORD *)(v19 + 4), (_QWORD *)(v29 + 4), v64);
              v68 = v65;
              if ( v108 == (char *)(v65 + v67) )
                v68 = sub_907A60((_QWORD *)(v19 + 4 + v65), v107, (unsigned __int64)v93) + v65;
              v69 = v68 + 4;
              if ( 3 * (int)v69 > v66 + 3 * (int)v23 - 30 && v69 > 3 )
              {
                v30 = v69;
                v24 = v19;
                v23 = v69;
                v25 = 1;
                v100 = 31;
                v97 = 1;
              }
            }
            v111[0] = 999999999;
            if ( v98 == 5 )
              v31 = sub_91E3B0(a1, (_QWORD *)v19, v93, v111);
            else
              v31 = v98 == 6
                  ? sub_91F430(a1, (_QWORD *)v19, v93, v111)
                  : sub_91EC00(a1, (_QWORD *)v19, (unsigned __int64)v93, v111);
            _BitScanReverse(&v32, v111[0]);
            v27 = v32 ^ 0x1F;
            if ( (int)(v27 + 4 * v31 - 31) <= v100 + 4 * v30 - 27 || v31 <= 3 )
              break;
            v25 = v111[0];
            v23 = v31;
            v24 = v19;
            if ( v96 <= v19 )
            {
              a2 = v103;
              v97 = v111[0];
              goto LABEL_29;
            }
          }
          a2 = v103;
LABEL_29:
          if ( v25 > 3 )
          {
            v33 = (unsigned int)(v24 - v9 - v97 + 3);
            if ( v94 <= (unsigned int)v33 )
            {
              v35 = v9 + v33;
              v34 = v107;
            }
            else
            {
              v34 = v109;
              v35 = v99 + v33 - v105;
            }
            if ( (unsigned __int64)v34 < v35
              && (unsigned __int64)v91 < v24
              && *(_BYTE *)(v24 - 1) == *(_BYTE *)(v35 - 1) )
            {
              v36 = v24;
              do
              {
                --v36;
                --v35;
                v37 = v24 + v23 - v36;
              }
              while ( (unsigned __int64)v91 < v36
                   && v35 > (unsigned __int64)v34
                   && *(_BYTE *)(v36 - 1) == *(_BYTE *)(v35 - 1) );
            }
            else
            {
              v37 = v23;
              v36 = v24;
            }
            v24 = v36;
            v23 = v37;
            v101 = v89;
            v89 = v97 - 3;
          }
          v38 = *(__m128i **)(a2 + 24);
          v39 = v24 - (_QWORD)v91;
          if ( v24 > (unsigned __int64)v102 )
          {
            sub_9079D0(v38, v91, v24, v102);
          }
          else
          {
            *v38 = _mm_loadu_si128(v91);
            if ( v39 <= 0x10 )
            {
              *(_QWORD *)(a2 + 24) += v39;
              v40 = *(_QWORD *)(a2 + 8);
              goto LABEL_43;
            }
            v81 = *(__m128i **)(a2 + 24);
            v81[1] = _mm_loadu_si128(v91 + 1);
            if ( (__int64)(v39 - 16) > 16 )
            {
              v82 = &v81->m128i_i8[v39];
              v83 = v81 + 2;
              v84 = v91 + 2;
              do
              {
                v85 = _mm_loadu_si128(v84);
                v83 += 2;
                v84 += 2;
                v83[-2] = v85;
                v83[-1] = _mm_loadu_si128(v84 - 1);
              }
              while ( v82 > (char *)v83 );
            }
          }
          *(_QWORD *)(a2 + 24) += v39;
          v40 = *(_QWORD *)(a2 + 8);
          if ( v39 > 0xFFFF )
          {
            v48 = v40 - *(_QWORD *)a2;
            *(_DWORD *)(a2 + 72) = 1;
            *(_DWORD *)(a2 + 76) = v48 >> 3;
          }
LABEL_43:
          *(_WORD *)(v40 + 4) = v39;
          **(_DWORD **)(a2 + 8) = v97;
          v41 = *(_QWORD *)(a2 + 8);
          if ( v23 - 3 > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 2;
            *(_DWORD *)(a2 + 76) = (v41 - *(_QWORD *)a2) >> 3;
          }
          *(_WORD *)(v41 + 6) = v23 - 3;
          v19 = v24 + v23;
          *(_QWORD *)(a2 + 8) += 8LL;
          if ( *(_DWORD *)(a1 + 300) )
            *(_DWORD *)(a1 + 300) = 0;
          v42 = v105;
          v43 = v101;
          if ( v96 < v19 )
          {
LABEL_53:
            v91 = (const __m128i *)v19;
          }
          else
          {
            while ( 1 )
            {
              v44 = v19 - v9 - v43;
              v45 = v99 + v44 - v42;
              if ( v94 <= v44 )
                v45 = v9 + v44;
              if ( v43 + v95 - ((_DWORD)v19 - (_DWORD)v9) <= 2 || *(_DWORD *)v19 != *(_DWORD *)v45 )
              {
                v101 = v43;
                goto LABEL_53;
              }
              v70 = v94 <= v44;
              v71 = v93;
              if ( !v70 )
                v71 = v106;
              v92 = v71;
              v72 = (unsigned __int64)&v71[v19 - v45];
              if ( (unsigned __int64)v93 < v72 )
                v72 = (unsigned __int64)v93;
              v73 = sub_907A60((_QWORD *)(v19 + 4), (_QWORD *)(v45 + 4), v72);
              v74 = v73;
              if ( v92 == (char *)(v75 + v73) )
                v74 = sub_907A60((_QWORD *)(v19 + 4 + v73), v107, (unsigned __int64)v93) + v73;
              v76 = v74 + 4;
              v77 = *(__m128i **)(a2 + 24);
              if ( (unsigned __int64)v102 < v19 )
                sub_9079D0(v77, (const __m128i *)v19, v19, v102);
              else
                *v77 = _mm_loadu_si128((const __m128i *)v19);
              v78 = v74 + 1;
              *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
              **(_DWORD **)(a2 + 8) = 1;
              v79 = *(_QWORD *)(a2 + 8);
              if ( v78 > 0xFFFF )
              {
                *(_DWORD *)(a2 + 72) = 2;
                *(_DWORD *)(a2 + 76) = (v79 - *(_QWORD *)a2) >> 3;
              }
              *(_WORD *)(v79 + 6) = v78;
              v19 += v76;
              *(_QWORD *)(a2 + 8) += 8LL;
              if ( v96 < v19 )
                break;
              v80 = v43;
              v43 = v89;
              v89 = v80;
            }
            v88 = v89;
            v91 = (const __m128i *)v19;
            v89 = v43;
            v101 = v88;
          }
          goto LABEL_54;
        }
      }
      else
      {
        v23 = v22;
        v24 = v19 + 1;
        v25 = 1;
        if ( v23 > 3 )
          goto LABEL_16;
      }
      v47 = ((v19 - (unsigned __int64)v91) >> 8) + 1;
      v19 += v47;
      *(_DWORD *)(a1 + 300) = v47 > 8;
LABEL_54:
      if ( v96 <= v19 )
        goto LABEL_55;
    }
    v49 = v21 + 4;
    v50 = v19 + 5;
    v51 = v93;
    if ( v94 > (unsigned int)v20 )
      v51 = v106;
    v52 = &v51[v50 - v49];
    if ( v93 < v52 )
      v52 = v93;
    v53 = (unsigned __int64)(v52 - 7);
    if ( v50 >= (unsigned __int64)(v52 - 7) )
    {
      v57 = (__int64 *)(v21 + 4);
      v56 = (char *)(v19 + 5);
    }
    else
    {
      v54 = *(_QWORD *)(v21 + 4);
      v55 = *(_QWORD *)(v19 + 5);
      if ( v54 != v55 )
      {
        _R8 = v55 ^ v54;
        __asm { tzcnt   r12, r8 }
        v62 = (char *)((unsigned int)_R12 >> 3);
LABEL_108:
        if ( v51 != &v62[v49] )
          goto LABEL_109;
        goto LABEL_74;
      }
      v56 = (char *)(v19 + 13);
      v57 = (__int64 *)(v21 + 12);
      if ( v53 > v19 + 13 )
      {
        v58 = *(_QWORD *)(v21 + 12);
        v59 = *(_QWORD *)(v19 + 13);
        if ( v58 != v59 )
        {
LABEL_73:
          _RAX = v59 ^ v58;
          __asm { tzcnt   rax, rax }
          v62 = &v56[((unsigned int)_RAX >> 3) - v50];
          if ( v51 != &v62[v49] )
          {
LABEL_109:
            v22 = (unsigned __int64)(v62 + 4);
            goto LABEL_11;
          }
LABEL_74:
          v62 += sub_907A60(&v62[v50], v107, (unsigned __int64)v93);
          goto LABEL_109;
        }
        while ( 1 )
        {
          v56 += 8;
          ++v57;
          if ( v53 <= (unsigned __int64)v56 )
            break;
          v58 = *v57;
          v59 = *(_QWORD *)v56;
          if ( *v57 != *(_QWORD *)v56 )
            goto LABEL_73;
        }
      }
    }
    if ( v56 < v52 - 3 && *(_DWORD *)v57 == *(_DWORD *)v56 )
    {
      v56 += 4;
      v57 = (__int64 *)((char *)v57 + 4);
      if ( v56 >= v52 - 1 )
        goto LABEL_106;
    }
    else if ( v56 >= v52 - 1 )
    {
      goto LABEL_106;
    }
    if ( *(_WORD *)v57 == *(_WORD *)v56 )
    {
      v56 += 2;
      v57 = (__int64 *)((char *)v57 + 2);
      if ( v52 <= v56 )
        goto LABEL_107;
      goto LABEL_111;
    }
LABEL_106:
    if ( v52 <= v56 )
    {
LABEL_107:
      v62 = &v56[-v50];
      goto LABEL_108;
    }
LABEL_111:
    v56 += *(_BYTE *)v57 == (unsigned __int8)*v56;
    goto LABEL_107;
  }
LABEL_55:
  *a3 = v89;
  a3[1] = v101;
  return v93 - (char *)v91;
}

