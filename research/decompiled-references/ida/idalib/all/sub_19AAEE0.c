__int64 __fastcall sub_19AAEE0(
        __int64 a1,
        double a2,
        __m128 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        __int16 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r13d
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rdx
  size_t v17; // r14
  _QWORD *v18; // r15
  __int64 v19; // rbp
  _DWORD *v21; // rdx
  __int16 v22; // [rsp+4h] [rbp-134h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-130h] BYREF
  __int64 v24; // [rsp+18h] [rbp-120h] BYREF
  __int64 v25[2]; // [rsp+20h] [rbp-118h] BYREF
  void *v26; // [rsp+30h] [rbp-108h] BYREF
  __m128 si128; // [rsp+38h] [rbp-100h]
  _DWORD v28[9]; // [rsp+48h] [rbp-F0h] BYREF
  char v29; // [rsp+6Ch] [rbp-CCh]
  __int128 v30; // [rsp+70h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-B8h]
  __int128 v32; // [rsp+90h] [rbp-A8h]

  v9 = a8;
  v23 = a5;
  v22 = a7;
  v26 = v28;
  v24 = 0;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v28[8] = 0;
  v29 = 0;
  if ( (unsigned __int8)sub_19AA3D0(a1, &v24, &v23, (__int64)&v22, a6, a8, si128, a3) )
    goto LABEL_9;
  v11 = (*(_DWORD *)a9 >> 12) & 0x7F;
  if ( ((*(_DWORD *)a9 >> 12) & 0x7F) == 0x45 )
    goto LABEL_9;
  if ( (_BYTE)v11 == 51 )
  {
    sub_168B9F0((__int64)&v30, (__int64 *)(a1 + 8), *(_DWORD *)(a9 + 192), 0xE01u, 0);
    sub_15F7200(&v30);
LABEL_9:
    v19 = 1;
    goto LABEL_10;
  }
  if ( (_BYTE)v11 == 55 )
  {
    v12 = sub_1E666F0(
            a1,
            *(_QWORD *)(a9 + 8),
            *(_QWORD *)(a9 + 16),
            *(unsigned int *)(a9 + 160),
            *(unsigned int *)(a9 + 204));
    sub_1EA6B50(
      &v26,
      *(_QWORD *)(a1 + 248),
      *(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 32LL),
      *(unsigned int *)(a9 + 160));
    sub_1EA6140(&v26, v12, 4, 4);
    *v21 = *(_DWORD *)(a9 + 204);
  }
  else
  {
    v12 = sub_1E5FBF0(a1, *(_QWORD *)(a9 + 8), 0);
    sub_1EA6140(&v26, v12, 8, 4);
    *v16 = *(_DWORD *)(a9 + 192);
    v16[1] = *(_DWORD *)(a9 + 216);
  }
  v17 = si128.m128_u64[0] - si128.m128_u64[1];
  v18 = sub_A81BC0(*(_QWORD **)(a1 + 248), v12, si128.m128_i32[0] - si128.m128_i32[2], v13, v14, v15);
  memcpy(v18 + 1, (char *)v26 + si128.m128_u64[1], v17);
  sub_C93FF0((__int64)v25, (__int64)v18);
  v30 = 0;
  *(_OWORD *)ptr = 0;
  v32 = 0;
  v19 = sub_19AA5D0(a1, v23, a6, v22, (__int64)&v30, 0, (__m128)0LL, a3, 0, v9, v25[0], v25[1]);
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
LABEL_10:
  if ( v26 != v28 && v26 )
    operator delete[](v26);
  return v19;
}
