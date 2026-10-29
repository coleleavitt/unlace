__int64 __fastcall sub_CEC2E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdx
  void *v11; // rax
  __int32 v12; // eax
  unsigned __int8 v13; // si
  _BYTE *v14; // rax
  __int64 result; // rax
  __m128i v16; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v17; // [rsp+10h] [rbp-98h] BYREF
  __m128i v18; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v19[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v20; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-50h]

  v6 = *(_QWORD *)(a1 + 176);
  v16 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v6, 16));
  sub_DFDA50(v6, 16);
  v7 = *(_QWORD *)(a1 + 176);
  v17 = _mm_load_si128(&v16);
  v16 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v7, 16));
  sub_DFDA50(v7, 16);
  v8 = *(_QWORD *)(a1 + 176);
  v18 = _mm_load_si128(&v16);
  v9 = sub_DFDA20(v8, 48);
  sub_CDADA0((__int64)&v20, (__int64)&v18);
  sub_CDADA0((__int64)v19, (__int64)&v17);
  v11 = (void *)sub_21D5390(v19, &v17, v10);
  if ( v20 == v11 )
    v12 = sub_21DD2E0(&v20, v19);
  else
    v12 = sub_21D6700(&v20, v19);
  v16.m128i_i32[0] = v12;
  sub_971860(v19);
  sub_971860(&v20);
  v13 = byte_23CC758[v16.m128i_u32[0]];
  if ( *(_BYTE *)(a3 + 112) != 2 && !v13 )
    v13 = 1;
  v14 = sub_B3D760(a3, v13);
  sub_B3C480((__int64)&v20, (__int64)v14);
  result = sub_D68B10(a1, a2, v9, &v20);
  if ( v21 > 0x40 )
  {
    if ( v20 )
    {
      v16.m128i_i8[0] = result;
      operator delete[](v20);
      return v16.m128i_u8[0];
    }
  }
  return result;
}

