__int64 __fastcall sub_3E8CD0(__m128i *a1, _QWORD *a2, __m128 a3)
{
  _QWORD *exception; // rdi
  unsigned int v4; // r13d
  __int64 v6; // rax
  __int64 v7; // rsi
  __m128i *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  int v14; // esi
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+38h] [rbp-50h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v21 = __readfsqword(0x28u);
  do
  {
    while ( 1 )
    {
      v9 = a2[6];
      v10 = a2[8];
      v17[1] = 0;
      v17[0] = 0xFFFFFFFF00000000LL;
      if ( (unsigned __int64)v17 < v9 || (unsigned __int64)v17 >= v9 + 16 * v10 )
      {
        v11 = a2[7];
        if ( v10 < v11 + 1 )
        {
          v12 = qvector_reserve();
          a2[6] = v12;
          v9 = v12;
          v11 = a2[7];
        }
        sub_123A40(v9 + 16 * v11, (unsigned __int8 *)v17);
      }
      else
      {
        sub_123A40((__int64)v18, (unsigned __int8 *)v17);
        v6 = a2[7];
        v7 = a2[6];
        if ( a2[8] < (unsigned __int64)(v6 + 1) )
        {
          v16 = qvector_reserve();
          a2[6] = v16;
          v7 = v16;
          v6 = a2[7];
        }
        sub_123A40(v7 + 16 * v6, (unsigned __int8 *)v18);
        sub_11CDA0((__int64)v18);
      }
      ++a2[7];
      sub_11CDA0((__int64)v17);
      v8 = (__m128i *)(a2[6] + 16LL * a2[7] - 16);
      sub_3E65E0(a1);
      sub_3E7E50(a1, v8, 1, a3);
      if ( v8->m128i_i8[0] == 1 )
        break;
      if ( v8->m128i_i8[0] != 9 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = "Return value must be in a register";
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
      }
      v4 += v8->m128i_u32[1];
      if ( a1[67].m128i_i16[2] != 58 )
        return v4;
    }
    v13 = v8->m128i_i32[1];
    v14 = v8->m128i_i32[2];
    v18[0] = 0;
    v18[1] = 0;
    sub_63E80(v18, v14, v13);
    a3 = 0;
    v19 = nullptr;
    v20 = 0;
    sub_64280(a2 + 12, v18);
    sub_316CB0(a2 + 14, &v19);
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    qfree();
    v4 += v8->m128i_u32[1];
  }
  while ( a1[67].m128i_i16[2] == 58 );
  return v4;
}
