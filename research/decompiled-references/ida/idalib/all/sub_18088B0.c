__m128i *__fastcall sub_18088B0(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        double a7)
{
  __int32 v7; // r15d
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rax
  __int64 *v16; // rdx
  bool v17; // zf
  __int64 *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __m128i *v21; // rbx
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r15
  int v28; // eax
  unsigned __int64 v29; // [rsp+8h] [rbp-40h]

  v7 = a5;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v11 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
    v13 = *((unsigned int *)v11 + 2);
    v14 = *v11;
    a5 = v14 + 8 * v13;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v29 = v14 + 8 * v13;
      v15 = (__int64 **)sub_B8C3D0(a2, a2, v13, v12, a5, a6);
      a5 = v29;
      v16 = *v15;
    }
    else
    {
      v16 = nullptr;
    }
    v17 = v16 == (__int64 *)a5;
    if ( (unsigned __int64)v16 >= a5 )
      goto LABEL_18;
LABEL_5:
    v18 = v16;
    while ( *(_WORD *)(*v18 + 36) != 219 )
    {
      if ( (__int64 *)a5 == ++v18 )
        goto LABEL_8;
    }
    do
    {
LABEL_13:
      v23 = *v16;
      if ( *(_WORD *)(*v16 + 36) != 219 )
      {
        v24 = v16 + 1;
        do
        {
          v23 = *v24;
          v16 = v24++;
        }
        while ( *(_WORD *)(v23 + 36) != 219 );
      }
      if ( a4 == *(_QWORD *)(v23 + 40) && v7 == *(_DWORD *)(v23 + 48) )
      {
        v27 = sub_B06750(v23);
        v28 = sub_16CA550(*(_QWORD *)(a4 + 16) + 16LL, **(unsigned int **)(a4 + 16));
        if ( (unsigned __int8)sub_16E64C0(a1, v28, v27, a6, 0, a7) && !*(_DWORD *)(v23 + 24) )
          *(_QWORD *)(v23 + 24) = a3[1].m128i_i64[1];
        return nullptr;
      }
      v17 = ++v16 == (__int64 *)a5;
      if ( (unsigned __int64)v16 < a5 )
        goto LABEL_5;
LABEL_18:
      if ( v17 )
        goto LABEL_8;
    }
    while ( *(_WORD *)(*(_QWORD *)a5 + 36LL) == 219 );
    v25 = (__int64 *)(a5 + 8);
    while ( v16 != v25 )
    {
      v26 = *v25++;
      if ( *(_WORD *)(v26 + 36) == 219 )
        goto LABEL_13;
    }
  }
LABEL_8:
  v19 = *(_QWORD **)(a1 + 248);
  v20 = v19[294];
  v19[304] += 64LL;
  v21 = (__m128i *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v19[295] >= (unsigned __int64)&v21[4] && v20 )
    v19[294] = v21 + 4;
  else
    v21 = (__m128i *)sub_986170((__int64)(v19 + 294), 64, 64, 3, a5, a6);
  sub_B12E10(v21, *(_QWORD *)(a1 + 248), a3, a4, v7, a6);
  return v21;
}
