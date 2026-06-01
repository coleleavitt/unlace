__int64 __fastcall sub_7E76E0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // r14
  __m128i v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+10h] [rbp-68h]
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]

  sub_AC4830(&v14);
  v7 = v16;
  v8 = v17;
  v12 = _mm_load_si128(&v14);
  v13 = v15;
  v9 = v12;
LABEL_2:
  if ( v7 == v9.m128i_i64[0] )
  {
LABEL_8:
    if ( v8 == v9.m128i_i64[1] )
      return 1;
  }
  v10 = v9.m128i_i8[8] & 3;
  if ( (_DWORD)v10 )
    v9.m128i_i64[0] = sub_ACE280(&v12, a2, v10, v4, v5, v6);
  while ( 1 )
  {
    a2 = *(_QWORD *)v9.m128i_i64[0];
    result = sub_7E3C00(a1, *(_QWORD *)v9.m128i_i64[0], a3);
    if ( !(_BYTE)result )
      return result;
    v9.m128i_i64[1] = v12.m128i_i64[1];
    if ( (v12.m128i_i8[8] & 3) != 0 )
    {
      if ( v12.m128i_i64[1] <= 3uLL )
      {
        a2 = 1;
        sub_ACE0F0(&v12, 1);
      }
      else
      {
        sub_ACE150(&v12);
      }
      v9 = v12;
      goto LABEL_2;
    }
    v9.m128i_i64[0] = v12.m128i_i64[0] + 8;
    v12.m128i_i64[0] = v9.m128i_i64[0];
    if ( v9.m128i_i64[0] == v7 )
      goto LABEL_8;
  }
}

