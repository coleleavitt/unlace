void __fastcall sub_F071F0(__int64 a1, const __m128i *a2)
{
  __m128i si128; // xmm0
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rsi
  void *v8; // rdi
  __int64 v9; // r8
  _BYTE *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13[2]; // [rsp+10h] [rbp-1D8h] BYREF
  __m128i v14[2]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-198h]
  char v16; // [rsp+58h] [rbp-190h]
  int v17; // [rsp+5Ch] [rbp-18Ch]
  void **p_s1; // [rsp+60h] [rbp-188h]
  void *ptr; // [rsp+70h] [rbp-178h] BYREF
  __m128i v20; // [rsp+78h] [rbp-170h]
  _BYTE v21[136]; // [rsp+88h] [rbp-160h] BYREF
  void *s1; // [rsp+110h] [rbp-D8h] BYREF
  _BYTE n[24]; // [rsp+118h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+130h] [rbp-B8h]
  char v25; // [rsp+138h] [rbp-B0h]
  int v26; // [rsp+13Ch] [rbp-ACh]
  void **p_ptr; // [rsp+140h] [rbp-A8h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  *(_OWORD *)&n[8] = 0;
  v20 = si128;
  ptr = v21;
  *(_DWORD *)n = 2;
  v25 = 0;
  v26 = 1;
  v24 = 0;
  s1 = &off_2BC1F40;
  p_ptr = &ptr;
  sub_2257B70(&s1, 0, 0, 0);
  sub_EFA2F0((__int64)a2, (const __m128i *)(a1 + 1144), (__m128i *)&s1, 1u, v4, *(double *)si128.m128i_i64);
  s1 = &unk_2C4C288;
  sub_2257A60(&s1);
  v5 = sub_971800(*(_QWORD *)(a1 + 1096), " '");
  v6 = sub_22581D0(v5, ptr, v20.m128i_i64[0]);
  sub_971800(v6, "'");
  v7 = *(_QWORD **)(a1 + 1128);
  if ( v7 )
  {
    sub_A92E70(v13, v7, a2);
    if ( sub_EF9EB0((__int64)v13, (__int64)a2) )
      goto LABEL_3;
    v16 = 0;
    s1 = &n[16];
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384D00);
    v14[1] = 0;
    v14[0].m128i_i32[2] = 2;
    v17 = 1;
    v15 = 0;
    v14[0].m128i_i64[0] = (__int64)&off_2BC1F40;
    p_s1 = &s1;
    sub_2257B70(v14, 0, 0, 0);
    sub_EFA2F0((__int64)v13, (const __m128i *)(a1 + 1144), v14, 1u, v9, *(double *)si128.m128i_i64);
    v14[0].m128i_i64[0] = (__int64)&unk_2C4C288;
    sub_2257A60(v14);
    if ( *(_QWORD *)n != v20.m128i_i64[0] || (v10 = s1, *(_QWORD *)n) && memcmp(s1, ptr, *(size_t *)n) )
    {
      v11 = sub_971800(*(_QWORD *)(a1 + 1096), ":'");
      v12 = sub_22581D0(v11, s1, *(_QWORD *)n);
      sub_971800(v12, "'");
      v10 = s1;
    }
    if ( v10 == &n[16] )
    {
LABEL_3:
      v8 = ptr;
      if ( ptr == v21 )
        return;
    }
    else
    {
      free(v10);
      v8 = ptr;
      if ( ptr == v21 )
        return;
    }
LABEL_4:
    free(v8);
    return;
  }
  v8 = ptr;
  if ( ptr != v21 )
    goto LABEL_4;
}

