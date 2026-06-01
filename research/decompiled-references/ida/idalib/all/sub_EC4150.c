unsigned __int64 __fastcall sub_EC4150(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3,
        __int64 *a4,
        char **a5,
        char *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v9; // rbp
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r11d
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // edx
  unsigned __int64 v21; // r12
  __int64 v22; // rcx
  int v23; // r11d
  int v24; // r9d
  unsigned int *v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rdx
  __int64 *v30; // r13
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rcx
  __int64 *v35; // r15
  __int64 *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rdx
  char *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rbp
  unsigned int v43; // r14d
  unsigned __int64 v44; // r12
  __int64 *v45; // r13
  __int64 v46; // rbx
  char *v47; // rax
  __int64 *v48; // rdi
  __int64 *v49; // rbp
  __int64 *v50; // rdi
  char *v52; // rsi
  __int64 v53; // rax
  __int64 *v54; // rax
  unsigned int *v55; // r11
  __int64 *v56; // rcx
  __int64 v57; // rdx
  const __m128i *v58; // r8
  __int64 v59; // rsi
  __m128i v60; // xmm1
  unsigned int *v61; // [rsp+0h] [rbp-128h]
  char *v62; // [rsp+8h] [rbp-120h]
  __int64 *v63; // [rsp+10h] [rbp-118h]
  __int64 *v64; // [rsp+18h] [rbp-110h]
  __int64 *p_ptr; // [rsp+20h] [rbp-108h]
  unsigned __int64 v66; // [rsp+28h] [rbp-100h]
  _QWORD v67[2]; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v68; // [rsp+40h] [rbp-E8h]
  __int64 *v69; // [rsp+48h] [rbp-E0h]
  __int64 v70; // [rsp+50h] [rbp-D8h]
  char v71; // [rsp+58h] [rbp-D0h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+68h] [rbp-C0h]

  v9 = (__int64 *)a5;
  v10 = a7;
  v61 = a3;
  v63 = a4;
  v62 = a6;
  v11 = sub_EB5A30(a5, a6);
  v12 = (unsigned int)v63;
  v13 = v11;
  v14 = a7 + 144 * a8;
  if ( v14 == a7 )
  {
    v17 = 0;
    v16 = 0;
  }
  else
  {
    v15 = a7;
    v16 = 0;
    do
    {
      v16 += *(_DWORD *)(v15 + 8);
      v15 += 144;
    }
    while ( v14 != v15 );
    v17 = 16LL * v16;
  }
  LODWORD(p_ptr) = v16;
  v64 = v63;
  LODWORD(v63) = v13;
  v18 = 4LL * (v13 + (unsigned int)a8) + 8 * (v13 + (unsigned __int64)v12);
  v19 = sub_EBD890((__int64 *)(a1 + 2352), v17 + 8 * ((v18 != 0) + ((v18 - (v18 != 0)) >> 3)) + 80, 3u);
  v20 = a2[2];
  v21 = v19;
  LODWORD(v19) = a2[1];
  v22 = (__int64)v64;
  v23 = (int)p_ptr;
  v24 = (int)v63;
  *(_DWORD *)v21 = *a2;
  *(_DWORD *)(v21 + 12) = v19;
  v25 = v61;
  *(_DWORD *)(v21 + 4) = v20;
  *(_DWORD *)(v21 + 24) = a8;
  *(_DWORD *)(v21 + 8) = 51;
  *(_DWORD *)(v21 + 16) = v22;
  *(_DWORD *)(v21 + 20) = v24;
  *(_DWORD *)(v21 + 28) = v23;
  *(_BYTE *)(v21 + 32) = 0;
  *(_QWORD *)(v21 + 56) = 0;
  *(_DWORD *)(v21 + 64) = 0;
  *(_QWORD *)(v21 + 72) = 0;
  *(_OWORD *)(v21 + 40) = 0;
  ptr = v25;
  v73 = v22;
  p_ptr = (__int64 *)&ptr;
  sub_EB8020((__int64)&ptr, (char *)(v21 + 80));
  v29 = v62;
  v67[0] = 0;
  v64 = v67;
  v30 = (__int64 *)&a5[(_QWORD)v62];
  v68 = 0;
  v67[1] = 0;
  v69 = (__int64 *)&v71;
  v70 = 0;
  if ( a5 == (char **)v30 )
  {
    v36 = (__int64 *)&v71;
    v35 = (__int64 *)&v71;
  }
  else
  {
    do
    {
      v31 = sub_EC2230((__int64)v64, v9, (__int64)v29, (__int64)v26, v27, v28);
      v32 = *(unsigned int *)(v10 + 8);
      v33 = *(_QWORD *)v10;
      v34 = *(unsigned int *)(v31 + 8);
      v29 = (_QWORD *)(v34 + 1);
      if ( v34 + 1 > (unsigned __int64)*(unsigned int *)(v31 + 12) )
      {
        v61 = (unsigned int *)v31;
        sub_2237220(v31, v31 + 16, v29, 16);
        v31 = (__int64)v61;
        v29 = (_QWORD *)(*(_QWORD *)v61 + 16LL * v61[2]);
        *v29 = v33;
        v29[1] = v32;
      }
      else
      {
        v26 = (_QWORD *)(*(_QWORD *)v31 + 16 * v34);
        *v26 = v33;
        v26[1] = v32;
      }
      ++v9;
      ++*(_DWORD *)(v31 + 8);
      v10 += 144;
    }
    while ( v30 != v9 );
    v35 = v69;
    v36 = &v69[19 * (unsigned int)v70];
  }
  v37 = *(unsigned int *)(v21 + 20);
  v38 = 8LL * *(unsigned int *)(v21 + 16) + 80;
  v39 = (char *)(v21 + v38);
  v40 = v38 + 8 * v37;
  v41 = v40 + 4LL * (unsigned int)(*(_DWORD *)(v21 + 24) + *(_DWORD *)(v21 + 20));
  v62 = v39;
  v61 = (unsigned int *)(v21 + v40 + 4 * v37);
  v42 = (v21 + v41 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v35 == v36 )
    goto LABEL_20;
  v66 = v21;
  v43 = 0;
  v44 = v21 + v40;
  v45 = v36;
  v63 = p_ptr + 2;
  do
  {
    while ( 1 )
    {
      v46 = *v35;
      ptr = v63;
      v73 = 0x800000000LL;
      if ( !*((_DWORD *)v35 + 4) )
      {
        v47 = v62;
        v44 += 4LL;
        *(_QWORD *)v62 = v46;
        v48 = (__int64 *)ptr;
        v62 = v47 + 8;
        *(_DWORD *)(v44 - 4) = 0;
        goto LABEL_14;
      }
      v44 += 4LL;
      sub_EC0D40(p_ptr, v35 + 1);
      v52 = v62;
      v53 = (unsigned int)v73;
      *(_QWORD *)v62 = v46;
      v48 = (__int64 *)ptr;
      *(_DWORD *)(v44 - 4) = v53;
      v54 = &v48[2 * v53];
      v62 = v52 + 8;
      if ( v48 != v54 )
        break;
LABEL_14:
      if ( v48 == v63 )
        goto LABEL_29;
LABEL_15:
      free(v48);
      v35 += 19;
      if ( v45 == v35 )
        goto LABEL_16;
    }
    v55 = v61;
    v56 = v48;
    do
    {
      v57 = v56[1];
      v58 = (const __m128i *)*v56;
      ++v55;
      v43 += v57;
      v57 *= 16;
      *(v55 - 1) = v43;
      v59 = v57 >> 4;
      if ( v57 > 0 )
      {
        do
        {
          v60 = _mm_loadu_si128(v58);
          v42 += 16LL;
          ++v58;
          *(__m128i *)(v42 - 16) = v60;
          --v59;
        }
        while ( v59 );
      }
      v56 += 2;
    }
    while ( v54 != v56 );
    v61 += (((unsigned __int64)v54 - 16 - (unsigned __int64)v48) >> 4) + 1;
    if ( v48 != v63 )
      goto LABEL_15;
LABEL_29:
    v35 += 19;
  }
  while ( v45 != v35 );
LABEL_16:
  v49 = v69;
  v21 = v66;
  v36 = &v69[19 * (unsigned int)v70];
  if ( v69 != v36 )
  {
    do
    {
      while ( 1 )
      {
        v36 -= 19;
        v50 = (__int64 *)v36[1];
        if ( v50 == v36 + 3 )
          break;
        free(v50);
        if ( v49 == v36 )
          goto LABEL_19;
      }
    }
    while ( v49 != v36 );
LABEL_19:
    v36 = v69;
  }
LABEL_20:
  if ( v36 != v64 + 5 )
    free(v36);
  operator delete(v67[0], 16LL * v68, 8);
  return v21;
}
