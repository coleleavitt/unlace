const __m128i *__fastcall sub_1854420(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        unsigned int a4,
        int a5,
        __int32 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  char v9; // r13
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  char v14; // bp
  const __m128i *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r15
  unsigned __int64 v36; // rax
  __int32 v37; // eax
  __m128i v38; // xmm2
  unsigned __int64 v39; // rax
  __m128i v40; // xmm3
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  void *v44; // rdx
  char *v45; // r13
  _QWORD *v46; // rbx
  unsigned __int64 v47; // r12
  unsigned __int64 v52; // [rsp+38h] [rbp-1A0h] BYREF
  __m128i v53; // [rsp+40h] [rbp-198h] BYREF
  __int64 v54; // [rsp+50h] [rbp-188h] BYREF
  __m128i v55; // [rsp+60h] [rbp-178h] BYREF
  _QWORD v56[16]; // [rsp+70h] [rbp-168h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+F8h] [rbp-E0h]
  __int64 v59; // [rsp+100h] [rbp-D8h]
  _BYTE v60[64]; // [rsp+108h] [rbp-D0h] BYREF
  void *v61[2]; // [rsp+148h] [rbp-90h]
  __int64 v62; // [rsp+158h] [rbp-80h]
  _QWORD *v63; // [rsp+160h] [rbp-78h]
  __m128i v64; // [rsp+168h] [rbp-70h]
  __int64 v65; // [rsp+178h] [rbp-60h]
  __int64 v66; // [rsp+180h] [rbp-58h]
  __int64 v67; // [rsp+188h] [rbp-50h]
  __int64 v68; // [rsp+190h] [rbp-48h]

  v9 = 0;
  v10 = (__int64)a1;
  if ( ((*(_BYTE *)(sub_B8EAA0(a1[68]) + 8) + 70) & 0x7Fu) <= 3 )
  {
    v53.m128i_i64[0] = a8[5];
    v53.m128i_i32[2] = a6;
    sub_B85890(&v54, v53.m128i_i64[0]);
    ptr = v60;
    v40 = _mm_load_si128(&v53);
    v59 = 0x800000000LL;
    *(_OWORD *)v61 = 0;
    v64 = v40;
    v65 = v54;
    v57 = 0;
    v62 = 0;
    v63 = a1;
    v66 = 0;
    v67 = 8;
    v68 = 65537;
    sub_1A395A0(&v57);
    sub_1A48440(a1, &v57, a1[68], 0);
    v44 = ptr;
    if ( (char *)ptr + 8 * (unsigned int)v59 == ptr )
    {
LABEL_38:
      v9 = 0;
    }
    else
    {
      v45 = (char *)ptr + 8 * (unsigned int)v59;
      v46 = ptr;
      while ( 1 )
      {
        v47 = *v46 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v47 + 28) & 0x7F) == 0x50
          && a8 == sub_F631C0(
                     *(_QWORD *)(**(_QWORD **)(v47 + 64) & 0xFFFFFFFFFFFFFFF0LL),
                     (__int64)&v57,
                     (__int64)v44,
                     v41,
                     v42,
                     v43) )
        {
          break;
        }
        if ( v45 == (char *)++v46 )
        {
          v10 = (__int64)a1;
          goto LABEL_38;
        }
      }
      v10 = (__int64)a1;
      sub_168B9F0((__int64)&v55, a1 + 1, a4, 0x1523u, 0);
      v52 = __PAIR64__(a6, a5);
      sub_1587DB0((__int64)&v55, (__int64 *)&v52);
      sub_15F7200(&v55);
      sub_168B9F0((__int64)&v55, a1 + 1, *(_DWORD *)(v47 + 24), 0x193Bu, 0);
      LODWORD(v52) = 1;
      sub_1587D10((__int64)&v55, (int *)&v52);
      v9 = 1;
      sub_15F7200(&v55);
    }
    sub_169D230((__int64)&v57);
  }
  v11 = sub_169E850(v10, (__int64)a8, a6, nullptr);
  v12 = *(_QWORD *)(v10 + 544);
  v13 = *(_QWORD **)(v10 + 248);
  v14 = a3 & 3;
  if ( v11 )
  {
    v15 = (const __m128i *)sub_B9A4F0(v13, v12, a4, a5, a6, a7);
    v15[1].m128i_i8[13] = v15[1].m128i_i8[13] & 0x9F | (32 * v14);
    sub_B94AD0(*(__m128i **)(v10 + 544), (__int64)v15, v16, v17, v18, v19);
LABEL_4:
    sub_B88650((__int64)v15, 1);
    return v15;
  }
  v15 = (const __m128i *)sub_B9A4F0(v13, v12, a4, a5, a6, a7);
  v15[1].m128i_i8[13] = v15[1].m128i_i8[13] & 0x9F | (32 * v14);
  sub_B94AD0(*(__m128i **)(v10 + 544), (__int64)v15, v21, v22, v23, v24);
  if ( v9 )
    goto LABEL_4;
  sub_B7E870((__int64)a8, (__int64)v15, v25, v26, v27, v28);
  v33 = sub_B7E870((__int64)a8, (__int64)v15, v29, v30, v31, v32);
  if ( !v33 )
    v33 = a8;
  v34 = sub_B8E970((__int64)(v33 + 8));
  v35 = v34;
  if ( v34 )
  {
    if ( (*(_BYTE *)(v34 + 28) & 0x7F) != 0x21 )
    {
      do
      {
        v36 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v35 = v36;
        if ( !v36 )
          return v15;
      }
      while ( (*(_BYTE *)(v36 + 28) & 0x7F) != 0x21 );
    }
LABEL_13:
    v53.m128i_i64[0] = 0;
    v37 = *(_DWORD *)(v35 + 24);
    v55.m128i_i64[0] = *(_QWORD *)(v35 + 40);
    v55.m128i_i32[2] = v37;
    sub_B85890(v56, v55.m128i_i64[0]);
    v38 = _mm_load_si128(&v55);
    v59 = 0x800000000LL;
    *(_OWORD *)v61 = 0;
    v64 = v38;
    v65 = v56[0];
    v57 = 0;
    ptr = v60;
    v62 = 0;
    v63 = (_QWORD *)v10;
    v66 = 0;
    v67 = 0;
    v68 = 65537;
    sub_1A395A0(&v57);
    sub_1A49A10(v10, &v57, a2, 0, 0);
    sub_183D6B0(v10, a2, (int *)&v57);
    if ( !(unsigned __int8)sub_1853A70(v10, v15, v35, (__int64)&v57, (unsigned __int64 *)&v53) )
      sub_1846B70(v10, (__int64)a2, (__int64)v15, v35, v53.m128i_i64[0]);
    if ( BYTE3(v68) )
    {
      if ( (_DWORD)v57 == 5 )
      {
        if ( !BYTE4(v68) )
          goto LABEL_19;
        goto LABEL_29;
      }
      if ( !v61[1] || (*(_BYTE *)(v63[29] + 46LL) & 0x20) == 0 )
      {
LABEL_19:
        if ( v61[0] )
          sub_1A39780(v61[0]);
        if ( ptr != v60 )
          free(ptr);
        while ( 1 )
        {
          v39 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v35 = v39;
          if ( !v39 )
            return v15;
          if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x21 )
            goto LABEL_13;
        }
      }
      sub_1663B80(v63, (__int64)&v57);
    }
    if ( !BYTE4(v68) || (_DWORD)v57 != 5 )
      goto LABEL_19;
LABEL_29:
    sub_1A445B0(v63, &v57);
    goto LABEL_19;
  }
  return v15;
}
