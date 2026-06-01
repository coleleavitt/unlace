__int64 __fastcall sub_1446F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 a6, _BYTE *a7)
{
  __int64 v10; // r15
  char v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  char *i; // rsi
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rdi
  unsigned int v21; // edx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  char v28; // al
  char *v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // r9
  __int64 v32; // r10
  unsigned __int64 v33; // rax
  char *v34; // rdx
  __int64 v35; // rax
  __int64 *v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 *v39; // rax
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rax
  __m128i si128; // xmm0
  __int64 v43; // rdi
  bool v44; // zf
  unsigned __int64 v45; // r9
  __int64 v46; // rax
  unsigned __int64 v47; // r14
  __int64 v48; // r13
  size_t v49; // rdx
  char *v50; // rax
  int v51; // r11d
  int v52; // edi
  __m128 v53; // [rsp+0h] [rbp-108h] BYREF
  __int64 v54; // [rsp+10h] [rbp-F8h]
  __int64 v55; // [rsp+18h] [rbp-F0h]
  __int64 v56; // [rsp+28h] [rbp-E0h] BYREF
  __int64 src; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v58; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v60[23]; // [rsp+50h] [rbp-B8h] BYREF

  v55 = a4;
  v60[0] = a2;
  ptr[0] = v60;
  v53.m128_u64[0] = a2;
  v60[1] = a3;
  v54 = a6;
  ptr[1] = (void *)0x2000000004LL;
  v10 = sub_2223360(a1 + 1792, ptr, &v56, off_2BB2BB0);
  if ( v10 )
  {
    *a7 = 0;
    goto LABEL_3;
  }
  v53.m128_u64[0] = sub_13F2240((_QWORD *)a1, v53.m128_i64[0], a3, v55, a5, v54);
  v12 = 0;
  sub_2223210(a1 + 1792, v53.m128_u64[0], v56, off_2BB2BB0);
  v16 = v53.m128_u64[0];
  for ( i = &a5[8 * v54]; i != a5; *(_DWORD *)(v13 + 32) = v18 + 1 )
  {
    v13 = *(_QWORD *)a5;
    v18 = *(_DWORD *)(*(_QWORD *)a5 + 32LL);
    LOBYTE(v14) = v18 == 0;
    a5 += 8;
    v12 |= v18 == 0;
  }
  v19 = *(_DWORD *)(a1 + 2096);
  src = a3;
  if ( !v19 )
  {
    v58 = nullptr;
    goto LABEL_55;
  }
  v15 = v19 - 1;
  v20 = *(_QWORD *)(a1 + 2080);
  v21 = v15 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v22 = (_QWORD *)(v20 + 16LL * v21);
  v23 = *v22;
  if ( a3 == *v22 )
    goto LABEL_10;
  v51 = 1;
  if ( v23 == -4096 )
  {
LABEL_66:
    v52 = *(_DWORD *)(a1 + 2088);
    v13 = 3 * v19;
    v58 = v22;
    v14 = (unsigned int)(v52 + 1);
    if ( 4 * (int)v14 < (unsigned int)v13 )
    {
      v43 = a3;
      v13 = v19 - *(_DWORD *)(a1 + 2092) - (unsigned int)v14;
      v15 = v19 >> 3;
      if ( (unsigned int)v13 > (unsigned int)v15 )
        goto LABEL_57;
      v53.m128_u64[0] = v16;
LABEL_56:
      sub_1446CA0(a1 + 2080, v19, v13, v14, v16, v15);
      sub_1442520((__int64 *)(a1 + 2080), &src, &v58);
      v43 = src;
      v16 = v53.m128_u64[0];
      LODWORD(v14) = *(_DWORD *)(a1 + 2088) + 1;
      v22 = v58;
LABEL_57:
      v44 = *v22 == -4096;
      *(_DWORD *)(a1 + 2088) = v14;
      if ( !v44 )
        --*(_DWORD *)(a1 + 2092);
      *v22 = v43;
      v22[1] = 0;
      goto LABEL_10;
    }
LABEL_55:
    v53.m128_u64[0] = v16;
    v19 *= 2;
    goto LABEL_56;
  }
  while ( 1 )
  {
    if ( v23 == -8192 && !v10 )
      v10 = (__int64)v22;
    v21 = v15 & (v51 + v21);
    v22 = (_QWORD *)(v20 + 16LL * v21);
    v23 = *v22;
    if ( a3 == *v22 )
      break;
    if ( v23 == -4096 )
    {
      if ( v10 )
        v22 = (_QWORD *)v10;
      goto LABEL_66;
    }
    ++v51;
  }
LABEL_10:
  v24 = v22 + 1;
  if ( !v12 )
    goto LABEL_11;
  v31 = *v24;
  v33 = *v24 & 0xFFFFFFFFFFFFFFF8LL;
  v32 = (*v24 >> 2) & 1;
  if ( ((*v24 >> 2) & 1) != 0 )
  {
    v34 = *(char **)v33;
    v35 = 8LL * *(unsigned int *)(v33 + 8);
    v36 = (__int64 *)&v34[v35];
    v37 = v35 >> 3;
    v38 = v35 >> 5;
    if ( v38 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v34 + 32LL) )
      {
        v29 = v34;
      }
      else if ( *(_DWORD *)(*((_QWORD *)v34 + 1) + 32LL) )
      {
        v29 = v34 + 8;
      }
      else
      {
        v29 = v34 + 16;
        if ( !*(_DWORD *)(*((_QWORD *)v34 + 2) + 32LL) )
        {
          v29 = v34 + 24;
          if ( !*(_DWORD *)(*((_QWORD *)v34 + 3) + 32LL) )
          {
            while ( 1 )
            {
              v29 = v34 + 32;
              if ( !--v38 )
              {
                v37 = ((char *)v36 - v29) >> 3;
                goto LABEL_44;
              }
              if ( *(_DWORD *)(*((_QWORD *)v34 + 4) + 32LL) )
                goto LABEL_20;
              if ( *(_DWORD *)(*((_QWORD *)v34 + 5) + 32LL) )
              {
                v29 = v34 + 40;
                goto LABEL_20;
              }
              if ( *(_DWORD *)(*((_QWORD *)v34 + 6) + 32LL) )
              {
                v29 = v34 + 48;
                goto LABEL_20;
              }
              if ( *(_DWORD *)(*((_QWORD *)v34 + 7) + 32LL) )
                break;
              v34 += 32;
            }
            v29 = v34 + 56;
          }
        }
      }
LABEL_20:
      if ( v29 != (char *)v36 )
      {
        v30 = (__int64 *)(v29 + 8);
        if ( v29 + 8 != (char *)v36 )
        {
          do
          {
            if ( !*(_DWORD *)(*v30 + 32) )
            {
              *(_QWORD *)v29 = *v30;
              v29 += 8;
            }
            ++v30;
          }
          while ( v30 != v36 );
          v31 = *v24;
          v32 = (*v24 >> 2) & 1;
        }
        if ( !v32 )
        {
          if ( v24 == (__int64 *)v29 && v29 != (char *)v36 )
            goto LABEL_29;
          goto LABEL_51;
        }
LABEL_60:
        v45 = v31 & 0xFFFFFFFFFFFFFFF8LL;
        v46 = *(_QWORD *)v45;
        v47 = v45;
        v48 = *(_QWORD *)v45 + 8LL * *(unsigned int *)(v45 + 8) - (_QWORD)v36;
        if ( v36 != (__int64 *)(*(_QWORD *)v45 + 8LL * *(unsigned int *)(v45 + 8)) )
        {
          v49 = *(_QWORD *)v45 + 8LL * *(unsigned int *)(v45 + 8) - (_QWORD)v36;
          v53.m128_u64[0] = v16;
          v50 = (char *)memmove(v29, v36, v49);
          v16 = v53.m128_u64[0];
          v29 = v50;
          v46 = *(_QWORD *)v47;
        }
        *(_DWORD *)(v47 + 8) = (__int64)&v29[v48 - v46] >> 3;
LABEL_11:
        v25 = *v24;
        v26 = *v24 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v26 )
        {
          v53.m128_u64[0] = *v24 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v25 & 4) != 0 )
          {
            v27 = *(unsigned int *)(v26 + 8);
            if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(v26 + 12) )
            {
              v53.m128_u64[0] = v16;
              sub_2237220(v26, v26 + 16, v27 + 1, 8);
              v27 = *(unsigned int *)(v26 + 8);
              v16 = v53.m128_u64[0];
            }
            *(_QWORD *)(*(_QWORD *)v26 + 8 * v27) = v16;
            ++*(_DWORD *)(v26 + 8);
            goto LABEL_16;
          }
          goto LABEL_53;
        }
        goto LABEL_29;
      }
      goto LABEL_64;
    }
    v29 = v34;
