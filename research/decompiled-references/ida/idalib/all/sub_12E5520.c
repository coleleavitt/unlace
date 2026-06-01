_QWORD *__fastcall sub_12E5520(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __m128 *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE *v13; // r13
  size_t v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r11d
  __int64 *v23; // r9
  _QWORD *v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rax
  _QWORD *v27; // r12
  void *v28; // r13
  int v29; // r15d
  __int64 i; // rcx
  __int64 *v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdx
  void **v34; // rax
  void *v35; // rcx
  _BYTE *v36; // rsi
  __int64 v37; // rdx
  unsigned __int16 *v38; // rdi
  __m128 *v39; // rbx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rdi
  size_t v44; // rdx
  __m128 *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // [rsp-10h] [rbp-E8h]
  __m128 *v48; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+8h] [rbp-D0h]
  __int64 v50; // [rsp+10h] [rbp-C8h]
  __int64 v51; // [rsp+18h] [rbp-C0h]
  __int64 v52; // [rsp+20h] [rbp-B8h]
  __int64 v53; // [rsp+28h] [rbp-B0h]
  const char *v54; // [rsp+30h] [rbp-A8h]
  __int64 v55; // [rsp+38h] [rbp-A0h]
  __int64 *v56; // [rsp+40h] [rbp-98h]
  _QWORD *v57; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+50h] [rbp-88h] BYREF
  size_t n; // [rsp+58h] [rbp-80h]
  _QWORD v60[15]; // [rsp+60h] [rbp-78h] BYREF

  v8 = (__m128 *)a1[12];
  v9 = a1[24];
  v51 = a2;
  v48 = v8;
  v10 = a1[10];
  v53 = a6;
  v49 = v10;
  v11 = a1[14];
  v52 = a3;
  v50 = v11;
  v12 = *(_QWORD *)(a1[2] + 48LL);
  v13 = *(_BYTE **)(v12 + 248);
  v14 = *(_QWORD *)(v12 + 256);
  v54 = (const char *)(v9 + 24);
  v15 = sub_2244B30(v13, v14);
  v16 = sub_2244CB0(v9 + 24, v13, v14, v15);
  v19 = (__int64 *)(*(_QWORD *)(v9 + 24) + 8LL * v16);
  if ( *v19 )
  {
    if ( *v19 != -8 )
    {
      sub_12DAAD0((__int64 **)&src, v19, 0);
      v20 = (__int64 *)src;
      goto LABEL_8;
    }
    --*(_DWORD *)(v9 + 40);
  }
  v56 = v19;
  LODWORD(v54) = v16;
  v21 = sub_22300B0(v14 + 17, 8, v16, v17, v18, v19);
  v22 = (unsigned int)v54;
  v23 = v56;
  v24 = (_QWORD *)v21;
  if ( v14 )
  {
    v57 = (_QWORD *)v21;
    memcpy((void *)(v21 + 16), v13, v14);
    v24 = v57;
    v23 = v56;
    v22 = (unsigned int)v54;
  }
  *((_BYTE *)v24 + v14 + 16) = 0;
  *v24 = v14;
  v24[1] = 0;
  *v23 = (__int64)v24;
  ++*(_DWORD *)(v9 + 36);
  v25 = sub_22450D0(v9 + 24, v22);
  sub_12DAAD0((__int64 **)&src, (__int64 *)(*(_QWORD *)(v9 + 24) + 8LL * v25), 0);
  v20 = (__int64 *)src;
LABEL_8:
  v26 = *v20;
  if ( !*(_QWORD *)(v26 + 8) )
  {
    v46 = a1[4];
    if ( v46 )
    {
      sub_FC70B0((__int64)&src, v46, 0, 35);
      sub_AEC220((unsigned __int8 **)&src, v13, v14);
      sub_AEA040((__int64)&src);
    }
    sub_2221C70("unknown module format", 1);
  }
  v56 = *(__int64 **)(v26 + 8);
  v54 = &byte_22F0C30;
  v55 = 0;
  src = nullptr;
  v27 = (_QWORD *)operator new(0x3FA8u);
  sub_1EC64D0(
    (_DWORD)v27,
    (_DWORD)v48,
    v49,
    v50,
    (_DWORD)v56,
    1,
    0,
    0,
    (__int64)&byte_22F0C30,
    0,
    0,
    0,
    0,
    1,
    0,
    1,
    (__int64)&src);
  v28 = src;
  if ( src )
  {
    sub_224F490(src);
    operator delete(v28, 0xB0u);
  }
  v29 = 0;
  for ( i = 0; (unsigned int)i < *(_DWORD *)(a5 + 8); v29 = i )
  {
    while ( 1 )
    {
      v31 = (__int64 *)(*(_QWORD *)a5 + 32 * i);
      v32 = *v31;
      v33 = v31[1];
      v34 = (void **)(*a4 + 8 * i);
      v35 = *v34;
      *v34 = nullptr;
      src = v35;
      sub_1FDCA50(v27 + 20, v32, v33, &src);
      if ( !src )
        break;
      (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
      i = (unsigned int)(v29 + 1);
      v29 = i;
      if ( *(_DWORD *)(a5 + 8) <= (unsigned int)i )
        goto LABEL_14;
    }
    i = (unsigned int)(v29 + 1);
  }
LABEL_14:
  sub_1EAAB50(v27, v53, 0, i);
  if ( (unsigned int)sub_1F15770((_DWORD)v27, v51, v52, 2, 0, 0, 0) )
  {
    v41 = *v27;
    v42 = v27;
    v27 = nullptr;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v41 + 8))(v42, v51, v47);
    return v27;
  }
  v36 = (_BYTE *)v27[1652];
  v37 = v27[1653];
  src = v60;
  sub_12E5050(&src, v36, (__int64)&v36[v37]);
  v38 = (unsigned __int16 *)v48[147].m128_u64[1];
  if ( src == v60 )
  {
    v44 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)v38 = v60[0];
      else
        memcpy(v38, src, n);
      v44 = n;
      v38 = (unsigned __int16 *)v48[147].m128_u64[1];
    }
    v48[148].m128_u64[0] = v44;
    *((_BYTE *)v38 + v44) = 0;
    v38 = (unsigned __int16 *)src;
    goto LABEL_19;
  }
  if ( v38 == &v48[148].m128_u16[4] )
  {
    v45 = v48;
    v48 = (__m128 *)v60[0];
    v45[147].m128_u64[1] = (unsigned __int64)src;
    v45[148] = _mm_loadh_ps((const double *)&v48);
  }
  else
  {
    v39 = v48;
    v48 = (__m128 *)v60[0];
    v40 = v39[148].m128_u64[1];
    v39[147].m128_u64[1] = (unsigned __int64)src;
    v39[148] = _mm_loadh_ps((const double *)&v48);
    if ( v38 )
    {
      src = v38;
      v60[0] = v40;
      goto LABEL_19;
    }
  }
  v38 = (unsigned __int16 *)v60;
  src = v60;
LABEL_19:
  n = 0;
  *(_BYTE *)v38 = 0;
  if ( src != v60 )
    operator delete(src);
  return v27;
}
