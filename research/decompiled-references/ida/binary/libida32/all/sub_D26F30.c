__int64 __fastcall sub_D26F30(__int64 a1, __int64 (__fastcall *a2)(__int64, _QWORD), __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  char v10; // bl
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  __m128i v13; // [rsp+10h] [rbp-68h] BYREF
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  void *v15; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-40h]
  void *v17; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 176);
  v12 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v5, 16));
  sub_DFDA50(v5, 16);
  v6 = *(_QWORD *)(a1 + 176);
  v14 = _mm_load_si128(&v12);
  v12 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v6, 16));
  sub_DFDA50(v6, 16);
  v7 = *(_QWORD *)(a1 + 176);
  v13 = _mm_load_si128(&v12);
  sub_D23F70((__int64)&v15, v13.m128i_i64);
  sub_D23F70((__int64)&v17, v14.m128i_i64);
  v8 = sub_21E2070(&v15, &v17);
  if ( v8 < 0 )
    v9 = 2;
  else
    v9 = v8 != 0 ? 3 : 0;
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  v10 = a2(a3, v9);
  *(_BYTE *)sub_DFD980(v7, 8) = v10;
  return 1;
}

