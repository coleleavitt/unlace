_QWORD *__fastcall sub_48B720(_QWORD *a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  int v5; // ecx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __m128 v11; // xmm0
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  __m128i v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v5 = *(_DWORD *)a3;
  v16 = __readfsqword(0x28u);
  *a1 = -1;
  a1[1] = 0;
  a1[2] = 0;
  if ( v5 >= 0 && *(int *)(a3 + 4) >= 0 && *(_QWORD *)(a3 + 16) )
  {
    v7 = *(_QWORD *)(a3 + 8);
    v8 = (unsigned int)v7;
    v9 = HIDWORD(v7);
    if ( v9 == 0xFFFFFFFFLL )
    {
      v13 = -1;
      v14 = v8;
      if ( v8 )
        return a1;
    }
    else
    {
      v13 = v9;
      v14 = v8;
    }
    v10 = **(_QWORD **)(a2 + 208);
    v15 = (__m128i)-1LL;
    dirtree_get_parent_cursor(&v15, v10, &v13);
    v11 = (__m128)_mm_load_si128(&v15);
    if ( v11.m128_u64[0] != -1 || !_mm_movehl_ps(a5, v11).m128_u64[0] )
    {
      v15 = (__m128i)v11;
      sub_48B610((__int64)a1, a2, v15.m128i_i64);
    }
  }
  return a1;
}
