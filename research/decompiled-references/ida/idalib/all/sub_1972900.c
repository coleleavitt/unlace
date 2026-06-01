unsigned __int64 __fastcall sub_1972900(__int64 *a1, __int64 a2, double a3, __m128 a4)
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
  unsigned __int64 v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  int *v32; // r15
  int v33; // eax
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rcx
  _BOOL8 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rax
  char *v49; // rbp
  char *v50; // r15
  __int64 v51; // rax
  char v52; // [rsp+0h] [rbp-1A8h]
  int **v53; // [rsp+0h] [rbp-1A8h]
  __int64 v54; // [rsp+20h] [rbp-188h]
  __int64 v55; // [rsp+28h] [rbp-180h]
  __int64 v56; // [rsp+30h] [rbp-178h]
  int v57; // [rsp+38h] [rbp-170h]
  int v58; // [rsp+3Ch] [rbp-16Ch]
  __int64 v59; // [rsp+40h] [rbp-168h]
  __int64 v60; // [rsp+50h] [rbp-158h]
  unsigned __int64 v61; // [rsp+50h] [rbp-158h]
  unsigned __int64 v62; // [rsp+60h] [rbp-148h]
  __int64 v63; // [rsp+68h] [rbp-140h]
  __int128 v64; // [rsp+70h] [rbp-138h] BYREF
  __int64 v65; // [rsp+98h] [rbp-110h]
  void *src; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-F0h]
  _BYTE v68[32]; // [rsp+C0h] [rbp-E8h] BYREF
  void *v69[2]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v70[32]; // [rsp+F0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __m128i v72; // [rsp+118h] [rbp-90h]
  _BYTE v73[24]; // [rsp+128h] [rbp-80h] BYREF
  void *v74; // [rsp+140h] [rbp-68h] BYREF
  __int64 v75; // [rsp+148h] [rbp-60h]
  _BYTE v76[88]; // [rsp+150h] [rbp-58h] BYREF

  v6 = *a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v73[16] = 0;
  src = v68;
  v67 = 0x400000000LL;
  v69[1] = (void *)0x400000000LL;
  ptr = v73;
  v8 = *(unsigned int *)(v6 + 4624);
  v69[0] = v70;
  v54 = v6;
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 4616) + 640 * v8 - 520);
  v72 = si128;
  sub_18C74E0(v6, 0, v9, 4);
  v10 = *(_DWORD **)(a2 + 24);
  v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 16LL);
  if ( (char *)v11 == (char *)sub_B70840 )
    v12 = v10[6];
  else
    v12 = v11();
  v13 = sub_B978D0(*(_QWORD **)(*a1 + 248), *(_QWORD *)(*a1 + 544), v12);
  v14 = *a1;
  v59 = (__int64)v13;
  v15 = (__int64)(v13 + 5);
  if ( !v13 )
    v15 = 0;
  v55 = *(_QWORD *)(v14 + 544);
  v16 = *(_QWORD *)(v14 + 512);
  *(_QWORD *)(v14 + 544) = v15;
  v56 = v16;
  v17 = *(_QWORD *)(v14 + 9944);
  *(_QWORD *)(v14 + 512) = 0;
  v65 = v17;
  v57 = *(_DWORD *)(v14 + 80);
  v58 = *(_DWORD *)(v14 + 2632);
  *(_DWORD *)(v14 + 80) = *(_DWORD *)(v14 + 40);
  *(_DWORD *)(v14 + 2632) = *(_DWORD *)(v14 + 3688);
  v52 = sub_1972290(
          a1,
          (__int64 *)(a2 + 48),
          *(_DWORD *)(a2 + 16),
          0,
          0,
          (__int64)v69,
          (__m128)si128,
          a4,
          (__int64)&src,
          (__int64)&ptr);
  v18 = (__int64 *)((char *)src + 8 * (unsigned int)v67);
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
  if ( !v52 )
  {
    v22 = v76;
    v75 = 0x400000000LL;
    v23 = *(unsigned int *)(a2 + 16);
    v74 = v76;
    v24 = a2 + 8 * v23 + 48;
    v53 = (int **)(v24 + 8LL * *(unsigned int *)(a2 + 20));
    if ( (int **)v24 == v53 )
    {
      v31 = 0;
    }
    else
    {
      v25 = (int **)(a2 + 8 * v23 + 48);
      do
      {
        v32 = *v25;
        v33 = **v25;
        if ( v33 )
        {
          if ( (unsigned int)(v33 - 1) > 1 )
          {
            if ( *((_BYTE *)v32 + 24) )
            {
              v28 = sub_19A5060(*a1, *((_QWORD *)v32 + 4), *((_QWORD *)v32 + 5), *((_QWORD *)v32 + 2));
            }
            else
            {
              v48 = sub_1933BC0(a1, *((_QWORD *)v32 + 1), *(double *)si128.m128i_i64, a4);
              if ( v48 == 1 )
              {
LABEL_51:
                v20 = 1;
                goto LABEL_52;
              }
              v28 = sub_19A52A0(*a1, v48 & 0xFFFFFFFFFFFFFFFELL);
            }
          }
          else
          {
            v34 = 2;
            v35 = *((_QWORD *)v32 + 1) & 0xFFFFFFFFFFFFFFFCLL;
            v36 = v35;
            if ( v32[10] != 1 )
            {
              v35 = sub_1933BC0(a1, *((_QWORD *)v32 + 1) & 0xFFFFFFFFFFFFFFFCLL, *(double *)si128.m128i_i64, a4);
              if ( v35 == 1 )
                goto LABEL_51;
              if ( v35 )
              {
                v40 = *(_QWORD *)(*(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v40 + 16) == 13
                  && (v41 = *(unsigned __int16 *)(v40 + 18),
                      LOWORD(v41) = ((unsigned __int16)v41 >> 3) & 0x1FF,
                      (unsigned __int16)v41 > 0x1F1u) )
                {
                  v42 = sub_1907C70(*a1, (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFELL), si128, a4, v41, v37, v38, v39);
                  if ( v42 == 1 )
                    goto LABEL_51;
                  v35 = v42 & 0xFFFFFFFFFFFFFFFCLL;
                  v34 = 0;
                  v36 = v35;
                }
                else
                {
                  v35 &= 0xFFFFFFFFFFFFFFFCLL;
                  v36 = v35;
                  v34 = v35 & 2;
                }
              }
              else
              {
                v36 = 0;
                v34 = 0;
              }
            }
            v43 = *((_QWORD *)v32 + 3);
            si128 = 0;
            v64 = 0;
            v44 = v43 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v43 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              if ( (v43 & 4) != 0 )
              {
                BYTE8(v64) = 1;
                *(_QWORD *)&v64 = v44 | 4;
              }
              else
              {
                v63 = v34;
                v62 = v36;
                v61 = v35;
                sub_A55640((unsigned __int64 *)&v64, v44);
                BYTE8(v64) = 1;
                v34 = v63;
                v36 = v62;
                v35 = v61;
              }
            }
            else
            {
              *(_QWORD *)&v64 = 0;
              BYTE8(v64) = 1;
            }
            v45 = (unsigned int)v32[4];
            v46 = *v32 == 1;
            v47 = *a1;
            if ( v34 || !v35 )
              v28 = sub_19A4FC0(v47, v36, v46, v45, v64);
            else
              v28 = sub_19A54F0(v47, v36, v46, v45, v64);
          }
        }
        else
        {
          v26 = *((_QWORD *)v32 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v32[4] == 1 )
          {
            v28 = sub_19A4F40(*a1, v26);
          }
          else
          {
            v27 = sub_19425F0(a1, v26, (__m128)si128, a4);
            if ( !v27 )
              goto LABEL_51;
            v28 = sub_19A4EC0(*a1, v27);
          }
        }
        if ( !v28 )
          goto LABEL_51;
        v29 = (unsigned int)v75;
        v30 = (unsigned int)v75 + 1LL;
        if ( v30 > HIDWORD(v75) )
        {
          v60 = v28;
          sub_2237220(&v74, v76, v30, 8);
          v29 = (unsigned int)v75;
          v28 = v60;
        }
        *((_QWORD *)v74 + v29) = v28;
        ++v25;
        v31 = (unsigned int)(v75 + 1);
        LODWORD(v75) = v75 + 1;
      }
      while ( v53 != v25 );
      v49 = (char *)v74;
      v22 = (char *)v74 + 8 * v31;
      if ( v74 != v22 )
      {
        v50 = (char *)v74 + 8 * v31;
        do
        {
          if ( (unsigned int)(**(_DWORD **)v49 - 1) <= 1 )
          {
            v51 = *(_QWORD *)(*(_QWORD *)v49 + 24LL);
            if ( (v51 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v51 & 4) == 0 )
              sub_B8C080(*(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFF8LL) + 24), v15);
          }
          v49 += 8;
        }
        while ( v50 != v49 );
        v22 = (char *)v74;
        v31 = (unsigned int)v75;
      }
    }
    v20 = sub_C0F470(
            *(_QWORD **)(*a1 + 248),
            *(_DWORD *)(a2 + 4),
            v59,
            *(_DWORD *)(a2 + 32),
            (__int64 *)src,
            (unsigned int)v67,
            *(_DWORD *)(a2 + 36),
            v22,
            v31,
            *(_DWORD *)(a2 + 40));
LABEL_52:
    if ( v74 != v76 )
      free(v74);
  }
  if ( v55 )
  {
    *(_QWORD *)(v14 + 544) = v55;
    *(_QWORD *)(v14 + 512) = v56;
    *(_QWORD *)(v14 + 9944) = v65;
    *(_DWORD *)(v14 + 80) = v57;
    *(_DWORD *)(v14 + 2632) = v58;
  }
  sub_190D5E0(v54, (__m128)si128);
  if ( ptr != v73 )
    free(ptr);
  if ( v69[0] != v70 )
    free(v69[0]);
  if ( src != v68 )
    free(src);
  return v20;
}
