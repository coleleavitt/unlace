__int64 __fastcall sub_802AF0(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r14
  __m128i v16; // rax
  __int64 v17; // rdx
  __m128i v18; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+10h] [rbp-68h]
  __m128i v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v7 = *(unsigned int **)(a2 + 24);
  if ( v7 )
  {
    v8 = (__int64 *)(v7 + 4);
    v9 = (__int64)&v7[2 * *v7 + 4];
    if ( v7 + 4 != (unsigned int *)v9 )
    {
      while ( (unsigned __int8)sub_7FD860(a1, *v8, a3, a4, a5, a6) )
      {
        if ( (__int64 *)v9 == ++v8 )
          goto LABEL_7;
      }
      return 0;
    }
  }
LABEL_7:
  sub_AC4830(&v20);
  v14 = v22;
  v15 = v23;
  v18 = _mm_load_si128(&v20);
  v19 = v21;
  v16 = v18;
LABEL_8:
  if ( v14 != v16.m128i_i64[0] )
  {
LABEL_9:
    v17 = v16.m128i_i8[8] & 3;
    if ( (_DWORD)v17 )
      v16.m128i_i64[0] = sub_ACE280(&v18, a2, v17, v11, v12, v13);
    do
    {
      a2 = *(_QWORD *)v16.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v16.m128i_i64[0], (__int64)a3) )
        return 0;
      v16.m128i_i64[1] = v18.m128i_i64[1];
      if ( (v18.m128i_i8[8] & 3) != 0 )
      {
        if ( v18.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v18, 1);
        }
        else
        {
          sub_ACE150(&v18);
        }
        v16 = v18;
        goto LABEL_8;
      }
      v16.m128i_i64[0] = v18.m128i_i64[0] + 8;
      v18.m128i_i64[0] = v16.m128i_i64[0];
    }
    while ( v14 != v16.m128i_i64[0] );
  }
  if ( v15 != v16.m128i_i64[1] )
    goto LABEL_9;
  return 1;
}

