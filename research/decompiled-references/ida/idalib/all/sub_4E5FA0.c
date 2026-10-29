void __fastcall __noreturn sub_4E5FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  size_t v10; // r12
  __int64 v11; // rdx
  void *v12; // rax
  const void *v13; // rsi
  _OWORD v14[2]; // [rsp+0h] [rbp-D8h] BYREF
  int v15; // [rsp+20h] [rbp-B8h]
  __int64 v16; // [rsp+28h] [rbp-B0h]
  __int64 v17; // [rsp+30h] [rbp-A8h]
  __m128i v18; // [rsp+38h] [rbp-A0h]
  __m128i v19; // [rsp+48h] [rbp-90h]
  __m128i v20; // [rsp+58h] [rbp-80h]
  __m128i v21; // [rsp+68h] [rbp-70h]
  __m128i v22; // [rsp+78h] [rbp-60h]
  __int64 v23; // [rsp+88h] [rbp-50h]
  int v24; // [rsp+90h] [rbp-48h]
  __int64 v25; // [rsp+98h] [rbp-40h]
  void *ptr; // [rsp+A0h] [rbp-38h]
  __int128 v27; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-20h]

  v6 = *(_DWORD *)(a1 + 32);
  v28 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 136);
  v14[1] = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v15 = v6;
  v8 = *(_QWORD *)(a1 + 40);
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v16 = v8;
  v9 = *(_QWORD *)(a1 + 48);
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v17 = v9;
  v20 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v23 = v7;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 104));
  v14[0] = _mm_loadu_si128((const __m128i *)a1);
  v22 = _mm_loadu_si128((const __m128i *)(a1 + 120));
  LODWORD(v7) = *(_DWORD *)(a1 + 144);
  v10 = *(_QWORD *)(a1 + 168);
  ptr = nullptr;
  v24 = v7;
  v11 = *(_QWORD *)(a1 + 152);
  v27 = 0;
  v25 = v11;
  if ( v10 )
  {
    v12 = (void *)qalloc_or_throw(v10);
    v13 = *(const void **)(a1 + 160);
    *((_QWORD *)&v27 + 1) = v10;
    ptr = v12;
    memcpy(v12, v13, v10);
    *(_QWORD *)&v27 = v10;
    v9 = *(_QWORD *)(a1 + 48);
  }
  if ( v9 )
    v9 = *(_QWORD *)(a1 + 136);
  v17 = v9;
  sub_4E5DD0(0x8Fu, (double *)v14, 0, a4, a5, a6);
}
