__m128i *__fastcall sub_79AD00(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r13
  char v8; // al
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  bool v11; // zf
  char v13; // al
  double v14; // rcx
  __int64 v15; // rax
  unsigned int *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  double v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a2 + 144);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v8 = sub_15D2760(v7, a3, a4);
  v9 = *(_QWORD *)(a2 + 144);
  if ( v8 )
  {
    v10 = *(_QWORD *)(v9 + 856);
    *a1 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v9);
    if ( v10 )
LABEL_7:
      ++*(_DWORD *)(v10 + 8);
  }
  else
  {
    v13 = sub_15D27F0(v9, a3, a4);
    v14 = *(double *)(a2 + 144);
    v20[0] = v14;
    if ( v13 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)&v14 + 864LL);
      *(__m128 *)a1 = _mm_loadh_ps(v20);
      if ( !v10 )
        goto LABEL_8;
      goto LABEL_7;
    }
    v15 = sub_15E1B70(SLODWORD(v14));
    v16 = (unsigned int *)v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v17 = *(_QWORD *)(a2 + 1720);
    if ( !v17 || (v18 = *v16, (unsigned int)v18 >= *(_DWORD *)(v17 - 4)) || !*(_QWORD *)(v17 + 8 * v18) )
    {
      v19 = sub_15E1B70(*(_QWORD *)(a2 + 144));
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      v11 = v16[2]-- == 1;
      if ( v11 )
      {
        *(_QWORD *)&v20[1] = v19;
        sub_15D7BC0(*(_QWORD *)&v20[0], v16);
      }
    }
    *(__m128 *)a1 = _mm_loadh_ps(v20);
  }
LABEL_8:
  if ( a4 )
  {
    v11 = (*(_DWORD *)(a4 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v7, a4);
  }
  if ( a3 )
  {
    v11 = (*(_DWORD *)(a3 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v7, a3);
  }
  return a1;
}

