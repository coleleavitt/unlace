void __fastcall sub_1815810(__int64 *a1, __int64 a2)
{
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  char *v6; // r12
  _WORD *v7; // r15
  size_t v8; // rdx
  __int64 v9; // r13
  unsigned int v10; // edx
  _WORD *v11; // rax
  size_t v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE *v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rdi
  size_t v19; // rdx
  void *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rax
  __int64 *v29; // [rsp+0h] [rbp-1C8h] BYREF
  void **v30; // [rsp+8h] [rbp-1C0h]
  char v31; // [rsp+16h] [rbp-1B2h]
  char v32; // [rsp+17h] [rbp-1B1h]
  __int64 v33; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v34; // [rsp+2Ch] [rbp-19Ch] BYREF
  __int64 v35; // [rsp+34h] [rbp-194h]
  __m128i v36; // [rsp+40h] [rbp-188h] BYREF
  char v37; // [rsp+50h] [rbp-178h]
  __m128i v38; // [rsp+60h] [rbp-168h] BYREF
  char v39; // [rsp+70h] [rbp-158h]
  void *v40; // [rsp+80h] [rbp-148h] BYREF
  signed __int64 v41; // [rsp+88h] [rbp-140h]
  void *src; // [rsp+A0h] [rbp-128h] BYREF
  size_t n; // [rsp+A8h] [rbp-120h]
  _QWORD v44[2]; // [rsp+B0h] [rbp-118h] BYREF
  unsigned __int64 v45; // [rsp+C0h] [rbp-108h] BYREF
  char v46; // [rsp+C8h] [rbp-100h]
  __int64 v47; // [rsp+CCh] [rbp-FCh]
  char v48; // [rsp+D4h] [rbp-F4h]
  void *dest; // [rsp+D8h] [rbp-F0h]
  __m128 v50; // [rsp+E0h] [rbp-E8h] BYREF
  char v51; // [rsp+F8h] [rbp-D0h]
  _BYTE v52[200]; // [rsp+100h] [rbp-C8h] BYREF

  v34 = sub_FA77A0(a2);
  v3 = sub_F96220(a2);
  v5 = v4;
  v6 = v3;
  sub_FAE730(&v36, a2, v3, v4);
  v29 = a1 + 1;
  v31 = v37;
  if ( v37 )
  {
    v5 = v36.m128i_i64[1];
    v6 = (char *)v36.m128i_i64[0];
    v7 = sub_F96270((_BYTE *)a2, v36.m128i_i64[0], v36.m128i_i64[1]);
    v9 = v8;
    sub_FBC9C0(&v38, a2, (__int64)v6, v5, v7, v8, *(_QWORD *)(a1[31] + 17448), a1[29]);
    v32 = v39;
    if ( v39 )
    {
      v9 = v38.m128i_i64[1];
      v7 = (_WORD *)v38.m128i_i64[0];
    }
    v30 = &v40;
    sub_FA7520(&v40, a2, v6, v5, v7, v9);
    v10 = v34;
  }
  else
  {
    v11 = sub_F96270((_BYTE *)a2, (__int64)v6, v5);
    sub_FBC9C0(&v38, a2, (__int64)v6, v5, v11, v12, *(_QWORD *)(a1[31] + 17448), a1[29]);
    v32 = v39;
    if ( !v39 )
    {
      sub_168B9F0((__int64)v52, v29, v34, 0x9Fu, 0);
      v14 = sub_15DD120((__int64)v52, a2);
      sub_15884C0(v14, (__int64 *)&v34);
      sub_15F7200(v52);
      return;
    }
    v9 = v38.m128i_i64[1];
    v7 = (_WORD *)v38.m128i_i64[0];
    v30 = &v40;
    sub_FA7520(&v40, a2, v6, v5, v38.m128i_i64[0], v38.m128i_i64[1]);
    v10 = *(_DWORD *)(a2 + 24);
  }
  sub_168B9F0((__int64)v52, v29, v10, 0xA0u, 0);
  v13 = sub_15DD120((__int64)v52, a2);
  if ( *(_BYTE *)(v13 + 120) )
  {
    sub_AEC220((unsigned __int8 **)(v13 + 32), v40, v41);
  }
  else if ( *(_BYTE *)(v13 + 132) )
  {
    v29 = (__int64 *)v13;
    v21 = sub_168B9E0((_QWORD *)v13);
    v24 = v29;
    v25 = v21;
    v26 = (__int64 *)v29[2];
    if ( v26 )
    {
      v27 = *v26;
      v33 = v25;
      v26 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v27 + 32))(v26);
      v25 = v33;
      v24 = v29;
    }
    v29 = v24;
    v45 = (unsigned __int64)v26;
    v28 = sub_1587BC0(v25, (__int64 *)&v45, (__int64)v24, v25, v22, v23);
    sub_AEC220((unsigned __int8 **)(*v28 + 32LL * *((unsigned int *)v29 + 32) + 8), v40, v41);
  }
  if ( *(_DWORD *)(a2 + 20) )
  {
    if ( v31 )
    {
      LODWORD(v35) = *(_DWORD *)(a2 + 16);
      HIDWORD(v35) = v35;
      sub_18056E0((__int64)&v45, v35, 1, v6, v5);
      sub_1589170((__int64)v52, &v45);
      if ( dest != &v50.m128_u16[4] )
        operator delete(dest);
    }
    if ( !v32 )
      goto LABEL_12;
    v20 = *(void **)(a2 + 24);
    LOBYTE(n) = 1;
    src = v20;
    sub_18056E0((__int64)&v45, (__int64)v20, 1, v7, v9);
    sub_1589170((__int64)v52, &v45);
    v18 = dest;
    if ( dest == &v50.m128_u16[4] )
      goto LABEL_12;
    goto LABEL_23;
  }
  v48 = 0;
  v47 = 0;
  dest = &v50.m128_u16[4];
  v50.m128_u64[0] = 0;
  v50.m128_i8[8] = 0;
  v51 = 0;
  v45 = v34;
  v46 = 1;
  src = v44;
  sub_1804580(&src, v40, (__int64)v40 + v41);
  v15 = dest;
  if ( src == v44 )
  {
    v19 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v44[0];
      else
        memcpy(dest, src, n);
      v19 = n;
      v15 = dest;
    }
    v50.m128_u64[0] = v19;
    v15[v19] = 0;
    v15 = src;
  }
  else
  {
    if ( dest == &v50.m128_u16[4] )
    {
      v29 = (__int64 *)v44[0];
      dest = src;
      v50 = _mm_loadh_ps((const double *)&v29);
    }
    else
    {
      v29 = (__int64 *)v44[0];
      v16 = v50.m128_u64[1];
      dest = src;
      v50 = _mm_loadh_ps((const double *)&v29);
      if ( v15 )
      {
        src = v15;
        v44[0] = v16;
        goto LABEL_20;
      }
    }
    v15 = v44;
    src = v44;
  }
LABEL_20:
  n = 0;
  *v15 = 0;
  if ( src != v44 )
    operator delete(src);
  v17 = sub_1589170((__int64)v52, &v45);
  sub_15884C0(v17, (__int64 *)&v34);
  v18 = dest;
  if ( dest == &v50.m128_u16[4] )
    goto LABEL_12;
LABEL_23:
  operator delete(v18);
LABEL_12:
  sub_15F7200(v52);
  if ( v40 != v30 + 2 )
    operator delete(v40);
}
