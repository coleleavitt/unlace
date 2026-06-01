__int64 __fastcall sub_674870(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // xmm0
  __int64 v13; // r12
  __int64 v14; // r14
  __m128i v15; // rax
  __int64 v16; // rdx
  __m128i v18; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+10h] [rbp-68h]
  __m128i v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v8 = *(_QWORD *)(a2 + 16);
  if ( (v8 & 4) == 0
    || (unsigned __int8)sub_673BB0(
                          a1,
                          *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL),
                          (v8 & 0xFFFFFFFFFFFFFFF8LL) + 8,
                          a4,
                          a5,
                          a6,
                          a7) )
  {
    sub_AC4830(&v20);
    v12 = _mm_load_si128(&v20);
    v13 = v22;
    v14 = v23;
    v19 = v21;
    v15 = v12;
    v18 = v12;
LABEL_4:
    if ( v13 == v15.m128i_i64[0] )
    {
LABEL_10:
      if ( v14 == v15.m128i_i64[1] )
        return 1;
    }
    v16 = v15.m128i_i8[8] & 3;
    if ( (_DWORD)v16 )
      v15.m128i_i64[0] = sub_ACE280(&v18, a2, v16, v9, v10, v11);
    while ( 1 )
    {
      a2 = *(_QWORD *)v15.m128i_i64[0];
      if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v15.m128i_i64[0], a3, *(double *)v12.m128i_i64, a5, a6, a7) )
        break;
      v15.m128i_i64[1] = v18.m128i_i64[1];
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
        v15 = v18;
        goto LABEL_4;
      }
      v15.m128i_i64[0] = v18.m128i_i64[0] + 8;
      v18.m128i_i64[0] = v15.m128i_i64[0];
      if ( v15.m128i_i64[0] == v13 )
        goto LABEL_10;
    }
  }
  return 0;
}

