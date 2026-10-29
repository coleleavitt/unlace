__int64 __fastcall sub_7EDB90(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // r14
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r14
  __m128i v17; // rax
  __int64 v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+10h] [rbp-68h]
  __m128i v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 56);
  if ( v5 && !(unsigned __int8)sub_7EBA80(a1, v5) )
    return 0;
  v6 = (__int64 *)(a2 + 64);
  v7 = a2 + 8LL * *(unsigned int *)(a2 + 52) + 56;
  if ( a2 + 64 != v7 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v6) )
    {
      if ( (__int64 *)v7 == ++v6 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v9 = *(__int64 **)(a2 + 24);
  v10 = &v9[*(_QWORD *)(a2 + 32)];
  if ( v9 != v10 )
  {
    while ( (unsigned __int8)sub_7ED1A0(a1, *v9) )
    {
      if ( v10 == ++v9 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  v11 = a2;
  sub_AC4830(&v21);
  v15 = v23;
  v16 = v24;
  v20 = v22;
  v17 = _mm_load_si128(&v21);
  v19 = v17;
LABEL_14:
  if ( v15 != v17.m128i_i64[0] )
  {
LABEL_15:
    v18 = v17.m128i_i8[8] & 3;
    if ( (_DWORD)v18 )
      v17.m128i_i64[0] = sub_ACE280(&v19, v11, v18, v12, v13, v14);
    do
    {
      v11 = *(_QWORD *)v17.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v17.m128i_i64[0], a3) )
        return 0;
      v17.m128i_i64[1] = v19.m128i_i64[1];
      if ( (v19.m128i_i8[8] & 3) != 0 )
      {
        if ( v19.m128i_i64[1] <= 3uLL )
        {
          v11 = 1;
          sub_ACE0F0(&v19, 1);
        }
        else
        {
          sub_ACE150(&v19);
        }
        v17 = v19;
        goto LABEL_14;
      }
      v17.m128i_i64[0] = v19.m128i_i64[0] + 8;
      v19.m128i_i64[0] = v17.m128i_i64[0];
    }
    while ( v17.m128i_i64[0] != v15 );
  }
  if ( v16 != v17.m128i_i64[1] )
    goto LABEL_15;
  return 1;
}

