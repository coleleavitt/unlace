__m128i *__fastcall sub_22594D0(__m128i *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r12
  _QWORD *v4; // rax
  _QWORD *i; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int32 v9; // ecx
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i *v13; // [rsp+0h] [rbp-88h] BYREF
  __int64 v14; // [rsp+8h] [rbp-80h]
  __m128i v15; // [rsp+10h] [rbp-78h] BYREF
  __m128i v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+48h] [rbp-40h]
  __int8 v21; // [rsp+50h] [rbp-38h]
  char v22; // [rsp+58h] [rbp-30h]

  v3 = *(_QWORD **)(a2 + 16);
  v4 = &v3[*(unsigned int *)(a2 + 24)];
  if ( v3 == v4 )
  {
    v7 = std::_V2::generic_category((std::_V2 *)a1);
LABEL_15:
    a1[5].m128i_i8[8] |= 1u;
    a1->m128i_i32[0] = 2;
    a1->m128i_i64[1] = v7;
    return a1;
  }
  else
  {
    for ( i = v4 - 1; ; --i )
    {
      (*(void (__fastcall **)(__m128i **, _QWORD, __int64))(*(_QWORD *)*i + 40LL))(&v13, *i, a3);
      if ( (v22 & 1) == 0 )
        break;
      v7 = std::_V2::generic_category((std::_V2 *)&v13);
      v8 = v14;
      v9 = (int)v13;
      if ( v14 != v7 || (_DWORD)v13 != 2 )
      {
        a1[5].m128i_i8[8] |= 1u;
        a1->m128i_i32[0] = v9;
        a1->m128i_i64[1] = v8;
        return a1;
      }
      if ( v3 == i )
        goto LABEL_15;
    }
    a1[5].m128i_i8[8] &= ~1u;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v13 == &v15 )
    {
      a1[1] = _mm_load_si128(&v15);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v13;
      a1[1].m128i_i64[0] = v15.m128i_i64[0];
    }
    v11 = _mm_load_si128(&v16);
    a1->m128i_i64[1] = v14;
    v12 = v17;
    a1[2] = v11;
    a1[3].m128i_i64[0] = v12;
    a1[3].m128i_i64[1] = v18;
    a1[4].m128i_i64[0] = v19;
    a1[4].m128i_i64[1] = v20;
    a1[5].m128i_i8[0] = v21;
    return a1;
  }
}
