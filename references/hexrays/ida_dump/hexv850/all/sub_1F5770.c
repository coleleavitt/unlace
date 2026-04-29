__int64 __fastcall sub_1F5770(
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
  unsigned int v10; // ebp
  __int64 v11; // r12
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 *v14; // rax
  __m128i v15; // xmm0
  __int64 *v17; // r12
  __int64 v18; // rdx
  __int64 *v19; // rdi
  __int64 *v20; // rdi
  unsigned __int64 *v21; // rax
  __m128i v22; // xmm0
  unsigned __int64 *v23; // [rsp+0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+8h] [rbp-40h]
  int v25; // [rsp+10h] [rbp-38h]

  sub_31C610((_DWORD)a1, 0, a7, a8, a9, a10, (_DWORD)v23, v24, v25, __readfsqword(0x28u));
  sub_62520((__int64)a1, 0, (__int64)"before prealloc_lvars");
  a1[50].m128i_i64[0] = (__int64)&v23;
  v23 = nullptr;
  v24 = 0;
  v10 = sub_1F3A00(a1, a2, a3, a4, a5);
  if ( a1[19].m128i_i32[2] > 6 )
  {
    v11 = sub_1D0330((__int64)a1);
    if ( (!(unsigned __int8)sub_5FE00((_QWORD *)(v11 + 160)) || *(_QWORD *)(v11 + 184)) && a1[30].m128i_i32[0] == -1 )
      sub_221720(a1);
  }
  v12 = v23;
  a1->m128i_i32[0] &= ~0x200000u;
  a1[50].m128i_i64[0] = 0;
  if ( v12 )
  {
    v13 = *v12;
    if ( !v24 )
    {
      *v12 = *v12 & 3 | (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFCLL;
      v14 = v23;
      v15 = (__m128i)(unsigned __int64)v23;
      *v23 &= ~1uLL;
      *(__m128i *)(v14 + 1) = _mm_unpacklo_epi64(v15, v15);
      *v23 |= 2u;
      goto LABEL_7;
    }
    v17 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    v18 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v18 & 2) != 0 )
    {
LABEL_19:
      *v12 = v13 & 3 | (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFCLL;
      v21 = v23;
      v22 = (__m128i)(unsigned __int64)v23;
      *v23 &= ~1uLL;
      *(__m128i *)(v21 + 1) = _mm_unpacklo_epi64(v22, v22);
      *v23 |= 2u;
      v24 = 0;
LABEL_7:
      if ( v23 )
        qfree(v23);
      return v10;
    }
    v19 = (__int64 *)v17[1];
    if ( (*(_BYTE *)v19 & 2) != 0 )
    {
      v20 = (__int64 *)v17[2];
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_22;
    }
    else
    {
      sub_1E7A30(v19);
      v20 = (__int64 *)v17[2];
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_15;
    }
    sub_1E7A30(v20);
LABEL_15:
    v18 = *v17;
    if ( (*v17 & 2) != 0 )
    {
LABEL_16:
      if ( v13 > 3 )
        qfree(v13 & 0xFFFFFFFFFFFFFFFCLL);
      v12 = v23;
      v13 = *v23;
      goto LABEL_19;
    }
LABEL_22:
    *v17 = v18 | 2;
    goto LABEL_16;
  }
  return v10;
}