LABEL_44:
    switch ( v37 )
    {
      case 2LL:
        goto LABEL_45;
      case 3LL:
        if ( *(_DWORD *)(*(_QWORD *)v29 + 32LL) )
          goto LABEL_20;
        v29 += 8;
LABEL_45:
        if ( *(_DWORD *)(*(_QWORD *)v29 + 32LL) )
          goto LABEL_20;
        v39 = (__int64 *)(v29 + 8);
        v29 = (char *)v36;
LABEL_49:
        v36 = (__int64 *)v29;
        if ( !*(_DWORD *)(*v39 + 32) )
          goto LABEL_50;
        v29 = (char *)v39;
        goto LABEL_20;
      case 1LL:
        v39 = (__int64 *)v29;
        v29 = (char *)v36;
        goto LABEL_49;
    }
  }
  else
  {
    if ( v33 )
    {
      v29 = (char *)(v24 + 1);
      v39 = v24;
      goto LABEL_49;
    }
    v36 = v24;
  }
LABEL_64:
  v29 = (char *)v36;
LABEL_50:
  if ( v32 )
    goto LABEL_60;
LABEL_51:
  v40 = v31 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v40 )
  {
    v53.m128_u64[0] = v40;
LABEL_53:
    v53.m128_u64[0] = v16;
    v54 = v16;
    v53 = _mm_loadh_ps((const double *)v53.m128_u64);
    v41 = operator new(0x30u);
    si128 = _mm_load_si128((const __m128i *)&v53);
    v16 = v54;
    *(_QWORD *)(v41 + 8) = 0x400000002LL;
    *(_QWORD *)v41 = v41 + 16;
    *(__m128i *)(v41 + 16) = si128;
    *v24 = v41 | 4;
    goto LABEL_16;
  }
LABEL_29:
  *v24 = v16 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_16:
  v28 = *(_BYTE *)(a3 + 3);
  if ( (v28 & 2) == 0 )
    *(_BYTE *)(a3 + 3) = v28 | 0x86;
  v10 = v16;
  *a7 = 1;
LABEL_3:
  if ( ptr[0] != v60 )
    free(ptr[0]);
  return v10;
}
