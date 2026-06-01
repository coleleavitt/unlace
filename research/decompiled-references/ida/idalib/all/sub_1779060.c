unsigned __int64 __fastcall sub_1779060(unsigned int *a1, __int64 a2)
{
  __m128 si128; // xmm0
  __int64 v5; // rax
  _DWORD *v6; // rdi
  __int64 (*v7)(void); // rax
  int v8; // edx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rbp
  __int64 *v15; // r15
  unsigned __int64 v16; // rbp
  char *v18; // r8
  __int64 v19; // rax
  __int64 v20; // r9
  int **v21; // rbp
  __int64 v22; // rax
  int **v23; // r13
  int *v24; // r15
  int v25; // edx
  void **v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r10
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  __int64 v34; // rcx
  _BOOL8 v35; // rdx
  __int64 v36; // rdi
  char *v37; // rbp
  char *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+18h] [rbp-190h]
  __int64 v42; // [rsp+20h] [rbp-188h]
  char v43; // [rsp+28h] [rbp-180h]
  __int64 v44; // [rsp+30h] [rbp-178h]
  int v45; // [rsp+38h] [rbp-170h]
  int v46; // [rsp+3Ch] [rbp-16Ch]
  __int64 v47; // [rsp+40h] [rbp-168h]
  __int64 v48; // [rsp+48h] [rbp-160h]
  unsigned __int64 v49; // [rsp+58h] [rbp-150h]
  unsigned __int64 v50; // [rsp+60h] [rbp-148h]
  __int64 v51; // [rsp+68h] [rbp-140h]
  __int128 v52; // [rsp+70h] [rbp-138h] BYREF
  __int64 v53; // [rsp+98h] [rbp-110h]
  void *src; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-F0h]
  _BYTE v56[32]; // [rsp+C0h] [rbp-E8h] BYREF
  void *v57[2]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v58[32]; // [rsp+F0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __m128 v60; // [rsp+118h] [rbp-90h]
  _BYTE v61[24]; // [rsp+128h] [rbp-80h] BYREF
  void *v62; // [rsp+140h] [rbp-68h] BYREF
  __int64 v63; // [rsp+148h] [rbp-60h]
  _BYTE v64[88]; // [rsp+150h] [rbp-58h] BYREF

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v61[16] = 0;
  src = v56;
  v55 = 0x400000000LL;
  v57[1] = (void *)0x400000000LL;
  ptr = v61;
  v5 = *(_QWORD *)a1;
  v57[0] = v58;
  v41 = v5;
  v60 = si128;
  sub_18C79B0(v5, 0, 0, 4);
  v6 = *(_DWORD **)(a2 + 24);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 16LL);
  if ( (char *)v7 == (char *)sub_B70840 )
    v8 = v6[6];
  else
    v8 = v7();
  v9 = sub_B978D0(*(_QWORD **)(*(_QWORD *)a1 + 248LL), *(_QWORD *)(*(_QWORD *)a1 + 544LL), v8);
  v10 = *(_QWORD *)a1;
  v47 = (__int64)v9;
  v11 = (__int64)(v9 + 5);
  if ( !v9 )
    v11 = 0;
  v42 = *(_QWORD *)(v10 + 544);
  v12 = *(_QWORD *)(v10 + 512);
  *(_QWORD *)(v10 + 544) = v11;
  v44 = v12;
  v13 = *(_QWORD *)(v10 + 9944);
  *(_QWORD *)(v10 + 512) = 0;
  v53 = v13;
  v45 = *(_DWORD *)(v10 + 80);
  v46 = *(_DWORD *)(v10 + 2632);
  *(_DWORD *)(v10 + 80) = *(_DWORD *)(v10 + 40);
  *(_DWORD *)(v10 + 2632) = *(_DWORD *)(v10 + 3688);
  v43 = sub_17789F0(
          a1,
          (__int64 *)(a2 + 48),
          *(_DWORD *)(a2 + 16),
          0,
          0,
          (__int64)v57,
          si128,
          (__int64)&src,
          (__int64)&ptr);
  v14 = (char *)src + 8 * (unsigned int)v55;
  v15 = (__int64 *)src;
  if ( v14 != src )
  {
    do
    {
      if ( *v15 )
        sub_B8C080(*v15, v11);
      ++v15;
    }
    while ( v14 != (char *)v15 );
  }
  v16 = 1;
  if ( v43 )
    goto LABEL_10;
  v18 = v64;
  v63 = 0x400000000LL;
  v19 = *(unsigned int *)(a2 + 16);
  v62 = v64;
  v20 = a2 + 8 * v19 + 48;
  v21 = (int **)(v20 + 8LL * *(unsigned int *)(a2 + 20));
  if ( (int **)v20 != v21 )
  {
    v48 = v11;
    v22 = 0;
    v23 = (int **)v20;
    while ( 1 )
    {
      v24 = *v23;
      v25 = **v23;
      if ( v25 )
      {
        if ( (unsigned int)(v25 - 1) <= 1 )
        {
          v27 = 2;
          v28 = *((_QWORD *)v24 + 1) & 0xFFFFFFFFFFFFFFFCLL;
          v29 = v28;
          if ( v24[10] != 1 )
          {
            v28 = sub_175B800((__int64 *)a1, (unsigned __int16 *)(*((_QWORD *)v24 + 1) & 0xFFFFFFFFFFFFFFFCLL));
            if ( v28 == 1 )
              goto LABEL_53;
            if ( v28 )
            {
              v30 = *(_QWORD *)(*(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v30 + 16) == 13 && ((*(_WORD *)(v30 + 18) >> 3) & 0x1FFu) > 0x1F1 )
              {
                v31 = sub_1907C70(*(_QWORD *)a1, v28 & 0xFFFFFFFFFFFFFFFELL);
                if ( v31 == 1 )
                  goto LABEL_53;
                v28 = v31 & 0xFFFFFFFFFFFFFFFCLL;
                v27 = 0;
                v29 = v28;
              }
              else
              {
                v28 &= 0xFFFFFFFFFFFFFFFCLL;
                v29 = v28;
                v27 = v28 & 2;
              }
            }
            else
            {
              v29 = 0;
              v27 = 0;
            }
          }
          v32 = *((_QWORD *)v24 + 3);
          si128 = 0;
          v52 = 0;
          v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v32 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (v32 & 4) != 0 )
            {
              BYTE8(v52) = 1;
              *(_QWORD *)&v52 = v33 | 4;
            }
            else
            {
              v51 = v27;
              v50 = v29;
              v49 = v28;
              sub_A55640((unsigned __int64 *)&v52, v33);
              BYTE8(v52) = 1;
              v27 = v51;
              v29 = v50;
              v28 = v49;
            }
          }
          else
          {
            *(_QWORD *)&v52 = 0;
            BYTE8(v52) = 1;
          }
          v34 = (unsigned int)v24[4];
          v35 = *v24 == 1;
          v36 = *(_QWORD *)a1;
          if ( v27 || !v28 )
            v24 = (int *)sub_19A4FC0(v36, v29, v35, v34, v52);
          else
            v24 = (int *)sub_19A54F0(v36, v29, v35, v34, v52);
          goto LABEL_23;
        }
        if ( !*((_BYTE *)v24 + 24) )
        {
          v40 = sub_175B800((__int64 *)a1, *((unsigned __int16 **)v24 + 1));
          if ( v40 == 1 )
          {
LABEL_53:
            v16 = 1;
            goto LABEL_54;
          }
          v24 = (int *)sub_19A52A0(*(_QWORD *)a1, v40 & 0xFFFFFFFFFFFFFFFELL);
          goto LABEL_23;
        }
        if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
        {
          v24 = (int *)sub_19A5060(*(_QWORD *)a1, *((_QWORD *)v24 + 4), *((_QWORD *)v24 + 5), *((_QWORD *)v24 + 2));
          goto LABEL_23;
        }
      }
      else
      {
        if ( v24[4] != 1 )
        {
          v26 = sub_176A140(a1, (void **)(*((_QWORD *)v24 + 1) & 0xFFFFFFFFFFFFFFF8LL), si128);
          if ( !v26 )
            goto LABEL_53;
          v24 = (int *)sub_19A4EC0(*(_QWORD *)a1, v26);
          goto LABEL_23;
        }
        if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
        {
          v24 = (int *)sub_19A4F40(*(_QWORD *)a1, *((_QWORD *)v24 + 1) & 0xFFFFFFFFFFFFFFF8LL);
LABEL_23:
          if ( !v24 )
            goto LABEL_53;
          v22 = (unsigned int)v63;
        }
      }
      if ( v22 + 1 > (unsigned __int64)HIDWORD(v63) )
      {
        sub_2237220(&v62, v64, v22 + 1, 8);
        *((_QWORD *)v62 + (unsigned int)v63) = v24;
      }
      else
      {
        *((_QWORD *)v62 + v22) = v24;
      }
      ++v23;
      v22 = (unsigned int)(v63 + 1);
      LODWORD(v63) = v63 + 1;
      if ( v21 == v23 )
      {
        v37 = (char *)v62;
        v18 = (char *)v62 + 8 * v22;
        if ( v62 != v18 )
        {
          v38 = (char *)v62 + 8 * v22;
          do
          {
            if ( (unsigned int)(**(_DWORD **)v37 - 1) <= 1 )
            {
              v39 = *(_QWORD *)(*(_QWORD *)v37 + 24LL);
              if ( (v39 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v39 & 4) == 0 )
                sub_B8C080(*(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFF8LL) + 24), v48);
            }
            v37 += 8;
          }
          while ( v38 != v37 );
          v18 = (char *)v62;
          v22 = (unsigned int)v63;
        }
        goto LABEL_66;
      }
    }
  }
  v22 = 0;
LABEL_66:
  v16 = sub_C0F470(
          *(_QWORD **)(*(_QWORD *)a1 + 248LL),
          *(_DWORD *)(a2 + 4),
          v47,
          *(_DWORD *)(a2 + 32),
          (__int64 *)src,
          (unsigned int)v55,
          *(_DWORD *)(a2 + 36),
          v18,
          v22,
          *(_DWORD *)(a2 + 40));
LABEL_54:
  if ( v62 != v64 )
    free(v62);
LABEL_10:
  if ( v42 )
  {
    *(_QWORD *)(v10 + 544) = v42;
    *(_QWORD *)(v10 + 512) = v44;
    *(_QWORD *)(v10 + 9944) = v53;
    *(_DWORD *)(v10 + 80) = v45;
    *(_DWORD *)(v10 + 2632) = v46;
  }
  sub_190D5E0(v41);
  if ( ptr != v61 )
    free(ptr);
  if ( v57[0] != v58 )
    free(v57[0]);
  if ( src != v56 )
    free(src);
  return v16;
}
