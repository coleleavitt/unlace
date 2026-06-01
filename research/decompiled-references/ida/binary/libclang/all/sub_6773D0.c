__int64 __fastcall sub_6773D0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10)
{
  unsigned int *v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // r12
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i v18; // xmm0
  __int64 v19; // rbx
  __int64 v20; // r14
  __m128i v21; // rax
  __int64 v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-78h] BYREF
  __int64 v24; // [rsp+10h] [rbp-68h]
  __m128i v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+38h] [rbp-40h]
  __int64 v28; // [rsp+40h] [rbp-38h]

  v11 = *(unsigned int **)(a2 + 24);
  if ( v11 )
  {
    v12 = (__int64 *)(v11 + 4);
    v13 = (__int64)&v11[2 * *v11 + 4];
    if ( v11 + 4 != (unsigned int *)v13 )
    {
      while ( (unsigned __int8)sub_675FE0(a1, *v12, a7, a8, a9, a10, a3, a4, a5, a6) )
      {
        if ( (__int64 *)v13 == ++v12 )
          goto LABEL_7;
      }
      return 0;
    }
  }
LABEL_7:
  sub_AC4830(&v25);
  v18 = _mm_load_si128(&v25);
  v19 = v27;
  v20 = v28;
  v23 = v18;
  v24 = v26;
  v21 = v18;
LABEL_8:
  if ( v19 != v21.m128i_i64[0] )
  {
LABEL_9:
    v22 = v21.m128i_i8[8] & 3;
    if ( (_DWORD)v22 )
      v21.m128i_i64[0] = sub_ACE280(&v23, a2, v22, v15, v16, v17);
    do
    {
      a2 = *(_QWORD *)v21.m128i_i64[0];
      if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v21.m128i_i64[0], a3, *(double *)v18.m128i_i64, a8, a9, a10) )
        return 0;
      v21.m128i_i64[1] = v23.m128i_i64[1];
      if ( (v23.m128i_i8[8] & 3) != 0 )
      {
        if ( v23.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v23, 1);
        }
        else
        {
          sub_ACE150(&v23);
        }
        v21 = v23;
        goto LABEL_8;
      }
      v21.m128i_i64[0] = v23.m128i_i64[0] + 8;
      v23.m128i_i64[0] = v21.m128i_i64[0];
    }
    while ( v19 != v21.m128i_i64[0] );
  }
  if ( v20 != v21.m128i_i64[1] )
    goto LABEL_9;
  return 1;
}

