__m128i *__fastcall sub_1807E60(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v6; // r14d
  __int32 v7; // r13d
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r15
  __int64 *v14; // rcx
  bool v15; // zf
  __int64 *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __m128i *v19; // r15
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rdx

  v6 = a6;
  v7 = a5;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v10 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
    v12 = *((unsigned int *)v10 + 2);
    v13 = *v10 + 8 * v12;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v14 = (__int64 *)*sub_B8C3D0(a2, a2, v12, v11, a5, a6);
    else
      v14 = nullptr;
    v15 = v14 == (__int64 *)v13;
    if ( (unsigned __int64)v14 >= v13 )
      goto LABEL_18;
LABEL_5:
    v16 = v14;
    while ( *(_WORD *)(*v16 + 36) != 217 )
    {
      if ( (__int64 *)v13 == ++v16 )
        goto LABEL_8;
    }
    do
    {
LABEL_13:
      v21 = *v14;
      if ( *(_WORD *)(*v14 + 36) != 217 )
      {
        v22 = v14 + 1;
        do
        {
          v21 = *v22;
          v14 = v22++;
        }
        while ( *(_WORD *)(v21 + 36) != 217 );
      }
      if ( a4 == *(_QWORD *)(v21 + 40) && v7 == *(_DWORD *)(v21 + 48) && v6 == *(_DWORD *)(v21 + 52) )
      {
        if ( !*(_DWORD *)(v21 + 24) )
          *(_QWORD *)(v21 + 24) = a3[1].m128i_i64[1];
        return nullptr;
      }
      v15 = ++v14 == (__int64 *)v13;
      if ( (unsigned __int64)v14 < v13 )
        goto LABEL_5;
LABEL_18:
      if ( v15 )
        goto LABEL_8;
    }
    while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 217 );
    v23 = (__int64 *)(v13 + 8);
    while ( v14 != v23 )
    {
      v24 = *v23++;
      if ( *(_WORD *)(v24 + 36) == 217 )
        goto LABEL_13;
    }
  }
LABEL_8:
  v17 = *(_QWORD **)(a1 + 248);
  v18 = v17[294];
  v17[304] += 56LL;
  v19 = (__m128i *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v17[295] >= (unsigned __int64)&v19[3].m128i_u64[1] && v18 )
    v17[294] = (char *)v19 + 56;
  else
    v19 = (__m128i *)sub_986170((__int64)(v17 + 294), 56, 56, 3, a5, a6);
  sub_B12DB0(v19, *(_QWORD *)(a1 + 248), a3, a4, v7, v6);
  return v19;
}
