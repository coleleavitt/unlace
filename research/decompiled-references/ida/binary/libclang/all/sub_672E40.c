__int64 __fastcall sub_672E40(__int64 *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i v9; // xmm1
  double v10; // xmm0_8
  __m128i v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  __m128i v14; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v15; // [rsp+108h] [rbp-40h] BYREF

  sub_A85ED0(&v14);
  v9 = _mm_loadu_si128(&v15);
  *(_QWORD *)&v10 = _mm_load_si128(&v14).m128i_u64[0];
  v11 = v14;
LABEL_2:
  if ( v9.m128i_i64[0] == v11.m128i_i64[0] )
  {
LABEL_12:
    if ( v9.m128i_i64[1] == v11.m128i_i64[1] )
      return 1;
  }
LABEL_3:
  v12 = v11.m128i_i8[8] & 3;
  if ( (_DWORD)v12 )
    v11.m128i_i64[0] = sub_ACE280(&v14, a2, v12, v6, v7, v8);
  while ( 1 )
  {
    a2 = *(_QWORD *)v11.m128i_i64[0];
    result = sub_672CC0(a1, *(_QWORD *)v11.m128i_i64[0], v10, v9, a5, a6);
    if ( !(_BYTE)result )
      return result;
    if ( (v14.m128i_i8[8] & 3) != 0 )
    {
      if ( v14.m128i_i64[1] <= 3uLL )
      {
        a2 = 1;
        sub_ACE0F0(&v14, 1);
        v11 = v14;
        goto LABEL_2;
      }
      sub_ACE150(&v14);
      v11 = v14;
      if ( v9.m128i_i64[0] != v14.m128i_i64[0] )
        goto LABEL_3;
      goto LABEL_12;
    }
    v11.m128i_i64[0] = v14.m128i_i64[0] + 8;
    v14.m128i_i64[0] = v11.m128i_i64[0];
    if ( __PAIR128__(v14.m128i_u64[1], v11.m128i_u64[0]) == *(_OWORD *)&v9 )
      return 1;
  }
}

