__int64 __fastcall sub_4E540(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  const __m128i *v16; // r12
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  void *v20; // [rsp+18h] [rbp-90h]
  __int64 n; // [rsp+20h] [rbp-88h]
  unsigned __int64 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+30h] [rbp-78h] BYREF
  __int128 v24; // [rsp+38h] [rbp-70h]
  __int64 v25; // [rsp+50h] [rbp-58h] BYREF
  __int128 v26; // [rsp+58h] [rbp-50h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v12 = sub_97BF0(a4);
  switch ( v12 )
  {
    case 19:
      v13 = 1;
      break;
    case 23:
      v13 = 3;
      break;
    case 2:
      v13 = 2;
      break;
    default:
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)a1 = 1;
      *(_OWORD *)(a1 + 4) = 0;
      return a1;
  }
  v14 = sub_5A220(a3 + 3, a4, v13, 1);
  v15 = *(_QWORD *)(a5 + 8);
  v16 = (const __m128i *)v14;
  if ( v15 )
  {
    v22 = *(_QWORD *)(a5 + 8);
    n = 16 * v15;
    v20 = (void *)qalloc_or_throw(16 * v15);
    memcpy(v20, *(const void **)a5, n);
    v18 = v16[18].m128i_i64[0];
    v19 = v22;
    if ( v18 )
    {
      v16[18].m128i_i64[1] = 0;
      qfree(v18);
      v19 = v22;
    }
    v16[18].m128i_i64[0] = (__int64)v20;
    *(const __m128i *)((char *)&v16[18] + 8) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
  }
  if ( *(_QWORD *)(a6 + 8) <= 1u )
  {
    v23 = 0;
    v25 = 0;
    v24 = 0;
    v26 = 0;
    sub_9D820(&v23, a4, &qword_CB3F0, &v25);
    sub_31170(a2, v16, &v23);
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
  }
  else
  {
    sub_57430(v16, a6);
  }
  if ( a7 )
    v16[25].m128i_i8[12] |= 2u;
  sub_4DC70(a2, a3, (__int64)v16, a4);
  *(_DWORD *)(a1 + 20) = 0;
  *(_OWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v16;
  return a1;
}
