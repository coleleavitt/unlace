__int64 __fastcall sub_1494780(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __m128i a7,
        __m128 a8)
{
  _QWORD *v10; // rbp
  __int64 v11; // r9
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm4
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char *v18; // rcx
  __m128i *v19; // rdx
  __m128 *v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // rcx
  unsigned __int64 v23; // rbp
  const __m128i *v24; // r15
  char *v25; // rax
  int v26; // edx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __m128i *v29; // rax
  char *v30; // rsi
  __int64 v31; // rdi
  char v32; // dl
  __int64 v33; // r15
  unsigned __int16 v34; // cx
  __int64 *v35; // rdi
  __int16 i; // ax
  unsigned __int16 v37; // cx
  unsigned int v38; // eax
  unsigned __int16 v39; // si
  __int64 v40; // rdx
  unsigned __int16 v42; // cx
  unsigned int v43; // eax
  unsigned __int16 v44; // si
  __int64 v45; // rdx
  unsigned int v46; // eax
  _WORD *v47; // rdx
  _BYTE *v48; // r15
  __int8 v49; // dl
  int v50; // eax
  __int64 *v51; // rdi
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  _QWORD *v54; // r11
  signed __int64 v55; // r15
  __int64 *v56; // rdi
  __int64 v57; // rcx
  _DWORD *v58; // rax
  _DWORD *v59; // rdx
  __int64 v61; // [rsp+8h] [rbp-1B0h]
  _QWORD *v62; // [rsp+18h] [rbp-1A0h]
  __m128i v63; // [rsp+20h] [rbp-198h] BYREF
  __m128i v64; // [rsp+30h] [rbp-188h]
  void *v65; // [rsp+40h] [rbp-178h] BYREF
  __int64 v66; // [rsp+48h] [rbp-170h]
  _BYTE v67[96]; // [rsp+50h] [rbp-168h] BYREF
  __m128i v68; // [rsp+B0h] [rbp-108h] BYREF
  __m128i v69; // [rsp+C0h] [rbp-F8h] BYREF
  __int16 v70; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+F0h] [rbp-C8h]
  __int64 v72; // [rsp+100h] [rbp-B8h] BYREF

  v65 = v67;
  v66 = 0x400000000LL;
  v10 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 88LL);
  v68.m128i_i64[0] = a4;
  v70 = 261;
  v68.m128i_i64[1] = a5;
  sub_22307C0(&v63, a2, a3, &v68);
  v12 = sub_10270C0(v10, v63.m128i_i64, 0, 0, 0, a6, a7);
  if ( v63.m128i_i64[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v63.m128i_i64[0] + 8LL))(v63.m128i_i64[0]);
  v13 = *(_QWORD *)(a1 + 8);
  v68.m128i_i8[0] = 0;
  v61 = v13;
  if ( (unsigned int)(v12 + 1) <= 1 )
    goto LABEL_79;
  if ( v12 < 0 )
  {
    v52 = (unsigned int)(-2 - v12);
    v53 = *(_QWORD *)(v10[40] + 8LL * ((unsigned int)(-2 - v12) >> 6));
    if ( _bittest64(&v53, v52) )
    {
      v54 = (_QWORD *)(v10[34] + 8 * ((unsigned __int64)(int)v52 >> 5));
      if ( *v54 )
      {
        v14 = *v54 + 24LL * ((-2 - (_BYTE)v12) & 0x1F);
        goto LABEL_6;
      }
      v56 = (__int64 *)(v10[36] & 0xFFFFFFFFFFFFFFF8LL);
      v57 = *v56;
      v56[10] += 768;
      v58 = (_DWORD *)((v57 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v56[1] >= (unsigned __int64)(v58 + 192) && v57 )
      {
        *v56 = (__int64)(v58 + 192);
      }
      else
      {
        v62 = v54;
        v58 = (_DWORD *)sub_986170((__int64)v56, 768, 768, 3, v52, v11);
        v54 = v62;
        LOBYTE(v52) = -2 - v12;
      }
      *v54 = v58;
      v59 = v58 + 192;
      do
      {
        a7 = 0;
        *v58 = 0;
        v58 += 6;
        *((_OWORD *)v58 - 1) = 0;
        *((_QWORD *)v58 - 1) = 0;
      }
      while ( v58 != v59 );
      v49 = v68.m128i_i8[0];
      v14 = *v54 + 24 * (v52 & 0x1F);
    }
    else
    {
      v14 = sub_101F930((__int64)v10, v52, &v68);
      v49 = v68.m128i_i8[0];
    }
    if ( v49 )
    {
LABEL_79:
      sub_101D1C0((__int64)&v63, (__int64)v10);
      goto LABEL_10;
    }
  }
  else
  {
    v14 = v10[23] + 24LL * (unsigned int)v12;
  }
LABEL_6:
  if ( !v14 )
    goto LABEL_79;
  if ( *(char *)(v14 + 3) < 0 )
    goto LABEL_79;
  sub_101D9A0(&v68, (__int64 *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL), v10[1], v10[2], 0);
  if ( !(_BYTE)v70 )
    goto LABEL_79;
  v15 = _mm_load_si128(&v69);
  v63 = _mm_load_si128(&v68);
  v64 = v15;
LABEL_10:
  sub_13D4AD0((__int64)&v68, v12, v63.m128i_i64, v61, 1);
  v69.m128i_i8[8] = 1;
  do
  {
    sub_13DB5F0(&v68, (__int64)&v63, a7, *(double *)a8.m128_u64);
    v16 = (unsigned int)v66;
    v17 = (unsigned int)v66 + 1LL;
    if ( v17 > HIDWORD(v66) )
    {
      v48 = v65;
      if ( v65 > &v63 || &v63 >= (__m128i *)((char *)v65 + 24 * (unsigned int)v66) )
      {
        sub_2237220(&v65, v67, v17, 24);
        v18 = (char *)v65;
        v16 = (unsigned int)v66;
        v19 = &v63;
      }
      else
      {
        sub_2237220(&v65, v67, v17, 24);
        v18 = (char *)v65;
        v16 = (unsigned int)v66;
        v19 = (__m128i *)((char *)v65 + (char *)&v63 - v48);
      }
    }
    else
    {
      v18 = (char *)v65;
      v19 = &v63;
    }
    a8 = (__m128)_mm_loadu_si128(v19);
    v20 = (__m128 *)&v18[24 * v16];
    *v20 = a8;
    v20[1].m128_u64[0] = v19[1].m128i_u64[0];
    v21 = (unsigned int)(v66 + 1);
    LODWORD(v66) = v66 + 1;
  }
  while ( v64.m128i_i16[0] != 2 );
  v68.m128i_i64[0] = (__int64)&off_2C449F0;
  if ( ptr != &v72 )
  {
    free(ptr);
    v21 = (unsigned int)v66;
  }
  v22 = v65;
  v23 = a1 + 16;
  v24 = (const __m128i *)(a1 + 16);
  v25 = (char *)v65 + 24 * v21 - 24;
  *(_QWORD *)v25 = 0;
  *((_DWORD *)v25 + 4) = 1;
  v26 = *(_DWORD *)(a1 + 16);
  *((_QWORD *)v25 + 1) = a2;
  *(_DWORD *)v25 = v26;
  v27 = (unsigned int)v66;
  v28 = (unsigned int)v66 + 1LL;
  if ( v28 > HIDWORD(v66) )
  {
    if ( (unsigned __int64)v22 > v23 || v23 >= (unsigned __int64)&v22[24 * (unsigned int)v66] )
    {
      v24 = (const __m128i *)(a1 + 16);
      sub_2237220(&v65, v67, v28, 24);
      v22 = v65;
      v27 = (unsigned int)v66;
    }
    else
    {
      v55 = (char *)v24 - v22;
      sub_2237220(&v65, v67, v28, 24);
      v22 = v65;
      v27 = (unsigned int)v66;
      v24 = (const __m128i *)((char *)v65 + v55);
    }
  }
  v29 = (__m128i *)&v22[24 * v27];
  *v29 = _mm_loadu_si128(v24);
  v30 = (char *)v65;
  v29[1].m128i_i64[0] = v24[1].m128i_i64[0];
  v31 = *(_QWORD *)(a1 + 8);
  LODWORD(v66) = v66 + 1;
  sub_14368B0(v31, v30, (unsigned int)v66, 0, 0, 0);
  sub_1479170(a1);
  sub_146B5E0(v63.m128i_i64, a1, 0, 1, 0);
  v33 = sub_148B630(a1, nullptr, a7, a8);
  if ( !v33 || v32 )
    goto LABEL_25;
  if ( *(_WORD *)(a1 + 32) == 1 && a2 == *(_QWORD *)(a1 + 24) )
    goto LABEL_21;
  sub_1564820(&v68, a1, *(unsigned int *)(a1 + 16), 1902);
  sub_AEA040((__int64)&v68);
  for ( i = *(_WORD *)(a1 + 32); i != 1; i = *(_WORD *)(a1 + 32) )
  {
    if ( (unsigned __int16)(i - 22) <= 1u )
    {
      v34 = *(_WORD *)(a1 + 88);
      if ( i == 22 )
      {
        *(_WORD *)(a1 + 88) = v34 + 1;
      }
      else if ( v34 )
      {
        v46 = *(_DWORD *)(a1 + 2792);
        if ( !v46 )
        {
LABEL_67:
          *(_WORD *)(a1 + 88) = v34 - 1;
          goto LABEL_24;
        }
        v47 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v46 - 24);
        while ( 2 )
        {
          if ( v47[7] == v34 )
          {
            if ( *((_DWORD *)v47 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_65:
              if ( *(_WORD *)(a1 + 90) <= v47[8] && *(_WORD *)(a1 + 92) <= v47[9] )
                goto LABEL_67;
            }
          }
          else if ( v47[7] >= v34 )
          {
            goto LABEL_65;
          }
          --v46;
          v47 -= 12;
          *(_DWORD *)(a1 + 2792) = v46;
          if ( !v46 )
            goto LABEL_67;
          continue;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)(i - 20) <= 1u )
      {
        v37 = *(_WORD *)(a1 + 90);
        if ( i == 20 )
        {
          *(_WORD *)(a1 + 90) = v37 + 1;
        }
        else if ( v37 )
        {
          v38 = *(_DWORD *)(a1 + 2792);
          if ( v38 )
          {
            v39 = *(_WORD *)(a1 + 88);
            v40 = *(_QWORD *)(a1 + 2784) + 24LL * v38 - 24;
            do
            {
              if ( v39 == *(_WORD *)(v40 + 14) )
              {
                if ( *(_DWORD *)(v40 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_33;
              }
              else if ( v39 > *(_WORD *)(v40 + 14) )
              {
                goto LABEL_33;
              }
              if ( v37 <= *(_WORD *)(v40 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v40 + 18) )
                break;
LABEL_33:
              --v38;
              v40 -= 24;
              *(_DWORD *)(a1 + 2792) = v38;
            }
            while ( v38 );
          }
          *(_WORD *)(a1 + 90) = v37 - 1;
        }
        goto LABEL_24;
      }
      if ( (unsigned __int16)(i - 24) > 1u )
      {
        if ( (unsigned __int16)(i - 14) > 1u && (unsigned __int16)(i - 17) > 2u )
        {
          if ( i == 3 )
          {
            sub_1566D30(a1);
            continue;
          }
          if ( sub_10CCDE0(i) )
          {
            v50 = *(_DWORD *)(a1 + 20);
            v51 = *(__int64 **)(a1 + 8);
            if ( !v50 )
              v50 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 40) = v50;
            sub_14634E0(v51, (int *)(a1 + 16));
            continue;
          }
        }
      }
      else
      {
        v42 = *(_WORD *)(a1 + 92);
        if ( i == 24 )
        {
          *(_WORD *)(a1 + 92) = v42 + 1;
        }
        else if ( v42 )
        {
          v43 = *(_DWORD *)(a1 + 2792);
          if ( v43 )
          {
            v44 = *(_WORD *)(a1 + 88);
            v45 = *(_QWORD *)(a1 + 2784) + 24LL * v43 - 24;
            do
            {
              if ( v44 == *(_WORD *)(v45 + 14) )
              {
                if ( *(_DWORD *)(v45 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_53;
              }
              else if ( v44 > *(_WORD *)(v45 + 14) )
              {
                goto LABEL_53;
              }
              if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v45 + 16) && v42 <= *(_WORD *)(v45 + 18) )
                break;
LABEL_53:
              --v43;
              v45 -= 24;
              *(_DWORD *)(a1 + 2792) = v43;
            }
            while ( v43 );
          }
          *(_WORD *)(a1 + 92) = v42 - 1;
        }
      }
    }
LABEL_24:
    v35 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v35, (int *)(a1 + 16));
LABEL_25:
    ;
  }
  if ( a2 == *(_QWORD *)(a1 + 24) )
LABEL_21:
    sub_1479170(a1);
  if ( v63.m128i_i64[0] )
    sub_1564F70(v63.m128i_i64[0]);
  if ( v65 != v67 )
    free(v65);
  return v33;
}
