signed __int64 __fastcall sub_E4FC0(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v6; // r12
  __int64 v8; // r13
  int v9; // r10d
  unsigned int v10; // r14d
  unsigned int v11; // eax
  bool v12; // cf
  unsigned int v13; // esi
  int v14; // eax
  char **v15; // rax
  char *v16; // rdi
  __int64 v17; // rdx
  char *v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rdx
  char *v29; // rdi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __m128i *v33; // rdi
  unsigned __int64 v34; // r11
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r11
  int v38; // r12d
  unsigned int v39; // ecx
  char *v40; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  char *v44; // rsi
  unsigned __int64 v45; // rdi
  char *v46; // r8
  char *v47; // rcx
  unsigned __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r10
  char *v51; // rax
  __int64 *v52; // r10
  __int64 v53; // rdx
  __int64 v54; // r11
  char *v57; // r10
  signed __int64 v58; // rax
  __int64 v59; // r10
  bool v60; // cc
  char *v61; // rcx
  unsigned __int64 v62; // rdi
  char *v63; // rsi
  char *v64; // rdx
  unsigned __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r10
  char *v68; // r10
  _QWORD *v69; // r9
  __int64 v70; // rax
  char *v73; // r10
  signed __int64 v74; // rax
  __m128i *v75; // rdi
  __int64 v76; // r10
  char *v77; // r9
  __m128i *v78; // rax
  char *v79; // rdx
  const __m128i *v80; // r12
  __m128i *v81; // rax
  __m128i v82; // xmm0
  unsigned __int64 v83; // r10
  __int64 v84; // rax
  int v85; // eax
  int v90; // eax
  int v91; // [rsp+4h] [rbp-B4h]
  unsigned __int64 v92; // [rsp+8h] [rbp-B0h]
  int v93; // [rsp+10h] [rbp-A8h]
  __int64 v94; // [rsp+10h] [rbp-A8h]
  char *v95; // [rsp+18h] [rbp-A0h]
  char *v96; // [rsp+20h] [rbp-98h]
  const __m128i *v97; // [rsp+28h] [rbp-90h]
  unsigned int v98; // [rsp+30h] [rbp-88h]
  unsigned int v99; // [rsp+34h] [rbp-84h]
  int v100; // [rsp+40h] [rbp-78h]
  unsigned int v101; // [rsp+44h] [rbp-74h]
  char *v102; // [rsp+50h] [rbp-68h]
  char *v103; // [rsp+58h] [rbp-60h]
  char *v104; // [rsp+60h] [rbp-58h]
  _QWORD v106[9]; // [rsp+70h] [rbp-48h] BYREF

  v6 = a4;
  v8 = *(_QWORD *)(a1 + 8);
  v106[1] = __readfsqword(0x28u);
  v96 = &a4->m128i_i8[a5];
  v92 = (unsigned __int64)&a4->m128i_u64[-1] + a5;
  v9 = v8 + *(_DWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 24);
  v11 = 6;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v11 = *(_DWORD *)(a1 + 272);
  v103 = (char *)(v8 + *(unsigned int *)(a1 + 24));
  v12 = v11 < 4;
  v13 = v11;
  v14 = 4;
  if ( !v12 )
    v14 = v13;
  v100 = v14;
  v91 = *a3;
  v93 = a3[1];
  v15 = *(char ***)(a1 + 248);
  v16 = *v15;
  v17 = *((unsigned int *)v15 + 6);
  v18 = v15[1];
  *(_DWORD *)(a1 + 300) = 0;
  v102 = v16;
  v95 = v18;
  v104 = &v18[v17];
  v99 = v10 - ((_DWORD)v16 - (_DWORD)v18);
  v19 = (unsigned __int64)a4->m128i_u64 + ((_DWORD)v16 - ((_DWORD)v18 + (_DWORD)v17) + (_DWORD)a4 - v9 == 0);
  if ( (unsigned __int64)&a4->m128i_u64[-1] + a5 > v19 )
  {
    v98 = v10 - 1;
    v97 = (const __m128i *)((char *)a4 + a5 - 32);
    v101 = (_DWORD)v16 - (_DWORD)v18 - v10;
    while ( 1 )
    {
      v24 = (unsigned int)(1 - v91 + v19 - v8);
      v25 = (char *)(v8 + v24);
      if ( v10 > (unsigned int)v24 )
        v25 = &v95[v101 + (unsigned int)v24];
      if ( v98 - (unsigned int)v24 > 2 && *(_DWORD *)(v19 + 1) == *(_DWORD *)v25 )
      {
        v44 = v25 + 4;
        v45 = v19 + 5;
        v46 = v96;
        if ( v10 > (unsigned int)v24 )
          v46 = v102;
        v47 = (char *)(v45 + v46 - v44);
        if ( v96 < v47 )
          v47 = v96;
        v48 = (unsigned __int64)(v47 - 7);
        if ( v45 >= (unsigned __int64)(v47 - 7) )
        {
          v52 = (__int64 *)(v25 + 4);
          v51 = (char *)(v19 + 5);
          goto LABEL_77;
        }
        v49 = *(_QWORD *)(v25 + 4);
        v50 = *(_QWORD *)(v19 + 5);
        if ( v49 == v50 )
        {
          v51 = (char *)(v19 + 13);
          v52 = (__int64 *)(v25 + 12);
          if ( v48 > v19 + 13 )
          {
            v53 = *(_QWORD *)(v25 + 12);
            v54 = *(_QWORD *)(v19 + 13);
            if ( v53 != v54 )
            {
LABEL_57:
              _RDX = v54 ^ v53;
              __asm { tzcnt   r10, rdx }
              v57 = &v51[((unsigned int)_R10 >> 3) - v45];
              if ( v46 == &v44[(_QWORD)v57] )
                goto LABEL_58;
              goto LABEL_84;
            }
            while ( 1 )
            {
              v51 += 8;
              ++v52;
              if ( v48 <= (unsigned __int64)v51 )
                break;
              v53 = *v52;
              v54 = *(_QWORD *)v51;
              if ( *v52 != *(_QWORD *)v51 )
                goto LABEL_57;
            }
          }
LABEL_77:
          if ( v51 >= v47 - 3 || *(_DWORD *)v52 != *(_DWORD *)v51 )
          {
            if ( v51 < v47 - 1 )
              goto LABEL_80;
LABEL_81:
            if ( v47 <= v51 )
              goto LABEL_82;
LABEL_99:
            v51 += *(_BYTE *)v52 == (unsigned __int8)*v51;
            goto LABEL_82;
          }
          v51 += 4;
          v52 = (__int64 *)((char *)v52 + 4);
          if ( v51 >= v47 - 1 )
            goto LABEL_81;
LABEL_80:
          if ( *(_WORD *)v52 != *(_WORD *)v51 )
            goto LABEL_81;
          v51 += 2;
          v52 = (__int64 *)((char *)v52 + 2);
          if ( v47 > v51 )
            goto LABEL_99;
LABEL_82:
          v57 = &v51[-v45];
        }
        else
        {
          _RAX = v50 ^ v49;
          __asm { tzcnt   rax, rax }
          v57 = (char *)((unsigned int)_RAX >> 3);
        }
        if ( v46 == &v44[(_QWORD)v57] )
        {
LABEL_58:
          v58 = sub_C9E40(&v57[v45], v103, (unsigned __int64)v96);
          v57 = (char *)(v58 + v59);
        }
LABEL_84:
        ++v19;
        v22 = (unsigned __int64)(v57 + 4);
        v27 = 1;
        goto LABEL_30;
      }
      v106[0] = 999999999;
      if ( v100 == 5 )
      {
        v43 = sub_E0790(a1, (_QWORD *)v19, v96, v106);
        v21 = v19 - v8;
        v22 = v43;
      }
      else
      {
        if ( v100 == 6 )
        {
          v26 = sub_E1810(a1, (_QWORD *)v19, v96, v106);
          v21 = v19 - v8;
          v22 = v26;
          if ( !v26 )
            goto LABEL_9;
          goto LABEL_18;
        }
        v20 = sub_E0FE0(a1, (_QWORD *)v19, (unsigned __int64)v96, v106);
        v21 = v19 - v8;
        v22 = v20;
      }
      if ( !v22 )
        goto LABEL_9;
LABEL_18:
      if ( v22 <= 3 )
      {
LABEL_9:
        v23 = ((v19 - (unsigned __int64)v6) >> 8) + 1;
        v19 += v23;
        *(_DWORD *)(a1 + 300) = v23 > 8;
        goto LABEL_10;
      }
      v27 = v106[0];
      if ( v106[0] > 3u )
      {
        v28 = (unsigned int)(v21 - LODWORD(v106[0]) + 3);
        if ( v10 <= (unsigned int)v28 )
        {
          v30 = v8 + v28;
          v29 = v103;
        }
        else
        {
          v29 = v104;
          v30 = (unsigned __int64)&v95[v28 - v99];
        }
        if ( (unsigned __int64)v29 < v30 && (unsigned __int64)v6 < v19 && *(_BYTE *)(v19 - 1) == *(_BYTE *)(v30 - 1) )
        {
          v31 = v19;
          do
          {
            --v31;
            --v30;
            v32 = v22 + v19 - v31;
          }
          while ( v31 > (unsigned __int64)v6
               && v30 > (unsigned __int64)v29
               && *(_BYTE *)(v31 - 1) == *(_BYTE *)(v30 - 1) );
        }
        else
        {
          v32 = v22;
          v31 = v19;
        }
        v19 = v31;
        v22 = v32;
        v93 = v91;
        v91 = LODWORD(v106[0]) - 3;
      }
LABEL_30:
      v33 = *(__m128i **)(a2 + 24);
      v34 = v19 - (_QWORD)v6;
      if ( v19 > (unsigned __int64)v97 )
      {
        sub_C9DB0(v33, v6, v19, v97);
LABEL_46:
        *(_QWORD *)(a2 + 24) += v34;
        v35 = *(_QWORD *)(a2 + 8);
        if ( v34 > 0xFFFF )
        {
          v42 = v35 - *(_QWORD *)a2;
          *(_DWORD *)(a2 + 72) = 1;
          *(_DWORD *)(a2 + 76) = v42 >> 3;
        }
        goto LABEL_33;
      }
      *v33 = _mm_loadu_si128(v6);
      if ( v34 > 0x10 )
      {
        v78 = *(__m128i **)(a2 + 24);
        v78[1] = _mm_loadu_si128(v6 + 1);
        if ( (__int64)(v34 - 16) > 16 )
        {
          v79 = &v78->m128i_i8[v34];
          v80 = v6 + 2;
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
        goto LABEL_46;
      }
      *(_QWORD *)(a2 + 24) += v34;
      v35 = *(_QWORD *)(a2 + 8);
LABEL_33:
      *(_WORD *)(v35 + 4) = v34;
      **(_DWORD **)(a2 + 8) = v27;
      v36 = *(_QWORD *)(a2 + 8);
      if ( v22 - 3 > 0xFFFF )
      {
        *(_DWORD *)(a2 + 72) = 2;
        *(_DWORD *)(a2 + 76) = (v36 - *(_QWORD *)a2) >> 3;
      }
      *(_WORD *)(v36 + 6) = v22 - 3;
      v19 += v22;
      *(_QWORD *)(a2 + 8) += 8LL;
      if ( *(_DWORD *)(a1 + 300) )
        *(_DWORD *)(a1 + 300) = 0;
      v37 = v99;
      v38 = v93;
      if ( v92 < v19 )
      {
LABEL_43:
        v6 = (const __m128i *)v19;
        if ( v92 <= v19 )
          break;
      }
      else
      {
        while ( 1 )
        {
          v39 = v19 - v8 - v38;
          v40 = &v95[v39 - v37];
          if ( v10 <= v39 )
            v40 = (char *)(v8 + v39);
          if ( v38 + v98 - ((_DWORD)v19 - (_DWORD)v8) <= 2 || *(_DWORD *)v19 != *(_DWORD *)v40 )
          {
            v93 = v38;
            goto LABEL_43;
          }
          v60 = v10 <= v39;
          v61 = v40 + 4;
          v62 = v19 + 4;
          v63 = v96;
          if ( !v60 )
            v63 = v102;
          v64 = (char *)(v62 + v63 - v61);
          if ( v96 < v64 )
            v64 = v96;
          v65 = (unsigned __int64)(v64 - 7);
          if ( v62 >= (unsigned __int64)(v64 - 7) )
          {
            v69 = v40 + 4;
            v68 = (char *)(v19 + 4);
            goto LABEL_86;
          }
          v66 = *(_QWORD *)(v40 + 4);
          v67 = *(_QWORD *)(v19 + 4);
          if ( v66 != v67 )
          {
            _R9 = v67 ^ v66;
            __asm { tzcnt   r10, r9 }
            v73 = (char *)((unsigned int)_R10 >> 3);
            goto LABEL_92;
          }
          v68 = (char *)(v19 + 12);
          v69 = v40 + 12;
          if ( v65 <= v19 + 12 )
            goto LABEL_86;
          v94 = *(_QWORD *)(v40 + 12);
          v70 = *(_QWORD *)(v19 + 12);
          if ( v70 == v94 )
          {
            while ( 1 )
            {
              v68 += 8;
              ++v69;
              if ( v65 <= (unsigned __int64)v68 )
                break;
              if ( *v69 != *(_QWORD *)v68 )
              {
                _RAX = *(_QWORD *)v68 ^ *v69;
                goto LABEL_68;
              }
            }
LABEL_86:
            if ( v68 >= v64 - 3 || *(_DWORD *)v69 != *(_DWORD *)v68 )
            {
              if ( v68 < v64 - 1 )
                goto LABEL_89;
LABEL_90:
              if ( v64 <= v68 )
                goto LABEL_91;
LABEL_100:
              v68 += *(_BYTE *)v69 == (unsigned __int8)*v68;
              goto LABEL_91;
            }
            v68 += 4;
            v69 = (_QWORD *)((char *)v69 + 4);
            if ( v68 >= v64 - 1 )
              goto LABEL_90;
LABEL_89:
            if ( *(_WORD *)v69 != *(_WORD *)v68 )
              goto LABEL_90;
            v68 += 2;
            v69 = (_QWORD *)((char *)v69 + 2);
            if ( v64 > v68 )
              goto LABEL_100;
LABEL_91:
            v73 = &v68[-v62];
LABEL_92:
            if ( v63 == &v61[(_QWORD)v73] )
              goto LABEL_69;
            goto LABEL_93;
          }
          _RAX = v94 ^ v70;
LABEL_68:
          __asm { tzcnt   rax, rax }
          v73 = &v68[((unsigned int)_RAX >> 3) - v62];
          if ( v63 == &v61[(_QWORD)v73] )
          {
LABEL_69:
            v74 = sub_C9E40(&v73[v62], v103, (unsigned __int64)v96);
            v75 = *(__m128i **)(a2 + 24);
            v73 = (char *)(v74 + v76);
            v77 = v73 + 4;
            if ( (unsigned __int64)v97 < v19 )
              goto LABEL_70;
            goto LABEL_94;
          }
LABEL_93:
          v77 = v73 + 4;
          v75 = *(__m128i **)(a2 + 24);
          if ( (unsigned __int64)v97 < v19 )
          {
LABEL_70:
            sub_C9DB0(v75, (const __m128i *)v19, v19, v97);
            goto LABEL_95;
          }
LABEL_94:
          *v75 = _mm_loadu_si128((const __m128i *)v19);
LABEL_95:
          v83 = (unsigned __int64)(v73 + 1);
          *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
          **(_DWORD **)(a2 + 8) = 1;
          v84 = *(_QWORD *)(a2 + 8);
          if ( v83 > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 2;
            *(_DWORD *)(a2 + 76) = (v84 - *(_QWORD *)a2) >> 3;
          }
          *(_WORD *)(v84 + 6) = v83;
          v19 += (unsigned __int64)v77;
          *(_QWORD *)(a2 + 8) += 8LL;
          if ( v92 < v19 )
            break;
          v85 = v38;
          v38 = v91;
          v91 = v85;
        }
        v90 = v91;
        v91 = v38;
        v6 = (const __m128i *)v19;
        v93 = v90;
LABEL_10:
        if ( v92 <= v19 )
          break;
      }
    }
  }
  *a3 = v91;
  a3[1] = v93;
  return v96 - (char *)v6;
}

