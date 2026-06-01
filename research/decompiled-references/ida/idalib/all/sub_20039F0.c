char *__fastcall sub_20039F0(char **a1, char *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  char *v8; // rbx
  char *v9; // rbp
  unsigned __int64 v10; // rax
  char *v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r12
  __m128 *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  char *v25; // rax
  char *v26; // rsi
  __int64 v27; // rdx
  char *v28; // rdi
  char *v29; // rcx
  char *v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  char *v35; // r8
  char *v36; // r8
  char *v37; // r8
  char *v38; // rax
  char *v39; // rsi
  __int64 v40; // rdx
  char *v41; // rdi
  char *v42; // rcx
  __int64 v43; // r8
  char *v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  char *v49; // r8
  __int64 v50; // r8
  char *v51; // r8
  __int64 v52; // r8
  char *v53; // r8
  char *v54; // rax
  char *v55; // r8
  char *i; // r13
  char *v57; // rdi
  char *v58; // rdi
  void **v59; // r12
  void **v60; // r15
  char *v61; // rdi
  char *result; // rax
  __m128 v63; // xmm0
  __int64 v64; // [rsp+0h] [rbp-108h] BYREF
  __int64 v65; // [rsp+8h] [rbp-100h]
  char *v66; // [rsp+10h] [rbp-F8h]
  _QWORD *v67; // [rsp+18h] [rbp-F0h] BYREF
  _QWORD *v68; // [rsp+20h] [rbp-E8h]
  char *v69; // [rsp+28h] [rbp-E0h]
  _QWORD *v70; // [rsp+30h] [rbp-D8h]
  _QWORD *v71; // [rsp+38h] [rbp-D0h]
  _QWORD v72[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v73; // [rsp+60h] [rbp-A8h]
  _QWORD v74[4]; // [rsp+70h] [rbp-98h] BYREF
  __int16 v75; // [rsp+90h] [rbp-78h]
  _QWORD v76[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v77; // [rsp+C0h] [rbp-48h]

  v8 = a1[1];
  v9 = *a1;
  v10 = 0x86BCA1AF286BCA1BLL * ((v8 - *a1) >> 3);
  v11 = (char *)(a2 - *a1);
  if ( !v10 )
  {
    v12 = 1;
    goto LABEL_64;
  }
  v12 = 0xD79435E50D79436LL * ((a1[1] - *a1) >> 3);
  v13 = -112;
  if ( v10 > 2 * v10 || v12 > 0x1AF286BCA1AF286LL )
    goto LABEL_3;
  if ( v12 )
  {
LABEL_64:
    v13 = 152 * v12;
LABEL_3:
    v71 = a6;
    v70 = a5;
    v68 = a4;
    v67 = a3;
    v66 = v11;
    v14 = operator new(v13);
    a3 = v67;
    v65 = v14;
    a4 = v68;
    a5 = v70;
    a6 = v71;
    v69 = (char *)(v14 + v13);
    v64 = v14 + 152;
    goto LABEL_4;
  }
  v64 = 152;
  v69 = nullptr;
  v65 = 0;
LABEL_4:
  v15 = v65;
  v73 = 261;
  v16 = (__m128 *)&v11[v65];
  v17 = *a3;
  v18 = a3[1];
  v66 = (char *)*a5;
  v19 = (_QWORD *)a5[1];
  v72[1] = v18;
  v75 = 261;
  v20 = *a4;
  v72[0] = v17;
  v74[0] = v20;
  v21 = a4[1];
  v77 = 261;
  v22 = *a6;
  v74[1] = v21;
  v23 = (_QWORD *)a5[2];
  a5[2] = 0;
  v76[0] = v22;
  v24 = a6[1];
  *(_OWORD *)a5 = 0;
  v67 = v19;
  v68 = v23;
  v76[1] = v24;
  sub_2253560(v16, v72);
  sub_2253560(&v16[2], v74);
  v16[5].m128_u64[0] = (unsigned __int64)v68;
  v16[4] = _mm_loadh_ps((const double *)&v67);
  sub_2253560(&v16[5].m128_u16[4], v76);
  v16[8].m128_u64[0] = 0;
  v16[7].m128_u64[1] = (unsigned __int64)&v16[8].m128_u64[1];
  v16[8].m128_i8[8] = 0;
  if ( a2 != v9 )
  {
    v25 = v9 + 16;
    v26 = v9 + 104;
    v27 = v15;
    v28 = v9 + 136;
    v29 = v9 + 48;
    while ( 1 )
    {
      *(_QWORD *)v27 = v27 + 16;
      v37 = *((char **)v25 - 2);
      if ( v25 == v37 )
      {
        *(__m128i *)(v27 + 16) = _mm_loadu_si128((const __m128i *)v25);
      }
      else
      {
        *(_QWORD *)v27 = v37;
        *(_QWORD *)(v27 + 16) = *(_QWORD *)v25;
      }
      *(_QWORD *)(v27 + 8) = *((_QWORD *)v25 - 1);
      *((_QWORD *)v25 - 2) = v25;
      *((_QWORD *)v25 - 1) = 0;
      *v25 = 0;
      *(_QWORD *)(v27 + 32) = v27 + 48;
      v30 = *((char **)v25 + 2);
      if ( v30 == v29 )
      {
        *(__m128i *)(v27 + 48) = _mm_loadu_si128((const __m128i *)v25 + 2);
      }
      else
      {
        *(_QWORD *)(v27 + 32) = v30;
        *(_QWORD *)(v27 + 48) = *((_QWORD *)v25 + 4);
      }
      *(_QWORD *)(v27 + 40) = *((_QWORD *)v25 + 3);
      v25[32] = 0;
      *((_QWORD *)v25 + 2) = v29;
      *((_QWORD *)v25 + 3) = 0;
      *(_OWORD *)(v27 + 64) = 0;
      *(_QWORD *)(v27 + 80) = 0;
      *(_QWORD *)(v27 + 64) = *((_QWORD *)v25 + 6);
      v31 = *((_QWORD *)v25 + 7);
      *((_QWORD *)v25 + 6) = 0;
      v32 = *(_QWORD *)(v27 + 72);
      *(_QWORD *)(v27 + 72) = v31;
      v33 = *((_QWORD *)v25 + 8);
      *((_QWORD *)v25 + 7) = v32;
      v34 = *(_QWORD *)(v27 + 80);
      *(_QWORD *)(v27 + 80) = v33;
      *((_QWORD *)v25 + 8) = v34;
      *(_QWORD *)(v27 + 88) = v27 + 104;
      v35 = *((char **)v25 + 9);
      if ( v35 == v26 )
      {
        *(__m128i *)(v27 + 104) = _mm_loadu_si128((const __m128i *)(v25 + 88));
      }
      else
      {
        *(_QWORD *)(v27 + 88) = v35;
        *(_QWORD *)(v27 + 104) = *((_QWORD *)v25 + 11);
      }
      *(_QWORD *)(v27 + 96) = *((_QWORD *)v25 + 10);
      *((_QWORD *)v25 + 9) = v26;
      *((_QWORD *)v25 + 10) = 0;
      v25[88] = 0;
      *(_QWORD *)(v27 + 120) = v27 + 136;
      v36 = *((char **)v25 + 13);
      if ( v36 == v28 )
      {
        *(__m128i *)(v27 + 136) = _mm_loadu_si128((const __m128i *)(v25 + 120));
      }
      else
      {
        *(_QWORD *)(v27 + 120) = v36;
        *(_QWORD *)(v27 + 136) = *((_QWORD *)v25 + 15);
      }
      v27 += 152;
      v26 += 152;
      v29 += 152;
      *(_QWORD *)(v27 - 24) = *((_QWORD *)v25 + 14);
      *((_QWORD *)v25 + 13) = v28;
      v28 += 152;
      *((_QWORD *)v25 + 14) = 0;
      v25[120] = 0;
      if ( a2 == v25 + 136 )
        break;
      v25 += 152;
    }
    v64 = v65 + 152 * (((0x6BCA1AF286BCA1BLL * ((unsigned __int64)(v25 - 16 - v9) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 2);
  }
  if ( a2 != v8 )
  {
    v38 = a2 + 16;
    v39 = a2 + 104;
    v40 = v64;
    v41 = a2 + 136;
    v42 = a2 + 48;
    while ( 1 )
    {
      *(_QWORD *)v40 = v40 + 16;
      v55 = *((char **)v38 - 2);
      if ( v55 == v38 )
      {
        *(__m128i *)(v40 + 16) = _mm_loadu_si128((const __m128i *)v38);
      }
      else
      {
        *(_QWORD *)v40 = v55;
        *(_QWORD *)(v40 + 16) = *(_QWORD *)v38;
      }
      v43 = *((_QWORD *)v38 - 1);
      *((_QWORD *)v38 - 2) = v38;
      *((_QWORD *)v38 - 1) = 0;
      *(_QWORD *)(v40 + 8) = v43;
      *(_QWORD *)(v40 + 32) = v40 + 48;
      v44 = *((char **)v38 + 2);
      *v38 = 0;
      if ( v44 == v42 )
      {
        *(__m128i *)(v40 + 48) = _mm_loadu_si128((const __m128i *)v38 + 2);
      }
      else
      {
        *(_QWORD *)(v40 + 32) = v44;
        *(_QWORD *)(v40 + 48) = *((_QWORD *)v38 + 4);
      }
      v45 = *((_QWORD *)v38 + 3);
      *((_QWORD *)v38 + 2) = v42;
      *((_QWORD *)v38 + 3) = 0;
      *(_QWORD *)(v40 + 40) = v45;
      v46 = *((_QWORD *)v38 + 6);
      v38[32] = 0;
      *(_QWORD *)(v40 + 64) = v46;
      v47 = *((_QWORD *)v38 + 7);
      *((_OWORD *)v38 + 3) = 0;
      *(_QWORD *)(v40 + 72) = v47;
      v48 = *((_QWORD *)v38 + 8);
      *((_QWORD *)v38 + 8) = 0;
      *(_QWORD *)(v40 + 80) = v48;
      *(_QWORD *)(v40 + 88) = v40 + 104;
      v49 = *((char **)v38 + 9);
      if ( v49 == v39 )
      {
        *(__m128i *)(v40 + 104) = _mm_loadu_si128((const __m128i *)(v38 + 88));
      }
      else
      {
        *(_QWORD *)(v40 + 88) = v49;
        *(_QWORD *)(v40 + 104) = *((_QWORD *)v38 + 11);
      }
      v50 = *((_QWORD *)v38 + 10);
      *((_QWORD *)v38 + 9) = v39;
      *((_QWORD *)v38 + 10) = 0;
      *(_QWORD *)(v40 + 96) = v50;
      *(_QWORD *)(v40 + 120) = v40 + 136;
      v51 = *((char **)v38 + 13);
      v38[88] = 0;
      if ( v51 == v41 )
      {
        *(__m128i *)(v40 + 136) = _mm_loadu_si128((const __m128i *)(v38 + 120));
      }
      else
      {
        *(_QWORD *)(v40 + 120) = v51;
        *(_QWORD *)(v40 + 136) = *((_QWORD *)v38 + 15);
      }
      v52 = *((_QWORD *)v38 + 14);
      *((_QWORD *)v38 + 13) = v41;
      v40 += 152;
      v41 += 152;
      *((_QWORD *)v38 + 14) = 0;
      v39 += 152;
      v42 += 152;
      *(_QWORD *)(v40 - 24) = v52;
      v53 = v38 + 152;
      v54 = v38 + 136;
      *(v54 - 16) = 0;
      if ( v8 == v54 )
        break;
      v38 = v53;
    }
    v64 += 152 * (((0x6BCA1AF286BCA1BLL * ((unsigned __int64)(v8 - a2 - 152) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
  }
  for ( i = v9; i != v8; i += 152 )
  {
    while ( 1 )
    {
      v57 = *((char **)i + 15);
      if ( v57 != i + 136 )
        operator delete(v57);
      v58 = *((char **)i + 11);
      if ( v58 != i + 104 )
        operator delete(v58);
      v59 = *((void ***)i + 9);
      v60 = *((void ***)i + 8);
      if ( v59 != v60 )
      {
        do
        {
          while ( *v60 != v60 + 2 )
          {
            operator delete(*v60);
            v60 += 4;
            if ( v59 == v60 )
              goto LABEL_46;
          }
          v60 += 4;
        }
        while ( v59 != v60 );
LABEL_46:
        v60 = *((void ***)i + 8);
      }
      if ( v60 )
        operator delete(v60);
      v61 = *((char **)i + 4);
      if ( v61 != i + 48 )
        operator delete(v61);
      if ( *(char **)i == i + 16 )
        break;
      operator delete(*(void **)i);
      i += 152;
      if ( v8 == i )
        goto LABEL_53;
    }
  }
LABEL_53:
  if ( v9 )
    operator delete(v9);
  result = v69;
  v63 = _mm_loadh_ps((const double *)&v64);
  a1[2] = v69;
  *(__m128 *)a1 = v63;
  return result;
}
