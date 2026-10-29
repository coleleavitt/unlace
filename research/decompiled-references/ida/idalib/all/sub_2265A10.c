__m128i *__fastcall sub_2265A10(__m128i *a1, __int64 a2, _QWORD **a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rsi
  int v9; // eax
  _BYTE *v10; // r14
  __m128i *v11; // rsi
  __m128i *v12; // rdx
  __int32 v13; // eax
  __int64 v14; // rdx
  __int32 v17; // r12d
  __int32 v18; // r13d
  __m128i *v19; // r8
  __int32 v20; // ecx
  __int32 v21; // edx
  __int64 v22; // rax
  _BYTE *v23; // rsi
  __m128 v24; // xmm0
  __int64 v25; // rsi
  __m128i *v26; // rdi
  __m128i v27; // xmm1
  __m128i *v28; // rsi
  __int64 v29; // rsi
  void (__fastcall *v30)(void **, __int64, __m128i *); // rax
  __m128 v31; // xmm0
  __m128i v32; // xmm2
  __int64 v33; // r12
  int v34; // eax
  __int8 v35; // dl
  __m128i *v36; // rdi
  __m128i v37; // xmm3
  __m128i *v38; // rax
  __m128i v39; // [rsp+8h] [rbp-2F0h] BYREF
  __m128i *v40; // [rsp+18h] [rbp-2E0h]
  void *v41; // [rsp+20h] [rbp-2D8h] BYREF
  __m128i *v42; // [rsp+28h] [rbp-2D0h]
  __int64 v43; // [rsp+30h] [rbp-2C8h]
  unsigned int v44; // [rsp+3Ch] [rbp-2BCh]
  __int64 v45; // [rsp+40h] [rbp-2B8h]
  __int64 v46; // [rsp+48h] [rbp-2B0h]
  _QWORD *v47[4]; // [rsp+50h] [rbp-2A8h] BYREF
  __int16 v48; // [rsp+70h] [rbp-288h]
  __m128i v49; // [rsp+80h] [rbp-278h] BYREF
  __m128i v50; // [rsp+90h] [rbp-268h] BYREF
  __m128i v51; // [rsp+A0h] [rbp-258h] BYREF
  __m128i *v52; // [rsp+B0h] [rbp-248h]
  int v53; // [rsp+B8h] [rbp-240h]
  unsigned int v54; // [rsp+BCh] [rbp-23Ch]
  __int64 v55; // [rsp+C0h] [rbp-238h]
  __int64 v56; // [rsp+C8h] [rbp-230h]
  char v57; // [rsp+D0h] [rbp-228h]
  void *v58[7]; // [rsp+E0h] [rbp-218h] BYREF
  int v59; // [rsp+118h] [rbp-1E0h]
  unsigned int v60; // [rsp+11Ch] [rbp-1DCh]
  __int64 v61; // [rsp+120h] [rbp-1D8h]
  __int64 v62; // [rsp+128h] [rbp-1D0h]
  char v63; // [rsp+138h] [rbp-1C0h]
  __m128i v64; // [rsp+140h] [rbp-1B8h] BYREF
  __m128i v65; // [rsp+150h] [rbp-1A8h] BYREF
  __m128i v66; // [rsp+160h] [rbp-198h] BYREF
  __m128i *v67; // [rsp+170h] [rbp-188h]
  unsigned __int64 v68; // [rsp+178h] [rbp-180h]
  __int64 v69; // [rsp+180h] [rbp-178h]
  __int64 v70; // [rsp+188h] [rbp-170h]
  __int8 v71; // [rsp+190h] [rbp-168h]
  char v72; // [rsp+198h] [rbp-160h]
  _BYTE ptr[24]; // [rsp+1A0h] [rbp-158h] BYREF
  __int64 v74; // [rsp+1B8h] [rbp-140h] BYREF
  __m128i v75; // [rsp+1C0h] [rbp-138h] BYREF
  __m128i *v76; // [rsp+1D0h] [rbp-128h]
  __int32 v77; // [rsp+1D8h] [rbp-120h]
  __int32 v78; // [rsp+1DCh] [rbp-11Ch]
  __int64 v79; // [rsp+1E0h] [rbp-118h]
  __int32 v80; // [rsp+1E8h] [rbp-110h]
  __int32 v81; // [rsp+1ECh] [rbp-10Ch]
  char v82; // [rsp+1F0h] [rbp-108h]

  v8 = a5[34];
  v39.m128i_i64[1] = a4;
  v9 = *(_DWORD *)(v8 + 8);
  if ( v9 == 1 )
  {
    v10 = (_BYTE *)a5[35];
    v39.m128i_i64[0] = a5[36];
    if ( v10 )
      goto LABEL_4;
    goto LABEL_17;
  }
  if ( v9 == 2 )
  {
    v10 = *(_BYTE **)(v8 + 48);
    v39.m128i_i64[0] = *(_QWORD *)(v8 + 56);
    if ( v10 )
    {
LABEL_4:
      v64.m128i_i64[0] = (__int64)&v65;
      sub_2259A00(&v64, v10, (__int64)&v10[v39.m128i_i64[0]]);
      v11 = (__m128i *)v64.m128i_i64[0];
      v12 = (__m128i *)(v64.m128i_i64[0] + v64.m128i_i64[1]);
LABEL_5:
      *(_QWORD *)ptr = &v74;
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      sub_A1FE50(ptr, v11, v12);
      if ( (__m128i *)v64.m128i_i64[0] != &v65 )
        operator delete((void *)v64.m128i_i64[0]);
      v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 112LL))(a2, ptr);
      if ( v13 )
      {
        a1[5].m128i_i8[8] |= 1u;
        a1->m128i_i32[0] = v13;
        a1->m128i_i64[1] = v14;
      }
      else
      {
        v29 = *(_QWORD *)(a2 + 72);
        v40 = (__m128i *)v58;
        v30 = *(void (__fastcall **)(void **, __int64, __m128i *))(*(_QWORD *)v29 + 40LL);
        v66.m128i_i16[0] = 261;
        v64 = *(__m128i *)ptr;
        v30(v58, v29, &v64);
        if ( (v63 & 1) != 0 )
        {
          sub_225F0D0(a1, v40);
        }
        else
        {
          v47[0] = v10;
          v48 = 261;
          v46 = v62;
          v47[1] = (_QWORD *)v39.m128i_i64[0];
          v45 = v61;
          v44 = v60;
          LODWORD(v43) = v59;
          v42 = (__m128i *)v58[6];
          v41 = v58[5];
          sub_2253560(&v49, v47);
          v64.m128i_i64[0] = (__int64)&v65;
          v31 = _mm_loadh_ps((const double *)&v41);
          v52 = v42;
          v51 = (__m128i)v31;
          v53 = v43;
          v54 = v44;
          v55 = v45;
          v56 = v46;
          v57 = 0;
          v72 &= ~1u;
          if ( (__m128i *)v49.m128i_i64[0] == &v50 )
          {
            v65 = _mm_load_si128(&v50);
          }
          else
          {
            v64.m128i_i64[0] = v49.m128i_i64[0];
            v65.m128i_i64[0] = v50.m128i_i64[0];
          }
          v50.m128i_i8[0] = 0;
          v32 = _mm_load_si128(&v51);
          v68 = __PAIR64__(v44, v43);
          v64.m128i_i64[1] = v49.m128i_i64[1];
          v49.m128i_i64[0] = (__int64)&v50;
          v49.m128i_i64[1] = 0;
          v66 = v32;
          v67 = v52;
          v69 = v45;
          v70 = v46;
          v71 = 0;
          if ( (v63 & 1) == 0 && v58[0] != &v40[1] )
            operator delete(v58[0]);
          sub_225F0D0(v40, &v64);
          if ( (v72 & 1) == 0 && (__m128i *)v64.m128i_i64[0] != &v65 )
            operator delete((void *)v64.m128i_i64[0]);
          if ( (__m128i *)v49.m128i_i64[0] != &v50 )
            operator delete((void *)v49.m128i_i64[0]);
          v33 = a5[34];
          sub_225AB40(&v49, (__int64)v40);
          v34 = *(_DWORD *)(v33 + 80);
          v35 = *(_BYTE *)(a2 + 114);
          if ( v34 )
            v35 = v34 == 1;
          sub_225C1B0(&v64, (_QWORD **)v39.m128i_i64[1], v35, &v49);
          a1[5].m128i_i8[8] &= ~1u;
          a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
          if ( (__m128i *)v64.m128i_i64[0] == &v65 )
          {
            a1[1] = _mm_load_si128(&v65);
          }
          else
          {
            a1->m128i_i64[0] = v64.m128i_i64[0];
            a1[1].m128i_i64[0] = v65.m128i_i64[0];
          }
          v36 = (__m128i *)v49.m128i_i64[0];
          v37 = _mm_load_si128(&v66);
          a1->m128i_i64[1] = v64.m128i_i64[1];
          v38 = v67;
          a1[2] = v37;
          a1[3].m128i_i64[0] = (__int64)v38;
          a1[3].m128i_i64[1] = v68;
          a1[4].m128i_i64[0] = v69;
          a1[4].m128i_i64[1] = v70;
          a1[5].m128i_i8[0] = v71;
          if ( v36 != &v50 )
            operator delete(v36);
        }
        if ( (v63 & 1) == 0 && v58[0] != &v40[1] )
          operator delete(v58[0]);
      }
      if ( *(__int64 **)ptr != &v74 )
        free(*(void **)ptr);
      return a1;
    }
