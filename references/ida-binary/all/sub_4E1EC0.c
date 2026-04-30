__m128i *__fastcall sub_4E1EC0(__m128i *a1, __int64 a2, _DWORD *a3)
{
  __int64 *v5; // rdi
  __int64 v7; // rax
  int v8; // eax
  __int64 *v9; // rsi
  __int64 v10; // r9
  __int64 v12; // rax
  int v13; // eax
  int v14; // r12d
  __int64 v15; // rax
  __int32 v16; // r12d
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  __int64 v20; // [rsp+10h] [rbp-78h]
  __m128i v21[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+50h] [rbp-38h]
  unsigned __int64 v24; // [rsp+58h] [rbp-30h]

  v5 = *(__int64 **)(a2 + 40);
  v24 = __readfsqword(0x28u);
  v7 = *v5;
  if ( (*(_BYTE *)(a2 + 48) & 4) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v7 + 120))(v5, a3);
    v9 = *(__int64 **)(a2 + 40);
    v10 = *v9;
    if ( v8 > 0 )
    {
      (*(void (__fastcall **)(__m128i *, __int64 *, _QWORD, _QWORD, _DWORD *))(v10 + 96))(a1, v9, 0, 0, a3);
      return a1;
    }
    (*(void (__fastcall **)(__m128i *, __int64 *, _DWORD *))(v10 + 104))(v21, v9, a3);
    v14 = *a3 + 1;
    if ( (*(int (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(a2 + 40) + 120LL))(*(_QWORD *)(a2 + 40), v21) > v14 )
    {
      (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD, _QWORD, __m128i *))(**(_QWORD **)(a2 + 40) + 96LL))(
        &v22,
        *(_QWORD *)(a2 + 40),
        (unsigned int)v14,
        0,
        v21);
      v15 = v23;
      *a1 = _mm_load_si128(&v22);
      a1[1].m128i_i64[0] = v15;
      return a1;
    }
    while ( v21[0].m128i_i64[0] != *(_QWORD *)(a2 + 8) || *(_OWORD *)(a2 + 16) != *(_OWORD *)((char *)v21 + 8) )
    {
      (*(void (__fastcall **)(__m128i *, _QWORD, __m128i *))(**(_QWORD **)(a2 + 40) + 104LL))(
        &v22,
        *(_QWORD *)(a2 + 40),
        v21);
      v16 = v21[0].m128i_i32[0] + 1;
      if ( v16 < (*(int (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(a2 + 40) + 120LL))(*(_QWORD *)(a2 + 40), &v22) )
      {
        (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD, _QWORD, __m128i *))(**(_QWORD **)(a2 + 40) + 96LL))(
          a1,
          *(_QWORD *)(a2 + 40),
          (unsigned int)v16,
          0,
          &v22);
        return a1;
      }
      v17 = _mm_load_si128(&v22);
      v21[1].m128i_i64[0] = v23;
      v21[0] = v17;
    }
LABEL_16:
    a1->m128i_i64[0] = -1;
    a1->m128i_i64[1] = 0;
    a1[1].m128i_i64[0] = 0;
    return a1;
  }
  (*(void (__fastcall **)(__m128i *, __int64 *, _DWORD *))(v7 + 104))(v21, v5, a3);
  if ( *a3 - 1 < 0 )
  {
    if ( v21[0].m128i_i64[0] != *(_QWORD *)(a2 + 8)
      || v21[0].m128i_i64[1] != *(_QWORD *)(a2 + 16)
      || *(_QWORD *)(a2 + 24) != v21[1].m128i_i64[0] )
    {
      v18 = v21[1].m128i_i64[0];
      *a1 = _mm_load_si128(v21);
      a1[1].m128i_i64[0] = v18;
      return a1;
    }
    goto LABEL_16;
  }
  (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD, _QWORD, __m128i *))(**(_QWORD **)(a2 + 40) + 96LL))(
    &v22,
    *(_QWORD *)(a2 + 40),
    (unsigned int)(*a3 - 1),
    0,
    v21);
  v12 = v23;
  *a1 = _mm_load_si128(&v22);
  for ( a1[1].m128i_i64[0] = v12; ; a1[1].m128i_i64[0] = v20 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(a2 + 40) + 120LL))(*(_QWORD *)(a2 + 40), a1);
    if ( !v13 )
      break;
    (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD, _QWORD, __m128i *))(**(_QWORD **)(a2 + 40) + 96LL))(
      &v19,
      *(_QWORD *)(a2 + 40),
      (unsigned int)(v13 - 1),
      0,
      a1);
    *a1 = _mm_loadu_si128(&v19);
  }
  return a1;
}
