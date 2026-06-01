void __fastcall sub_14555C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  char v6; // dl
  bool v7; // r15
  __int16 v8; // ax
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  _BYTE *v12; // rdx
  __int64 (*v13)(); // rax
  void *v14; // rdi
  unsigned int v15; // r14d
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdi
  __m128i v19; // [rsp+0h] [rbp-138h] BYREF
  unsigned int v20; // [rsp+1Ch] [rbp-11Ch]
  __m128i v21[5]; // [rsp+20h] [rbp-118h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+78h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+80h] [rbp-B8h] BYREF

  v20 = *(_DWORD *)a4;
  v23 = 0x800000000LL;
  v5 = 0;
  ptr = v24;
  while ( 1 )
  {
    v21[0].m128i_i32[0] = 0;
    v21[0].m128i_i64[1] = 0;
    if ( (unsigned __int8)sub_1453A80(a2, a4, (__int64)v21, v5 == 0) )
      goto LABEL_14;
    si128 = _mm_load_si128(v21);
    v10 = (unsigned int)v23 + 1LL;
    if ( v10 > HIDWORD(v23) )
    {
      v19 = si128;
      sub_2237220(&ptr, v24, v10, 16);
      si128 = _mm_load_si128(&v19);
    }
    *((__m128i *)ptr + (unsigned int)v23) = si128;
    v6 = *(_BYTE *)(a2 + 544);
    LODWORD(v23) = v23 + 1;
    *(_BYTE *)(a2 + 544) = v6 | 0x20;
    v7 = (v6 & 0x20) != 0;
    sub_14634E0(a2, a4);
    *(_BYTE *)(a2 + 544) = (32 * v7) | *(_BYTE *)(a2 + 544) & 0xDF;
    v8 = *(_WORD *)(a4 + 16);
    if ( v8 != 26 )
      break;
    v5 = v23;
  }
  if ( v8 != 2 )
  {
    sub_FC70B0((__int64)v21, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1239);
    sub_AE9DF0((unsigned __int8 **)v21, (__int64)"pragma", 1u);
    sub_AEA040((__int64)v21);
  }
  v11 = *(_QWORD *)(a2 + 112);
  v12 = ptr;
  v13 = *(__int64 (**)())(*(_QWORD *)v11 + 16LL);
  if ( v13 == sub_12DAB10 )
    goto LABEL_10;
  v15 = v20;
  v16 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD, _QWORD, _QWORD))v13)(
          v11,
          v20,
          ptr,
          (unsigned int)v23,
          0,
          0)
      & 0xFFFFFFFFFFFFFFF8LL;
  v17 = v16;
  if ( !v16 )
  {
LABEL_14:
    v12 = ptr;
LABEL_10:
    if ( v12 == v24 )
      return;
    v14 = v12;
    goto LABEL_12;
  }
  sub_1464EA0(a2, v16, v15, 1);
  sub_141AE30(a2, ((unsigned __int64)*((unsigned int *)ptr + 4 * (unsigned int)v23 - 4) << 32) | v15, 456, v17);
  v18 = *(_QWORD *)(a2 + 1192);
  if ( v18 )
    (*(void (__fastcall **)(__int64, _QWORD, void *, _QWORD, __int64))(*(_QWORD *)v18 + 88LL))(
      v18,
      v15,
      ptr,
      (unsigned int)v23,
      v17);
  v14 = ptr;
  if ( ptr != v24 )
LABEL_12:
    free(v14);
}
