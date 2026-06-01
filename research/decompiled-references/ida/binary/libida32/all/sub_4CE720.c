void __fastcall __noreturn sub_4CE720(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  size_t v10; // r12
  __int64 v11; // rdx
  void *v12; // rax
  const void *v13; // rsi
  __m128i v14; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v15; // [rsp+10h] [rbp-C8h]
  __int64 v16; // [rsp+20h] [rbp-B8h]
  __int64 v17; // [rsp+28h] [rbp-B0h]
  __int64 v18; // [rsp+30h] [rbp-A8h]
  __m128i v19; // [rsp+38h] [rbp-A0h]
  __m128i v20; // [rsp+48h] [rbp-90h]
  __m128i v21; // [rsp+58h] [rbp-80h]
  __m128i v22; // [rsp+68h] [rbp-70h]
  __m128i v23; // [rsp+78h] [rbp-60h]
  __int64 v24; // [rsp+88h] [rbp-50h]
  __int64 v25; // [rsp+90h] [rbp-48h]
  __int64 v26; // [rsp+98h] [rbp-40h]
  void *ptr; // [rsp+A0h] [rbp-38h]
  __int128 v28; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v29; // [rsp+B8h] [rbp-20h]

  v6 = *(_DWORD *)(a1 + 32);
  v29 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 136);
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  LODWORD(v16) = v6;
  v8 = *(_QWORD *)(a1 + 40);
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v17 = v8;
  v9 = *(_QWORD *)(a1 + 48);
  v20 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v18 = v9;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v24 = v7;
  v22 = _mm_loadu_si128((const __m128i *)(a1 + 104));
  v14 = _mm_loadu_si128((const __m128i *)a1);
  v23 = _mm_loadu_si128((const __m128i *)(a1 + 120));
  LODWORD(v7) = *(_DWORD *)(a1 + 144);
  v10 = *(_QWORD *)(a1 + 168);
  ptr = nullptr;
  LODWORD(v25) = v7;
  v11 = *(_QWORD *)(a1 + 152);
  v28 = 0;
  v26 = v11;
  if ( v10 )
  {
    v12 = (void *)qalloc_or_throw(
                    v10,
                    a2,
                    v11,
                    a4,
                    a5,
                    a6,
                    *(_OWORD *)&v14,
                    *(_OWORD *)&v15,
                    v16,
                    v17,
                    v18,
                    *(_OWORD *)&v19,
                    *(_OWORD *)&v20,
                    *(_OWORD *)&v21,
                    *(_OWORD *)&v22,
                    *(_OWORD *)&v23,
                    v24,
                    v25,
                    v26,
                    ptr,
                    v28,
                    v29);
    v13 = *(const void **)(a1 + 160);
    *((_QWORD *)&v28 + 1) = v10;
    ptr = v12;
    memcpy(v12, v13, v10);
    *(_QWORD *)&v28 = v10;
    v9 = *(_QWORD *)(a1 + 48);
  }
  if ( v9 )
    v9 = *(_QWORD *)(a1 + 136);
  v18 = v9;
  sub_4CE550(0x8Fu, (double *)v14.m128i_i64, 0, a4, a5, a6);
}

