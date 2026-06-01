__int64 __fastcall sub_5E45F0(__int64 a1, int a2, __int64 a3, _QWORD *a4, int a5, int a6)
{
  _QWORD *v6; // r13
  __int64 v9; // rbp
  __int16 v10; // ax
  _DWORD *v11; // rax
  __int64 v13; // rcx
  __m128i *v14; // rbx
  unsigned int v15; // r9d
  __int64 v16; // rcx
  __int64 *v17; // r14
  int v18; // esi
  __int64 v19; // r9
  __m128i *v20; // rdi
  __m128i *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rsi
  void *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  unsigned int v32; // r9d
  __int64 v33; // rcx
  __int64 *v34; // r14
  int v35; // esi
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i *v42; // rax
  int v43; // r10d
  __m128i *v44; // r8
  const __m128i *v45; // r15
  __m128i *v46; // r11
  __int64 v47; // rax
  __m128i *v48; // rdx
  __m128i *v49; // rax
  __int64 v50; // rax
  int v51; // r10d
  __m128i *v52; // rdx
  __m128i *v53; // rax
  const __m128i *v54; // r15
  __m128i *v55; // r11
  __int64 v56; // rdx
  __m128i *v57; // rsi
  __m128i *v58; // rdx
  size_t v59; // [rsp+0h] [rbp-78h]
  size_t v60; // [rsp+0h] [rbp-78h]
  unsigned int v61; // [rsp+0h] [rbp-78h]
  __int64 v62; // [rsp+0h] [rbp-78h]
  int v63; // [rsp+8h] [rbp-70h]
  int v64; // [rsp+8h] [rbp-70h]
  size_t v65; // [rsp+8h] [rbp-70h]
  __int64 v66; // [rsp+10h] [rbp-68h]
  int v67; // [rsp+10h] [rbp-68h]
  size_t v68; // [rsp+10h] [rbp-68h]
  __int64 v69; // [rsp+38h] [rbp-40h] BYREF

  v6 = a4;
  v9 = a3;
  v10 = *(_WORD *)(a3 + 4);
  if ( !v10 )
  {
    LODWORD(a4) = *(_DWORD *)(a1 + 40);
    do
    {
      v11 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v11 || (_DWORD)a4 != *v11 || v11[1] != 1 )
        return 0;
      a3 = *(_QWORD *)(a3 + 32);
      v10 = *(_WORD *)(a3 + 4);
    }
    while ( !v10 );
  }
  if ( v10 != 1 )
    return 0;
  if ( !v6 )
  {
    if ( !*(_DWORD *)(a1 + 536) )
    {
      v24 = *(_QWORD *)(a1 + 32);
      v69 = 0;
      sub_62B3F0(a2, v24, (unsigned int)&v69, (_DWORD)a4, a5, a6);
      if ( v69 )
      {
        v25 = (void *)(v69 - 8);
        *(_DWORD *)(a1 + 536) = *(_DWORD *)(v69 - 4) + 1;
        sub_186B220(v25);
      }
      else
      {
        *(_DWORD *)(a1 + 536) = 1;
      }
    }
    v26 = *(_QWORD *)(a1 + 32);
    v27 = sub_15D1F10(v9);
    v28 = sub_15DB5C0(v26, *(unsigned int *)(a1 + 536), v27);
    v29 = *(unsigned int *)(a1 + 520);
    v30 = v28;
    if ( 3 * (int)v29 < (unsigned int)(4 * (*(_DWORD *)(a1 + 524) + *(_DWORD *)(a1 + 528))) )
    {
      v66 = v28;
      v64 = 2 * v29;
      v60 = 16LL * (unsigned int)(2 * v29);
      v50 = sub_186B270(v60);
      v51 = v64;
      v33 = v60;
      v31 = v50;
      v52 = (__m128i *)v50;
      v30 = v66;
      v53 = (__m128i *)(v60 + v50);
      if ( v64 )
      {
        if ( (((_BYTE)v53 - (_BYTE)v31) & 0x10) == 0
          || (v52 = (__m128i *)(v31 + 16), *(_OWORD *)v31 = 0, (__m128i *)(v31 + 16) != v53) )
        {
          do
          {
            *v52 = 0;
            v52 += 2;
            v52[-1] = 0;
          }
          while ( v52 != v53 );
        }
      }
      v54 = *(const __m128i **)(a1 + 512);
      v32 = v64 - 1;
      v34 = (__int64 *)v53;
      v55 = (__m128i *)&v54[*(unsigned int *)(a1 + 520)];
      if ( v54 != v55 )
      {
        do
        {
          if ( v54->m128i_i64[0] > 1uLL )
          {
            v56 = 16LL * (*(_DWORD *)(v54->m128i_i64[0] + 12) & v32);
            v57 = (__m128i *)(v31 + v56);
            if ( v60 == v56 )
            {
LABEL_84:
              if ( (__m128i *)v31 == v57 )
              {
LABEL_105:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v58 = (__m128i *)v31;
              while ( v58->m128i_i64[0] )
              {
                if ( v57 == ++v58 )
                  goto LABEL_105;
              }
            }
            else
            {
              v58 = (__m128i *)(v31 + v56);
              while ( v58->m128i_i64[0] )
              {
                if ( v53 == ++v58 )
                  goto LABEL_84;
              }
            }
            *v58 = _mm_loadu_si128(v54);
          }
          ++v54;
        }
        while ( v55 != v54 );
        v55 = *(__m128i **)(a1 + 512);
      }
      if ( v55 )
      {
        v68 = v60;
        v62 = v30;
        sub_186B220(v55);
        v51 = v64;
        v33 = v68;
        v32 = v64 - 1;
        v30 = v62;
      }
      *(_QWORD *)(a1 + 512) = v31;
      *(_DWORD *)(a1 + 520) = v51;
      *(_DWORD *)(a1 + 528) = 0;
    }
    else
    {
      v31 = *(_QWORD *)(a1 + 512);
      v32 = v29 - 1;
      v33 = 16 * v29;
      v34 = (__int64 *)(v31 + v33);
    }
    v35 = *(_DWORD *)(v9 + 12);
    v36 = 16LL * (v35 & v32);
    v37 = v31 + v36;
    if ( v36 == v33 )
      goto LABEL_43;
    v38 = (__int64 *)(v31 + v36);
    while ( 1 )
    {
      v39 = *v38;
      if ( (unsigned __int64)*v38 > 1 )
      {
        if ( *(_DWORD *)(v39 + 12) == v35 && v9 == v39 )
        {
          *v38 = v9;
          v38[1] = v30;
          goto LABEL_90;
        }
      }
      else
      {
        if ( !v39 )
        {
          if ( !v6 )
          {
            v6 = v38;
            goto LABEL_100;
          }
          goto LABEL_99;
        }
        v6 = v38;
      }
      v38 += 2;
      if ( v38 == v34 )
      {
        while ( 1 )
        {
LABEL_43:
          if ( v37 == v31 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v41 = *(_QWORD *)v31;
          if ( *(_QWORD *)v31 > 1u )
          {
            if ( *(_DWORD *)(v41 + 12) == v35 && v9 == v41 )
            {
              *(_QWORD *)v31 = v9;
              *(_QWORD *)(v31 + 8) = v30;
              goto LABEL_90;
            }
          }
          else
          {
            if ( !v41 )
            {
              if ( !v6 )
              {
                v6 = (_QWORD *)v31;
LABEL_100:
                *v6 = v9;
                v6[1] = v30;
                ++*(_DWORD *)(a1 + 524);
LABEL_90:
                ++*(_DWORD *)(a1 + 536);
                return 1;
              }
LABEL_99:
              --*(_DWORD *)(a1 + 528);
              goto LABEL_100;
            }
            v6 = (_QWORD *)v31;
          }
          v31 += 16;
        }
      }
    }
  }
  v13 = *(unsigned int *)(a1 + 520);
  if ( 3 * (int)v13 < (unsigned int)(4 * (*(_DWORD *)(a1 + 524) + *(_DWORD *)(a1 + 528))) )
  {
    v63 = 2 * v13;
    v59 = 16LL * (unsigned int)(2 * v13);
    v42 = (__m128i *)sub_186B270(v59);
    v16 = v59;
    v43 = v63;
    v14 = v42;
    v44 = &v42[v59 / 0x10];
    if ( v63 )
    {
      if ( (v59 & 0x10) == 0 || (*v42 = 0, ++v42, v44 != v42) )
      {
        do
        {
          *v42 = 0;
          v42 += 2;
          v42[-1] = 0;
        }
        while ( v44 != v42 );
      }
    }
    v45 = *(const __m128i **)(a1 + 512);
    v15 = v63 - 1;
    v17 = (__int64 *)v44;
    v46 = (__m128i *)&v45[*(unsigned int *)(a1 + 520)];
    if ( v45 != v46 )
    {
      do
      {
        if ( v45->m128i_i64[0] > 1uLL )
        {
          v47 = 16LL * (*(_DWORD *)(v45->m128i_i64[0] + 12) & v15);
          v48 = &v14[(unsigned __int64)v47 / 0x10];
          if ( v59 == v47 )
          {
LABEL_73:
            if ( v14 == v48 )
            {
LABEL_101:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v49 = v14;
            while ( v49->m128i_i64[0] )
            {
              if ( v48 == ++v49 )
                goto LABEL_101;
            }
          }
          else
          {
            v49 = &v14[(unsigned __int64)v47 / 0x10];
            while ( v49->m128i_i64[0] )
            {
              if ( v44 == ++v49 )
                goto LABEL_73;
            }
          }
          *v49 = _mm_loadu_si128(v45);
        }
        ++v45;
      }
      while ( v46 != v45 );
      v46 = *(__m128i **)(a1 + 512);
    }
    if ( v46 )
    {
      v67 = v63;
      v65 = v59;
      v61 = v43 - 1;
      sub_186B220(v46);
      v43 = v67;
      v16 = v65;
      v15 = v61;
    }
    *(_QWORD *)(a1 + 512) = v14;
    *(_DWORD *)(a1 + 520) = v43;
    *(_DWORD *)(a1 + 528) = 0;
  }
  else
  {
    v14 = *(__m128i **)(a1 + 512);
    v15 = v13 - 1;
    v16 = 16 * v13;
    v17 = (__int64 *)((char *)v14->m128i_i64 + v16);
  }
  v18 = *(_DWORD *)(v9 + 12);
  v19 = 16LL * (v18 & v15);
  v20 = &v14[(unsigned __int64)v19 / 0x10];
  if ( v19 != v16 )
  {
    v21 = &v14[(unsigned __int64)v19 / 0x10];
    v22 = nullptr;
    while ( 1 )
    {
      v23 = v21->m128i_i64[0];
      if ( v21->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v23 + 12) == v18 && v9 == v23 )
        {
          v21->m128i_i64[0] = v9;
          v21->m128i_i64[1] = (__int64)v6;
          return 1;
        }
      }
      else
      {
        if ( !v23 )
        {
          if ( v22 )
            goto LABEL_92;
          v22 = (__int64 *)v21;
          goto LABEL_93;
        }
        v22 = (__int64 *)v21;
      }
      if ( ++v21 == (__m128i *)v17 )
        goto LABEL_36;
    }
  }
  v22 = nullptr;
  while ( 1 )
  {
LABEL_36:
    if ( v20 == v14 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v40 = v14->m128i_i64[0];
    if ( v14->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v40 + 12) == v18 && v9 == v40 )
    {
      v14->m128i_i64[0] = v9;
      v14->m128i_i64[1] = (__int64)v6;
      return 1;
    }
LABEL_35:
    ++v14;
  }
  if ( v40 )
  {
    v22 = (__int64 *)v14;
    goto LABEL_35;
  }
  if ( v22 )
LABEL_92:
    --*(_DWORD *)(a1 + 528);
  else
    v22 = (__int64 *)v14;
LABEL_93:
  *v22 = v9;
  v22[1] = (__int64)v6;
  ++*(_DWORD *)(a1 + 524);
  return 1;
}

