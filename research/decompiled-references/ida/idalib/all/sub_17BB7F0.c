__int64 __fastcall sub_17BB7F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  unsigned int v8; // r12d
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rbx
  _QWORD *v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // r15
  unsigned __int64 v28; // r14
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128i si128; // xmm0
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rdx
  size_t v38; // rbp
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // r12
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  void *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  void *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  void *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // [rsp+0h] [rbp-F8h]
  __int64 v63; // [rsp+0h] [rbp-F8h]
  __int64 v64; // [rsp+8h] [rbp-F0h]
  __int64 v65; // [rsp+8h] [rbp-F0h]
  void *ptr[2]; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+20h] [rbp-D8h]
  void *v68; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v69; // [rsp+38h] [rbp-C0h]
  __int64 v70; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int8 *v71[3]; // [rsp+50h] [rbp-A8h] BYREF
  int v72; // [rsp+68h] [rbp-90h]
  char v73; // [rsp+6Ch] [rbp-8Ch]
  char v74; // [rsp+A8h] [rbp-50h]
  unsigned int v75; // [rsp+B0h] [rbp-48h]
  char v76; // [rsp+B4h] [rbp-44h]

  v8 = a3;
  v10 = *(_QWORD *)(a1 + 544);
  if ( !(_BYTE)a4 || *(char *)(*(_QWORD *)(a1 + 608) + 8LL) >= 0 )
  {
    if ( v10 )
    {
      while ( (unsigned __int8)sub_B8E180(v10) )
      {
        v16 = sub_B91570(v10, a2, v12, v13, v14, v15);
        if ( (*(_BYTE *)(v16 + 8) & 0x7Fu) - 35 <= 3 && v16 != 72 )
        {
          v17 = *(_QWORD *)(sub_B8C1B0(v16) + 16);
          if ( (v17 & 4) != 0 )
            v11 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v11 = v17 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v11 )
            v11 -= 64LL;
          if ( (unsigned __int8)sub_B96D40(v11) )
          {
            v43 = sub_B72690(v16);
            if ( !v43 )
              return 0;
            v62 = v43 - 64;
            if ( v43 == 64 )
              return 0;
            v27 = sub_E91A00(*(_QWORD **)(a1 + 248), 0, *(_QWORD *)(v43 - 16));
            sub_168B9F0((__int64)&v68, (__int64 *)(a1 + 8), v8, 0x1653u, 0);
            if ( v74 )
            {
              sub_AE9DF0(v71, a2, 5u);
            }
            else
            {
              if ( !v76 )
                goto LABEL_30;
              v44 = sub_168B9E0(&v68);
              v48 = (void *)v69.m128i_i64[1];
              if ( v69.m128i_i64[1] )
              {
                v64 = v44;
                v48 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69.m128i_i64[1] + 32LL))(v69.m128i_i64[1]);
                v44 = v64;
              }
              ptr[0] = v48;
              v49 = sub_1587BC0(v44, (__int64 *)ptr, v44, v45, v46, v47);
              sub_AE9DF0((unsigned __int8 **)(*v49 + 32LL * v75 + 8), a2, 5u);
            }
            if ( v74 )
            {
              sub_AE9DF0(v71, v62, 0xAu);
            }
            else if ( v76 )
            {
              v50 = sub_168B9E0(&v68);
              v54 = (void *)v69.m128i_i64[1];
              if ( v69.m128i_i64[1] )
              {
                v65 = v50;
                v54 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69.m128i_i64[1] + 32LL))(v69.m128i_i64[1]);
                v50 = v65;
              }
              ptr[0] = v54;
              v55 = sub_1587BC0(v50, (__int64 *)ptr, v50, v51, v52, v53);
              sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v75 + 8), v62, 0xAu);
            }
            goto LABEL_30;
          }
        }
        v10 = sub_B8ED10(v16);
        if ( !v10 )
          return 0;
      }
    }
    return 0;
  }
  v20 = *(_QWORD **)(a1 + 248);
  while ( 1 )
  {
    v22 = sub_B91570(v10, a2, a3, a4, a5, a6);
    v25 = *(_BYTE *)(v22 + 8) & 0x7F;
    if ( (_BYTE)v25 == 24 )
      break;
    v26 = (unsigned int)(unsigned __int8)v25 - 59;
    if ( (unsigned int)v26 <= 2 && v22 != 64 )
    {
      v27 = sub_E91A00(v20, 0, *(_QWORD *)(v22 - 16));
      goto LABEL_28;
    }
    if ( !(_BYTE)v25 )
    {
      v27 = sub_E91110(v20, a2, v25, v26, v23, v24);
      goto LABEL_28;
    }
LABEL_22:
    v10 = sub_B8ED10(v22);
  }
  if ( v22 == 48 )
    goto LABEL_22;
  if ( (*(_BYTE *)(v22 + 9) & 0x20) != 0 )
    goto LABEL_22;
  v21 = *(_QWORD *)(v22 - 8);
  if ( (v21 & 7) != 0 || (v21 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_22;
  v27 = sub_E91C40(v20, 0, v22 - 48);
LABEL_28:
  sub_168B9F0((__int64)&v68, (__int64 *)(a1 + 8), v8, 0x15F0u, 0);
  if ( v74 )
  {
    sub_AE9DF0(v71, a2, 5u);
  }
  else if ( v76 )
  {
    v56 = sub_168B9E0(&v68);
    v60 = (void *)v69.m128i_i64[1];
    if ( v69.m128i_i64[1] )
    {
      v63 = v56;
      v60 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69.m128i_i64[1] + 32LL))(v69.m128i_i64[1]);
      v56 = v63;
    }
    ptr[0] = v60;
    v61 = sub_1587BC0(v56, (__int64 *)ptr, v56, v57, v58, v59);
    sub_AE9DF0((unsigned __int8 **)(*v61 + 32LL * v75 + 8), a2, 5u);
  }
LABEL_30:
  sub_15F7200(&v68);
  v28 = sub_AB77C0(*(_QWORD **)(a1 + 248), 6, (__int64)v27, a2);
  *(_OWORD *)ptr = 0;
  v29 = *(_QWORD **)(a1 + 248);
  v67 = 0;
  sub_E90890((__int64)ptr, v29, (__int64)v27, ((unsigned __int64)v8 << 32) | v8);
  sub_E911A0((__int64 *)ptr, *(_QWORD **)(a1 + 248), v30, v31, v32, v33);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v36 = v35;
  v68 = &v70;
  v72 = 0;
  v69 = si128;
  v73 = 0;
  sub_1EA6140(&v68, v28, 24, 8);
  *(_DWORD *)(v37 + 16) = v8;
  *(_DWORD *)v37 = 0;
  *(_QWORD *)(v37 + 8) = v36;
  v38 = v69.m128i_i64[0] - v69.m128i_i64[1];
  v42 = sub_A81BC0(*(_QWORD **)(a1 + 248), v28, v69.m128i_i32[0] - v69.m128i_i32[2], v39, v40, v41);
  memcpy(v42 + 1, (char *)v68 + v69.m128i_i64[1], v38);
  v18 = sub_1E61050(a1, v28, v42, *(double *)si128.m128i_i64, a8);
  if ( v68 && v68 != &v70 )
    operator delete[](v68);
  if ( HIDWORD(v67) )
    free(ptr[1]);
  return v18;
}
