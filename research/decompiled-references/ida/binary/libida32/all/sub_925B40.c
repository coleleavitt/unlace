char *__fastcall sub_925B40(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  char *v5; // r8
  const __m128i *v6; // r14
  __int64 v9; // r15
  int v10; // r10d
  unsigned int v11; // esi
  unsigned int v12; // eax
  bool v13; // cf
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ecx
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // r12
  unsigned int v27; // r10d
  unsigned int v28; // r10d
  unsigned int v29; // eax
  __int64 v30; // r11
  int v31; // r14d
  unsigned __int64 v32; // rax
  unsigned int v33; // r10d
  __int64 v34; // rdx
  _QWORD *v35; // rsi
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __m128i *v39; // rdi
  unsigned __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r11
  int v44; // ebx
  unsigned int v45; // ecx
  __int64 v46; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  char *v50; // rbx
  unsigned __int64 v51; // rdx
  signed __int64 v52; // rax
  __int64 v53; // r11
  __int64 v54; // r10
  signed __int64 v55; // r12
  char *v56; // r9
  unsigned __int64 v57; // rdx
  signed __int64 v58; // rax
  int v59; // r10d
  __int64 v60; // r11
  signed __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  bool v63; // cc
  char *v64; // rcx
  unsigned __int64 v65; // rdx
  signed __int64 v66; // rax
  signed __int64 v67; // r12
  __int64 v68; // r10
  signed __int64 v69; // r9
  __m128i *v70; // rdi
  unsigned __int64 v71; // r12
  __int64 v72; // rax
  int v73; // eax
  __m128i *v74; // rax
  char *v75; // rcx
  __m128i *v76; // rax
  const __m128i *v77; // rdx
  __m128i v78; // xmm0
  int v79; // eax
  int v80; // [rsp+4h] [rbp-F4h]
  const __m128i *v82; // [rsp+10h] [rbp-E8h]
  char *v83; // [rsp+10h] [rbp-E8h]
  char *v84; // [rsp+20h] [rbp-D8h]
  unsigned int v85; // [rsp+28h] [rbp-D0h]
  unsigned int v86; // [rsp+2Ch] [rbp-CCh]
  unsigned __int64 v87; // [rsp+30h] [rbp-C8h]
  int v88; // [rsp+38h] [rbp-C0h]
  int v89; // [rsp+3Ch] [rbp-BCh]
  __int64 v90; // [rsp+40h] [rbp-B8h]
  int v91; // [rsp+50h] [rbp-A8h]
  int v92; // [rsp+60h] [rbp-98h]
  const __m128i *v93; // [rsp+68h] [rbp-90h]
  __int64 v94; // [rsp+70h] [rbp-88h]
  int v95; // [rsp+78h] [rbp-80h]
  unsigned int v96; // [rsp+7Ch] [rbp-7Ch]
  char *v97; // [rsp+80h] [rbp-78h]
  _QWORD *v98; // [rsp+88h] [rbp-70h]
  char *v99; // [rsp+98h] [rbp-60h]
  _QWORD *v100; // [rsp+A0h] [rbp-58h]
  _QWORD v102[9]; // [rsp+B0h] [rbp-48h] BYREF

  v5 = &a4->m128i_i8[a5];
  v6 = a4;
  v9 = *(_QWORD *)(a1 + 8);
  v102[1] = __readfsqword(0x28u);
  v84 = v5;
  v87 = (unsigned __int64)(v5 - 8);
  v10 = v9 + *(_DWORD *)(a1 + 24);
  v11 = *(_DWORD *)(a1 + 24);
  v85 = v11;
  v12 = 6;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v12 = *(_DWORD *)(a1 + 272);
  v98 = (_QWORD *)(v9 + *(unsigned int *)(a1 + 24));
  v13 = v12 < 4;
  v14 = v12;
  v15 = 4;
  if ( !v13 )
    v15 = v14;
  v89 = v15;
  v80 = *a3;
  v92 = a3[1];
  v16 = *(_QWORD *)(a1 + 248);
  v17 = *(_QWORD *)(v16 + 8);
  v90 = v17;
  v100 = (_QWORD *)(v17 + *(unsigned int *)(v16 + 24));
  v97 = *(char **)v16;
  v18 = *(_QWORD *)v16 - v17;
  v96 = v11 - v18;
  *(_DWORD *)(a1 + 300) = 0;
  v19 = (unsigned __int64)v6->m128i_u64 + ((_DWORD)v97 - (_DWORD)v100 + (_DWORD)v6 - v10 == 0);
  if ( (unsigned __int64)(v5 - 8) > v19 )
  {
    v82 = v6;
    v20 = a2;
    v86 = v11 - 1;
    v95 = v18 - v11;
    v93 = (const __m128i *)(v5 - 32);
    while ( 1 )
    {
      v21 = (unsigned int)(1 - v80 + v19 - v9);
      v22 = v9 + v21;
      if ( v85 > (unsigned int)v21 )
        v22 = v90 + (unsigned int)(v95 + v21);
      v23 = 0;
      if ( v86 - (unsigned int)v21 > 2 && *(_DWORD *)(v19 + 1) == *(_DWORD *)v22 )
      {
        v50 = v84;
        if ( v85 > (unsigned int)v21 )
          v50 = v97;
        v51 = (unsigned __int64)&v50[v19 + 1 - v22];
        if ( (unsigned __int64)v84 < v51 )
          v51 = (unsigned __int64)v84;
        v52 = sub_907A60((_QWORD *)(v19 + 5), (_QWORD *)(v22 + 4), v51);
        v55 = v52;
        if ( v50 == (char *)(v52 + v54) )
          v55 = sub_907A60((_QWORD *)(v53 + v52), v98, (unsigned __int64)v84) + v52;
        v23 = v55 + 4;
      }
      v102[0] = 999999999;
      if ( v89 == 5 )
      {
        v24 = sub_91D5C0(a1, (char *)v19, v84, v102);
      }
      else if ( v89 == 6 )
      {
        v24 = sub_91CEB0(a1, (char *)v19, v84, v102);
      }
      else
      {
        v24 = sub_91DCD0(a1, (_QWORD *)v19, (unsigned __int64)v84, v102);
      }
      if ( v24 > v23 )
      {
        v26 = v102[0];
        v25 = v19;
        if ( v24 > 3 )
        {
LABEL_16:
          v94 = v20;
          _BitScanReverse(&v27, v26);
          v28 = v27 ^ 0x1F;
          while ( 1 )
          {
            v29 = ++v19 - v9 - v80;
            v30 = v9 + v29;
            if ( v85 > v29 )
              v30 = v90 + v95 + v29;
            v31 = v24;
            v88 = v26;
            v91 = v28;
            if ( v86 + v80 - ((_DWORD)v19 - (_DWORD)v9) > 2 && *(_DWORD *)v19 == *(_DWORD *)v30 )
            {
              v56 = v84;
              if ( v85 > v29 )
                v56 = v97;
              v99 = v56;
              v57 = (unsigned __int64)&v56[v19 - v30];
              if ( (unsigned __int64)v84 < v57 )
                v57 = (unsigned __int64)v84;
              v58 = sub_907A60((_QWORD *)(v19 + 4), (_QWORD *)(v30 + 4), v57);
              v61 = v58;
              if ( v99 == (char *)(v58 + v60) )
                v61 = sub_907A60((_QWORD *)(v19 + 4 + v58), v98, (unsigned __int64)v84) + v58;
              v62 = v61 + 4;
              if ( 3 * (int)v62 > v59 + 3 * (int)v24 - 30 && v62 > 3 )
              {
                v31 = v62;
                v25 = v19;
                v24 = v62;
                v26 = 1;
                v91 = 31;
                v88 = 1;
              }
            }
            v102[0] = 999999999;
            if ( v89 == 5 )
              v32 = sub_91D5C0(a1, (char *)v19, v84, v102);
            else
              v32 = v89 == 6
                  ? sub_91CEB0(a1, (char *)v19, v84, v102)
                  : sub_91DCD0(a1, (_QWORD *)v19, (unsigned __int64)v84, v102);
            _BitScanReverse(&v33, v102[0]);
            v28 = v33 ^ 0x1F;
            if ( (int)(v28 + 4 * v32 - 31) <= v91 + 4 * v31 - 27 || v32 <= 3 )
              break;
            v26 = v102[0];
            v24 = v32;
            v25 = v19;
            if ( v87 <= v19 )
            {
              v20 = v94;
              v88 = v102[0];
              goto LABEL_29;
            }
          }
          v20 = v94;
LABEL_29:
          if ( v26 > 3 )
          {
            v34 = (unsigned int)(v25 - v9 - v88 + 3);
            if ( v85 <= (unsigned int)v34 )
            {
              v36 = v9 + v34;
              v35 = v98;
            }
            else
            {
              v35 = v100;
              v36 = v90 + v34 - v96;
            }
            if ( (unsigned __int64)v35 < v36
              && v25 > (unsigned __int64)v82
              && *(_BYTE *)(v36 - 1) == *(_BYTE *)(v25 - 1) )
            {
              v37 = v25;
              do
              {
                --v37;
                --v36;
                v38 = v25 + v24 - v37;
              }
              while ( v37 > (unsigned __int64)v82
                   && v36 > (unsigned __int64)v35
                   && *(_BYTE *)(v37 - 1) == *(_BYTE *)(v36 - 1) );
            }
            else
            {
              v38 = v24;
              v37 = v25;
            }
            v25 = v37;
            v24 = v38;
            v92 = v80;
            v80 = v88 - 3;
          }
          v39 = *(__m128i **)(v20 + 24);
          v40 = v25 - (_QWORD)v82;
          if ( v25 > (unsigned __int64)v93 )
          {
            sub_9079D0(v39, v82, v25, v93);
          }
          else
          {
            *v39 = _mm_loadu_si128(v82);
            if ( v40 <= 0x10 )
            {
              *(_QWORD *)(v20 + 24) += v40;
              v41 = *(_QWORD *)(v20 + 8);
              goto LABEL_43;
            }
            v74 = *(__m128i **)(v20 + 24);
            v74[1] = _mm_loadu_si128(v82 + 1);
            if ( (__int64)(v40 - 16) > 16 )
            {
              v75 = &v74->m128i_i8[v40];
              v76 = v74 + 2;
              v77 = v82 + 2;
              do
              {
                v78 = _mm_loadu_si128(v77);
                v76 += 2;
                v77 += 2;
                v76[-2] = v78;
                v76[-1] = _mm_loadu_si128(v77 - 1);
              }
              while ( v75 > (char *)v76 );
            }
          }
          *(_QWORD *)(v20 + 24) += v40;
          v41 = *(_QWORD *)(v20 + 8);
          if ( v40 > 0xFFFF )
          {
            v49 = v41 - *(_QWORD *)v20;
            *(_DWORD *)(v20 + 72) = 1;
            *(_DWORD *)(v20 + 76) = v49 >> 3;
          }
LABEL_43:
          *(_WORD *)(v41 + 4) = v40;
          **(_DWORD **)(v20 + 8) = v88;
          v42 = *(_QWORD *)(v20 + 8);
          if ( v24 - 3 > 0xFFFF )
          {
            *(_DWORD *)(v20 + 72) = 2;
            *(_DWORD *)(v20 + 76) = (v42 - *(_QWORD *)v20) >> 3;
          }
          *(_WORD *)(v42 + 6) = v24 - 3;
          v19 = v25 + v24;
          *(_QWORD *)(v20 + 8) += 8LL;
          if ( *(_DWORD *)(a1 + 300) )
            *(_DWORD *)(a1 + 300) = 0;
          v43 = v96;
          v44 = v92;
          if ( v87 < v19 )
          {
LABEL_53:
            v82 = (const __m128i *)v19;
          }
          else
          {
            while ( 1 )
            {
              v45 = v19 - v9 - v44;
              v46 = v90 + v45 - v43;
              if ( v85 <= v45 )
                v46 = v9 + v45;
              if ( v44 + v86 - ((_DWORD)v19 - (_DWORD)v9) <= 2 || *(_DWORD *)v19 != *(_DWORD *)v46 )
              {
                v92 = v44;
                goto LABEL_53;
              }
              v63 = v85 <= v45;
              v64 = v84;
              if ( !v63 )
                v64 = v97;
              v83 = v64;
              v65 = (unsigned __int64)&v64[v19 - v46];
              if ( (unsigned __int64)v84 < v65 )
                v65 = (unsigned __int64)v84;
              v66 = sub_907A60((_QWORD *)(v19 + 4), (_QWORD *)(v46 + 4), v65);
              v67 = v66;
              if ( v83 == (char *)(v68 + v66) )
                v67 = sub_907A60((_QWORD *)(v19 + 4 + v66), v98, (unsigned __int64)v84) + v66;
              v69 = v67 + 4;
              v70 = *(__m128i **)(v20 + 24);
              if ( (unsigned __int64)v93 < v19 )
                sub_9079D0(v70, (const __m128i *)v19, v19, v93);
              else
                *v70 = _mm_loadu_si128((const __m128i *)v19);
              v71 = v67 + 1;
              *(_WORD *)(*(_QWORD *)(v20 + 8) + 4LL) = 0;
              **(_DWORD **)(v20 + 8) = 1;
              v72 = *(_QWORD *)(v20 + 8);
              if ( v71 > 0xFFFF )
              {
                *(_DWORD *)(v20 + 72) = 2;
                *(_DWORD *)(v20 + 76) = (v72 - *(_QWORD *)v20) >> 3;
              }
              *(_WORD *)(v72 + 6) = v71;
              v19 += v69;
              *(_QWORD *)(v20 + 8) += 8LL;
              if ( v87 < v19 )
                break;
              v73 = v44;
              v44 = v80;
              v80 = v73;
            }
            v79 = v80;
            v82 = (const __m128i *)v19;
            v80 = v44;
            v92 = v79;
          }
          goto LABEL_54;
        }
      }
      else
      {
        v24 = v23;
        v25 = v19 + 1;
        v26 = 1;
        if ( v24 > 3 )
          goto LABEL_16;
      }
      v48 = ((v19 - (unsigned __int64)v82) >> 8) + 1;
      v19 += v48;
      *(_DWORD *)(a1 + 300) = v48 > 8;
LABEL_54:
      if ( v87 <= v19 )
      {
        v6 = v82;
        break;
      }
    }
  }
  *a3 = v80;
  a3[1] = v92;
  return (char *)(v84 - (char *)v6);
}

