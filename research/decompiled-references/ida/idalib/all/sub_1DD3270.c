__int64 __fastcall sub_1DD3270(
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
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 *v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 *v23; // rax
  _QWORD *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdi

  v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 6) != 0
      && (v23 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(*v23 + 16) == 48) )
    {
      v24 = sub_F60F10(*v23, a2, a3, a4, a5, a6);
      sub_7052B0((__int64 *)(v24[13] + 96LL), v24[13], v25, v26, v27, v28);
      v29 = v24[16];
      v12 = 0;
      v11 = *a1;
      if ( (*(_BYTE *)(v29 + 1) & 4) != 0 )
        v12 = *(_DWORD *)(*(_QWORD *)(v11 + 4616) + 640LL * *(unsigned int *)(v11 + 4624) - 640);
    }
    else
    {
      v11 = *a1;
      v12 = 0;
    }
    sub_18C79B0(v11, v12, 0, 4);
    v17 = sub_1DC71F0(a1, v10, v13, v14, v15, v16, a7, a8);
    if ( v17 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v21 = 1;
    }
    else
    {
      v19 = *a1;
      v20 = (unsigned __int64)v17 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || (v21 = a2, v20 != (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL)) )
        v21 = sub_19A8E90(
                v19,
                *(_QWORD *)(a2 + 8),
                *(unsigned int *)(a2 + 24),
                v20,
                *(unsigned int *)(a2 + 28),
                v18,
                (__m128i)a7,
                a8);
    }
    sub_190D5E0(v11, a7);
    return v21;
  }
  v30 = sub_1DD1930((__int64)a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, a7, a8);
  if ( !v30 )
    return 1;
  v31 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v21 = a2;
    if ( v30 == (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
      return v21;
  }
  return sub_19A7F40(v31, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 24), (__int64)v30, *(unsigned int *)(a2 + 28));
}
