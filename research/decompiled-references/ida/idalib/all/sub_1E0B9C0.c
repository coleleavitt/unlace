_BYTE *__fastcall sub_1E0B9C0(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  char v6; // di
  __int64 v7; // r12
  _QWORD *v8; // rax
  _QWORD *i; // rdx
  __int64 v10; // rdi
  unsigned int v11; // edx
  __m128i v12; // xmm0
  char v13; // al
  char v14; // al
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // rbx
  unsigned __int64 v18; // rbp
  _BYTE *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v23; // rdi
  int v24; // esi
  unsigned int v25; // edx
  _QWORD *v26; // rax
  __int64 v27; // r8
  unsigned __int64 *v28; // r13
  unsigned __int64 v29; // r14
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rdx
  _BYTE *v35; // rsi
  __int64 v36; // rax
  unsigned int v37; // esi
  _QWORD *v38; // rax
  void *v39; // rdi
  unsigned __int64 v40; // r15
  unsigned int v41; // r10d
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  int v44; // edi
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rcx
  size_t v48; // rdx
  int v49; // r10d
  int v50; // ecx
  __int64 v51; // rdi
  int v52; // ecx
  unsigned int v53; // edx
  __int64 v54; // rsi
  int v55; // ecx
  __int64 v56; // rdi
  int v57; // ecx
  unsigned int v58; // edx
  __int64 v59; // rsi
  _QWORD *v60; // r8
  unsigned __int64 v61; // [rsp+0h] [rbp-78h]
  __int64 v62; // [rsp+8h] [rbp-70h]
  _BYTE *v63; // [rsp+10h] [rbp-68h]
  __int64 v64; // [rsp+18h] [rbp-60h]
  unsigned int v65; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v66; // [rsp+2Ch] [rbp-4Ch]
  __m128 v67[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1 == a2 )
    return a1;
  v2 = a1;
  v62 = *(_QWORD *)(*(_QWORD *)a1 + 11280LL);
  v4 = operator new(0x90u);
  v5 = *(_QWORD *)a1;
  v6 = a1[113];
  v7 = v4;
  v4 += 8;
  *(_QWORD *)(v4 - 8) = *(_QWORD *)v2;
  v64 = v4;
  v8 = (_QWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 8) = 1;
  for ( i = (_QWORD *)(v7 + 80); i != v8; v8 += 2 )
    *v8 = -4096;
  *(_BYTE *)(v7 + 113) = v6;
  *(_QWORD *)(v7 + 80) = v7 + 96;
  *(_QWORD *)(v7 + 88) = 0x100000000LL;
  *(_BYTE *)(v7 + 112) = 0;
  *(_BYTE *)(v7 + 114) = 0;
  *(_QWORD *)(v7 + 120) = 0;
  *(_QWORD *)(v5 + 11280) = v7;
  v10 = *((_QWORD *)v2 + 13);
  *(_QWORD *)(v7 + 104) = 0;
  if ( v10 )
    *(_QWORD *)(v7 + 104) = sub_1E0B9C0(v10, a2, i, -4096);
  v11 = *((_DWORD *)v2 + 2);
  v12 = _mm_loadu_si128((const __m128i *)(v2 + 120));
  *(_DWORD *)(v7 + 136) = *((_DWORD *)v2 + 34);
  v13 = v2[8];
  *(__m128i *)(v7 + 120) = v12;
  v14 = v13 & 1;
  if ( !(v11 >> 1) )
  {
    if ( v14 )
    {
      v35 = v2 + 16;
      v36 = 64;
    }
    else
    {
      v35 = *((_BYTE **)v2 + 2);
      v36 = 16LL * *((unsigned int *)v2 + 6);
    }
    sub_1DBDFA0(v67, &v35[v36], &v35[v36], (__int64)(v2 + 8), 1);
    v18 = v67[0].m128_u64[1];
    v17 = (__int64 *)v67[0].m128_u64[0];
    if ( (v2[8] & 1) != 0 )
      goto LABEL_10;
LABEL_32:
    v19 = *((_BYTE **)v2 + 2);
    v20 = 16LL * *((unsigned int *)v2 + 6);
    goto LABEL_11;
  }
  if ( v14 )
  {
    v15 = v2 + 16;
    v16 = 8;
  }
  else
  {
    v15 = *((_QWORD **)v2 + 2);
    v16 = 2LL * *((unsigned int *)v2 + 6);
  }
  sub_1DBDFA0(v67, v15, &v15[v16], (__int64)(v2 + 8), 0);
  v18 = v67[0].m128_u64[1];
  v17 = (__int64 *)v67[0].m128_u64[0];
  if ( (v2[8] & 1) == 0 )
    goto LABEL_32;
LABEL_10:
  v19 = v2 + 16;
  v20 = 64;
LABEL_11:
  sub_1DBDFA0(v67, &v19[v20], &v19[v20], (__int64)(v2 + 8), 1);
  v61 = v67[0].m128_u64[0];
  if ( v17 == (__int64 *)v67[0].m128_u64[0] )
    goto LABEL_27;
  v63 = v2;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = *v17;
        if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
        {
          v23 = v7 + 16;
          v24 = 3;
        }
        else
        {
          v37 = *(_DWORD *)(v7 + 24);
          v23 = *(_QWORD *)(v7 + 16);
          if ( !v37 )
          {
            v43 = *(unsigned int *)(v7 + 8);
            v26 = nullptr;
            v44 = (*(_DWORD *)(v7 + 8) >> 1) + 1;
LABEL_43:
            v45 = 3 * v37;
            goto LABEL_44;
          }
          v24 = v37 - 1;
        }
        v25 = v24 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
        v26 = (_QWORD *)(v23 + 16LL * v25);
        v27 = *v26;
        if ( v22 == *v26 )
          goto LABEL_16;
        v49 = 1;
        v21 = 0;
        if ( v27 != -4096 )
        {
          while ( 1 )
          {
            if ( !v21 && v27 == -8192 )
              v21 = (__int64)v26;
            v25 = v24 & (v49 + v25);
            v26 = (_QWORD *)(v23 + 16LL * v25);
            v27 = *v26;
            if ( v22 == *v26 )
              goto LABEL_16;
            if ( v27 == -4096 )
              break;
            ++v49;
          }
          if ( v21 )
            v26 = (_QWORD *)v21;
        }
        v43 = *(unsigned int *)(v7 + 8);
        v45 = 12;
        v37 = 4;
        v44 = (*(_DWORD *)(v7 + 8) >> 1) + 1;
        if ( (*(_BYTE *)(v7 + 8) & 1) == 0 )
        {
          v37 = *(_DWORD *)(v7 + 24);
          goto LABEL_43;
        }
LABEL_44:
        v46 = (unsigned int)(4 * v44);
        if ( (unsigned int)v46 >= (unsigned int)v45 )
        {
          sub_1DC1BE0(v64, 2 * v37, v43, v46, v45, v21);
          if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          {
            v51 = v7 + 16;
            v52 = 3;
          }
          else
          {
            v50 = *(_DWORD *)(v7 + 24);
            v51 = *(_QWORD *)(v7 + 16);
            if ( !v50 )
              goto LABEL_100;
            v52 = v50 - 1;
          }
          v53 = v52 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
          v26 = (_QWORD *)(v51 + 16LL * v53);
          v54 = *v26;
          if ( v22 != *v26 && v54 != -4096 )
          {
            v21 = 1;
            v60 = nullptr;
            while ( 1 )
            {
              if ( !v60 && v54 == -8192 )
                v60 = v26;
              v53 = v52 & (v21 + v53);
              v26 = (_QWORD *)(v51 + 16LL * v53);
              v54 = *v26;
              if ( v22 == *v26 )
                break;
              if ( v54 == -4096 )
              {
LABEL_75:
                if ( v60 )
                  v26 = v60;
                break;
              }
              v21 = (unsigned int)(v21 + 1);
            }
          }
LABEL_63:
          LODWORD(v43) = *(_DWORD *)(v7 + 8);
          goto LABEL_46;
        }
        v47 = v37 - *(_DWORD *)(v7 + 12) - v44;
        if ( (unsigned int)v47 <= v37 >> 3 )
        {
          sub_1DC1BE0(v64, v37, v43, v47, v45, v21);
          if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          {
            v56 = v7 + 16;
            v57 = 3;
          }
          else
          {
            v55 = *(_DWORD *)(v7 + 24);
            v56 = *(_QWORD *)(v7 + 16);
            if ( !v55 )
            {
LABEL_100:
              *(_DWORD *)(v7 + 8) = (2 * (*(_DWORD *)(v7 + 8) >> 1) + 2) | *(_DWORD *)(v7 + 8) & 1;
              BUG();
            }
            v57 = v55 - 1;
          }
          v58 = v57 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
          v26 = (_QWORD *)(v56 + 16LL * v58);
          v59 = *v26;
          if ( v22 != *v26 && v59 != -4096 )
          {
            v21 = 1;
            v60 = nullptr;
            while ( 1 )
            {
              if ( !v60 && v59 == -8192 )
                v60 = v26;
              v58 = v57 & (v21 + v58);
              v26 = (_QWORD *)(v56 + 16LL * v58);
              v59 = *v26;
              if ( v22 == *v26 )
                break;
              if ( v59 == -4096 )
                goto LABEL_75;
              v21 = (unsigned int)(v21 + 1);
            }
          }
          goto LABEL_63;
        }
LABEL_46:
        *(_DWORD *)(v7 + 8) = (2 * ((unsigned int)v43 >> 1) + 2) | v43 & 1;
        if ( *v26 != -4096 )
          --*(_DWORD *)(v7 + 12);
        *v26 = v22;
        v26[1] = 0;
LABEL_16:
        v28 = v26 + 1;
        v29 = v17[1] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v17[1] & 4) != 0 || !v29 )
          break;
        v30 = v17 + 2;
        *v28 = v29;
        if ( v17 + 2 != (__int64 *)v18 )
          goto LABEL_19;
