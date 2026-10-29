__int64 __fastcall sub_1C8D580(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rbx
  char *v7; // rsi
  _BYTE *v8; // rcx
  char *i; // rax
  __int64 v10; // rbx
  bool v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int16 *v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  char *v34; // rdx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  void **v38; // rdi
  __int64 v39; // r13
  unsigned __int64 v41; // rax
  __int64 *v42; // r13
  unsigned int v43; // r15d
  unsigned __int64 v44; // rbp
  int v45; // r12d
  __int64 v46; // r9
  unsigned int v47; // ecx
  __int64 *v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // esi
  int v56; // r11d
  int v57; // ecx
  bool v58; // zf
  _QWORD *v59; // [rsp+0h] [rbp-1A8h]
  unsigned __int16 *v60; // [rsp+0h] [rbp-1A8h]
  __int64 *v61; // [rsp+0h] [rbp-1A8h]
  unsigned __int16 *v62; // [rsp+8h] [rbp-1A0h] BYREF
  unsigned __int64 v63; // [rsp+10h] [rbp-198h]
  __int64 *v64; // [rsp+18h] [rbp-190h]
  int v65; // [rsp+24h] [rbp-184h]
  void **p_ptr; // [rsp+28h] [rbp-180h]
  __int64 v67; // [rsp+38h] [rbp-170h] BYREF
  unsigned __int64 v68[4]; // [rsp+40h] [rbp-168h] BYREF
  void *ptr; // [rsp+60h] [rbp-148h] BYREF
  __int64 v70; // [rsp+68h] [rbp-140h]
  _BYTE v71[312]; // [rsp+70h] [rbp-138h] BYREF

  v6 = *(unsigned int *)(a2 + 28);
  v7 = v71;
  p_ptr = &ptr;
  v65 = v6;
  ptr = v71;
  v70 = 0x400000000LL;
  if ( !v6 )
  {
    v38 = (void **)v71;
    goto LABEL_29;
  }
  v8 = v71;
  if ( v6 > 4 )
  {
    sub_2237220(p_ptr, v71, v6, 64);
    v8 = ptr;
    v7 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v70;
  }
  a4 = 0;
  for ( i = &v8[64 * v6]; i != v7; *((_DWORD *)v7 - 2) = 0 )
  {
    a3 = 0;
    *((_OWORD *)v7 + 1) = 0;
    v7 += 64;
    *((_OWORD *)v7 - 4) = 0;
    *((_OWORD *)v7 - 1) = 0;
    *((_DWORD *)v7 - 14) = 0;
    *((_OWORD *)v7 - 2) = 0;
  }
  LODWORD(v70) = v65;
  if ( !v65 )
  {
    v38 = (void **)ptr;
    v6 = 0;
    goto LABEL_29;
  }
  v10 = 0;
  v11 = 0;
  v63 = (unsigned int)(v65 - 1);
  v64 = (__int64 *)v68;
  while ( 1 )
  {
    v13 = sub_C03D50(a2, v10);
    v14 = *(_QWORD *)(v13 + 40);
    v15 = v13;
    v16 = v13;
    v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v14 & 7) != 0 )
      v17 = 0;
    v18 = v10 << 6;
    *(_QWORD *)((char *)ptr + v18) = v17;
    *(_DWORD *)((char *)ptr + v18 + 8) = *(_DWORD *)(v15 + 24);
    if ( *(_DWORD *)(v15 + 24) != (unsigned int)sub_B73090(v16) )
    {
      v19 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
        v19 = *(_QWORD *)(v19 + 32);
      v59 = sub_1C8AA80(a1, v19, a3, (__m128)0LL);
      v20 = sub_1C8ABA0(a1, *(_QWORD *)(v15 + 48), a3, (__m128)0LL);
      v21 = sub_1E61050(*a1, v20, v59, *(double *)a3.m128_u64, 0.0);
      *(_QWORD *)((char *)ptr + v18 + 16) = v21;
    }
    sub_C03D60(v64, a2, v10);
    v60 = sub_1C7CFE0(a1, v68[0], a3, (__m128)0LL, v22, v23, v24);
    v62 = sub_1C7CFE0(a1, v68[1], a3, (__m128)0LL, v25, v26, v27);
    v31 = sub_1C7CFE0(a1, v68[2], a3, (__m128)0LL, v28, v29, v30);
    if ( !v11 )
    {
      v32 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
        v32 = *(_QWORD *)(v32 + 32);
      if ( !v32 || (v33 = *(_QWORD *)((char *)ptr + v18 + 16)) != 0 && (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v11 = v31 == (unsigned __int16 *)((char *)&dword_0 + 1)
           || v60 == (unsigned __int16 *)((char *)&dword_0 + 1)
           || v62 == (unsigned __int16 *)((char *)&dword_0 + 1);
        if ( !v11 )
          break;
      }
    }
    v11 = 1;
    v12 = v10 + 1;
    if ( v10 == v63 )
      goto LABEL_24;
LABEL_9:
    v10 = v12;
  }
  v34 = (char *)ptr + v18;
  a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v62), (__m128i)xmmword_23AA750);
  *((_QWORD *)v34 + 5) = (unsigned __int64)v31 & 0xFFFFFFFFFFFFFFFELL;
  *(__m128 *)(v34 + 24) = a3;
  v35 = sub_C03DA0(a2, v10);
  *(_DWORD *)((char *)ptr + v18 + 48) = v35;
  v36 = sub_C03DC0(a2, v10);
  *(_DWORD *)((char *)ptr + v18 + 52) = v36;
  v37 = sub_C03DE0(a2, v10);
  *(_DWORD *)((char *)ptr + v18 + 56) = v37;
  v12 = v10 + 1;
  if ( v10 != v63 )
    goto LABEL_9;
