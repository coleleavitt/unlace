unsigned __int64 __fastcall sub_1995BF0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v6; // rcx
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  __int64 (*v11)(void); // rax
  int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rbp
  __int64 *v19; // r15
  unsigned __int64 v20; // rbp
  char *v22; // r8
  __int64 v23; // rax
  __int64 v24; // r9
  int **v25; // rbp
  __int64 v26; // rax
  _QWORD *v27; // rax
  int *v28; // r15
  int v29; // edx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  __int64 v41; // rcx
  _BOOL8 v42; // rdx
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  char *v45; // rbp
  char *v46; // r15
  __int64 v47; // rax
  char v48; // [rsp+0h] [rbp-1A8h]
  int **v49; // [rsp+0h] [rbp-1A8h]
  __int64 v50; // [rsp+20h] [rbp-188h]
  __int64 v51; // [rsp+28h] [rbp-180h]
  __int64 v52; // [rsp+30h] [rbp-178h]
  int v53; // [rsp+38h] [rbp-170h]
  int v54; // [rsp+3Ch] [rbp-16Ch]
  __int64 v55; // [rsp+40h] [rbp-168h]
  unsigned __int64 v56; // [rsp+58h] [rbp-150h]
  unsigned __int64 v57; // [rsp+60h] [rbp-148h]
  __int64 v58; // [rsp+68h] [rbp-140h]
  __int128 v59; // [rsp+70h] [rbp-138h] BYREF
  __int64 v60; // [rsp+98h] [rbp-110h]
  void *src; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-F0h]
  _BYTE v63[32]; // [rsp+C0h] [rbp-E8h] BYREF
  void *v64[2]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v65[32]; // [rsp+F0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __m128i v67; // [rsp+118h] [rbp-90h]
  _BYTE v68[24]; // [rsp+128h] [rbp-80h] BYREF
  void *v69; // [rsp+140h] [rbp-68h] BYREF
  __int64 v70; // [rsp+148h] [rbp-60h]
  _BYTE v71[88]; // [rsp+150h] [rbp-58h] BYREF

  v6 = *a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v68[16] = 0;
  src = v63;
  v62 = 0x400000000LL;
  v64[1] = (void *)0x400000000LL;
  ptr = v68;
  v8 = *(unsigned int *)(v6 + 4624);
  v64[0] = v65;
  v50 = v6;
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 4616) + 640 * v8 - 520);
  v67 = si128;
  sub_18C74E0(v6, 0, v9, 4);
  v10 = *(_DWORD **)(a2 + 24);
  v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 16LL);
  if ( (char *)v11 == (char *)sub_B70840 )
    v12 = v10[6];
  else
    v12 = v11();
  v13 = sub_B978D0(*(_QWORD **)(*a1 + 248), *(_QWORD *)(*a1 + 544), v12);
  v14 = *a1;
  v55 = (__int64)v13;
  v15 = (__int64)(v13 + 5);
  if ( !v13 )
    v15 = 0;
  v51 = *(_QWORD *)(v14 + 544);
  v16 = *(_QWORD *)(v14 + 512);
  *(_QWORD *)(v14 + 544) = v15;
  v52 = v16;
  v17 = *(_QWORD *)(v14 + 9944);
  *(_QWORD *)(v14 + 512) = 0;
  v60 = v17;
  v53 = *(_DWORD *)(v14 + 80);
  v54 = *(_DWORD *)(v14 + 2632);
  *(_DWORD *)(v14 + 80) = *(_DWORD *)(v14 + 40);
  *(_DWORD *)(v14 + 2632) = *(_DWORD *)(v14 + 3688);
  v48 = sub_1995580(
          a1,
          (__int64 *)(a2 + 48),
          *(_DWORD *)(a2 + 16),
          0,
          0,
          (__int64)v64,
          (__m128)si128,
          a4,
          (__int64)&src,
          (__int64)&ptr);
  v18 = (__int64 *)((char *)src + 8 * (unsigned int)v62);
  v19 = (__int64 *)src;
  if ( src != v18 )
  {
    do
    {
      if ( *v19 )
        sub_B8C080(*v19, v15);
      ++v19;
    }
    while ( v18 != v19 );
  }
  v20 = 1;
  if ( v48 )
    goto LABEL_10;
  v22 = v71;
  v70 = 0x400000000LL;
  v23 = *(unsigned int *)(a2 + 16);
  v69 = v71;
  v24 = a2 + 8 * v23 + 48;
  v49 = (int **)(v24 + 8LL * *(unsigned int *)(a2 + 20));
  if ( (int **)v24 != v49 )
  {
    v25 = (int **)(a2 + 8 * v23 + 48);
    v26 = 0;
    while ( 1 )
    {
      v28 = *v25;
      v29 = **v25;
      if ( v29 )
      {
        if ( (unsigned int)(v29 - 1) <= 1 )
        {
          v30 = 2;
          v31 = *((_QWORD *)v28 + 1) & 0xFFFFFFFFFFFFFFFCLL;
          v32 = v31;
          if ( v28[10] != 1 )
          {
            v31 = sub_190CCA0(
                    a1,
                    (unsigned __int16 *)(*((_QWORD *)v28 + 1) & 0xFFFFFFFFFFFFFFFCLL),
                    *(double *)si128.m128i_i64,
                    a4);
            if ( v31 == 1 )
              goto LABEL_51;
            if ( v31 )
            {
              v36 = *(_QWORD *)(*(_QWORD *)((v31 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v36 + 16) == 13
                && (v37 = *(unsigned __int16 *)(v36 + 18),
                    LOWORD(v37) = ((unsigned __int16)v37 >> 3) & 0x1FF,
                    (unsigned __int16)v37 > 0x1F1u) )
              {
                v38 = sub_1907C70(*a1, (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFELL), si128, a4, v37, v33, v34, v35);
                if ( v38 == 1 )
                  goto LABEL_51;
                v31 = v38 & 0xFFFFFFFFFFFFFFFCLL;
                v30 = 0;
                v32 = v31;
              }
              else
              {
                v31 &= 0xFFFFFFFFFFFFFFFCLL;
                v32 = v31;
                v30 = v31 & 2;
              }
            }
            else
            {
              v32 = 0;
              v30 = 0;
            }
          }
          v39 = *((_QWORD *)v28 + 3);
          si128 = 0;
          v59 = 0;
          v40 = v39 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v39 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (v39 & 4) != 0 )
            {
              BYTE8(v59) = 1;
              *(_QWORD *)&v59 = v40 | 4;
            }
            else
            {
              v58 = v30;
              v57 = v32;
              v56 = v31;
              sub_A55640((unsigned __int64 *)&v59, v40);
              BYTE8(v59) = 1;
              v30 = v58;
              v32 = v57;
              v31 = v56;
            }
          }
          else
          {
            *(_QWORD *)&v59 = 0;
            BYTE8(v59) = 1;
          }
          v41 = (unsigned int)v28[4];
          v42 = *v28 == 1;
          v43 = *a1;
          if ( v30 || !v31 )
            v28 = (int *)sub_19A4FC0(v43, v32, v42, v41, v59);
          else
            v28 = (int *)sub_19A54F0(v43, v32, v42, v41, v59);
          goto LABEL_24;
        }
        if ( !*((_BYTE *)v28 + 24) )
        {
          v44 = sub_190CCA0(a1, *((unsigned __int16 **)v28 + 1), *(double *)si128.m128i_i64, a4);
          if ( v44 == 1 )
          {
LABEL_51:
            v20 = 1;
            goto LABEL_52;
          }
          v28 = (int *)sub_19A52A0(*a1, v44 & 0xFFFFFFFFFFFFFFFELL);
          goto LABEL_24;
        }
      }
      else if ( v28[4] != 1 )
      {
        v27 = sub_1988430(a1, *((_QWORD *)v28 + 1) & 0xFFFFFFFFFFFFFFF8LL, (__m128)si128, a4);
        if ( !v27 )
          goto LABEL_51;
        v28 = (int *)sub_19A4EC0(*a1, v27);
LABEL_24:
        if ( !v28 )
          goto LABEL_51;
        v26 = (unsigned int)v70;
      }
      if ( v26 + 1 > (unsigned __int64)HIDWORD(v70) )
      {
        sub_2237220(&v69, v71, v26 + 1, 8);
        *((_QWORD *)v69 + (unsigned int)v70) = v28;
      }
      else
      {
        *((_QWORD *)v69 + v26) = v28;
      }
      ++v25;
      v26 = (unsigned int)(v70 + 1);
      LODWORD(v70) = v70 + 1;
      if ( v49 == v25 )
      {
        v45 = (char *)v69;
        v22 = (char *)v69 + 8 * v26;
        if ( v69 != v22 )
        {
          v46 = (char *)v69 + 8 * v26;
          do
          {
            if ( (unsigned int)(**(_DWORD **)v45 - 1) <= 1 )
            {
              v47 = *(_QWORD *)(*(_QWORD *)v45 + 24LL);
              if ( (v47 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v47 & 4) == 0 )
                sub_B8C080(*(_QWORD *)((v47 & 0xFFFFFFFFFFFFFFF8LL) + 24), v15);
            }
            v45 += 8;
          }
          while ( v46 != v45 );
          v22 = (char *)v69;
          v26 = (unsigned int)v70;
        }
        goto LABEL_64;
      }
    }
  }
  v26 = 0;
LABEL_64:
  v20 = sub_C0F470(
          *(_QWORD **)(*a1 + 248),
          *(_DWORD *)(a2 + 4),
          v55,
          *(_DWORD *)(a2 + 32),
          (__int64 *)src,
          (unsigned int)v62,
          *(_DWORD *)(a2 + 36),
          v22,
          v26,
          *(_DWORD *)(a2 + 40));
LABEL_52:
  if ( v69 != v71 )
    free(v69);
LABEL_10:
  if ( v51 )
  {
    *(_QWORD *)(v14 + 544) = v51;
    *(_QWORD *)(v14 + 512) = v52;
    *(_QWORD *)(v14 + 9944) = v60;
    *(_DWORD *)(v14 + 80) = v53;
    *(_DWORD *)(v14 + 2632) = v54;
  }
  sub_190D5E0(v50, (__m128)si128);
  if ( ptr != v68 )
    free(ptr);
  if ( v64[0] != v65 )
    free(v64[0]);
  if ( src != v63 )
    free(src);
  return v20;
}
