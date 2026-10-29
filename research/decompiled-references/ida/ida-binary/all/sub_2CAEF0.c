__int64 __fastcall sub_2CAEF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  unsigned int v20; // r14d
  int v21; // r12d
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rdx
  _DWORD *v28; // rdi
  int v29; // ebp
  int v30; // eax
  __int64 outctx; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __m128i *v34; // r15
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // r12
  unsigned __int64 v38; // r15
  __int64 v39; // rcx
  double v40; // xmm4_8
  double v41; // xmm5_8
  unsigned __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rsi
  __int64 v45; // rbp
  __int64 v46; // rax
  int v47; // eax
  unsigned __int64 v48; // [rsp+10h] [rbp-A8h]
  __int64 v49; // [rsp+18h] [rbp-A0h]
  int v50; // [rsp+2Ch] [rbp-8Ch]
  int v51; // [rsp+3Ch] [rbp-7Ch] BYREF
  __int128 v52; // [rsp+40h] [rbp-78h] BYREF
  _UNKNOWN **v53; // [rsp+50h] [rbp-68h] BYREF
  int v54; // [rsp+58h] [rbp-60h]
  __int128 v55; // [rsp+60h] [rbp-58h]
  unsigned __int64 v56; // [rsp+78h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v13 = sub_1EA680(a1 + 384, a2, a3, a4, a5);
  v14 = *(_QWORD *)(v13 + 40);
  v15 = *(__int16 *)(v13 + 28);
  *(_QWORD *)&v52 = -1;
  *((_QWORD *)&v52 + 1) = -1;
  v16 = sub_2CABB0(a1, &v52, v14, v15, 0, 0, a5);
  v19 = v52;
  v20 = DWORD2(v52);
  *(_BYTE *)(a1 + 1081) = 0;
  v21 = HIDWORD(v52);
  v22 = v16;
  if ( v19 == 2 )
  {
    v23 = *(_QWORD *)(a1 + 728);
    if ( !*(_BYTE *)(v23 + 44) || *(_DWORD *)(v23 + 36) > 1u )
      return 0;
    *(_BYTE *)(a1 + 1081) = 1;
  }
  v55 = -1;
  v54 = 0;
  v53 = &hexplace_t___vtable;
  v25 = sub_1F3B50(a1, 0, v17, v18, NAN);
  hexplace_t__copyfrom(&v53, v25);
  v26 = *(_BYTE *)(a1 + 1081);
  if ( v26 )
    v22 = *((_QWORD *)&v55 + 1);
  v27 = *(_QWORD *)(a1 + 1064);
  if ( v27 == -1 || v22 != v27 )
  {
    *(_QWORD *)(a1 + 1064) = v22;
    *(_DWORD *)(a1 + 1072) = v19;
    *(_BYTE *)(a1 + 1082) = 0;
    if ( v22 != -1 )
    {
LABEL_11:
      v28 = *(_DWORD **)(a1 + 728);
      v29 = v28[7] * v28[6];
      if ( v26 )
      {
        if ( v29 <= v21 )
          v21 = v29 - 1;
      }
      else
      {
        v47 = sub_2C9780(v28 + 4, v22);
        if ( v47 <= v21 )
          v21 = v47 - 1;
      }
      v30 = 0;
      if ( v21 >= 0 )
        v30 = v21;
      v50 = v30;
      sub_2C8DE0(*(_QWORD **)(a1 + 1152));
      *(_QWORD *)(a1 + 1160) = a1 + 1144;
      *(_QWORD *)(a1 + 1152) = 0;
      *(_QWORD *)(a1 + 1168) = a1 + 1144;
      *(_QWORD *)(a1 + 1176) = 0;
      *(_QWORD *)(a1 + 1048) = 0;
      outctx = create_outctx(-1, 0, 0);
      v32 = *(_QWORD *)(a1 + 728);
      v33 = v20;
      v34 = (__m128i *)outctx;
      if ( *(_BYTE *)(a1 + 1081) )
        v33 = *(unsigned int *)(v32 + 28);
      hexplace_t__out_one_item(&v53, outctx, v32, v33, 0, 1);
      v35 = *(_QWORD *)(a1 + 1040);
      v36 = _mm_loadu_si128((const __m128i *)(a1 + 1048));
      *(_QWORD *)(a1 + 1040) = v34[1].m128i_i64[1];
      *(_QWORD *)(a1 + 1048) = v34[2].m128i_i64[0];
      *(_QWORD *)(a1 + 1056) = v34[2].m128i_i64[1];
      v34[1].m128i_i64[1] = v35;
      v34[2] = v36;
      if ( v34 )
        (*(void (__fastcall **)(__m128i *))(v34->m128i_i64[0] + 8))(v34);
      if ( *(_QWORD *)(a1 + 1048) > 1u )
        tag_remove(a1 + 1040, *(_QWORD *)(a1 + 1040), 0);
      if ( !*(_BYTE *)(a1 + 1081) )
        goto LABEL_25;
      if ( !*(_QWORD *)(a1 + 1048) )
      {
        v37 = v29;
        v38 = qustrlen(&s1);
        if ( v38 < v29 )
          goto LABEL_31;
        goto LABEL_25;
      }
      v37 = v29;
      v38 = qustrlen(*(_QWORD *)(a1 + 1040));
      if ( v38 >= v29 )
      {
LABEL_25:
        if ( !v19 )
          v19 = 1;
        v51 = v50 + sub_2CA620(*(_QWORD *)(a1 + 728) + 16LL, (__int64)&v53, v20, v19, *(double *)v36.m128i_i64);
        sub_2006B0((const __m128i *)a1, (__int64)&v51, 0, v39, *(double *)v36.m128i_i64, a6, a7, a8, v40, v41, a11, a12);
        return 1;
      }
      while ( 1 )
      {
LABEL_31:
        v45 = *(_QWORD *)(a1 + 1048);
        if ( v45 )
        {
          v42 = v45 + 1;
          v43 = *(_QWORD *)(a1 + 1048);
          v44 = *(_QWORD *)(a1 + 1040);
          --v45;
          if ( *(_QWORD *)(a1 + 1056) < v42 )
            goto LABEL_33;
        }
        else
        {
          v44 = *(_QWORD *)(a1 + 1040);
          v43 = 1;
          v42 = 2;
          if ( *(_QWORD *)(a1 + 1056) < 2u )
          {
LABEL_33:
            v49 = v43;
            v48 = v42;
            v46 = qvector_reserve(a1 + 1040, v44, v42, 1);
            v43 = v49;
            v42 = v48;
            *(_QWORD *)(a1 + 1040) = v46;
            v44 = v46;
          }
        }
        *(_QWORD *)(a1 + 1048) = v42;
        ++v38;
        *(_BYTE *)(v44 + v45) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 1040) + v43) = 0;
        if ( v37 == v38 )
          goto LABEL_25;
      }
    }
    *(_QWORD *)(a1 + 1048) = 0;
    *(_BYTE *)(a1 + 1081) = 0;
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1072) != v19 )
  {
    *(_QWORD *)(a1 + 1064) = v22;
    *(_DWORD *)(a1 + 1072) = v19;
    *(_BYTE *)(a1 + 1082) = 0;
    goto LABEL_11;
  }
  return 1;
}
