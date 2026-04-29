__int64 __fastcall sub_32D270(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 *v9; // rdx
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  char v14; // bl
  __int64 v15; // [rsp+0h] [rbp-88h] BYREF
  __int128 v16; // [rsp+8h] [rbp-80h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  int v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+50h] [rbp-38h]
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(unsigned __int64 **)(a1 + 8);
  v23 = __readfsqword(0x28u);
  v9 = &v7[2 * v6];
  if ( v9 != v7 )
  {
    a4 = *a2;
    while ( a4 < *v7 || v7[1] < a2[1] )
    {
      v7 += 2;
      if ( v9 == v7 )
        goto LABEL_7;
    }
    return 1;
  }
LABEL_7:
  v11 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *a2 < *v11 || v11[1] < a2[1] )
    {
      v15 = 0;
      v17 = 0;
      v18 = -1;
      v16 = 0;
      get_func_ranges(&v15, v11, v9, a4, a5, a6);
      v12 = *a2;
      v13 = a2[1];
      v19 = 0;
      v21 = 0;
      v22 = -1;
      v20 = 0;
      if ( v12 < v13 )
      {
        v19 = qvector_reserve(&v19, 0, 1, 16);
        *(__m128i *)(v19 + 16 * v20) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v13);
        *(_QWORD *)&v20 = v20 + 1;
      }
      v14 = rangeset_t_contains(&v15, &v19);
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree(v19);
      }
      if ( !v14 )
      {
        if ( v15 )
        {
          *(_QWORD *)&v16 = 0;
          qfree(v15);
        }
        return 0;
      }
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree(v15);
      }
    }
    return 1;
  }
  return 0;
}
