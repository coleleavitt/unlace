__int64 __fastcall sub_672BE0(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11; // xmm0
  __int64 v12; // r12
  __int64 v13; // r14
  __m128i v14; // rax
  __int64 v15; // rdx
  __int64 result; // rax
  __m128i v17; // [rsp+0h] [rbp-78h] BYREF
  __int64 v18; // [rsp+10h] [rbp-68h]
  __m128i v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]

  sub_AC4830(&v19);
  v11 = _mm_load_si128(&v19);
  v12 = v21;
  v13 = v22;
  v17 = v11;
  v18 = v20;
  v14 = v11;
LABEL_2:
  if ( v12 == v14.m128i_i64[0] )
  {
LABEL_8:
    if ( v13 == v14.m128i_i64[1] )
      return 1;
  }
  v15 = v14.m128i_i8[8] & 3;
  if ( (_DWORD)v15 )
    v14.m128i_i64[0] = sub_ACE280(&v17, a2, v15, v8, v9, v10);
  while ( 1 )
  {
    a2 = *(_QWORD *)v14.m128i_i64[0];
    result = sub_672860(a1, *(_QWORD *)v14.m128i_i64[0], a3, *(double *)v11.m128i_i64, a5, a6, a7);
    if ( !(_BYTE)result )
      return result;
    v14.m128i_i64[1] = v17.m128i_i64[1];
    if ( (v17.m128i_i8[8] & 3) != 0 )
    {
      if ( v17.m128i_i64[1] <= 3uLL )
      {
        a2 = 1;
        sub_ACE0F0(&v17, 1);
      }
      else
      {
        sub_ACE150(&v17);
      }
      v14 = v17;
      goto LABEL_2;
    }
    v14.m128i_i64[0] = v17.m128i_i64[0] + 8;
    v17.m128i_i64[0] = v14.m128i_i64[0];
    if ( v14.m128i_i64[0] == v12 )
      goto LABEL_8;
  }
}

