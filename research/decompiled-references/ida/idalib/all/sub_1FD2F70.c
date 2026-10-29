__m128i **__fastcall sub_1FD2F70(__m128i **a1, const void *a2, size_t a3)
{
  size_t v5; // rax
  __int64 v6; // rax
  __m128i *v7; // rax
  __int64 v9; // rax
  _UNKNOWN *__ptr32 *v10; // r12
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __m128i *v13; // r12
  __int64 v14; // rax
  char *v15; // rcx
  char *v16; // r12
  char *v17; // rbx
  char *v18; // r12
  char *v19; // rdi
  __m128i *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 v23; // [rsp+8h] [rbp-440h]
  char *v24; // [rsp+8h] [rbp-440h]
  __int64 v25; // [rsp+10h] [rbp-438h]
  __int64 v26[4]; // [rsp+50h] [rbp-3F8h] BYREF
  __int16 v27; // [rsp+70h] [rbp-3D8h]
  __int64 v28[2]; // [rsp+80h] [rbp-3C8h] BYREF
  char v29; // [rsp+90h] [rbp-3B8h]
  __int16 v30; // [rsp+A0h] [rbp-3A8h]
  void *ptr; // [rsp+B0h] [rbp-398h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-390h]
  _BYTE v33[136]; // [rsp+C8h] [rbp-380h] BYREF
  __m128i v34; // [rsp+150h] [rbp-2F8h] BYREF
  __m128i v35; // [rsp+160h] [rbp-2E8h] BYREF
  __int64 v36; // [rsp+170h] [rbp-2D8h]
  __int128 v37; // [rsp+178h] [rbp-2D0h] BYREF
  __int64 v38; // [rsp+188h] [rbp-2C0h]
  char *v39; // [rsp+190h] [rbp-2B8h] BYREF
  __int64 v40; // [rsp+198h] [rbp-2B0h]
  _BYTE v41[256]; // [rsp+1A0h] [rbp-2A8h] BYREF
  __int64 v42; // [rsp+2A0h] [rbp-1A8h]
  _OWORD v43[2]; // [rsp+2B0h] [rbp-198h] BYREF
  __int64 v44; // [rsp+2D0h] [rbp-178h]
  __int128 v45; // [rsp+2D8h] [rbp-170h] BYREF
  __int64 v46; // [rsp+2E8h] [rbp-160h]
  char *v47; // [rsp+2F0h] [rbp-158h] BYREF
  __int64 v48; // [rsp+2F8h] [rbp-150h]
  _QWORD v49[41]; // [rsp+300h] [rbp-148h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v33;
  if ( a3 > 0x80 )
  {
    sub_2236E10(&ptr, v33, a3, 1);
    v19 = (char *)ptr + si128.m128i_i64[0];
    goto LABEL_34;
  }
  v5 = a3;
  if ( a3 )
  {
    v19 = v33;
LABEL_34:
    memcpy(v19, a2, a3);
    v5 = a3 + si128.m128i_i64[0];
  }
  si128.m128i_i64[0] = v5;
  LOWORD(v44) = 257;
  v26[0] = (__int64)"modules.idx";
  v27 = 259;
  LOWORD(v36) = 257;
  v30 = 257;
  sub_228A3B0(&ptr, v26, v28, &v34, v43);
  v6 = si128.m128i_i64[0];
  if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
  {
    sub_2236E10(&ptr, v33, si128.m128i_i64[0] + 1, 1);
    v6 = si128.m128i_i64[0];
  }
  *((_BYTE *)ptr + v6) = 0;
  LOWORD(v44) = 257;
  if ( *(_BYTE *)ptr )
  {
    *(_QWORD *)&v43[0] = ptr;
    LOBYTE(v44) = 3;
  }
  sub_2230FD0(v28, v43, 0, 1, 0, 0);
  if ( (v29 & 1) != 0 )
  {
    sub_2220500(v43, LODWORD(v28[0]), v28[1]);
    v7 = *(__m128i **)&v43[0];
    *a1 = nullptr;
    a1[1] = v7;
    goto LABEL_9;
  }
  v9 = v28[0];
  v28[0] = 0;
  v10 = (_UNKNOWN *__ptr32 *)&unk_2671C14;
  v25 = v9;
  sub_2231100(v43, v9);
  v35 = 0u;
  v34 = (__m128i)v43[0];
  v38 = 0;
  v36 = 0x200000000LL;
  v39 = v41;
  v40 = 0x800000000LL;
  v42 = 0;
  v37 = 0;
  do
  {
    v23 = *(_BYTE *)v10;
    sub_A0B360((__int64)v43, (__int64)&v34, 8u);
    if ( (BYTE8(v43[0]) & 1) != 0 )
    {
      v20 = *(__m128i **)&v43[0];
      *a1 = nullptr;
      *(_QWORD *)&v43[0] = 0;
      a1[1] = v20;
LABEL_37:
      sub_A0AE70((__int64 *)v43);
      goto LABEL_26;
    }
    if ( *(_QWORD *)&v43[0] != v23 )
    {
      v21 = std::_V2::generic_category((std::_V2 *)v43);
      sub_A09EA0((__int64)v26, 0x54u, v21, "expected signature BCGI");
      v22 = v26[0];
      *a1 = nullptr;
      a1[1] = (__m128i *)v22;
      goto LABEL_37;
    }
    v10 = (_UNKNOWN *__ptr32 *)((char *)v10 + 1);
    sub_A0AE70((__int64 *)v43);
  }
  while ( jpt_1FE2ED4 != v10 );
  v11 = _mm_load_si128(&v34);
  v12 = _mm_load_si128(&v35);
  v26[0] = v25;
  v44 = v36;
  v43[0] = v11;
  v45 = v37;
  v43[1] = v12;
  v37 = 0u;
  v46 = v38;
  v47 = (char *)v49;
  v48 = 0x800000000LL;
  v38 = 0;
  if ( (_DWORD)v40 )
    sub_1EC2EC0((__int64)&v47, (__int64)&v39);
  v49[32] = v42;
  v13 = (__m128i *)operator new(0x5D8u);
  sub_1FD1CD0(v13, v26, (__int64)v43);
  v14 = (unsigned int)v48;
  *a1 = v13;
  v15 = v47;
  a1[1] = nullptr;
  v14 *= 32;
  v16 = &v15[v14];
  v24 = v15;
  if ( v15 != &v15[v14] )
  {
    do
    {
      v16 -= 32;
      sub_A0AD20((__int64)(v16 + 8));
    }
    while ( v24 != v16 );
    v16 = v47;
  }
  if ( v16 != (char *)v49 )
    free(v16);
  sub_A0AD20((__int64)&v45);
  if ( v26[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26[0] + 8LL))(v26[0]);
  v25 = 0;
LABEL_26:
  v17 = v39;
  v18 = &v39[32 * (unsigned int)v40];
  if ( v39 != v18 )
  {
    do
    {
      v18 -= 32;
      sub_A0AD20((__int64)(v18 + 8));
    }
    while ( v17 != v18 );
    v18 = v39;
  }
  if ( v18 != v41 )
    free(v18);
  sub_A0AD20((__int64)&v37);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
LABEL_9:
  sub_FC2AF0(v28);
  if ( ptr != v33 )
    free(ptr);
  return a1;
}
