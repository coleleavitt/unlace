__int64 __fastcall sub_193CC60(__int64 *a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r9

  v4 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), *(double *)a3.m128i_i64, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_1933BC0(a1, *(_QWORD *)(a2 + 24), *(double *)a3.m128i_i64, a4);
  if ( v7 == 1 )
    return 1;
  v8 = sub_1933BC0(a1, *(_QWORD *)(a2 + 32), *(double *)a3.m128i_i64, a4);
  if ( v8 == 1 )
    return 1;
  else
    return sub_190A860(
             *a1,
             (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFELL),
             (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL),
             (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL),
             *(unsigned int *)(a2 + 4),
             v9,
             a3,
             a4);
}