LABEL_17:
    v65.m128i_i8[0] = 0;
    v64.m128i_i64[1] = 0;
    v12 = &v65;
    v64.m128i_i64[0] = (__int64)&v65;
    v11 = &v65;
    goto LABEL_5;
  }
  sub_225AB40(&v64, v8 + 72);
  v43 = v69;
  v17 = HIDWORD(v70);
  v18 = v70;
  LODWORD(v42) = HIDWORD(v68);
  v39 = v66;
  LODWORD(v41) = v68;
  v40 = v67;
  sub_2253560(ptr, a3);
  v19 = v40;
  v20 = (int)v41;
  v21 = (int)v42;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  v22 = v43;
  v23 = *(_BYTE **)ptr;
  v24 = _mm_loadh_ps((const double *)&v39.m128i_i64[1]);
  v76 = v19;
  v75 = (__m128i)v24;
  v77 = v20;
  v78 = v21;
  v79 = v43;
  v80 = v18;
  v81 = v17;
  v82 = 0;
  a1[5].m128i_i8[8] &= ~1u;
  if ( v23 == &ptr[16] )
  {
    a1[1] = _mm_load_si128((const __m128i *)&ptr[16]);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v23;
    a1[1].m128i_i64[0] = *(_QWORD *)&ptr[16];
  }
  v25 = *(_QWORD *)&ptr[8];
  v26 = (__m128i *)v64.m128i_i64[0];
  a1[3].m128i_i32[2] = v20;
  v27 = _mm_load_si128(&v75);
  a1[3].m128i_i32[3] = v21;
  a1->m128i_i64[1] = v25;
  v28 = v76;
  a1[2] = v27;
  a1[3].m128i_i64[0] = (__int64)v28;
  a1[4].m128i_i64[0] = v22;
  a1[4].m128i_i32[2] = v18;
  a1[4].m128i_i32[3] = v17;
  a1[5].m128i_i8[0] = 0;
  if ( v26 != &v65 )
    operator delete(v26);
  return a1;
}
