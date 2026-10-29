unsigned __int64 __fastcall sub_1E32EF0(
        __int64 *a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  double v18; // xmm4_8
  double v19; // xmm5_8
  unsigned __int16 **v20; // r15
  char v21; // bl
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v31; // rcx
  __int64 v32; // [rsp+10h] [rbp-98h]
  unsigned __int64 v33; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v35; // [rsp+28h] [rbp-80h]
  _BYTE v36[120]; // [rsp+30h] [rbp-78h] BYREF

  v14 = 1;
  v32 = sub_1E31000(a1, *(unsigned __int16 **)(a2 + 16), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v32 == 1 )
    return v14;
  ptr = v36;
  v35 = 0x800000000LL;
  if ( *(_WORD *)(a2 + 12) )
  {
    v20 = (unsigned __int16 **)(a2 + 24);
    v21 = 0;
    v22 = a2 + 8LL * ((unsigned int)*(unsigned __int16 *)(a2 + 12) - 1) + 32;
    while ( 1 )
    {
      v23 = sub_1E31000(a1, *v20, nullptr, a3, a4, a5, a6, v18, v19, a9, a10, v15, v16, v17);
      if ( v23 == 1 )
        goto LABEL_18;
      v15 = (unsigned int)v35;
      v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
      v25 = (unsigned int)v35 + 1LL;
      if ( *v20 != (unsigned __int16 *)v24 )
        v21 = 1;
      if ( v25 <= HIDWORD(v35) )
      {
        ++v20;
        *((_QWORD *)ptr + (unsigned int)v35) = v24;
        LODWORD(v35) = v35 + 1;
        if ( (unsigned __int16 **)v22 == v20 )
          goto LABEL_10;
      }
      else
      {
        v33 = v24;
        ++v20;
        sub_2237220(&ptr, v36, v25, 8);
        v15 = (unsigned int)v35;
        *((_QWORD *)ptr + (unsigned int)v35) = v33;
        LODWORD(v35) = v35 + 1;
        if ( v20 == (unsigned __int16 **)v22 )
          goto LABEL_10;
      }
    }
  }
  v21 = 0;
LABEL_10:
  if ( (*(_BYTE *)(a2 + 14) & 1) == 0 )
  {
    v27 = 0;
LABEL_14:
    v29 = v32 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632)
      || *(_QWORD *)(a2 + 16) != v29
      || v21
      || ((*(_BYTE *)(a2 + 14) & 1) == 0
        ? (v31 = 0)
        : (v31 = *(_QWORD *)(a2 + 8LL * *(unsigned __int16 *)(a2 + 12) + 24)),
          v14 = a2,
          v31 != v27) )
    {
      v14 = sub_1A8ACF0(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v29, (unsigned __int64)ptr, v35, v27);
    }
    goto LABEL_19;
  }
  v26 = *(unsigned __int16 *)(a2 + 12);
  v27 = *(_QWORD *)(a2 + 8 * v26 + 24);
  if ( !v27 )
    goto LABEL_14;
  v28 = sub_1E31000(
          a1,
          *(unsigned __int16 **)(a2 + 8 * v26 + 24),
          nullptr,
          a3,
          a4,
          a5,
          a6,
          v18,
          v19,
          a9,
          a10,
          v15,
          v16,
          v27);
  if ( v28 != 1 )
  {
    v27 = v28 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_14;
  }
LABEL_18:
  v14 = 1;
LABEL_19:
  if ( ptr != v36 )
    free(ptr);
  return v14;
}
