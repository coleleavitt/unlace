__int64 __fastcall sub_195D3E0(
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
  _QWORD *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rbx
  void **v23; // rax

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
      v17 = *a1;
      if ( (*(_BYTE *)(v16 + 1) & 4) != 0 )
      {
        v18 = *(_QWORD *)(v17 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
        v19 = *(_DWORD *)v18;
      }
      else
      {
        v19 = 0;
        v18 = *(_QWORD *)(v17 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      }
    }
    else
    {
      v17 = *a1;
      v19 = 0;
      v18 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
    }
    sub_18C74E0(v17, v19, *(_QWORD *)(v18 + 120), 4);
    v20 = sub_1944E10(a1, (unsigned __int16 *)v9, a7, a8);
    if ( v20 == 1 )
      v21 = 1;
    else
      v21 = sub_19A8E90(
              *a1,
              *(_QWORD *)(a2 + 8),
              *(unsigned int *)(a2 + 24),
              v20 & 0xFFFFFFFFFFFFFFFELL,
              *(unsigned int *)(a2 + 28));
    sub_190D5E0(v17, a7);
    return v21;
  }
  v23 = sub_1946B40(a1, (void **)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL), a7, a8);
  if ( !v23 )
    return 1;
  return sub_19A7F40(*a1, *(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 24), v23, *(unsigned int *)(a2 + 28));
}