LABEL_40:
        v17 = (__int64 *)v18;
        if ( v61 == v18 )
          goto LABEL_26;
      }
      v38 = (_QWORD *)operator new(0x30u);
      v39 = v38 + 2;
      v40 = (unsigned __int64)v38;
      *v38 = v38 + 2;
      v38[1] = 0x400000000LL;
      v41 = *(_DWORD *)(v29 + 8);
      if ( v38 != (_QWORD *)v29 && v41 )
      {
        v48 = 8LL * v41;
        if ( v41 <= 4uLL
          || (v66 = *(_DWORD *)(v29 + 8),
              sub_2237220(v38, v39, v41, 8),
              v39 = *(void **)v40,
              v41 = v66,
              (v48 = 8LL * *(unsigned int *)(v29 + 8)) != 0) )
        {
          v65 = v41;
          memcpy(v39, *(const void **)v29, v48);
          v41 = v65;
        }
        *(_DWORD *)(v40 + 8) = v41;
      }
      *v28 = v40 | 4;
      v42 = *(unsigned int *)(v7 + 88);
      if ( v42 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 92) )
      {
        sub_2237220(v7 + 80, v7 + 96, v42 + 1, 8);
        v42 = *(unsigned int *)(v7 + 88);
      }
      *(_QWORD *)(*(_QWORD *)(v7 + 80) + 8 * v42) = v40;
      v30 = v17 + 2;
      ++*(_DWORD *)(v7 + 88);
      if ( v17 + 2 == (__int64 *)v18 )
        goto LABEL_40;
LABEL_19:
      v31 = v17[2];
      if ( v31 == -8192 || v31 == -4096 )
        break;
      v17 = v30;
      if ( (__int64 *)v61 == v30 )
        goto LABEL_26;
    }
    v32 = v17 + 4;
    do
    {
      v17 = v32;
      if ( v32 == (__int64 *)v18 )
        goto LABEL_40;
      v33 = *v32;
      v32 += 2;
    }
    while ( v33 == -8192 || v33 == -4096 );
  }
  while ( (__int64 *)v61 != v17 );
LABEL_26:
  v2 = v63;
LABEL_27:
  *(_QWORD *)(*(_QWORD *)v2 + 11280LL) = v62;
  return (_BYTE *)v7;
}
