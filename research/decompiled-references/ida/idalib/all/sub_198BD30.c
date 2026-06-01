__int64 __fastcall sub_198BD30(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r13
  __int64 v10; // rbp
  int v11; // esi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 *v16; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax

  v8 = a2;
  v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 6) != 0
      && (v16 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(*v16 + 16) == 48) )
    {
      v17 = sub_F60F10(*v16, a2, a3, a4, a5, a6);
      sub_7052B0((__int64 *)(v17[13] + 96LL), v17[13], v18, v19, v20, v21);
      v22 = v17[16];
      v10 = *a1;
      if ( (*(_BYTE *)(v22 + 1) & 4) != 0 )
      {
        v12 = *(_QWORD *)(v10 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
        v11 = *(_DWORD *)v12;
      }
      else
      {
        v11 = 0;
        v12 = *(_QWORD *)(v10 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      }
    }
    else
    {
      v10 = *a1;
      v11 = 0;
      v12 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
    }
    sub_18C74E0(v10, v11, *(_QWORD *)(v12 + 120), 4);
    v13 = sub_190CCA0(a1, (unsigned __int16 *)v9, *(double *)a7.m128_u64, a8);
    if ( v13 == 1 )
    {
      v8 = 1;
    }
    else
    {
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      if ( v14 != (*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
        v8 = sub_19A8E90(*a1, *(_QWORD *)(v8 + 8), *(unsigned int *)(v8 + 24), v14, *(unsigned int *)(v8 + 28));
    }
    sub_190D5E0(v10, a7);
    return v8;
  }
  v23 = sub_1988430(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, a7, a8);
  if ( !v23 )
    return 1;
  if ( v23 == (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
    return v8;
  return sub_19A7F40(*a1, *(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 24), v23, *(unsigned int *)(a2 + 28));
}
