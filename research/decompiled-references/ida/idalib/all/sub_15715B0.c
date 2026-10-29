unsigned __int64 __fastcall sub_15715B0(const __m128i *a1, __int64 a2, __m128i a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int16 v8; // ax
  __int64 *v9; // rdi
  unsigned __int64 result; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r12
  unsigned int v14; // eax

  v3 = a2;
  if ( a1[2].m128i_i16[0] == 31
    && ((v5 = a1->m128i_i64[1], v6 = *(_QWORD *)(v5 + 2944), *(unsigned int *)(v5 + 2912) <= v6)
      ? (a2 = 1, v7 = sub_14180A0(v5, 1u))
      : (v7 = *(_QWORD *)(v5 + 2904) + 24 * v6),
        (v8 = *(_WORD *)(v7 + 16), v8 == 23 || v8 == 66) || v8 == 451) )
  {
    v9 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v9, a1[1].m128i_i32);
    return sub_1AA2F90(*(_QWORD *)(a1[6].m128i_i64[0] + 744), a1[2].m128i_u32[2]);
  }
  else
  {
    result = sub_14C4CD0(a1, a3);
    if ( result > 1 )
    {
      v11 = a1[6].m128i_i64[0];
      v12 = result & 0xFFFFFFFFFFFFFFFELL;
      v13 = *(_QWORD *)(v11 + 744);
      v14 = sub_EEB7E0(result & 0xFFFFFFFFFFFFFFFELL, a2, *(double *)a3.m128i_i64);
      return sub_1AA2500(v13, 20, v3, v14, v12);
    }
  }
  return result;
}
