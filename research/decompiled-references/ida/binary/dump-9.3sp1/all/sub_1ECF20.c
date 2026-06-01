unsigned __int64 __fastcall sub_1ECF20(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  void *v9; // rax
  const void *v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v4 = a2[27];
  v15 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  if ( v4 )
  {
    v9 = (void *)qalloc_or_throw(16 * v4, (__int64)a2, a3, a4);
    v10 = (const void *)a2[26];
    *((_QWORD *)&v12 + 1) = v4;
    v11 = (__int64)v9;
    memcpy(v9, v10, 16 * v4);
    *(_QWORD *)&v12 = v4;
  }
  v6 = a2[71];
  v7 = a2[72];
  v13 = 0;
  v14 = 0;
  if ( v6 + v7 - 1 >= v6 )
  {
    v13 = qvector_reserve((__int64)&v13, 0, 1, 16);
    *(__m128i *)(v13 + 16 * v14) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v7);
    *(_QWORD *)&v14 = v14 + 1;
  }
  sub_3180C0(&v11, &v13);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  sub_3180C0(a1 + 16, &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v15 - __readfsqword(0x28u);
}
