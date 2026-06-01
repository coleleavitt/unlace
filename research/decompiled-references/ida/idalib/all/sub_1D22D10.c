__int64 __fastcall sub_1D22D10(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v10; // r13
  __int64 v11; // r12
  int v12; // esi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 *v22; // rax
  _QWORD *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdi

  v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 6) != 0
      && (v22 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(*v22 + 16) == 48) )
    {
      v23 = sub_F60F10(*v22, a2, a3, a4, a5, a6);
      sub_7052B0((__int64 *)(v23[13] + 96LL), v23[13], v24, v25, v26, v27);
      v28 = v23[16];
      v12 = 0;
      v11 = *a1;
      if ( (*(_BYTE *)(v28 + 1) & 4) != 0 )
        v12 = *(_DWORD *)(*(_QWORD *)(v11 + 4616) + 640LL * *(unsigned int *)(v11 + 4624) - 640);
    }
    else
    {
      v11 = *a1;
      v12 = 0;
    }
    sub_18C79B0(v11, v12, 0, 4);
    v16 = sub_1D11200(a1, (unsigned __int16 *)v10, a7, a8, v13, v14, v15);
    if ( v16 == 1 )
    {
      v20 = 1;
    }
    else
    {
      v18 = *a1;
      v19 = v16 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || (v20 = a2, v19 != (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL)) )
        v20 = sub_19A8E90(
                v18,
                *(_QWORD *)(a2 + 8),
                *(unsigned int *)(a2 + 24),
                v19,
                *(unsigned int *)(a2 + 28),
                v17,
                (__m128i)a7,
                a8);
    }
    sub_190D5E0(v11, a7);
    return v20;
  }
  v29 = sub_1D1AAC0(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, a7, a8);
  if ( !v29 )
    return 1;
  v30 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v20 = a2;
    if ( v29 == (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
      return v20;
  }
  return sub_19A7F40(v30, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 24), (__int64)v29, *(unsigned int *)(a2 + 28));
}
