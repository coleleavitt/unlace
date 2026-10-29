__int64 __fastcall sub_7F3390(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // r14
  __m128i v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+10h] [rbp-68h]
  __m128i v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    if ( (v4 & 4) != 0 )
    {
      v13 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13 )
        return sub_7F32B0(a1, v13);
    }
  }
  sub_AC4830(&v16);
  v8 = v18;
  v9 = v19;
  v15 = v17;
  v10 = _mm_load_si128(&v16);
  v14 = v10;
LABEL_4:
  if ( v8 == v10.m128i_i64[0] )
  {
LABEL_10:
    if ( v9 == v10.m128i_i64[1] )
      return 1;
  }
  v11 = v10.m128i_i8[8] & 3;
  if ( (_DWORD)v11 )
    v10.m128i_i64[0] = sub_ACE280(&v14, a2, v11, v5, v6, v7);
  while ( 1 )
  {
    a2 = *(_QWORD *)v10.m128i_i64[0];
    result = sub_7E3C00(a1, *(_QWORD *)v10.m128i_i64[0], a3);
    if ( !(_BYTE)result )
      return result;
    v10.m128i_i64[1] = v14.m128i_i64[1];
    if ( (v14.m128i_i8[8] & 3) != 0 )
    {
      if ( v14.m128i_i64[1] <= 3uLL )
      {
        a2 = 1;
        sub_ACE0F0(&v14, 1);
      }
      else
      {
        sub_ACE150(&v14);
      }
      v10 = v14;
      goto LABEL_4;
    }
    v10.m128i_i64[0] = v14.m128i_i64[0] + 8;
    v14.m128i_i64[0] = v10.m128i_i64[0];
    if ( v8 == v10.m128i_i64[0] )
      goto LABEL_10;
  }
}

