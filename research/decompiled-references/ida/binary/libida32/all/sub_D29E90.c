__int64 __fastcall sub_D29E90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r14
  int v9; // eax
  __int8 v10; // dl
  unsigned __int8 v11; // bl
  _BYTE *v12; // rax
  __int64 result; // rax
  __m128i v14; // [rsp+0h] [rbp-88h] BYREF
  __m128i v15; // [rsp+10h] [rbp-78h] BYREF
  __m128i v16; // [rsp+20h] [rbp-68h] BYREF
  void *v17; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-50h]
  void *v19; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 176);
  v14 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v5, 16));
  sub_DFDA50(v5, 16);
  v6 = *(_QWORD *)(a1 + 176);
  v15 = _mm_load_si128(&v14);
  v14 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v6, 16));
  sub_DFDA50(v6, 16);
  v7 = *(_QWORD *)(a1 + 176);
  v16 = _mm_load_si128(&v14);
  v8 = sub_DFDA20(v7, 48);
  sub_D279E0((__int64)&v17, v16.m128i_i64);
  sub_D279E0((__int64)&v19, v15.m128i_i64);
  v9 = sub_21E20E0(&v17, &v19);
  if ( v9 < 0 )
  {
    v10 = 0;
    v11 = 2;
  }
  else
  {
    v10 = v9 == 0;
    v11 = v9 != 0 ? 3 : 0;
  }
  if ( v20 > 0x40 && v19 )
  {
    v14.m128i_i8[0] = v10;
    operator delete[](v19);
    v10 = v14.m128i_i8[0];
  }
  if ( v18 > 0x40 && v17 )
  {
    v14.m128i_i8[0] = v10;
    operator delete[](v17);
    v10 = v14.m128i_i8[0];
  }
  if ( *(_BYTE *)(a3 + 112) != 2 && v10 )
    v11 = 1;
  v12 = sub_B3D760(a3, v11);
  sub_B3C480((__int64)&v19, (__int64)v12);
  result = sub_D68B10(a1, a2, v8, &v19);
  if ( v20 > 0x40 )
  {
    if ( v19 )
    {
      v14.m128i_i8[0] = result;
      operator delete[](v19);
      return v14.m128i_u8[0];
    }
  }
  return result;
}

