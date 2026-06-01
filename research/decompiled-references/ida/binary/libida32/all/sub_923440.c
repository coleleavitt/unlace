signed __int64 __fastcall sub_923440(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v8; // r12
  __int64 v9; // rdi
  int v10; // r9d
  unsigned int v11; // edx
  unsigned int v12; // ebp
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned int v17; // r11d
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // edi
  unsigned int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned int v26; // esi
  _QWORD *v27; // rdi
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  char v30; // al
  __int64 v31; // r11
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  const char *v34; // r15
  char v35; // al
  __int64 v36; // rax
  unsigned int v37; // r13d
  __int64 v38; // rbp
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  int v41; // r11d
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // r10
  __m128i *v44; // rdi
  unsigned __int64 v45; // rbx
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
  __int64 v61; // rax
  __int64 v62; // r11
  unsigned int v63; // eax
  signed __int64 v65; // rax
  unsigned int v66; // r10d
  __m128i *v67; // rdi
  signed __int64 v68; // r9
  signed __int64 v69; // r12
  unsigned __int64 v70; // r9
  __int64 v71; // rax
  unsigned int v72; // esi
  __int64 v73; // rdx
  _QWORD *v74; // rdx
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  char *v80; // r10
  char *v81; // r10
  __m128i *v82; // rax
  char *v83; // rdx
  const __m128i *v84; // r12
  __m128i *v85; // rax
  __m128i v86; // xmm0
  _QWORD *v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rdi
  unsigned __int64 v92; // [rsp+0h] [rbp-B8h]
  unsigned int v93; // [rsp+Ch] [rbp-ACh]
  char *v94; // [rsp+10h] [rbp-A8h]
  unsigned int v95; // [rsp+18h] [rbp-A0h]
  char v96; // [rsp+1Ch] [rbp-9Ch]
  bool v97; // [rsp+1Ch] [rbp-9Ch]
  const __m128i *v98; // [rsp+20h] [rbp-98h]
  int v99; // [rsp+28h] [rbp-90h]
  char v100; // [rsp+2Ch] [rbp-8Ch]
  char v101; // [rsp+30h] [rbp-88h]
  __int64 v102; // [rsp+48h] [rbp-70h]
  unsigned int v103; // [rsp+50h] [rbp-68h]
  unsigned int v104; // [rsp+54h] [rbp-64h]
  unsigned __int64 v105; // [rsp+58h] [rbp-60h]
  unsigned int v107; // [rsp+68h] [rbp-50h]
  bool v108; // [rsp+6Eh] [rbp-4Ah]
  bool v109; // [rsp+6Fh] [rbp-49h]
  _QWORD v110[9]; // [rsp+70h] [rbp-48h] BYREF

  v8 = a4;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_DWORD *)(a1 + 40);
  v11 = 6;
  v12 = 6;
  v110[1] = __readfsqword(0x28u);
  v102 = v9;
  v94 = &a4->m128i_i8[a5];
  v92 = (unsigned __int64)a4[-1].m128i_u64 + a5;
  v103 = *(_DWORD *)(a1 + 268);
  v13 = *(unsigned int *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v12 = *(_DWORD *)(a1 + 272);
  v105 = v9 + v13;
  v14 = 4;
  v107 = 0;
  if ( v12 < 4 )
    v12 = 4;
  if ( *(_DWORD *)(a1 + 268) <= 6u )
    v11 = *(_DWORD *)(a1 + 268);
  if ( v11 >= 4 )
    v14 = v11;
  v99 = v14;
  v15 = *a3;
  v16 = (unsigned __int64)a4->m128i_u64 + ((_DWORD)a4 == (_DWORD)v9 + (_DWORD)v13);
  v17 = a3[1];
  v93 = v15;
  v18 = v16 - v9;
  v95 = v17;
  v19 = 1 << *(_DWORD *)(a1 + 256);
  v20 = v16 - v9 - v13;
  v21 = v16 - v9 - v19;
  if ( v19 < v20 )
    LODWORD(v13) = v21;
  v22 = v18 - v13;
  if ( !v10 )
    v20 = v22;
  if ( v17 > v20 )
  {
    v107 = v17;
    v95 = 0;
  }
  v108 = v93 != 0;
  if ( v93 <= v20 )
  {
    v109 = 0;
    v104 = 0;
  }
  else
  {
    v109 = v93 != 0;
    v104 = v93;
    v108 = 0;
    v93 = 0;
  }
  v23 = *(unsigned int *)(a1 + 44);
  v24 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 300) = 0;
  v25 = *(_QWORD *)(a1 + 56);
  v26 = v23;
  v27 = (_QWORD *)(v102 + v23);
  if ( v92 >= (unsigned __int64)v27 )
  {
    v28 = v92 - (_DWORD)v27 + 1;
    if ( v28 > 8 )
      v28 = 8;
    v29 = v26 + v28;
    if ( v26 < v29 )
    {
      v30 = *(_DWORD *)(a1 + 52) + 8;
      v31 = *(_QWORD *)(a1 + 96);
      v96 = 64 - v30;
      v100 = 32 - v30;
      do
      {
        if ( v12 == 5 )
        {
          v32 = (v31 ^ (0xCF1BBCDCBB000000LL * *v27)) >> v96;
        }
        else if ( v12 == 6 )
        {
          v32 = (v31 ^ (0xCF1BBCDCBF9B0000LL * *v27)) >> v96;
        }
        else
        {
          LODWORD(v32) = ((unsigned int)v31 ^ (-1640531535 * *(_DWORD *)v27)) >> v100;
        }
        v33 = (unsigned int)v32 >> 8 << v99;
        v34 = (const char *)(v25 + v33);
        _mm_prefetch((const char *)(v24 + 4 * v33), 1);
        if ( v103 <= 4 )
        {
          _mm_prefetch(v34, 1);
        }
        else
        {
          _mm_prefetch((const char *)(v24 + 4 * v33 + 64), 1);
          _mm_prefetch(v34, 1);
          if ( v103 != 5 )
            _mm_prefetch((const char *)(v25 + v33 + 32), 1);
        }
        v35 = v26++;
        v27 = (_QWORD *)((char *)v27 + 1);
        *(_DWORD *)(a1 + 4LL * (v35 & 7) + 64) = v32;
      }
      while ( v29 != v26 );
    }
  }
  v98 = (const __m128i *)(v94 - 32);
  v36 = a1;
  v37 = v12;
  v38 = v36;
  while ( v92 > v16 )
  {
    while ( 1 )
    {
      v108 = v93 != 0 && *(_DWORD *)(v16 - v93 + 1) == *(_DWORD *)(v16 + 1);
      if ( v108 )
      {
        v74 = (_QWORD *)(v16 - v93 + 5);
        v75 = (unsigned __int64)(v94 - 7);
        v76 = v16 + 5;
        if ( v16 + 5 >= (unsigned __int64)(v94 - 7) )
        {
          v81 = (char *)(v16 + 5);
        }
        else
        {
          v77 = *(_QWORD *)(v16 + 5);
          if ( *v74 != v77 )
          {
            _RSI = v77 ^ *v74;
            __asm { tzcnt   r10, rsi }
            v80 = (char *)((unsigned int)_R10 >> 3);
LABEL_95:
            v43 = (unsigned __int64)(v80 + 4);
            v42 = v16 + 1;
            v41 = 1;
            v97 = v95 != 0;
            goto LABEL_49;
          }
          v81 = (char *)(v16 + 13);
          v87 = (_QWORD *)(v16 - v93 + 13);
          if ( v75 > v16 + 13 )
          {
            v88 = *(_QWORD *)(v16 - v93 + 13);
            v89 = *(_QWORD *)(v16 + 13);
            if ( v88 != v89 )
            {
LABEL_123:
              _RDX = v89 ^ v88;
              __asm { tzcnt   rdx, rdx }
              v80 = &v81[((unsigned int)_RDX >> 3) - v76];
              goto LABEL_95;
            }
            while ( 1 )
            {
              v81 += 8;
              ++v87;
              if ( v75 <= (unsigned __int64)v81 )
                break;
              v88 = *v87;
              v89 = *(_QWORD *)v81;
              if ( *v87 != *(_QWORD *)v81 )
                goto LABEL_123;
            }
          }
          v74 = v87;
        }
        if ( v81 < v94 - 3 && *(_DWORD *)v74 == *(_DWORD *)v81 )
        {
          v81 += 4;
          v74 = (_QWORD *)((char *)v74 + 4);
        }
        if ( v81 < v94 - 1 && *(_WORD *)v74 == *(_WORD *)v81 )
        {
          v81 += 2;
          v74 = (_QWORD *)((char *)v74 + 2);
        }
        if ( v94 > v81 )
          v81 += *(_BYTE *)v74 == (unsigned __int8)*v81;
        v80 = &v81[-v76];
        goto LABEL_95;
      }
      v110[0] = 999999999;
      if ( v37 != 5 )
        break;
      if ( v99 == 5 )
      {
        v39 = sub_90CDC0(v38, (_QWORD *)v16, v94, v110);
      }
      else if ( v99 == 6 )
      {
        v39 = sub_90E220(v38, (_QWORD *)v16, v94, v110);
      }
      else
      {
        v39 = sub_90AE10(v38, (_QWORD *)v16, v94, v110);
      }
LABEL_37:
      if ( v39 )
        goto LABEL_46;
LABEL_38:
      v108 = v93 != 0;
      v40 = ((v16 - (unsigned __int64)v8) >> 8) + 1;
      v16 += v40;
      *(_DWORD *)(v38 + 300) = v40 > 8;
LABEL_39:
      if ( v92 <= v16 )
        goto LABEL_74;
    }
    if ( v37 != 6 )
    {
      if ( v99 == 5 )
      {
        v39 = sub_90C0A0(v38, (_QWORD *)v16, (unsigned __int64)v94, v110);
      }
      else if ( v99 == 6 )
      {
        v39 = sub_90D470(v38, (_QWORD *)v16, (unsigned __int64)v94, v110);
      }
      else
      {
        v39 = sub_90B460(v38, (_QWORD *)v16, (unsigned __int64)v94, v110);
      }
      goto LABEL_37;
    }
    if ( v99 == 5 )
    {
      v39 = sub_90C710(v38, (_QWORD *)v16, v94, v110);
      goto LABEL_37;
    }
    if ( v99 == 6 )
    {
      v39 = sub_90DB20(v38, (_QWORD *)v16, v94, v110);
      goto LABEL_37;
    }
    v39 = sub_90BA50(v38, (_QWORD *)v16, v94, v110);
    if ( !v39 )
      goto LABEL_38;
LABEL_46:
    if ( v39 <= 3 )
      goto LABEL_38;
    v41 = v110[0];
    if ( v110[0] > 3u )
    {
      if ( v105 < v16 + 3LL - v110[0]
        && (unsigned __int64)v8 < v16
        && *(_BYTE *)(v16 - 1) == *(_BYTE *)(v16 + 2LL - v110[0]) )
      {
        v42 = v16;
        do
        {
          --v42;
          v43 = v39 + v16 - v42;
        }
        while ( v105 < 3LL - v110[0] + v42
             && v42 > (unsigned __int64)v8
             && *(_BYTE *)(v42 - 1) == *(_BYTE *)(v42 + 2LL - v110[0]) );
      }
      else
      {
        v43 = v39;
        v42 = v16;
      }
      v97 = v93 != 0;
      v108 = LODWORD(v110[0]) != 3;
      v95 = v93;
      v93 = LODWORD(v110[0]) - 3;
    }
    else
    {
      v108 = v93 != 0;
      v42 = v16;
      v43 = v39;
      v97 = v95 != 0;
    }
LABEL_49:
    v44 = *(__m128i **)(a2 + 24);
    v45 = v42 - (_QWORD)v8;
    if ( v42 > (unsigned __int64)v98 )
    {
      sub_9079D0(v44, v8, v42, v98);
    }
    else
    {
      *v44 = _mm_loadu_si128(v8);
      if ( v45 <= 0x10 )
      {
        *(_QWORD *)(a2 + 24) += v45;
        v46 = *(_QWORD *)(a2 + 8);
        goto LABEL_52;
      }
      v82 = *(__m128i **)(a2 + 24);
      v82[1] = _mm_loadu_si128(v8 + 1);
      if ( (__int64)(v45 - 16) > 16 )
      {
        v83 = &v82->m128i_i8[v45];
        v84 = v8 + 2;
        v85 = v82 + 2;
        do
        {
          v86 = _mm_loadu_si128(v84);
          v85 += 2;
          v84 += 2;
          v85[-2] = v86;
          v85[-1] = _mm_loadu_si128(v84 - 1);
        }
        while ( v83 > (char *)v85 );
      }
    }
    *(_QWORD *)(a2 + 24) += v45;
    v46 = *(_QWORD *)(a2 + 8);
    if ( v45 > 0xFFFF )
    {
      v73 = v46 - *(_QWORD *)a2;
      *(_DWORD *)(a2 + 72) = 1;
      *(_DWORD *)(a2 + 76) = v73 >> 3;
    }
LABEL_52:
    *(_WORD *)(v46 + 4) = v45;
    **(_DWORD **)(a2 + 8) = v41;
    v47 = *(_QWORD *)(a2 + 8);
    if ( v43 - 3 > 0xFFFF )
    {
      *(_DWORD *)(a2 + 72) = 2;
      *(_DWORD *)(a2 + 76) = (v47 - *(_QWORD *)a2) >> 3;
    }
    *(_WORD *)(v47 + 6) = v43 - 3;
    v16 = v42 + v43;
    *(_QWORD *)(a2 + 8) += 8LL;
    if ( *(_DWORD *)(v38 + 300) )
    {
      v48 = *(_QWORD *)(v38 + 112);
      v49 = *(_QWORD *)(v38 + 56);
      v50 = *(unsigned int *)(v38 + 44);
      v51 = (_QWORD *)(v102 + v50);
      if ( v92 >= v102 + v50 )
      {
        v52 = v92 - (_DWORD)v51 + 1;
        if ( v52 > 8 )
          v52 = 8;
        v53 = v50 + v52;
        if ( (unsigned int)v50 < v53 )
        {
          v54 = *(_DWORD *)(v38 + 52) + 8;
          v55 = *(_QWORD *)(v38 + 96);
          v56 = 64 - v54;
          v101 = 32 - v54;
          do
          {
            if ( v37 == 5 )
            {
              v57 = (v55 ^ (0xCF1BBCDCBB000000LL * *v51)) >> v56;
            }
            else if ( v37 == 6 )
            {
              v57 = (v55 ^ (0xCF1BBCDCBF9B0000LL * *v51)) >> v56;
            }
            else
            {
              LODWORD(v57) = ((unsigned int)v55 ^ (-1640531535 * *(_DWORD *)v51)) >> v101;
            }
            v58 = (unsigned int)v57 >> 8 << v99;
            v59 = (const char *)(v49 + v58);
            _mm_prefetch((const char *)(v48 + 4 * v58), 1);
            if ( v103 <= 4 )
            {
              _mm_prefetch(v59, 1);
            }
            else
            {
              _mm_prefetch((const char *)(v48 + 4 * v58 + 64), 1);
              _mm_prefetch(v59, 1);
              if ( v103 != 5 )
                _mm_prefetch((const char *)(v49 + v58 + 32), 1);
            }
            v60 = v50;
            LODWORD(v50) = v50 + 1;
            v51 = (_QWORD *)((char *)v51 + 1);
            *(_DWORD *)(v38 + 4LL * (v60 & 7) + 64) = v57;
          }
          while ( v53 != (_DWORD)v50 );
        }
      }
      *(_DWORD *)(v38 + 300) = 0;
    }
    if ( v92 >= v16 && v97 )
    {
      v61 = v95;
      v62 = 4;
      if ( *(_DWORD *)(v16 - v95) == *(_DWORD *)v16 )
      {
        while ( 1 )
        {
          v65 = sub_907A60((_QWORD *)(v16 + 4), (_QWORD *)(v16 + v62 - v61), (unsigned __int64)v94);
          v67 = *(__m128i **)(a2 + 24);
          v68 = v65;
          v69 = v65 + 4;
          if ( (unsigned __int64)v98 >= v16 )
            *v67 = _mm_loadu_si128((const __m128i *)v16);
          else
            sub_9079D0(v67, (const __m128i *)v16, v16, v98);
          v70 = v68 + 1;
          *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
          **(_DWORD **)(a2 + 8) = 1;
          v71 = *(_QWORD *)(a2 + 8);
          if ( v70 > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 2;
            *(_DWORD *)(a2 + 76) = (v71 - *(_QWORD *)a2) >> 3;
          }
          *(_WORD *)(v71 + 6) = v70;
          v16 += v69;
          *(_QWORD *)(a2 + 8) += 8LL;
          v108 = v95 != 0;
          if ( v92 < v16 )
            break;
          if ( !v66 )
            break;
          v61 = v66;
          if ( *(_DWORD *)(v16 - v66) != *(_DWORD *)v16 )
            break;
          v95 = v66;
        }
        v72 = v95;
        v8 = (const __m128i *)v16;
        v95 = v66;
        v93 = v72;
        goto LABEL_39;
      }
    }
    v8 = (const __m128i *)v16;
  }
LABEL_74:
  if ( !v109 || !v108 )
  {
    if ( !v93 )
      v93 = v104;
    v104 = v107;
  }
  *a3 = v93;
  v63 = v95;
  if ( !v95 )
    v63 = v104;
  a3[1] = v63;
  return v94 - (char *)v8;
}

