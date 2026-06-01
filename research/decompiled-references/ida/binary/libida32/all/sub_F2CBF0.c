void __fastcall sub_F2CBF0(__int64 *a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // r8
  _BYTE *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-1B0h] BYREF
  __m128i v11[2]; // [rsp+8h] [rbp-1A8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-188h]
  char v13; // [rsp+30h] [rbp-180h]
  int v14; // [rsp+34h] [rbp-17Ch]
  void **p_ptr; // [rsp+38h] [rbp-178h]
  void *s2; // [rsp+48h] [rbp-168h] BYREF
  __m128i si128; // [rsp+50h] [rbp-160h]
  _BYTE v18[136]; // [rsp+60h] [rbp-150h] BYREF
  void *ptr; // [rsp+E8h] [rbp-C8h] BYREF
  _BYTE n[24]; // [rsp+F0h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+108h] [rbp-A8h]
  char v22; // [rsp+110h] [rbp-A0h]
  int v23; // [rsp+114h] [rbp-9Ch]
  void **p_s2; // [rsp+118h] [rbp-98h]

  *(_OWORD *)&n[8] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  s2 = v18;
  *(_DWORD *)n = 2;
  v22 = 0;
  v23 = 1;
  v21 = 0;
  ptr = &off_2BC1F40;
  p_s2 = &s2;
  sub_2257B70(&ptr, 0, 0, 0);
  sub_EFF8A0(a1, (const __m128i *)&ptr, (const __m128i *)(a1[1] + 1144), 1, v2);
  ptr = &unk_2C4C288;
  sub_2257A60(&ptr);
  v3 = sub_971800(*(_QWORD *)(a1[1] + 1096), "'");
  v4 = sub_22581D0(v3, s2, si128.m128i_i64[0]);
  sub_971800(v4, "'");
  v5 = *(_QWORD **)(a1[1] + 1128);
  if ( v5 )
  {
    v10 = sub_A92560(v5, *a1, 0);
    if ( v10 != *a1 )
    {
      v11[0].m128i_i64[0] = (__int64)&off_2BC1F40;
      *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      v11[1] = 0;
      ptr = &n[16];
      v11[0].m128i_i32[2] = 2;
      v13 = 0;
      v14 = 1;
      v12 = 0;
      p_ptr = &ptr;
      sub_2257B70(v11, 0, 0, 0);
      sub_EFF8A0(&v10, v11, (const __m128i *)(a1[1] + 1144), 1, v6);
      v11[0].m128i_i64[0] = (__int64)&unk_2C4C288;
      sub_2257A60(v11);
      if ( *(_QWORD *)n != si128.m128i_i64[0] || (v7 = ptr, *(_QWORD *)n) && memcmp(ptr, s2, *(size_t *)n) )
      {
        v8 = sub_971800(*(_QWORD *)(a1[1] + 1096), ":'");
        v9 = sub_22581D0(v8, ptr, *(_QWORD *)n);
        sub_971800(v9, "'");
        v7 = ptr;
      }
      if ( v7 != &n[16] )
        free(v7);
    }
  }
  if ( s2 != v18 )
    free(s2);
  sub_F299B0(a1[1], *a1);
}

