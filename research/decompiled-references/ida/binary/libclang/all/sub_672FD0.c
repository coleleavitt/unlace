__int64 __fastcall sub_672FD0(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm0
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

  v8 = *(__int64 **)(a2 + 24);
  v9 = &v8[*(_QWORD *)(a2 + 32)];
  if ( v8 != v9 )
  {
    while ( (unsigned __int8)sub_672E40(a1, *v8, a4, *(double *)a5.m128i_i64, a6, a7) )
    {
      if ( v9 == ++v8 )
        goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  sub_AC4830(&v21);
  v14 = _mm_load_si128(&v21);
  v15 = v23;
  v16 = v24;
  v19 = v14;
  v20 = v22;
  v17 = v14;
LABEL_7:
  if ( v15 != v17.m128i_i64[0] )
  {
LABEL_8:
    v18 = v17.m128i_i8[8] & 3;
    if ( (_DWORD)v18 )
      v17.m128i_i64[0] = sub_ACE280(&v19, a2, v18, v11, v12, v13);
    do
    {
      a2 = *(_QWORD *)v17.m128i_i64[0];
      if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v17.m128i_i64[0], a3, *(double *)v14.m128i_i64, a5, a6, a7) )
        return 0;
      v17.m128i_i64[1] = v19.m128i_i64[1];
      if ( (v19.m128i_i8[8] & 3) != 0 )
      {
        if ( v19.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v19, 1);
        }
        else
        {
          sub_ACE150(&v19);
        }
        v17 = v19;
        goto LABEL_7;
      }
      v17.m128i_i64[0] = v19.m128i_i64[0] + 8;
      v19.m128i_i64[0] = v17.m128i_i64[0];
    }
    while ( v15 != v17.m128i_i64[0] );
  }
  if ( v16 != v17.m128i_i64[1] )
    goto LABEL_8;
  return 1;
}

