__int64 __fastcall sub_1FAB30(
        __m128i *a1,
        double a2,
        __m128 a3,
        double a4,
        double a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // r12
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 *v16; // rax
  __m128i v17; // xmm0
  __int64 *v19; // r12
  __int64 v20; // rdx
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  unsigned __int64 *v23; // rax
  __m128i v24; // xmm0
  unsigned __int64 *v25; // [rsp+0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+8h] [rbp-40h]
  int v27; // [rsp+10h] [rbp-38h]

  sub_321ED0((_DWORD)a1, 0, a7, a8, a9, a10, (_DWORD)v25, v26, v27, __readfsqword(0x28u));
  sub_66FA0((__int64)a1, 0, (__int64)"before prealloc_lvars");
  a1[50].m128i_i64[0] = (__int64)&v25;
  v25 = nullptr;
  v26 = 0;
  v12 = sub_1F8DC0(a1, a2, a3, a4, a5);
  if ( a1[19].m128i_i32[2] > 6 )
  {
    v13 = sub_1D5170((__int64)a1, 0, v10, v11);
    if ( (!(unsigned __int8)sub_64880((_QWORD *)(v13 + 160)) || *(_QWORD *)(v13 + 184)) && a1[30].m128i_i32[0] == -1 )
      sub_226AE0(a1);
  }
  v14 = v25;
  a1->m128i_i32[0] &= ~0x200000u;
  a1[50].m128i_i64[0] = 0;
  if ( v14 )
  {
    v15 = *v14;
    if ( !v26 )
    {
      *v14 = *v14 & 3 | (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL;
      v16 = v25;
      v17 = (__m128i)(unsigned __int64)v25;
      *v25 &= ~1uLL;
      *(__m128i *)(v16 + 1) = _mm_unpacklo_epi64(v17, v17);
      *v25 |= 2u;
      goto LABEL_7;
    }
    v19 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    v20 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v20 & 2) != 0 )
    {
LABEL_19:
      *v14 = v15 & 3 | (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL;
      v23 = v25;
      v24 = (__m128i)(unsigned __int64)v25;
      *v25 &= ~1uLL;
      *(__m128i *)(v23 + 1) = _mm_unpacklo_epi64(v24, v24);
      *v25 |= 2u;
      v26 = 0;
LABEL_7:
      if ( v25 )
        qfree((__int64)v25);
      return v12;
    }
    v21 = (__int64 *)v19[1];
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = (__int64 *)v19[2];
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_22;
    }
    else
    {
      sub_1ECDF0(v21);
      v22 = (__int64 *)v19[2];
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_15;
    }
    sub_1ECDF0(v22);
LABEL_15:
    v20 = *v19;
    if ( (*v19 & 2) != 0 )
    {
LABEL_16:
      if ( v15 > 3 )
        qfree(v15 & 0xFFFFFFFFFFFFFFFCLL);
      v14 = v25;
      v15 = *v25;
      goto LABEL_19;
    }
LABEL_22:
    *v19 = v20 | 2;
    goto LABEL_16;
  }
  return v12;
}
