__int64 __fastcall sub_1B96AE0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v9; // r13
  __int64 *v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // r12
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rbx
  _QWORD *v26; // rax

  v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 6) != 0
      && (v10 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(*v10 + 16) == 48) )
    {
      v11 = sub_F60F10(*v10, a2, a3, a4, a5, a6);
      sub_7052B0((__int64 *)(v11[13] + 96LL), v11[13], v12, v13, v14, v15);
      v16 = v11[16];
      v17 = 0;
      v18 = *a1;
      if ( (*(_BYTE *)(v16 + 1) & 4) != 0 )
        v17 = *(_DWORD *)(*(_QWORD *)(v18 + 4616) + 640LL * *(unsigned int *)(v18 + 4624) - 640);
    }
    else
    {
      v18 = *a1;
      v17 = 0;
    }
    sub_18C79B0(v18, v17, 0, 4);
    v22 = sub_1B7CAD0(a1, (unsigned __int16 *)v9, a7, a8, v19, v20, v21);
    if ( v22 == 1 )
      v24 = 1;
    else
      v24 = sub_19A8E90(
              *a1,
              *(_QWORD *)(a2 + 8),
              *(unsigned int *)(a2 + 24),
              v22 & 0xFFFFFFFFFFFFFFFELL,
              *(unsigned int *)(a2 + 28),
              v23,
              (__m128i)a7,
              a8);
    sub_190D5E0(v18, a7);
    return v24;
  }
  v26 = sub_1B90E50(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, a7, a8);
  if ( !v26 )
    return 1;
  return sub_19A7F40(*a1, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 24), (__int64)v26, *(unsigned int *)(a2 + 28));
}
