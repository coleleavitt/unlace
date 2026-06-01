__int64 __fastcall sub_6E8FE0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rcx
  unsigned int *v12; // rax
  __int64 v13; // r13
  int v14; // edx
  unsigned int v15; // r14d
  __int64 v16; // r13
  __int64 v17; // rdi
  unsigned int *v18; // r12
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // r12
  _QWORD *v24; // rax
  unsigned int *v25; // r14
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbx
  int v32; // edx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // r12
  __m128i v45; // xmm0
  __m128 v46; // xmm1
  _DWORD *v47; // rcx
  int v48; // ecx
  __int64 v49; // rsi
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 i; // rsi
  __int64 v53; // rdx
  __int64 v54; // [rsp+18h] [rbp-1C0h]
  __int64 v55; // [rsp+28h] [rbp-1B0h]
  __int64 v56; // [rsp+48h] [rbp-190h]
  __int64 v57; // [rsp+50h] [rbp-188h]
  __int64 v58; // [rsp+60h] [rbp-178h]
  unsigned int v59; // [rsp+74h] [rbp-164h] BYREF
  __int64 v60; // [rsp+78h] [rbp-160h] BYREF
  unsigned int *v61; // [rsp+80h] [rbp-158h] BYREF
  __int64 v62[2]; // [rsp+88h] [rbp-150h] BYREF
  __int64 v63; // [rsp+98h] [rbp-140h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-138h]
  __m128i v65; // [rsp+A8h] [rbp-130h] BYREF
  __m128i v66; // [rsp+B8h] [rbp-120h] BYREF
  __m128i v67; // [rsp+C8h] [rbp-110h] BYREF
  __m128i v68; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v69; // [rsp+E8h] [rbp-F0h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-E8h]
  __int64 v71; // [rsp+F8h] [rbp-E0h] BYREF
  unsigned int *v72; // [rsp+100h] [rbp-D8h] BYREF
  _QWORD v73[4]; // [rsp+108h] [rbp-D0h] BYREF
  _QWORD v74[4]; // [rsp+128h] [rbp-B0h] BYREF
  _QWORD v75[4]; // [rsp+148h] [rbp-90h] BYREF
  _QWORD v76[4]; // [rsp+168h] [rbp-70h] BYREF
  _OWORD v77[5]; // [rsp+188h] [rbp-50h] BYREF

  v9 = *a1;
  v73[2] = a5;
  v57 = v9;
  v62[0] = v9;
  v63 = v9;
  v65.m128i_i64[1] = v9;
  v66.m128i_i64[1] = v9;
  v67.m128i_i64[1] = v9;
  v68.m128i_i64[1] = v9;
  v73[0] = off_1C53298;
  v62[1] = 0;
  v64 = 0;
  v65.m128i_i64[0] = 0;
  v66.m128i_i64[0] = 0;
  v67.m128i_i64[0] = 0;
  v68.m128i_i64[0] = 0;
  v73[1] = a1;
  v74[1] = a1;
  v74[0] = off_1C53298;
  v70 = v9;
  v74[2] = a6;
  v69 = 0;
  sub_6E5B50(a1, a3, a4, v62, &v63, &v69, &v59);
  v10 = 0;
  v11 = v64;
  v72 = nullptr;
  v58 = v69;
  v56 = v70;
  v71 = v63;
  v12 = nullptr;
  if ( v64 )
  {
    if ( *(_DWORD *)(v64 - 4) )
    {
      do
      {
        v13 = *(_QWORD *)(v11 + 8LL * v10);
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        if ( !v12 || (v14 = *(v12 - 1), v14 == *(v12 - 2)) )
        {
          sub_3A6B20(&v72);
          v12 = v72;
          v11 = v64;
          v32 = *(v72 - 1);
          *(_QWORD *)&v72[2 * v32] = v13;
          *(v12 - 1) = v32 + 1;
          if ( !v11 )
            goto LABEL_10;
        }
        else
        {
          *(_QWORD *)&v12[2 * v14] = v13;
          *(v12 - 1) = v14 + 1;
        }
        ++v10;
      }
      while ( v10 < *(_DWORD *)(v11 - 4) );
    }
    if ( v12 )
    {
LABEL_10:
      v15 = 0;
      do
      {
        if ( v15 >= *(v12 - 1) )
          break;
        v16 = sub_6E0F30((__int64)a1);
        v12 = v72;
        v17 = v71;
        v18 = &v72[2 * v15];
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v19 = *(_QWORD *)v18;
        if ( *(_QWORD *)v18 )
        {
          if ( (*(_DWORD *)(v19 + 8))-- == 1 )
          {
            sub_15D7BC0(v17, v19);
            v12 = v72;
          }
        }
        *(_QWORD *)v18 = v16;
        ++v15;
      }
      while ( v12 );
    }
  }
  v21 = sub_6E0F30((__int64)a1);
  v22 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v75[1] = a1;
  v75[0] = off_1C53318;
  v75[2] = v73;
  v76[0] = off_1C53358;
  v76[1] = a1;
  v76[2] = v74;
  if ( (v59 & 1) != 0 )
  {
    sub_6E7B10((__int64)v75, (__int64)&v63, &v65);
    sub_6E7B10((__int64)v75, (__int64)&v71, &v66);
    v33 = *a1;
    sub_6E1010((__int64)a1, v22);
    v34 = sub_15E1B70(v33);
    v35 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    sub_6DE2A0(v65.m128i_i64[0], v65.m128i_i64[1]);
    v65.m128i_i64[0] = v35;
    v36 = *a1;
    sub_6E1010((__int64)a1, v58);
    v37 = sub_15E1B70(v36);
    v38 = v37;
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    sub_6DE2A0(v66.m128i_i64[0], v66.m128i_i64[1]);
    v66.m128i_i64[0] = v38;
    sub_6E8470((__int64)v76, (unsigned __int64 *)&v71, 1u, &v67);
    sub_6E8470((__int64)v76, (unsigned __int64 *)&v71, 1u, &v68);
    v39 = *a1;
    sub_6E1010((__int64)a1, v22);
    v40 = sub_15E1B70(v39);
    v41 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    sub_6DE2A0(v67.m128i_i64[0], v67.m128i_i64[1]);
    v67.m128i_i64[0] = v41;
    v42 = *a1;
    sub_6E1010((__int64)a1, v58);
    v43 = sub_15E1B70(v42);
    v44 = v43;
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    sub_6DE2A0(v68.m128i_i64[0], v68.m128i_i64[1]);
    v45 = _mm_loadl_epi64(&v67);
    v68.m128i_i64[0] = v44;
    v46 = _mm_loadh_ps((const double *)v66.m128i_i64);
    v77[1] = _mm_unpacklo_epi64(v45, (__m128i)(unsigned __int64)v44);
    v77[0] = v46;
    v23 = sub_6E3580(a1, 4, v77);
    if ( v23 )
      goto LABEL_22;
  }
  else
  {
    sub_6E7B10((__int64)v75, (__int64)&v63, &v65);
    sub_6E8470((__int64)v76, (unsigned __int64 *)&v63, 1u, &v66);
    v77[0] = _mm_loadh_ps((const double *)v66.m128i_i64);
    v23 = sub_6E3580(a1, 2, v77);
    if ( v23 )
LABEL_22:
      ++*(_DWORD *)(v23 + 8);
  }
  v24 = (_QWORD *)sub_186B270(0x18u);
  v24[1] = v23;
  v25 = (unsigned int *)(v24 + 1);
  *v24 = 0x100000002LL;
  v26 = 1;
  do
  {
    v27 = (unsigned int)(v26 - 1);
    v28 = *(_QWORD *)&v25[2 * v27];
    *(v25 - 1) = v27;
    if ( !*(_WORD *)(v28 + 4)
      && (v47 = *(_DWORD **)(*(_QWORD *)(v28 + 16) + 24LL)) != nullptr
      && !*v47
      && ((v48 = v47[1], v48 == 5) || v48 == 6) )
    {
      v49 = *(unsigned int *)(v28 + 24);
      if ( (_DWORD)v49 )
      {
        v50 = v28 + 8 * v49;
        v51 = v28;
        for ( i = *(_QWORD *)(v28 + 32); ; i = *(_QWORD *)(v51 + 32) )
        {
          if ( (_DWORD)v27 == *(v25 - 2) )
          {
            v54 = v51;
            v55 = v50;
            v61 = v25;
            sub_3A6B20(&v61);
            v25 = v61;
            v51 = v54;
            v50 = v55;
            LODWORD(v27) = *(v61 - 1);
          }
          v53 = (unsigned int)v27;
          v51 += 8;
          LODWORD(v27) = v27 + 1;
          *(_QWORD *)&v25[2 * v53] = i;
          *(v25 - 1) = v27;
          if ( v50 == v51 )
            break;
        }
      }
    }
    else
    {
      *(_QWORD *)&v77[0] = v28;
      ++*(_DWORD *)(v28 + 8);
      sub_6DE970((unsigned int **)(a8 + 8), v77);
    }
    v26 = *(v25 - 1);
  }
  while ( v26 );
  sub_186B220(v25 - 2);
  v29 = sub_15E1B70(*a1);
  v30 = v29;
  if ( v29 )
  {
    ++*(_DWORD *)(v29 + 8);
    sub_6DE2A0(v23, v57);
    ++*(_DWORD *)(v30 + 8);
    v60 = v30;
  }
  else
  {
    sub_6DE2A0(v23, v57);
    v60 = 0;
  }
  sub_6DE920((unsigned int **)(a7 + 8), &v60);
  sub_2B4F40(&v71);
  sub_6DE2A0(v22, v57);
  sub_6DE2A0(v58, v56);
  sub_6DE2A0(v68.m128i_i64[0], v68.m128i_i64[1]);
  sub_6DE2A0(v67.m128i_i64[0], v67.m128i_i64[1]);
  sub_6DE2A0(v66.m128i_i64[0], v66.m128i_i64[1]);
  sub_6DE2A0(v65.m128i_i64[0], v65.m128i_i64[1]);
  sub_6DE2A0(v30, v57);
  sub_2B4F40(&v63);
  return sub_2B4F40(v62);
}

