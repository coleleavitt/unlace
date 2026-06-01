__int64 __fastcall sub_1153850(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char *v5; // r13
  size_t v6; // rax
  __int64 v7; // rax
  size_t v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  void **v17; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r12
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __m128i v25; // xmm5
  void **v26; // rsi
  char v27; // dl
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm6
  __m128i v31; // xmm4
  char *v32; // rcx
  __m128i v33; // xmm5
  __m128i v34; // xmm6
  __m128i v35; // xmm7
  __m128i v36; // xmm3
  __m128i v37; // xmm7
  _BYTE *v38; // rsi
  __int64 v39; // r13
  unsigned __int64 i; // rax
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  void **v44; // r13
  __m128i *v45; // rdx
  unsigned __int64 v46; // rsi
  __m128i *v47; // rax
  _BYTE *v48; // rdi
  __int64 v49; // r15
  __int64 v50; // r12
  size_t v51; // rax
  __int64 v52; // rax
  void **v53; // r13
  void **v54; // r12
  __m128i v55; // xmm2
  __m128i v56; // xmm7
  __m128i v57; // xmm2
  __int64 v58; // [rsp+20h] [rbp-1A8h] BYREF
  char v59; // [rsp+28h] [rbp-1A0h]
  void *v60; // [rsp+30h] [rbp-198h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-190h]
  _BYTE v62[16]; // [rsp+40h] [rbp-188h] BYREF
  void *v63[2]; // [rsp+50h] [rbp-178h] BYREF
  _BYTE v64[16]; // [rsp+60h] [rbp-168h] BYREF
  void **v65; // [rsp+70h] [rbp-158h] BYREF
  __int64 v66; // [rsp+78h] [rbp-150h]
  _BYTE v67[32]; // [rsp+80h] [rbp-148h] BYREF
  char v68; // [rsp+A0h] [rbp-128h] BYREF
  __m128i v69; // [rsp+A8h] [rbp-120h] BYREF
  __m128i v70; // [rsp+B8h] [rbp-110h] BYREF
  __m128i v71; // [rsp+C8h] [rbp-100h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-E8h] BYREF
  __m128i v73; // [rsp+E8h] [rbp-E0h] BYREF
  __m128i v74; // [rsp+F8h] [rbp-D0h] BYREF
  __m128i v75; // [rsp+108h] [rbp-C0h] BYREF
  void *v76; // [rsp+120h] [rbp-A8h] BYREF
  __m128i v77; // [rsp+128h] [rbp-A0h] BYREF
  __m128i v78; // [rsp+138h] [rbp-90h] BYREF
  __m128i v79; // [rsp+148h] [rbp-80h] BYREF
  char v80; // [rsp+158h] [rbp-70h] BYREF
  __m128i v81; // [rsp+160h] [rbp-68h] BYREF
  __m128i v82; // [rsp+170h] [rbp-58h] BYREF
  __m128i v83; // [rsp+180h] [rbp-48h] BYREF

  v62[0] = 0;
  v61 = 0;
  v60 = v62;
  v4 = sub_10B8FF0(a3, 0xC06u);
  if ( v4 )
  {
    v5 = **(char ***)(v4 + 48);
    v6 = j__strlen(v5);
    sub_978080(&v60, 0, v61, v5, v6);
  }
  else
  {
    sub_11097F0(&v76, a2, "amdgpu-arch");
    sub_9E6D90((__int64)&v60, &v76);
    if ( v76 != &v77.m128i_u64[1] )
      operator delete(v76);
  }
  sub_110FD80((__int64)&v58, a2, (__int64)v60, v61);
  if ( (v59 & 1) != 0 )
  {
    v7 = v58;
    *(_BYTE *)(a1 + 48) |= 1u;
    v58 = 0;
    *(_QWORD *)a1 = v7;
    goto LABEL_5;
  }
  v65 = (void **)v67;
  v66 = 0x100000000LL;
  v9 = j__strlen("\n");
  v10 = *(_QWORD *)(v58 + 8);
  v11 = *(_QWORD *)(v58 + 16);
  v75.m128i_i64[0] = (__int64)"\n";
  v73 = 0u;
  v74.m128i_i64[0] = v10;
  v74.m128i_i64[1] = v11 - v10;
  v75.m128i_i64[1] = v9;
  v12 = sub_2222D70(&v74, "\n", v9, 0);
  if ( v12 == -1 )
  {
    v12 = v74.m128i_u64[1];
    v15 = v74.m128i_i64[0];
    v14 = 0;
    v16 = 0;
  }
  else
  {
    v13 = v9 + v12;
    if ( v9 + v12 > v74.m128i_i64[1] )
    {
      v13 = v74.m128i_i64[1];
      v14 = 0;
    }
    else
    {
      v14 = v74.m128i_i64[1] - v13;
    }
    v15 = v74.m128i_i64[0];
    v16 = v74.m128i_i64[0] + v13;
    if ( v12 > v74.m128i_i64[1] )
      v12 = v74.m128i_u64[1];
  }
  v73.m128i_i64[0] = v15;
  v74.m128i_i64[0] = v16;
  v74.m128i_i64[1] = v14;
  v17 = (void **)&v70;
  v73.m128i_i64[1] = v12;
  v69 = 0u;
  v70 = 0u;
  v71.m128i_i64[0] = (__int64)"\n";
  v71.m128i_i64[1] = v9;
  v18 = sub_2222D70(&v70, "\n", v9, 0);
  if ( v18 == -1 )
  {
    v18 = v70.m128i_u64[1];
    v21 = v70.m128i_i64[0];
    v20 = 0;
    v22 = 0;
  }
  else
  {
    v19 = v18 + v9;
    if ( v19 > v70.m128i_i64[1] )
    {
      v19 = v70.m128i_u64[1];
      v20 = 0;
    }
    else
    {
      v20 = v70.m128i_i64[1] - v19;
    }
    v21 = v70.m128i_i64[0];
    v22 = v70.m128i_i64[0] + v19;
    if ( v18 > v70.m128i_i64[1] )
      v18 = v70.m128i_u64[1];
  }
  v69.m128i_i64[1] = v18;
  v23 = _mm_loadu_si128(&v73);
  v69.m128i_i64[0] = v21;
  v24 = _mm_loadu_si128(&v74);
  v70.m128i_i64[0] = v22;
  v25 = _mm_loadu_si128(&v75);
  v70.m128i_i64[1] = v20;
  LOBYTE(v76) = v72;
  v77 = v23;
  v78 = v24;
  v79 = v25;
  if ( (__int64 *)v75.m128i_i64[0] == &v72 )
  {
    v79.m128i_i64[1] = 1;
    v26 = &v76;
    v79.m128i_i64[0] = (__int64)&v76;
  }
  else
  {
    v26 = (void **)v79.m128i_i64[0];
  }
  v27 = v68;
  v28 = _mm_loadu_si128(&v69);
  v29 = _mm_loadu_si128(&v70);
  v30 = _mm_loadu_si128(&v71);
  v80 = v68;
  v81 = v28;
  v82 = v29;
  v83 = v30;
  if ( (char *)v71.m128i_i64[0] == &v68 )
  {
    v55 = _mm_loadu_si128(&v77);
    v17 = &v76;
    v83.m128i_i64[1] = 1;
    v56 = _mm_loadu_si128(&v79);
    v68 = v72;
    v69 = v55;
    v32 = &v80;
    v57 = _mm_loadu_si128(&v78);
    v83.m128i_i64[0] = (__int64)&v80;
    v70 = v57;
    v71 = v56;
    if ( v26 != &v76 )
    {
      LOBYTE(v72) = v27;
      v73 = v28;
      v74 = v29;
      goto LABEL_68;
    }
  }
  else
  {
    v31 = _mm_loadu_si128(&v77);
    v32 = (char *)v83.m128i_i64[0];
    v68 = v72;
    v33 = _mm_loadu_si128(&v78);
    v34 = _mm_loadu_si128(&v79);
    v69 = v31;
    v70 = v33;
    v71 = v34;
    if ( v26 != &v76 )
      goto LABEL_22;
  }
  v71.m128i_i64[0] = (__int64)&v68;
  v71.m128i_i64[1] = 1;
LABEL_22:
  v35 = _mm_load_si128(&v81);
  LOBYTE(v72) = v27;
  v36 = _mm_load_si128(&v83);
  v73 = v35;
  v37 = _mm_load_si128(&v82);
  v75 = v36;
  v74 = v37;
  if ( v32 == &v80 )
  {
LABEL_68:
    v75.m128i_i64[1] = 1;
    v75.m128i_i64[0] = (__int64)&v72;
  }
  v38 = (_BYTE *)v69.m128i_i64[0];
  v39 = v73.m128i_i64[0];
  for ( i = v69.m128i_u64[1]; (_BYTE *)v39 != v38; v70.m128i_i64[1] = v42 )
  {
    if ( i )
    {
      if ( v38 )
      {
        v63[0] = v64;
        sub_1148360(v63, v38, (__int64)&v38[i]);
      }
      else
      {
        v64[0] = 0;
        v63[0] = v64;
        v63[1] = nullptr;
      }
      v44 = v65;
      v45 = (__m128i *)v63;
      v46 = (unsigned int)v66 + 1LL;
      v47 = (__m128i *)&v65[4 * (unsigned int)v66];
      if ( v46 > HIDWORD(v66) )
      {
        if ( v65 > v63 || v47 <= (__m128i *)v63 )
        {
          sub_A684B0((__int64)&v65, v46);
          v45 = (__m128i *)v63;
          v47 = (__m128i *)&v65[4 * (unsigned int)v66];
        }
        else
        {
          sub_A684B0((__int64)&v65, v46);
          v45 = (__m128i *)((char *)v65 + (char *)v63 - (char *)v44);
          v47 = (__m128i *)&v65[4 * (unsigned int)v66];
        }
      }
      v47->m128i_i64[0] = (__int64)v47[1].m128i_i64;
      if ( (__m128i *)v45->m128i_i64[0] == &v45[1] )
      {
        v47[1] = _mm_loadu_si128(v45 + 1);
      }
      else
      {
        v47->m128i_i64[0] = v45->m128i_i64[0];
        v47[1].m128i_i64[0] = v45[1].m128i_i64[0];
      }
      v47->m128i_i64[1] = v45->m128i_i64[1];
      v45->m128i_i64[0] = (__int64)v45[1].m128i_i64;
      v48 = v63[0];
      v45->m128i_i64[1] = 0;
      v45[1].m128i_i8[0] = 0;
      LODWORD(v66) = v66 + 1;
      if ( v48 != v64 )
        operator delete(v48);
      v39 = v73.m128i_i64[0];
    }
    v49 = v71.m128i_i64[1];
    v17 = (void **)&v70;
    i = sub_2222D70(&v70, v71.m128i_i64[0], v71.m128i_i64[1], 0);
    if ( i == -1 )
    {
      i = v70.m128i_u64[1];
      v38 = (_BYTE *)v70.m128i_i64[0];
      v42 = 0;
      v43 = 0;
    }
    else
    {
      v41 = i + v49;
      if ( i + v49 > v70.m128i_i64[1] )
      {
        v41 = v70.m128i_i64[1];
        v42 = 0;
      }
      else
      {
        v42 = v70.m128i_i64[1] - v41;
      }
      v38 = (_BYTE *)v70.m128i_i64[0];
      v43 = v70.m128i_i64[0] + v41;
      if ( i > v70.m128i_i64[1] )
        i = v70.m128i_u64[1];
    }
    v69.m128i_i64[0] = (__int64)v38;
    v69.m128i_i64[1] = i;
    v70.m128i_i64[0] = v43;
  }
  if ( (_DWORD)v66 )
  {
    *(_BYTE *)(a1 + 48) &= ~1u;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    sub_CCC090(a1, (__int64)&v65);
  }
  else
  {
    v50 = std::_V2::system_category((std::_V2 *)v17);
    v76 = &v77.m128i_u64[1];
    v51 = j__strlen("No AMD GPU detected in the system");
    sub_1148360(&v76, "No AMD GPU detected in the system", (__int64)&aNoAmdGpuDetect[v51]);
    sub_21FC890(&v72, &v76, 0, v50);
    if ( v76 != &v77.m128i_u64[1] )
      operator delete(v76);
    v52 = v72;
    *(_BYTE *)(a1 + 48) |= 1u;
    *(_QWORD *)a1 = v52;
  }
  v53 = v65;
  v54 = &v65[4 * (unsigned int)v66];
  if ( v65 != v54 )
  {
    do
    {
      while ( 1 )
      {
        v54 -= 4;
        if ( *v54 == v54 + 2 )
          break;
        operator delete(*v54);
        if ( v53 == v54 )
          goto LABEL_54;
      }
    }
    while ( v53 != v54 );
LABEL_54:
    v54 = v65;
  }
  if ( v54 != (void **)v67 )
    free(v54);
LABEL_5:
  sub_10FA380(&v58);
  if ( v60 != v62 )
    operator delete(v60);
  return a1;
}

