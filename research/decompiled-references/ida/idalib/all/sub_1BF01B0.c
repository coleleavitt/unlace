void __fastcall sub_1BF01B0(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int16 a10,
        __int64 a11,
        unsigned __int64 a12,
        unsigned __int8 a13,
        unsigned __int8 a14,
        char a15)
{
  unsigned int v17; // eax
  char v18; // r15
  _QWORD *v19; // rax
  int v20; // eax
  _QWORD *v21; // r13
  _QWORD *v22; // rbp
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  _QWORD *v25; // r15
  _QWORD *v26; // rbx
  _QWORD *v27; // rdi
  void *v28; // rdi
  void **v29; // rbx
  void **v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  __m128i *v34; // rbp
  char v35; // cl
  unsigned int v36; // edx
  char v37; // al
  __int8 v38; // al
  bool v39; // al
  int v40; // r8d
  bool v41; // bl
  __int32 v42; // eax
  unsigned int v43; // eax
  char v44; // al
  _QWORD *v45; // [rsp+0h] [rbp-308h]
  int v46; // [rsp+Ch] [rbp-2FCh]
  __m128i v47; // [rsp+10h] [rbp-2F8h] BYREF
  __m128i v48; // [rsp+20h] [rbp-2E8h] BYREF
  __m128i v49; // [rsp+30h] [rbp-2D8h] BYREF
  char v50; // [rsp+48h] [rbp-2C0h] BYREF
  unsigned __int8 v51; // [rsp+4Ch] [rbp-2BCh] BYREF
  __int64 v52; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-2B0h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-2A0h] BYREF
  __int64 v55; // [rsp+70h] [rbp-298h] BYREF
  __int64 v56; // [rsp+78h] [rbp-290h]
  _QWORD v57[10]; // [rsp+80h] [rbp-288h] BYREF
  __int128 v58; // [rsp+D0h] [rbp-238h] BYREF
  unsigned int v59; // [rsp+E0h] [rbp-228h]
  __int16 v60; // [rsp+E4h] [rbp-224h]
  __int64 v61; // [rsp+E8h] [rbp-220h]
  _QWORD *v62; // [rsp+F0h] [rbp-218h]
  __int64 v63; // [rsp+F8h] [rbp-210h]
  _QWORD v64[17]; // [rsp+100h] [rbp-208h] BYREF
  __int64 v65; // [rsp+188h] [rbp-180h]
  __int64 v66; // [rsp+190h] [rbp-178h]
  __int64 v67; // [rsp+1A0h] [rbp-168h]
  __int64 v68; // [rsp+1A8h] [rbp-160h]
  int v69; // [rsp+1B8h] [rbp-150h]
  char v70; // [rsp+1BCh] [rbp-14Ch]
  void *v71; // [rsp+1C0h] [rbp-148h]
  __int64 v72; // [rsp+1C8h] [rbp-140h]
  _QWORD v73[10]; // [rsp+1D0h] [rbp-138h] BYREF
  void *v74; // [rsp+220h] [rbp-E8h]
  __int64 v75; // [rsp+228h] [rbp-E0h]
  _WORD v76[52]; // [rsp+230h] [rbp-D8h] BYREF
  void *ptr; // [rsp+298h] [rbp-70h]
  __int64 v78; // [rsp+2A0h] [rbp-68h]
  _BYTE v79[96]; // [rsp+2A8h] [rbp-60h] BYREF

  v53 = a3;
  v65 &= 0xFFFFFFFE00000000LL;
  v51 = a13;
  v67 &= 0xFFFFFFFE00000000LL;
  v50 = a15;
  v17 = a2[742];
  v71 = v73;
  v59 = v17;
  v60 = 0;
  v62 = v64;
  v63 = 0x400000000LL;
  v52 = a5;
  v58 = 0;
  v61 = 0;
  v64[16] = 0;
  v66 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v72 = 0x800000000LL;
  v73[8] = 0;
  v73[9] = 0;
  v18 = a14;
  v74 = v76;
  v76[48] = 0;
  v75 = 0x400000000LL;
  ptr = v79;
  v78 = 0x400000000LL;
  v19 = *(_QWORD **)(a3 + 48);
  v54 = 0;
  v45 = v19;
  v57[1] = &v53;
  v57[2] = &a11;
  v57[4] = &v55;
  v57[5] = &v51;
  v57[6] = &v52;
  v57[7] = &a9;
  v57[8] = &a10;
  v57[9] = &v50;
  v55 = 0;
  v56 = 0;
  v57[0] = a1;
  v57[3] = a2;
  v20 = sub_1D78190(
          a1,
          a3,
          a6,
          a11,
          a12,
          (unsigned int)&v54,
          (__int64)&v58,
          a14,
          0,
          0,
          a9,
          a10,
          a2[743] == 4,
          sub_1BEF960,
          v57);
  if ( v20 )
  {
    v46 = v20;
    v32 = sub_1BD9C70((__int64)a2, v56, v55, v56);
    v33 = (__int64)v45;
    *(_BYTE *)(v32 + 104) &= ~1u;
    v34 = (__m128i *)v32;
    *(_QWORD *)v32 = v45;
    v35 = v50;
    *(_QWORD *)(v32 + 8) = a4;
    v36 = a2[744];
    v37 = 0;
    if ( v36 )
    {
      v33 = v45[5];
      v37 = 1;
      if ( (v33 & 7) == 6 )
      {
        v33 &= 0xFFFFFFFFFFFFFFF8LL;
        v37 = *(_DWORD *)v33 != v36;
      }
    }
    if ( v35 == 1 )
      v37 |= 2u;
    v34[6].m128i_i8[9] = v34[6].m128i_i8[9] & 0xFC | v37 & 3;
    v38 = v34[6].m128i_i8[8];
    v34[6].m128i_i8[8] = v38 & 0xFB;
    v34[6].m128i_i8[8] = (16 * (a2[743] == 4)) | v38 & 0xEB;
    v39 = sub_B979F0(v45);
    v40 = v46;
    v41 = v39;
    if ( !v39 )
    {
      v44 = sub_B981D0(v45, v33);
      v40 = v46;
      if ( !v44 )
        v41 = (a9 & 0xFFFFFFFFFFFFFFF0LL) == 0;
    }
    v42 = a12;
    v34[6].m128i_i8[8] = v34[6].m128i_i8[8] & 0xF7 | (8 * v41);
    v34[6].m128i_i32[3] = v42;
    v43 = v34[6].m128i_i32[2] & 0xFFFC03FF;
    if ( v40 == 14 )
    {
      BYTE1(v43) |= 8u;
      v34[6].m128i_i32[2] = v43;
    }
    else
    {
      BYTE1(v43) |= 0xCu;
      v34[6].m128i_i32[2] = v43;
      sub_1BD97A0((__int64)&v47, *(_QWORD *)(a1 + 248), v40, (__int64 *)&v58);
      v34[7] = _mm_loadu_si128(&v47);
      v34[8] = _mm_loadu_si128(&v48);
      v34[9] = _mm_loadu_si128(&v49);
    }
    sub_19A2E00((__int64)&v58);
  }
  else
  {
    sub_1BEF9D0(a1, v54, a4, v52, a9, a10, (__m128)0LL, a8, a11, a12, a2, v51, v18, v55, v56, v50, SHIBYTE(v60));
    if ( ptr != v79 )
      free(ptr);
    if ( v74 != v76 )
      free(v74);
    if ( v71 != v73 )
      free(v71);
    v21 = v62;
    v22 = &v62[4 * (unsigned int)v63];
    if ( v62 != v22 )
    {
      do
      {
        v22 -= 4;
        v23 = v22[1];
        if ( v23 )
        {
          v24 = v22[2];
          if ( v24 )
          {
            if ( v23 < v24 || v23 > v24 + 14848 )
            {
              v25 = *(_QWORD **)(v23 + 528);
              v26 = &v25[8 * (unsigned __int64)*(unsigned int *)(v23 + 536)];
              if ( v25 != v26 )
              {
                do
                {
                  while ( 1 )
                  {
                    v26 -= 8;
                    v27 = (_QWORD *)v26[3];
                    if ( v27 == v26 + 5 )
                      break;
                    operator delete(v27);
                    if ( v25 == v26 )
                      goto LABEL_15;
                  }
                }
                while ( v25 != v26 );
LABEL_15:
                v26 = *(_QWORD **)(v23 + 528);
              }
              if ( v26 != (_QWORD *)(v23 + 544) )
                free(v26);
              v28 = *(void **)(v23 + 416);
              if ( v28 != (void *)(v23 + 432) )
                free(v28);
              v29 = (void **)(v23 + 384);
              v30 = (void **)(v23 + 64);
              do
              {
                while ( *v29 != v29 + 2 )
                {
                  operator delete(*v29);
                  v29 -= 4;
                  if ( v30 == v29 )
                    goto LABEL_23;
                }
                v29 -= 4;
              }
              while ( v29 != v30 );
LABEL_23:
              operator delete((void *)v23, 0x3A0u);
            }
            else
            {
              v31 = *(unsigned int *)(v24 + 14976);
              *(_DWORD *)(v24 + 14976) = v31 + 1;
              *(_QWORD *)(v24 + 8 * v31 + 14848) = v23;
            }
          }
        }
      }
      while ( v21 != v22 );
      v22 = v62;
    }
    if ( v22 != v64 )
      free(v22);
  }
}