LABEL_24:
  v38 = (void **)ptr;
  v39 = 1;
  v6 = (unsigned int)v70;
  if ( v11 )
    goto LABEL_25;
LABEL_29:
  v41 = sub_1B45670(
          *(__int64 **)(*a1 + 760),
          nullptr,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          *(_DWORD *)(a2 + 24),
          a3,
          a4,
          (__int64)v38,
          (__int64)v38,
          v6);
  v39 = v41;
  if ( v41 > 1 )
  {
    v61 = a1 + 1;
    v62 = (unsigned __int16 *)v68;
    if ( v65 )
    {
      v63 = v41;
      v42 = a1;
      v43 = 0;
      v44 = v41 & 0xFFFFFFFFFFFFFFFELL;
      v64 = &v67;
      v45 = v65;
      while ( 1 )
      {
        v50 = sub_C03D50(v44, v43);
        v51 = sub_C03D50(a2, v43);
        v55 = *((_DWORD *)v42 + 6);
        v67 = v51;
        if ( !v55 )
          break;
        v46 = v42[1];
        v47 = (v55 - 1) & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
        v48 = (__int64 *)(v46 + 16LL * v47);
        v49 = *v48;
        if ( v51 != *v48 )
        {
          v56 = 1;
          v53 = 0;
          if ( v49 != -4096 )
          {
            while ( 1 )
            {
              if ( v49 == -8192 && !v53 )
                v53 = (__int64)v48;
              v47 = (v55 - 1) & (v56 + v47);
              v65 = v56 + 1;
              v48 = (__int64 *)(v46 + 16LL * v47);
              v49 = *v48;
              if ( v51 == *v48 )
                goto LABEL_35;
              if ( v49 == -4096 )
              {
                if ( v53 )
                  v48 = (__int64 *)v53;
                break;
              }
              v56 = v65;
            }
          }
          v57 = *((_DWORD *)v42 + 4);
          v68[0] = (unsigned __int64)v48;
          v52 = (unsigned int)(v57 + 1);
          v54 = (unsigned int)(4 * v52);
          if ( (unsigned int)v54 < 3 * v55 )
          {
            v54 = v55 >> 3;
            if ( v55 - *((_DWORD *)v42 + 5) - (unsigned int)v52 > (unsigned int)v54 )
              goto LABEL_44;
            goto LABEL_39;
          }
LABEL_38:
          v55 *= 2;
LABEL_39:
          sub_1748150((__int64)v61, v55, (__int64)v48, v52, v53, v54);
          sub_1C740A0(v61, v64, v62);
          v51 = v67;
          v48 = (__int64 *)v68[0];
          LODWORD(v52) = *((_DWORD *)v42 + 4) + 1;
LABEL_44:
          v58 = *v48 == -4096;
          *((_DWORD *)v42 + 4) = v52;
          if ( !v58 )
            --*((_DWORD *)v42 + 5);
          *v48 = v51;
          v48[1] = 0;
        }
LABEL_35:
        ++v43;
        v48[1] = v50;
        if ( v43 == v45 )
        {
          v39 = v63;
          goto LABEL_30;
        }
      }
      v68[0] = 0;
      goto LABEL_38;
    }
  }
LABEL_30:
  v38 = (void **)ptr;
LABEL_25:
  if ( v38 != p_ptr + 2 )
    free(v38);
  return v39;
}
