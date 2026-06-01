__int64 __fastcall sub_14D4D90(__int64 a1, unsigned __int8 a2, unsigned int a3, __m128i a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // r12d
  __int64 result; // rax
  __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int16 v19; // ax
  __int64 v20; // rax
  int v21; // edx
  __m128i v22; // xmm0
  __m128 v23; // xmm1
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // r15d
  unsigned __int64 v28; // rax
  unsigned int *v29; // rax
  unsigned int v30; // r13d
  __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // rax
  size_t v39; // r15
  unsigned int v40; // eax
  int v41; // [rsp+4h] [rbp-174h]
  _DWORD v42[6]; // [rsp+10h] [rbp-168h] BYREF
  void *v43; // [rsp+28h] [rbp-150h]
  __int64 v44; // [rsp+38h] [rbp-140h] BYREF
  unsigned __int64 v45; // [rsp+50h] [rbp-128h] BYREF
  char v46; // [rsp+58h] [rbp-120h]
  void *v47; // [rsp+68h] [rbp-110h]
  __int64 v48; // [rsp+78h] [rbp-100h] BYREF
  __int64 v49[10]; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE *v50; // [rsp+E0h] [rbp-98h] BYREF
  __m128i v51; // [rsp+E8h] [rbp-90h]
  __m128 v52; // [rsp+F8h] [rbp-80h]
  __int64 v53; // [rsp+108h] [rbp-70h]
  __m128i v54; // [rsp+110h] [rbp-68h]
  int v55; // [rsp+120h] [rbp-58h]
  __int64 v56; // [rsp+128h] [rbp-50h]
  int v57; // [rsp+130h] [rbp-48h]
  __int16 v58; // [rsp+134h] [rbp-44h]
  char v59; // [rsp+136h] [rbp-42h]

  v7 = (__int64 *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) != 20 )
    goto LABEL_4;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v8 + 2944);
  v10 = *(unsigned int *)(v8 + 2912);
  if ( v10 <= v9 )
  {
    v7 = (_QWORD *)(&dword_0 + 1);
    if ( *(_WORD *)(sub_14180A0(v8, 1u) + 16) != 21 )
      goto LABEL_4;
    if ( *(_WORD *)(a1 + 32) == 1 )
    {
LABEL_9:
      v51.m128i_i64[1] = a1;
      v50 = (_BYTE *)(a1 + 1952);
      v13 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      v51.m128i_i8[0] = v13;
      v52.m128_i16[2] = 63;
      v52.m128_i32[0] = 1376276;
      v52.m128_u64[1] = (unsigned __int64)sub_14789E0;
      v53 = 0;
      v54.m128i_i64[0] = 0;
      sub_14C52C0((__int64)&v50);
      sub_14808E0((__int64)&v50, v7, v14, v15, v16, v17);
      if ( !v54.m128i_i32[1] )
      {
        *v50 = v51.m128i_i8[0];
        return 1;
      }
      v11 = 1;
      *v50 = v51.m128i_i8[0];
      goto LABEL_5;
    }
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(v8 + 2944);
    v10 = *(unsigned int *)(v8 + 2912);
  }
  else if ( *(_WORD *)(*(_QWORD *)(v8 + 2904) + 24 * v9 + 16) != 21 )
  {
LABEL_4:
    v11 = 0;
LABEL_5:
    result = sub_14BDA20(a1, 0, 0, 0, 0, nullptr, a4);
    if ( result != 1 )
      return sub_19BD000(*(_QWORD *)(a1 + 96), a3, a2, v11, result & 0xFFFFFFFFFFFFFFFELL);
    return result;
  }
  v18 = v9 + 1;
  if ( v18 >= v10 )
  {
    v7 = (_QWORD *)(&dword_0 + 2);
    v19 = *(_WORD *)(sub_14180A0(v8, 2u) + 16);
  }
  else
  {
    v19 = *(_WORD *)(*(_QWORD *)(v8 + 2904) + 24 * v18 + 16);
  }
  if ( v19 != 24 && v19 != 47 )
  {
    if ( v19 != 22 )
      goto LABEL_9;
    if ( *(_WORD *)(a1 + 32) == 1
      || (v7 = (_QWORD *)(&dword_0 + 2), *(_WORD *)(sub_1479960(*(_QWORD *)(a1 + 8), 2u) + 16) != 23) )
    {
      if ( *(_WORD *)(a1 + 32) == 1 )
        goto LABEL_9;
      v7 = (_QWORD *)(&dword_0 + 2);
      if ( *(_WORD *)(sub_1479960(*(_QWORD *)(a1 + 8), 2u) + 16) != 5 )
        goto LABEL_9;
      if ( *(_WORD *)(a1 + 32) == 1 )
        goto LABEL_9;
      v7 = (_QWORD *)(&dword_0 + 3);
      if ( *(_WORD *)(sub_1479960(*(_QWORD *)(a1 + 8), 3u) + 16) != 5 )
        goto LABEL_9;
    }
  }
  v20 = *(_QWORD *)(a1 + 80);
  v21 = *(_DWORD *)(a1 + 88);
  v50 = (_BYTE *)a1;
  v22 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v23 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 64));
  v53 = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 32);
  v24 = *(_QWORD *)(a1 + 8);
  v57 = v21;
  v55 = v20;
  v25 = *(unsigned int *)(a1 + 2712);
  v51 = v22;
  v56 = v25;
  LOWORD(v25) = *(_WORD *)(a1 + 92);
  v52 = v23;
  v58 = v25;
  v54 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  sub_1418D30(v24, 0);
  v26 = *(_QWORD *)(a1 + 8);
  v27 = *(_DWORD *)(a1 + 16);
  v59 = 1;
  v28 = *(_QWORD *)(v26 + 2944);
  if ( v28 >= *(unsigned int *)(v26 + 2912) )
    v29 = (unsigned int *)sub_14180A0(v26, 1u);
  else
    v29 = (unsigned int *)(*(_QWORD *)(v26 + 2904) + 24 * v28);
  v30 = *v29;
  LODWORD(v49[0]) = 3080216;
  sub_15680D0(a1, v49, 2, 2);
  if ( *(_WORD *)(a1 + 32) == 24 )
  {
    sub_1478A90(a1);
    LOWORD(v49[0]) = 25;
    sub_15680D0(a1, v49, 1, 2);
    v41 = *(_DWORD *)(a1 + 16);
    sub_147B460((__int64)&v50);
    sub_1564820(v49, a1, a3, 1720);
    v45 = __PAIR64__(v30, a3);
    v46 = 1;
    sub_AEC610(v49, (__int64 *)&v45);
    v38 = j__strlen("(");
    sub_9EC740((__int64)v42, v27, "(", v38, 0);
    if ( v42[0] && v42[1] )
      sub_14C6E00(v49, (unsigned __int64)v42);
    v39 = j__strlen(")");
    v40 = sub_13DC060(
            v41,
            0,
            *(__int64 **)(*(_QWORD *)(a1 + 96) + 272LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            v22,
            *(double *)v23.m128_u64);
    v31 = v40;
    sub_9EC740((__int64)&v45, v40, ")", v39, 0);
    if ( (_DWORD)v45 && HIDWORD(v45) )
    {
      v31 = (__int64)&v45;
      sub_14C6E00(v49, (unsigned __int64)&v45);
    }
    if ( v47 != &v48 )
      operator delete(v47);
    if ( v43 != &v44 )
      operator delete(v43);
    sub_AEA040((__int64)v49);
  }
  else
  {
    sub_147B460((__int64)&v50);
    sub_1564820(v49, a1, a3, 1720);
    v31 = (__int64)&v45;
    v45 = __PAIR64__(v30, a3);
    v46 = 1;
    sub_AEC610(v49, (__int64 *)&v45);
    sub_AEA040((__int64)v49);
  }
  v36 = sub_14D4CB0(a1, *(double *)v22.m128i_i64, v23, v31, v32, v33, v34, v35);
  if ( v36 == 1 )
    return 1;
  v37 = sub_14BFE70(a1, v36, v22);
  if ( v37 == 1 )
    return 1;
  else
    return sub_19BD000(*(_QWORD *)(a1 + 96), a3, a2, 0, v37 & 0xFFFFFFFFFFFFFFFELL);
}
