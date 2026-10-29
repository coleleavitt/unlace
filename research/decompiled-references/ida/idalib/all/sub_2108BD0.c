unsigned __int64 __fastcall sub_2108BD0(__int64 a1, _BYTE *a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7)
{
  _BYTE *v8; // rsi
  _BYTE *v9; // rdx
  char v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  _BYTE *v16; // rsi
  _BYTE *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  int v27; // ebp
  __m128i si128; // xmm0
  char v29; // al
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  char v42; // bp
  __int64 v43; // rdx
  char v44; // cl
  __m128i v45; // xmm0
  char v46; // al
  char v47; // al
  bool v48; // zf
  unsigned __int64 v49; // rax
  __m128 v50; // [rsp+0h] [rbp-168h] BYREF
  __int64 v51; // [rsp+10h] [rbp-158h]
  int v52; // [rsp+18h] [rbp-150h]
  int v53; // [rsp+1Ch] [rbp-14Ch]
  __m128 v54; // [rsp+20h] [rbp-148h] BYREF
  __int64 v55; // [rsp+30h] [rbp-138h]
  __int64 v56; // [rsp+38h] [rbp-130h]
  __m128i v57; // [rsp+40h] [rbp-128h] BYREF
  char *v58; // [rsp+50h] [rbp-118h]
  __int16 v59; // [rsp+60h] [rbp-108h]
  __m128i v60; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v61[16]; // [rsp+80h] [rbp-E8h] BYREF
  __int16 v62; // [rsp+90h] [rbp-D8h]
  __m128i v63; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v64[32]; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v65; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v66; // [rsp+E0h] [rbp-88h] BYREF
  int v67; // [rsp+F0h] [rbp-78h]
  char v68; // [rsp+F4h] [rbp-74h]
  __m128i v69; // [rsp+100h] [rbp-68h] BYREF
  __m128i v70; // [rsp+110h] [rbp-58h] BYREF
  int v71; // [rsp+120h] [rbp-48h]
  char v72; // [rsp+124h] [rbp-44h]
  __int64 v73; // [rsp+128h] [rbp-40h]

  v52 = a4;
  v56 = a5;
  v53 = a6;
  LOBYTE(v51) = a5;
  if ( BYTE4(a7) )
  {
    if ( a2 )
    {
      v60.m128i_i64[0] = (__int64)v61;
      sub_2100260(&v60, a2, (__int64)&a2[a3]);
      v8 = (_BYTE *)v60.m128i_i64[0];
      v9 = (_BYTE *)(v60.m128i_i64[0] + v60.m128i_i64[1]);
    }
    else
    {
      v9 = v61;
      v61[0] = 0;
      v60.m128i_i64[0] = (__int64)v61;
      v8 = v61;
      v60.m128i_i64[1] = 0;
    }
    v10 = 0;
    v65.m128i_i64[0] = (__int64)&v66;
    sub_2100260(&v65, v8, (__int64)v9);
    v50.m128_i8[0] = BYTE4(a7);
    v68 = 0;
    v67 = a7;
  }
  else
  {
    if ( a2 )
    {
      v63.m128i_i64[0] = (__int64)v64;
      sub_2100260(&v63, a2, (__int64)&a2[a3]);
      v16 = (_BYTE *)v63.m128i_i64[0];
      v17 = (_BYTE *)(v63.m128i_i64[0] + v63.m128i_i64[1]);
    }
    else
    {
      v17 = v64;
      v64[0] = 0;
      v63.m128i_i64[0] = (__int64)v64;
      v16 = v64;
      v63.m128i_i64[1] = 0;
    }
    v10 = 1;
    v65.m128i_i64[0] = (__int64)&v66;
    sub_2100260(&v65, v16, (__int64)v17);
    v50.m128_i8[0] = BYTE4(a7);
    v68 = 1;
    LOBYTE(v67) = v51;
  }
  v69.m128i_i64[0] = (__int64)&v70;
  if ( (__m128i *)v65.m128i_i64[0] == &v66 )
  {
    v70 = _mm_load_si128(&v66);
  }
  else
  {
    v69.m128i_i64[0] = v65.m128i_i64[0];
    v70.m128i_i64[0] = v66.m128i_i64[0];
  }
  v11 = v65.m128i_i64[1];
  v65.m128i_i64[1] = 0;
  v66.m128i_i8[0] = 0;
  v69.m128i_i64[1] = v11;
  v65.m128i_i64[0] = (__int64)&v66;
  v72 = v10;
  v71 = v67;
  v73 = 0;
  v12 = (_QWORD *)sub_2105CE0((_QWORD *)(a1 + 2144), &v69);
  v55 = v13;
  if ( (__m128i *)v69.m128i_i64[0] != &v70 )
    operator delete((void *)v69.m128i_i64[0]);
  if ( (__m128i *)v65.m128i_i64[0] != &v66 )
    operator delete((void *)v65.m128i_i64[0]);
  if ( v10 && (_BYTE *)v63.m128i_i64[0] != v64 )
    operator delete((void *)v63.m128i_i64[0]);
  if ( v50.m128_i8[0] && (_BYTE *)v60.m128i_i64[0] != v61 )
    operator delete((void *)v60.m128i_i64[0]);
  if ( (_BYTE)v55 )
  {
    v18 = v12[4];
    v19 = v12[5];
    v50.m128_u64[0] = v18;
    if ( BYTE4(a7) )
    {
      v69.m128i_i64[0] = v18;
      LOWORD(v71) = 261;
      v69.m128i_i64[1] = v19;
      v20 = sub_2108A30(a1, (const void ***)&v69);
      v21 = v20;
      if ( (*(_BYTE *)(v20 + 8) & 1) != 0 )
      {
        v22 = *(__int64 **)(v20 - 8);
        v23 = *v22;
        v24 = (__int64)(v22 + 3);
      }
      else
      {
        v23 = 0;
        v24 = 0;
      }
      v51 = v20;
      v50 = _mm_loadh_ps((const double *)v50.m128_u64);
      v25 = sub_2100420(v24, v23);
      v51 = v26;
      v27 = v25;
      v14 = sub_2105F40((__int64 *)(a1 + 1056), 216, 3u);
      sub_2113B00(v14, 5, v27, v51, (unsigned __int8)(v52 - 2) <= 1u, 0, v21);
      si128 = _mm_load_si128((const __m128i *)&v50);
      *(_BYTE *)(v14 + 174) = 0;
      *(_QWORD *)(v14 + 192) = v19;
      *(_QWORD *)v14 = off_2C73138;
      *(_BYTE *)(v14 + 204) = 1;
      *(_DWORD *)(v14 + 200) = a7;
      v29 = v53;
      *(__m128i *)(v14 + 176) = si128;
      *(_BYTE *)(v14 + 208) = v29;
      *(_BYTE *)(v14 + 212) = v52;
      sub_21237D0(v21, v14);
      *(_BYTE *)(v14 + 32) = 5;
      v12[9] = v14;
      v30 = sub_2105F80(a1);
      *(_QWORD *)(v30 + 8) = v14;
      **(_QWORD **)(v14 + 8) = v30;
      *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) = v30;
    }
    else
    {
      LOWORD(v67) = 259;
      v65.m128i_i64[0] = (__int64)"]";
      v60.m128i_i64[0] = (__int64)sub_201FC60(v51);
      v60.m128i_i64[1] = v31;
      v57.m128i_i64[0] = v50.m128_u64[0];
      v62 = 261;
      v59 = 773;
      v58 = "[";
      v57.m128i_i64[1] = v19;
      sub_A41580(&v63, &v57, &v60, v32, v33, 261);
      sub_A41580(&v69, &v63, &v65, v34, v35, v36);
      v37 = sub_2108A30(a1, (const void ***)&v69);
      v21 = v37;
      if ( (*(_BYTE *)(v37 + 8) & 1) != 0 )
      {
        v38 = *(__int64 **)(v37 - 8);
        v39 = *v38;
        v40 = (__int64)(v38 + 3);
      }
      else
      {
        v39 = 0;
        v40 = 0;
      }
      v55 = v37;
      v54 = _mm_loadh_ps((const double *)v50.m128_u64);
      v41 = sub_2100420(v40, v39);
      v42 = BYTE1(v56);
      v55 = v43;
      v50.m128_u64[0] = v41;
      v14 = sub_2105F40((__int64 *)(a1 + 1056), 216, 3u);
      sub_2113B00(v14, 5, v50.m128_i32[0], v55, (unsigned __int8)(v52 - 2) <= 1u, v42 == 3 && (_BYTE)v51 != 16, 0);
      v44 = v51;
      v45 = _mm_load_si128((const __m128i *)&v54);
      *(_BYTE *)(v14 + 173) = v42;
      *(_BYTE *)(v14 + 172) = v44;
      *(_BYTE *)(v14 + 174) = 1;
      *(_QWORD *)v14 = off_2C73138;
      v46 = v53;
      *(_QWORD *)(v14 + 192) = v19;
      *(_BYTE *)(v14 + 208) = v46;
      v47 = v52;
      *(_BYTE *)(v14 + 204) = 0;
      *(_BYTE *)(v14 + 212) = v47;
      *(__m128i *)(v14 + 176) = v45;
      sub_21237D0(v21, v14);
      *(_WORD *)(v21 + 32) = 363;
      if ( v42 )
      {
        if ( (_BYTE)v51 )
        {
          *(_BYTE *)(v14 + 32) = 2;
          v12[9] = v14;
          v49 = sub_2105F80(a1);
          *(_QWORD *)(v49 + 8) = v14;
          **(_QWORD **)(v14 + 8) = v49;
          *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) = v49;
          return v14;
        }
        *(_BYTE *)(v14 + 32) = 5;
        v12[9] = v14;
        v30 = sub_2105F80(a1);
        *(_QWORD *)(v30 + 8) = v14;
        **(_QWORD **)(v14 + 8) = v30;
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) = v30;
      }
      else
      {
        v12[9] = v14;
        v30 = sub_2105F80(a1);
        v48 = (_BYTE)v51 == 0;
        *(_QWORD *)(v30 + 8) = v14;
        **(_QWORD **)(v14 + 8) = v30;
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) = v30;
        if ( !v48 )
          return v14;
      }
    }
    *(_QWORD *)v21 = v30;
  }
  else
  {
    v14 = v12[9];
    if ( (_BYTE)v53 != *(_BYTE *)(v14 + 208) )
      sub_2221C70("section's multiply symbols policy does not match", 1);
  }
  return v14;
}
