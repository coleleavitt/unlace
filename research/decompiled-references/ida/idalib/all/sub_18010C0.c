__int64 __fastcall sub_18010C0(__int64 *a1, __int64 a2, unsigned int a3, double a4, double a5)
{
  unsigned __int64 v6; // r14
  int v7; // r15d
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 result; // rax
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __m128i si128; // xmm0
  _DWORD *v21; // rdx
  _DWORD *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  size_t v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r14
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // [rsp+0h] [rbp-108h]
  __int64 v40; // [rsp+0h] [rbp-108h]
  _QWORD *v41; // [rsp+8h] [rbp-100h]
  __int128 v42; // [rsp+10h] [rbp-F8h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-E8h]
  __int128 v44; // [rsp+30h] [rbp-D8h]
  void *v45; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v46; // [rsp+48h] [rbp-C0h]
  __int64 v47; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v48; // [rsp+60h] [rbp-A8h] BYREF
  int v49; // [rsp+78h] [rbp-90h]
  char v50; // [rsp+7Ch] [rbp-8Ch]
  char v51; // [rsp+B8h] [rbp-50h]
  unsigned int v52; // [rsp+C0h] [rbp-48h]
  char v53; // [rsp+C4h] [rbp-44h]

  v6 = a1[68];
  if ( !v6 )
    return 0;
  do
  {
    if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 59 <= 2 )
    {
LABEL_3:
      v7 = 0;
      v8 = v6 - 64;
      if ( v6 != 64 && sub_B97230(v6 - 64) )
        v7 = sub_1800CC0((__int64)a1, a2, a3, (__int64 *)(v6 - 64), v9, v10);
      goto LABEL_6;
    }
    while ( 1 )
    {
      v8 = 0;
      v7 = 0;
LABEL_6:
      v11 = *(_QWORD *)(sub_B8C1B0(v6) + 16);
      if ( (v11 & 4) == 0 )
        break;
      v6 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v7 || !v6 )
        goto LABEL_9;
      if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 59 <= 2 )
        goto LABEL_3;
    }
    v6 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( v6 && !v7 );
LABEL_9:
  if ( v7 != 2 )
    return 0;
  sub_168B9F0((__int64)&v45, a1 + 1, a3, 0x15BCu, 0);
  if ( v51 )
  {
    sub_AE9DF0(&v48, a2, 5u);
  }
  else if ( v53 )
  {
    v36 = sub_168B9E0(&v45);
    v37 = v46.m128i_i64[1];
    if ( v46.m128i_i64[1] )
      v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46.m128i_i64[1] + 32LL))(v46.m128i_i64[1]);
    *(_QWORD *)&v42 = v37;
    v38 = sub_1587BC0(v36, (__int64 *)&v42, v32, v33, v34, v35);
    sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * v52 + 8), a2, 5u);
  }
  sub_15F7200(&v45);
  v13 = (_QWORD *)a1[31];
  v18 = sub_A7A9D0((__int64)v13, v8, v14, v15, v16, v17);
  v41 = sub_E91A00(v13, 0, *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL));
  v19 = sub_AB77C0(v13, 6, (__int64)v41, a2);
  v42 = 0;
  *(_OWORD *)ptr = 0;
  v44 = 0;
  sub_15AB890((__int64 *)&v42, v13, (__int64)v41, ((unsigned __int64)a3 << 32) | a3);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v45 = &v47;
  v49 = 0;
  v46 = si128;
  v50 = 0;
  sub_1EA6140(&v45, v19, 24, 8);
  v21[4] = a3;
  v22 = v21;
  *v21 = 0;
  sub_15AB9E0((__int64)&v42, v13, (__int64)v21, v23, v24, v25);
  *((_QWORD *)v22 + 1) = v26;
  v27 = v46.m128i_i64[0] - v46.m128i_i64[1];
  v31 = sub_A81BC0(v13, v19, v46.m128i_i32[0] - v46.m128i_i32[2], v28, v29, v30);
  memcpy(v31 + 1, (char *)v45 + v46.m128i_i64[1], v27);
  result = sub_1E61050(a1, v19, v31, *(double *)si128.m128i_i64, a5);
  if ( v45 != &v47 && v45 )
  {
    v39 = result;
    operator delete[](v45);
    result = v39;
  }
  if ( HIDWORD(ptr[1]) )
  {
    v40 = result;
    free(ptr[0]);
    return v40;
  }
  return result;
}
