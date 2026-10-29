unsigned __int64 __fastcall sub_1BA0230(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __m128i si128; // xmm0
  __int64 v7; // rax
  _DWORD *v8; // rdi
  __int64 (*v9)(void); // rax
  int v10; // edx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  char *v16; // rbp
  __int64 *v17; // r15
  void *v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  char *v22; // r8
  __int64 v23; // rax
  __int64 v24; // r9
  int **v25; // rbp
  int **v26; // r15
  unsigned __int64 v27; // rsi
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  int *v36; // r8
  int v37; // eax
  __int64 v38; // r10
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rsi
  int v48; // ecx
  char v49; // dl
  __m128i *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  char *v56; // rbp
  char *v57; // r15
  __int64 v58; // rax
  void *v59; // [rsp-10h] [rbp-1B8h]
  unsigned __int64 v60; // [rsp-8h] [rbp-1B0h]
  __int64 v61; // [rsp+18h] [rbp-190h]
  __int64 v62; // [rsp+20h] [rbp-188h]
  char v63; // [rsp+28h] [rbp-180h]
  __int64 v64; // [rsp+30h] [rbp-178h]
  int v65; // [rsp+38h] [rbp-170h]
  int v66; // [rsp+3Ch] [rbp-16Ch]
  __int64 v67; // [rsp+40h] [rbp-168h]
  int *v68; // [rsp+48h] [rbp-160h]
  unsigned __int64 v69; // [rsp+48h] [rbp-160h]
  int *v70; // [rsp+48h] [rbp-160h]
  unsigned __int64 v71; // [rsp+58h] [rbp-150h]
  unsigned __int64 v72; // [rsp+60h] [rbp-148h]
  __int64 v73; // [rsp+68h] [rbp-140h]
  __int128 v74; // [rsp+70h] [rbp-138h] BYREF
  __int64 v75; // [rsp+98h] [rbp-110h]
  void *src; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-F0h]
  _BYTE v78[32]; // [rsp+C0h] [rbp-E8h] BYREF
  void *v79[2]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v80[32]; // [rsp+F0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __m128i v82; // [rsp+118h] [rbp-90h]
  _BYTE v83[24]; // [rsp+128h] [rbp-80h] BYREF
  void *v84; // [rsp+140h] [rbp-68h] BYREF
  __int64 v85; // [rsp+148h] [rbp-60h]
  _BYTE v86[88]; // [rsp+150h] [rbp-58h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v83[16] = 0;
  src = v78;
  v77 = 0x400000000LL;
  v79[1] = (void *)0x400000000LL;
  ptr = v83;
  v7 = *a1;
  v79[0] = v80;
  v61 = v7;
  v82 = si128;
  sub_18C79B0(v7, 0, 0, 4);
  v8 = *(_DWORD **)(a2 + 24);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 16LL);
  if ( (char *)v9 == (char *)sub_B70840 )
    v10 = v8[6];
  else
    v10 = v9();
  v11 = sub_B978D0(*(_QWORD **)(*a1 + 248), *(_QWORD *)(*a1 + 544), v10);
  v12 = *a1;
  v67 = (__int64)v11;
  v13 = (__int64)(v11 + 5);
  if ( !v11 )
    v13 = 0;
  v62 = *(_QWORD *)(v12 + 544);
  v14 = *(_QWORD *)(v12 + 512);
  *(_QWORD *)(v12 + 544) = v13;
  v64 = v14;
  v15 = *(_QWORD *)(v12 + 9944);
  *(_QWORD *)(v12 + 512) = 0;
  v75 = v15;
  v65 = *(_DWORD *)(v12 + 80);
  v66 = *(_DWORD *)(v12 + 2632);
  *(_DWORD *)(v12 + 80) = *(_DWORD *)(v12 + 40);
  *(_DWORD *)(v12 + 2632) = *(_DWORD *)(v12 + 3688);
  v63 = sub_1B9FBC0(
          a1,
          (__int64 *)(a2 + 48),
          *(_DWORD *)(a2 + 16),
          0,
          0,
          (__int64)v79,
          (__m128)si128,
          a4,
          (__int64)&src,
          (__int64)&ptr);
  v16 = (char *)src + 8 * (unsigned int)v77;
  v17 = (__int64 *)src;
  v18 = v59;
  v19 = v60;
  if ( v16 != src )
  {
    do
    {
      if ( *v17 )
        sub_B8C080(*v17, v13);
      ++v17;
    }
    while ( v16 != (char *)v17 );
  }
  v20 = 1;
  if ( !v63 )
  {
    v22 = v86;
    v85 = 0x400000000LL;
    v23 = *(unsigned int *)(a2 + 16);
    v84 = v86;
    v24 = a2 + 8 * v23 + 48;
    v25 = (int **)(v24 + 8LL * *(unsigned int *)(a2 + 20));
    if ( (int **)v24 == v25 )
    {
      v35 = 0;
    }
    else
    {
      v26 = (int **)(a2 + 8 * v23 + 48);
      do
      {
        v36 = *v26;
        v37 = **v26;
        if ( v37 )
        {
          if ( (unsigned int)(v37 - 1) > 1 )
          {
            if ( *((_BYTE *)v36 + 24) )
            {
              v33 = sub_19A5060(
                      *a1,
                      *((_QWORD *)v36 + 4),
                      *((_QWORD *)v36 + 5),
                      *((__int64 **)v36 + 2),
                      (__int64)v36,
                      v24);
            }
            else
            {
              v51 = sub_1B7CAD0(a1, *((unsigned __int16 **)v36 + 1), (__m128)si128, a4, (__int64)v18, v19, (__int64)v36);
              if ( v51 == 1 )
              {
LABEL_51:
                v20 = 1;
                goto LABEL_52;
              }
              v33 = sub_19A52A0(*a1, (unsigned int *)(v51 & 0xFFFFFFFFFFFFFFFELL), v52, v53, v54, v55);
            }
          }
          else
          {
            v38 = 2;
            v39 = *((_QWORD *)v36 + 1) & 0xFFFFFFFFFFFFFFFCLL;
            v40 = v39;
            if ( v36[10] != 1 )
            {
              v68 = *v26;
              v39 = sub_1B7CAD0(
                      a1,
                      (unsigned __int16 *)(*((_QWORD *)v36 + 1) & 0xFFFFFFFFFFFFFFFCLL),
                      (__m128)si128,
                      a4,
                      (__int64)v18,
                      v19,
                      (__int64)v36);
              if ( v39 == 1 )
                goto LABEL_51;
              v36 = v68;
              if ( v39 )
              {
                v43 = *(_QWORD *)(*(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v43 + 16) == 13
                  && (v44 = *(unsigned __int16 *)(v43 + 18),
                      LOWORD(v44) = ((unsigned __int16)v44 >> 3) & 0x1FF,
                      (unsigned __int16)v44 > 0x1F1u) )
                {
                  v45 = sub_1907C70(*a1, (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFELL), si128, a4, v44, v41, (__int64)v68, v42);
                  if ( v45 == 1 )
                    goto LABEL_51;
                  v39 = v45 & 0xFFFFFFFFFFFFFFFCLL;
                  v36 = v68;
                  v38 = 0;
                  v40 = v39;
                }
                else
                {
                  v39 &= 0xFFFFFFFFFFFFFFFCLL;
                  v40 = v39;
                  v38 = v39 & 2;
                }
              }
              else
              {
                v40 = 0;
                v38 = 0;
              }
            }
            v46 = *((_QWORD *)v36 + 3);
            si128 = 0;
            v74 = 0;
            v47 = v46 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v46 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              if ( (v46 & 4) != 0 )
              {
                BYTE8(v74) = 1;
                *(_QWORD *)&v74 = v47 | 4;
              }
              else
              {
                v73 = v38;
                v72 = v40;
                v71 = v39;
                v70 = v36;
                sub_A55640((unsigned __int64 *)&v74, v47);
                BYTE8(v74) = 1;
                v38 = v73;
                v40 = v72;
                v39 = v71;
                v36 = v70;
              }
            }
            else
            {
              *(_QWORD *)&v74 = 0;
              BYTE8(v74) = 1;
            }
            v48 = v36[4];
            v49 = *v36 == 1;
            v50 = (__m128i *)*a1;
            if ( v38 || !v39 )
              v33 = sub_19A4FC0((__int64)v50, v40, v49, v48, v74, v40);
            else
              v33 = sub_19A54F0(v50, v40, v49, v48, v74);
          }
        }
        else
        {
          v27 = *((_QWORD *)v36 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v36[4] == 1 )
          {
            v33 = sub_19A4F40(*a1, v27, (__int64)v18, v19, (__int64)v36, v24);
          }
          else
          {
            v28 = sub_1B90E50(a1, v27, (__m128)si128, a4);
            if ( !v28 )
              goto LABEL_51;
            v33 = sub_19A4EC0(*a1, (unsigned __int64)v28, v29, v30, v31, v32);
          }
        }
        if ( !v33 )
          goto LABEL_51;
        v19 = (unsigned int)v85;
        v34 = (unsigned int)v85 + 1LL;
        if ( v34 > HIDWORD(v85) )
        {
          v69 = v33;
          sub_2237220(&v84, v86, v34, 8);
          v19 = (unsigned int)v85;
          v33 = v69;
        }
        v18 = v84;
        *((_QWORD *)v84 + v19) = v33;
        ++v26;
        v35 = (unsigned int)(v85 + 1);
        LODWORD(v85) = v85 + 1;
      }
      while ( v25 != v26 );
      v56 = (char *)v84;
      v22 = (char *)v84 + 8 * v35;
      if ( v84 != v22 )
      {
        v57 = (char *)v84 + 8 * v35;
        do
        {
          if ( (unsigned int)(**(_DWORD **)v56 - 1) <= 1 )
          {
            v58 = *(_QWORD *)(*(_QWORD *)v56 + 24LL);
            if ( (v58 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v58 & 4) == 0 )
              sub_B8C080(*(_QWORD *)((v58 & 0xFFFFFFFFFFFFFFF8LL) + 24), v13);
          }
          v56 += 8;
        }
        while ( v57 != v56 );
        v22 = (char *)v84;
        v35 = (unsigned int)v85;
      }
    }
    v20 = sub_C0F470(
            *(_QWORD **)(*a1 + 248),
            *(_DWORD *)(a2 + 4),
            v67,
            *(_DWORD *)(a2 + 32),
            (__int64 *)src,
            (unsigned int)v77,
            *(_DWORD *)(a2 + 36),
            v22,
            v35,
            *(_DWORD *)(a2 + 40));
LABEL_52:
    if ( v84 != v86 )
      free(v84);
  }
  if ( v62 )
  {
    *(_QWORD *)(v12 + 544) = v62;
    *(_QWORD *)(v12 + 512) = v64;
    *(_QWORD *)(v12 + 9944) = v75;
    *(_DWORD *)(v12 + 80) = v65;
    *(_DWORD *)(v12 + 2632) = v66;
  }
  sub_190D5E0(v61, (__m128)si128);
  if ( ptr != v83 )
    free(ptr);
  if ( v79[0] != v80 )
    free(v79[0]);
  if ( src != v78 )
    free(src);
  return v20;
}
