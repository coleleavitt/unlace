void __fastcall sub_14553E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __m128i v15; // [rsp+0h] [rbp-138h] BYREF
  unsigned int v16; // [rsp+1Ch] [rbp-11Ch]
  __m128i v17[5]; // [rsp+20h] [rbp-118h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+78h] [rbp-C0h]
  _BYTE v20[184]; // [rsp+80h] [rbp-B8h] BYREF

  v16 = *(_DWORD *)a4;
  v19 = 0x800000000LL;
  v5 = 0;
  ptr = v20;
  while ( 1 )
  {
    v17[0].m128i_i32[0] = 0;
    v17[0].m128i_i64[1] = 0;
    if ( (unsigned __int8)sub_1453A80(a2, a4, (__int64)v17, v5 == 0) )
    {
      v14 = ptr;
      if ( ptr != v20 )
        goto LABEL_13;
      return;
    }
    si128 = _mm_load_si128(v17);
    v10 = (unsigned int)v19 + 1LL;
    if ( v10 > HIDWORD(v19) )
    {
      v15 = si128;
      sub_2237220(&ptr, v20, v10, 16);
      si128 = _mm_load_si128(&v15);
    }
    *((__m128i *)ptr + (unsigned int)v19) = si128;
    v6 = *(_BYTE *)(a2 + 544);
    LODWORD(v19) = v19 + 1;
    *(_BYTE *)(a2 + 544) = v6 | 0x20;
    v7 = (v6 & 0x20) != 0;
    sub_14634E0(a2, a4);
    *(_BYTE *)(a2 + 544) = (32 * v7) | *(_BYTE *)(a2 + 544) & 0xDF;
    v8 = *(_WORD *)(a4 + 16);
    if ( v8 != 26 )
      break;
    v5 = v19;
  }
  if ( v8 != 2 )
  {
    sub_FC70B0((__int64)v17, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1239);
    sub_AE9DF0((unsigned __int8 **)v17, (__int64)"pragma", 1u);
    sub_AEA040((__int64)v17);
  }
  v11 = *(_QWORD *)(a2 + 112);
  v12 = ptr;
  v13 = *(__int64 (**)())(*(_QWORD *)v11 + 16LL);
  if ( v13 != sub_12DAB10 )
  {
    ((void (__fastcall *)(__int64, _QWORD, void *, _QWORD, _QWORD, _QWORD))v13)(v11, v16, ptr, (unsigned int)v19, 0, 0);
    v12 = ptr;
  }
  if ( v12 != v20 )
  {
    v14 = v12;
LABEL_13:
    free(v14);
  }
}
