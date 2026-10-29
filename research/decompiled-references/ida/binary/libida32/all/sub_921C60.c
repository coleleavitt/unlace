signed __int64 __fastcall sub_921C60(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v6; // r12
  unsigned int v8; // r14d
  int v9; // r9d
  __int64 v10; // rsi
  char *v11; // rax
  unsigned int v12; // r8d
  bool v13; // cc
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // edi
  int v17; // edx
  bool v18; // zf
  unsigned __int64 v19; // rbx
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edx
  bool v24; // r11
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  int v28; // r8d
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r10
  bool v31; // al
  __m128i *v32; // rdi
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int v39; // edx
  signed __int64 v40; // rax
  __m128i *v41; // rdi
  signed __int64 v42; // r9
  signed __int64 v43; // r10
  unsigned __int64 v44; // r9
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // r10
  char *v53; // r10
  char *v54; // r10
  __m128i *v55; // rdx
  char *v56; // rcx
  const __m128i *v57; // r12
  __m128i *v58; // rdx
  __m128i v59; // xmm0
  _QWORD *v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rdx
  unsigned __int64 v65; // [rsp+0h] [rbp-A8h]
  unsigned int v66; // [rsp+Ch] [rbp-9Ch]
  char *v67; // [rsp+10h] [rbp-98h]
  const __m128i *v68; // [rsp+18h] [rbp-90h]
  int v69; // [rsp+28h] [rbp-80h]
  int v70; // [rsp+2Ch] [rbp-7Ch]
  unsigned __int64 v71; // [rsp+30h] [rbp-78h]
  bool v72; // [rsp+3Bh] [rbp-6Dh]
  unsigned int v73; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v74; // [rsp+40h] [rbp-68h]
  unsigned int v76; // [rsp+58h] [rbp-50h]
  bool v77; // [rsp+5Fh] [rbp-49h]
  _QWORD v78[9]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a4;
  v8 = *a3;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(unsigned int *)(a1 + 24);
  v78[1] = __readfsqword(0x28u);
  v11 = &a4->m128i_i8[a5];
  v12 = a3[1];
  v76 = 0;
  v67 = v11;
  v13 = *(_DWORD *)(a1 + 272) <= 6u;
  v65 = (unsigned __int64)(v11 - 8);
  v14 = *(_QWORD *)(a1 + 8);
  v66 = v12;
  v15 = v14 + v10;
  v16 = 6;
  if ( v13 )
    v16 = *(_DWORD *)(a1 + 272);
  v17 = 4;
  v74 = v14 + v10;
  if ( v16 >= 4 )
    v17 = v16;
  v18 = (_DWORD)v6 == v15;
  v19 = (unsigned __int64)v6->m128i_u64 + ((_DWORD)v6 == v15);
  v69 = v17;
  v20 = (_DWORD)v6 + ((_DWORD)v6 == v15) - v14;
  v21 = 1 << *(_DWORD *)(a1 + 256);
  v22 = (_DWORD)v6 + v18 - v14 - v10;
  if ( v21 < v22 )
    LODWORD(v10) = v20 - v21;
  v23 = v20 - v10;
  if ( !v9 )
    v22 = v23;
  if ( v12 > v22 )
  {
    v76 = v12;
    v66 = 0;
  }
  v24 = v8 != 0;
  if ( v8 <= v22 )
  {
    v77 = 0;
    v73 = 0;
  }
  else
  {
    v77 = v8 != 0;
    v24 = 0;
    v73 = v8;
    v8 = 0;
  }
  *(_DWORD *)(a1 + 300) = 0;
  if ( v65 > v19 )
  {
    v68 = (const __m128i *)(v67 - 32);
    v71 = (unsigned __int64)(v67 - 7);
    do
    {
      while ( 1 )
      {
        v27 = v19 - v8;
        v24 = v8 != 0 && *(_DWORD *)(v27 + 1) == *(_DWORD *)(v19 + 1);
        if ( v24 )
        {
          v48 = (_QWORD *)(v27 + 5);
          v49 = v19 + 5;
          if ( v19 + 5 >= v71 )
          {
            v54 = (char *)(v19 + 5);
          }
          else
          {
            v50 = *(_QWORD *)(v19 + 5);
            if ( *v48 != v50 )
            {
              _RCX = v50 ^ *v48;
              __asm { tzcnt   r10, rcx }
              v53 = (char *)((unsigned int)_R10 >> 3);
LABEL_57:
              v30 = (unsigned __int64)(v53 + 4);
              v29 = v19 + 1;
              v28 = 1;
              v31 = v66 != 0;
              goto LABEL_26;
            }
            v54 = (char *)(v19 + 13);
            v60 = v48 + 1;
            if ( v71 > v19 + 13 )
            {
              v61 = v48[1];
              v62 = *(_QWORD *)(v19 + 13);
              if ( v62 != v61 )
              {
LABEL_83:
                _RDX = v61 ^ v62;
                __asm { tzcnt   rdx, rdx }
                v53 = &v54[((unsigned int)_RDX >> 3) - v49];
                goto LABEL_57;
              }
              while ( 1 )
              {
                v54 += 8;
                ++v60;
                if ( v71 <= (unsigned __int64)v54 )
                  break;
                v62 = *v60;
                v61 = *(_QWORD *)v54;
                if ( *v60 != *(_QWORD *)v54 )
                  goto LABEL_83;
              }
            }
            v48 = v60;
          }
          if ( v54 < v67 - 3 && *(_DWORD *)v48 == *(_DWORD *)v54 )
          {
            v54 += 4;
            v48 = (_QWORD *)((char *)v48 + 4);
          }
          if ( v54 < v67 - 1 && *(_WORD *)v48 == *(_WORD *)v54 )
          {
            v54 += 2;
            v48 = (_QWORD *)((char *)v48 + 2);
          }
          if ( v67 > v54 )
            v54 += *(_BYTE *)v48 == (unsigned __int8)*v54;
          v53 = &v54[-v49];
          goto LABEL_57;
        }
        v78[0] = 999999999;
        if ( v69 != 5 )
          break;
        v25 = sub_907F40(a1, (_QWORD *)v19, v67, v78);
LABEL_16:
        if ( v25 )
          goto LABEL_23;
LABEL_17:
        v24 = v8 != 0;
        v26 = ((v19 - (unsigned __int64)v6) >> 8) + 1;
        v19 += v26;
        *(_DWORD *)(a1 + 300) = v26 > 8;
LABEL_18:
        if ( v65 <= v19 )
          goto LABEL_37;
      }
      if ( v69 != 6 )
      {
        v25 = sub_907C50(a1, (_DWORD *)v19, (unsigned __int64)v67, v78);
        goto LABEL_16;
      }
      v25 = sub_908250(a1, (_QWORD *)v19, v67, v78);
      if ( !v25 )
        goto LABEL_17;
LABEL_23:
      if ( v25 <= 3 )
        goto LABEL_17;
      v28 = v78[0];
      if ( v78[0] > 3u )
      {
        if ( v74 < v19 + 3LL - v78[0]
          && v19 > (unsigned __int64)v6
          && *(_BYTE *)(v19 + 2LL - v78[0]) == *(_BYTE *)(v19 - 1) )
        {
          v29 = v19;
          do
          {
            --v29;
            v30 = v25 + v19 - v29;
          }
          while ( v74 < 3LL - v78[0] + v29
               && v29 > (unsigned __int64)v6
               && *(_BYTE *)(v29 - 1) == *(_BYTE *)(v29 + 2LL - v78[0]) );
        }
        else
        {
          v30 = v25;
          v29 = v19;
        }
        v66 = v8;
        v31 = v8 != 0;
        v24 = LODWORD(v78[0]) != 3;
        v8 = LODWORD(v78[0]) - 3;
      }
      else
      {
        v24 = v8 != 0;
        v29 = v19;
        v30 = v25;
        v31 = v66 != 0;
      }
LABEL_26:
      v32 = *(__m128i **)(a2 + 24);
      v33 = v29 - (_QWORD)v6;
      if ( v29 > (unsigned __int64)v68 )
      {
        v72 = v31;
        v70 = v28;
        sub_9079D0(v32, v6, v29, v68);
        v31 = v72;
        v28 = v70;
      }
      else
      {
        *v32 = _mm_loadu_si128(v6);
        if ( v33 <= 0x10 )
        {
          *(_QWORD *)(a2 + 24) += v33;
          v34 = *(_QWORD *)(a2 + 8);
          goto LABEL_29;
        }
        v55 = *(__m128i **)(a2 + 24);
        v55[1] = _mm_loadu_si128(v6 + 1);
        if ( (__int64)(v33 - 16) > 16 )
        {
          v56 = &v55->m128i_i8[v33];
          v57 = v6 + 2;
          v58 = v55 + 2;
          do
          {
            v59 = _mm_loadu_si128(v57);
            v58 += 2;
            v57 += 2;
            v58[-2] = v59;
            v58[-1] = _mm_loadu_si128(v57 - 1);
          }
          while ( v56 > (char *)v58 );
        }
      }
      *(_QWORD *)(a2 + 24) += v33;
      v34 = *(_QWORD *)(a2 + 8);
      if ( v33 > 0xFFFF )
      {
        v47 = v34 - *(_QWORD *)a2;
        *(_DWORD *)(a2 + 72) = 1;
        *(_DWORD *)(a2 + 76) = v47 >> 3;
      }
LABEL_29:
      *(_WORD *)(v34 + 4) = v33;
      **(_DWORD **)(a2 + 8) = v28;
      v35 = *(_QWORD *)(a2 + 8);
      if ( v30 - 3 > 0xFFFF )
      {
        *(_DWORD *)(a2 + 72) = 2;
        *(_DWORD *)(a2 + 76) = (v35 - *(_QWORD *)a2) >> 3;
      }
      *(_WORD *)(v35 + 6) = v30 - 3;
      v19 = v29 + v30;
      *(_QWORD *)(a2 + 8) += 8LL;
      if ( *(_DWORD *)(a1 + 300) )
        *(_DWORD *)(a1 + 300) = 0;
      if ( v65 >= v19 && v31 )
      {
        v36 = v66;
        if ( *(_DWORD *)v19 == *(_DWORD *)(v19 - v66) )
        {
          while ( 1 )
          {
            v40 = sub_907A60((_QWORD *)(v19 + 4), (_QWORD *)(v19 + 4 - v36), (unsigned __int64)v67);
            v41 = *(__m128i **)(a2 + 24);
            v42 = v40;
            v43 = v40 + 4;
            if ( (unsigned __int64)v68 >= v19 )
              *v41 = _mm_loadu_si128((const __m128i *)v19);
            else
              sub_9079D0(v41, (const __m128i *)v19, v19, v68);
            v44 = v42 + 1;
            *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
            **(_DWORD **)(a2 + 8) = 1;
            v45 = *(_QWORD *)(a2 + 8);
            if ( v44 > 0xFFFF )
            {
              *(_DWORD *)(a2 + 72) = 2;
              *(_DWORD *)(a2 + 76) = (v45 - *(_QWORD *)a2) >> 3;
            }
            *(_WORD *)(v45 + 6) = v44;
            v19 += v43;
            *(_QWORD *)(a2 + 8) += 8LL;
            v24 = v66 != 0;
            if ( v65 < v19 )
              break;
            if ( !v8 )
              break;
            v36 = v8;
            if ( *(_DWORD *)(v19 - v8) != *(_DWORD *)v19 )
              break;
            v39 = v66;
            v66 = v8;
            v8 = v39;
          }
          v46 = v8;
          v6 = (const __m128i *)v19;
          v8 = v66;
          v66 = v46;
          goto LABEL_18;
        }
      }
      v6 = (const __m128i *)(v29 + v30);
    }
    while ( v65 > v19 );
  }
LABEL_37:
  if ( !v77 || !v24 )
  {
    if ( !v8 )
      v8 = v73;
    v73 = v76;
  }
  v37 = v66;
  if ( !v66 )
    v37 = v73;
  *a3 = v8;
  a3[1] = v37;
  return v67 - (char *)v6;
}

