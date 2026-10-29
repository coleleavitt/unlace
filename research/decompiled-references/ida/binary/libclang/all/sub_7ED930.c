__int64 __fastcall sub_7ED930(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // r14
  __m128i v12; // rax
  __int64 v13; // rdx
  __m128i v14; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+10h] [rbp-68h]
  __m128i v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-38h]

  v4 = *(__int64 **)(a2 + 24);
  v5 = &v4[*(_QWORD *)(a2 + 32)];
  if ( v4 != v5 )
  {
    while ( (unsigned __int8)sub_7ED1A0(a1, *v4) )
    {
      if ( v5 == ++v4 )
        goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  sub_AC4830(&v16);
  v10 = v18;
  v11 = v19;
  v14 = _mm_load_si128(&v16);
  v15 = v17;
  v12 = v14;
LABEL_7:
  if ( v10 != v12.m128i_i64[0] )
  {
LABEL_8:
    v13 = v12.m128i_i8[8] & 3;
    if ( (_DWORD)v13 )
      v12.m128i_i64[0] = sub_ACE280(&v14, a2, v13, v7, v8, v9);
    do
    {
      a2 = *(_QWORD *)v12.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v12.m128i_i64[0], a3) )
        return 0;
      v12.m128i_i64[1] = v14.m128i_i64[1];
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
        v12 = v14;
        goto LABEL_7;
      }
      v12.m128i_i64[0] = v14.m128i_i64[0] + 8;
      v14.m128i_i64[0] = v12.m128i_i64[0];
    }
    while ( v10 != v12.m128i_i64[0] );
  }
  if ( v11 != v12.m128i_i64[1] )
    goto LABEL_8;
  return 1;
}

