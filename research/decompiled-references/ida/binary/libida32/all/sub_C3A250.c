__int64 __fastcall sub_C3A250(__int64 a1, __m128i *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v7; // al
  char v8; // al
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r12d
  unsigned __int8 **v17; // rax
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+8h] [rbp-40h]
  __m128 v20; // [rsp+10h] [rbp-38h] BYREF
  char v21; // [rsp+20h] [rbp-28h]

  v7 = a2->m128i_u8[1];
  v18 = a3;
  v8 = (v7 >> 1) & 3;
  v9 = *(_QWORD *)(a2->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 42 )
  {
    if ( !v8 )
    {
      v15 = sub_F436F0(v9, *(_QWORD *)(a1 + 16));
      if ( (_BYTE)v15
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48
        && (a2->m128i_i8[1] & 6) == 0 )
      {
        v19 = a1;
        v21 = 0;
        v20 = _mm_loadh_ps((const double *)&v18);
        return (unsigned int)((__int64 (__fastcall *)(__m128 *, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64))sub_C3A520)(
                               &v20,
                               a2,
                               v11,
                               v12,
                               v13,
                               v14,
                               v18,
                               a1);
      }
      v17 = (unsigned __int8 **)sub_E0FED0(a1, a2, 2458, 0);
      if ( v17 )
      {
        sub_AC60B0(v17, a2->m128i_i64[1], 8u);
        return v15;
      }
      return v15;
    }
LABEL_8:
    v19 = a1;
    v21 = 0;
    v20 = _mm_loadh_ps((const double *)&v18);
    return (unsigned int)sub_C38AE0((const __m128i *)&v20, a2, v10, a4, a5, a6);
  }
  if ( v8 )
    goto LABEL_8;
  v19 = a1;
  v21 = 0;
  v20 = _mm_loadh_ps((const double *)&v18);
  return (unsigned int)sub_C24FB0((__m128i *)&v20, (__int64)a2, v10, a4, a5, a6);
}

