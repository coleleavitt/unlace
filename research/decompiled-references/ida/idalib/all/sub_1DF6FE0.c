unsigned __int16 *__fastcall sub_1DF6FE0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  double v12; // xmm4_8
  double v13; // xmm5_8
  unsigned int *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  int v21; // r9d
  int v22; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8

  sub_18C81B0(*a1);
  v14 = sub_1DF6CC0(a1, *(unsigned int **)(a2 + 16), 1u, a3, a4, a5, a6, v12, v13, a9, a10);
  if ( v14 != (unsigned int *)((char *)&dword_0 + 1) )
  {
    v15 = a1[4];
    v16 = *a1;
    v17 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL;
    v18 = *(_DWORD *)(a2 + 4);
    v19 = v17;
    v20 = *(_DWORD *)(v15 + 112);
    v21 = *(_DWORD *)(*a1 + 12632);
    if ( v20 > v18 )
    {
      v20 = *(_DWORD *)(a2 + 4);
      if ( !v21 )
      {
        v20 = *(_DWORD *)(a2 + 4);
        if ( *(_QWORD *)(a2 + 16) == v17 )
        {
LABEL_9:
          sub_190F620(v16, a3);
          return sub_19A3E40(*a1, (unsigned __int16 *)a2, v24, v25, v26, a3, a4);
        }
      }
    }
    else
    {
      v22 = *(_DWORD *)(v15 + 8);
      if ( v22 + v20 <= v18 )
        v20 = v18 - v22;
      if ( !v21 && v20 == v18 && *(_QWORD *)(a2 + 16) == v19 )
        goto LABEL_9;
    }
    return (unsigned __int16 *)sub_190F410(v16, *(_DWORD *)(a2 + 24), v19, *(_DWORD *)(a2 + 28), v20, a3);
  }
  sub_190F620(*a1, a3);
  return (_WORD *)(&dword_0 + 1);
}
