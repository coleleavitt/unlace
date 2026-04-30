__int64 __fastcall enc_chooser_t__::vfunc_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  int v14; // eax
  int *v15; // rsi
  __int64 v16; // rcx
  int v17; // ebp
  int *v18; // rdx
  int *v19; // rax
  __int64 v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx

  v14 = sub_1C7560(*(_DWORD *)(a1 + 180), a7, a8, a9, a10, a11, a12, a13, a14, a2, a3, a4, a5, a6);
  if ( v14 < 0 )
    return -1;
  v15 = *(int **)(a1 + 216);
  v16 = *(_QWORD *)(a1 + 224);
  v17 = v14;
  v18 = &v15[v16];
  if ( v15 == v18 )
    goto LABEL_10;
  v19 = *(int **)(a1 + 216);
  while ( v17 != *v19 )
  {
    if ( v18 == ++v19 )
      goto LABEL_10;
  }
  if ( v18 != v19 )
    return v19 - v15;
LABEL_10:
  v20 = *(_QWORD *)(a1 + 224);
  if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v16 + 1) )
  {
    v22 = qvector_reserve(a1 + 216, v15, v16 + 1, 4);
    v23 = *(_QWORD *)(a1 + 224);
    *(_QWORD *)(a1 + 216) = v22;
    v18 = (int *)(v22 + 4 * v23);
  }
  *v18 = v17;
  ++*(_QWORD *)(a1 + 224);
  return v20;
}
