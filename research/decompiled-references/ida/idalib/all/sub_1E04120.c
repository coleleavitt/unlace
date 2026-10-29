__int64 __fastcall sub_1E04120(__int64 a1, __int64 *a2, unsigned int *a3, unsigned int a4, int a5)
{
  unsigned int *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  char *v19; // rdx
  const __m128i *v20; // r14
  __m128i *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  _QWORD *v25; // r14
  _QWORD *v26; // r13
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rax
  _QWORD *v29; // r15
  _QWORD *v30; // rbp
  _QWORD *v31; // rdi
  void *v32; // rdi
  void **v33; // rbp
  void **v34; // r15
  __int64 v36; // rdx
  __int64 v37; // [rsp+8h] [rbp-350h]
  __int64 v38; // [rsp+10h] [rbp-348h]
  _BYTE *v39; // [rsp+18h] [rbp-340h]
  __int64 v40; // [rsp+20h] [rbp-338h]
  __int64 v41; // [rsp+30h] [rbp-328h]
  int v42; // [rsp+38h] [rbp-320h]
  int v43; // [rsp+3Ch] [rbp-31Ch]
  _BYTE v44[16]; // [rsp+40h] [rbp-318h] BYREF
  _QWORD v45[7]; // [rsp+50h] [rbp-308h] BYREF
  __int64 v46; // [rsp+88h] [rbp-2D0h]
  void *ptr; // [rsp+A0h] [rbp-2B8h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-2B0h]
  _DWORD v49[25]; // [rsp+B0h] [rbp-2A8h] BYREF
  char v50; // [rsp+114h] [rbp-244h]
  __int128 v51; // [rsp+120h] [rbp-238h] BYREF
  unsigned int v52; // [rsp+130h] [rbp-228h]
  __int16 v53; // [rsp+134h] [rbp-224h]
  __int64 v54; // [rsp+138h] [rbp-220h]
  _QWORD *v55; // [rsp+140h] [rbp-218h]
  __int64 v56; // [rsp+148h] [rbp-210h]
  _QWORD v57[17]; // [rsp+150h] [rbp-208h] BYREF
  __int64 v58; // [rsp+1D8h] [rbp-180h]
  __int64 v59; // [rsp+1E0h] [rbp-178h]
  __int64 v60; // [rsp+1F0h] [rbp-168h]
  __int64 v61; // [rsp+1F8h] [rbp-160h]
  int v62; // [rsp+208h] [rbp-150h]
  char v63; // [rsp+20Ch] [rbp-14Ch]
  void *v64; // [rsp+210h] [rbp-148h]
  __int64 v65; // [rsp+218h] [rbp-140h]
  _QWORD v66[10]; // [rsp+220h] [rbp-138h] BYREF
  void *v67; // [rsp+270h] [rbp-E8h]
  __int64 v68; // [rsp+278h] [rbp-E0h]
  _WORD v69[52]; // [rsp+280h] [rbp-D8h] BYREF
  void *v70; // [rsp+2E8h] [rbp-70h]
  __int64 v71; // [rsp+2F0h] [rbp-68h]
  _BYTE v72[96]; // [rsp+2F8h] [rbp-60h] BYREF

  v6 = a3 + 2;
  v7 = a2[6];
  v52 = a4;
  v58 &= 0xFFFFFFFE00000000LL;
  v60 &= 0xFFFFFFFE00000000LL;
  v64 = v66;
  v53 = 0;
  v67 = v69;
  v55 = v57;
  v69[48] = 0;
  v65 = 0x800000000LL;
  v70 = v72;
  v51 = 0;
  v54 = 0;
  v56 = 0x400000000LL;
  v57[16] = 0;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v66[8] = 0;
  v66[9] = 0;
  v68 = 0x400000000LL;
  v71 = 0x400000000LL;
  sub_1DC39D0((__int64)v44, a1, a4, (__int64)a2, (__int64)(a3 + 2), *a3, a5, (__int64)&v51, 0);
  if ( v44[8] )
  {
    v37 = 0;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 544);
    v9 = 0;
    if ( v7 )
      v9 = v7 + 72;
    v10 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 9944) = 0;
    v38 = v8;
    v11 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 544) = v9;
    v41 = v11;
    LODWORD(v11) = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
    v12 = *(_DWORD *)(a1 + 3688);
    v42 = v11;
    LODWORD(v11) = *(_DWORD *)(a1 + 2632);
    *(_QWORD *)(a1 + 512) = 0;
    v43 = v11;
    *(_DWORD *)(a1 + 2632) = v12;
    v13 = *a3;
    v48 = 0x400000000LL;
    v14 = *a2;
    v46 = v10;
    v40 = v13;
    ptr = v49;
    v49[24] = 0;
    v50 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64 *))(v14 + 32))(a2);
    v16 = (unsigned int)v48;
    v45[1] = v6;
    v17 = v7 + 72;
    v45[0] = v15 & 0xFFFFFFFFFFFFFFFBLL;
    v45[2] = v40;
    v18 = (unsigned int)v48 + 1LL;
    if ( v18 > HIDWORD(v48) )
    {
      v20 = (const __m128i *)v45;
      if ( ptr > v45 || v45 >= (_QWORD *)((char *)ptr + 24 * (unsigned int)v48) )
      {
        sub_2237220(&ptr, v49, v18, 24);
        v19 = (char *)ptr;
        v17 = v7 + 72;
        v16 = (unsigned int)v48;
      }
      else
      {
        v39 = ptr;
        sub_2237220(&ptr, v49, v18, 24);
        v17 = v7 + 72;
        v19 = (char *)ptr;
        v16 = (unsigned int)v48;
        v20 = (const __m128i *)((char *)ptr + (char *)v45 - v39);
      }
    }
    else
    {
      v19 = (char *)ptr;
      v20 = (const __m128i *)v45;
    }
    v21 = (__m128i *)&v19[24 * v16];
    *v21 = _mm_loadu_si128(v20);
    v22 = v20[1].m128i_i64[0];
    LODWORD(v48) = v48 + 1;
    v21[1].m128i_i64[0] = v22;
    v23 = *(_QWORD *)(sub_B8C1B0(v17) + 16);
    if ( (v23 & 4) != 0 )
      v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    v37 = sub_1E02D80(a1, v7, v24, (__int64)&ptr);
    if ( ptr != v49 )
      free(ptr);
    if ( v38 )
    {
      *(_QWORD *)(a1 + 544) = v38;
      *(_QWORD *)(a1 + 512) = v41;
      *(_QWORD *)(a1 + 9944) = v46;
      *(_DWORD *)(a1 + 80) = v42;
      *(_DWORD *)(a1 + 2632) = v43;
    }
  }
  sub_1DBADA0(v44);
  if ( v70 != v72 )
    free(v70);
  if ( v67 != v69 )
    free(v67);
  if ( v64 != v66 )
    free(v64);
  v25 = v55;
  v26 = &v55[4 * (unsigned int)v56];
  if ( v55 != v26 )
  {
    do
    {
      v26 -= 4;
      v27 = v26[1];
      if ( v27 )
      {
        v28 = v26[2];
        if ( v28 )
        {
          if ( v27 < v28 || v27 > v28 + 14848 )
          {
            v29 = *(_QWORD **)(v27 + 528);
            v30 = &v29[8 * (unsigned __int64)*(unsigned int *)(v27 + 536)];
            if ( v29 != v30 )
            {
              do
              {
                while ( 1 )
                {
                  v30 -= 8;
                  v31 = (_QWORD *)v30[3];
                  if ( v31 == v30 + 5 )
                    break;
                  operator delete(v31);
                  if ( v29 == v30 )
                    goto LABEL_25;
                }
              }
              while ( v29 != v30 );
LABEL_25:
              v30 = *(_QWORD **)(v27 + 528);
            }
            if ( v30 != (_QWORD *)(v27 + 544) )
              free(v30);
            v32 = *(void **)(v27 + 416);
            v33 = (void **)(v27 + 416);
            if ( v32 != (void *)(v27 + 432) )
              free(v32);
            v34 = (void **)(v27 + 96);
            do
            {
              while ( 1 )
              {
                v33 -= 4;
                if ( *v33 == v33 + 2 )
                  break;
                operator delete(*v33);
                if ( v33 == v34 )
                  goto LABEL_33;
              }
            }
            while ( v33 != v34 );
LABEL_33:
            operator delete((void *)v27, 0x3A0u);
          }
          else
          {
            v36 = *(unsigned int *)(v28 + 14976);
            *(_DWORD *)(v28 + 14976) = v36 + 1;
            *(_QWORD *)(v28 + 8 * v36 + 14848) = v27;
          }
        }
      }
    }
    while ( v25 != v26 );
    v26 = v55;
  }
  if ( v26 != v57 )
    free(v26);
  return v37;
}
