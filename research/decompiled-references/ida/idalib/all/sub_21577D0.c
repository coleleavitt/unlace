__m128i *__fastcall sub_21577D0(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rax
  _BYTE *v6; // r15
  unsigned __int64 *v7; // rdx
  __int64 v8; // rax
  void *v9; // rax
  unsigned __int64 v10; // rdx
  size_t v11; // r8
  _WORD *v12; // rdi
  char *v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-1E8h]
  size_t n; // [rsp+10h] [rbp-1D8h]
  size_t na; // [rsp+10h] [rbp-1D8h]
  void *src; // [rsp+18h] [rbp-1D0h]
  __int64 v18; // [rsp+20h] [rbp-1C8h] BYREF
  char v19; // [rsp+28h] [rbp-1C0h]
  _BYTE *v20; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-1B0h]
  char v22; // [rsp+40h] [rbp-1A8h]
  _QWORD v23[4]; // [rsp+50h] [rbp-198h] BYREF
  __int16 v24; // [rsp+70h] [rbp-178h]
  char v25[32]; // [rsp+80h] [rbp-168h] BYREF
  __int16 v26; // [rsp+A0h] [rbp-148h]
  char v27[32]; // [rsp+B0h] [rbp-138h] BYREF
  __int16 v28; // [rsp+D0h] [rbp-118h]
  _QWORD v29[2]; // [rsp+E0h] [rbp-108h] BYREF
  __m128i v30; // [rsp+F0h] [rbp-F8h] BYREF
  __int16 v31; // [rsp+100h] [rbp-E8h]
  void *ptr; // [rsp+110h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+118h] [rbp-D0h] BYREF
  _WORD v34[96]; // [rsp+128h] [rbp-C0h] BYREF

  (*(void (__fastcall **)(__int64 *))(**(_QWORD **)(a2 + 8) + 96LL))(&v18);
  if ( (v19 & 1) == 0 )
  {
    sub_2157700((__int64)&v20, a2);
    if ( (v22 & 1) != 0 )
    {
      v5 = (__int64)v20;
      a1[2].m128i_i8[0] |= 1u;
      v20 = nullptr;
      a1->m128i_i64[0] = v5;
LABEL_6:
      sub_111DFC0((__int64 *)&v20);
      goto LABEL_3;
    }
    v6 = v20;
    v34[4] = 261;
    ptr = v20;
    v14 = v21;
    si128.m128i_i64[0] = v21;
    if ( (unsigned __int8)sub_228B020(&ptr, 0) )
    {
      ptr = &si128.m128i_u64[1];
      sub_2156F10(&ptr, v6, (__int64)&v6[v14]);
      a1[2].m128i_i8[0] &= ~1u;
      v7 = (unsigned __int64 *)ptr;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( v7 == &si128.m128i_u64[1] )
      {
        a1[1] = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
      }
      else
      {
        v8 = si128.m128i_i64[1];
        a1->m128i_i64[0] = (__int64)v7;
        a1[1].m128i_i64[0] = v8;
      }
      a1->m128i_i64[1] = si128.m128i_i64[0];
      goto LABEL_6;
    }
    sub_215DED0(v29, *(_QWORD *)a2);
    v9 = (void *)sub_228A4B0(v30.m128i_i64[0], v30.m128i_i64[1], 0);
    v11 = v10;
    ptr = v34;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v10 > 0x80 )
    {
      src = v9;
      n = v10;
      sub_2236E10(&ptr, v34, v10, 1);
      v11 = n;
      v9 = src;
      v13 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v10 )
        goto LABEL_13;
      v13 = (char *)v34;
    }
    na = v11;
    memcpy(v13, v9, v11);
    v10 = na + si128.m128i_i64[0];
LABEL_13:
    v23[0] = v6;
    si128.m128i_i64[0] = v10;
    v31 = 257;
    v28 = 257;
    v26 = 257;
    v24 = 261;
    v23[1] = v14;
    sub_228A3B0(&ptr, v23, v25, v27, v29);
    v29[0] = &v30;
    sub_2156F10(v29, ptr, (__int64)ptr + si128.m128i_i64[0]);
    a1[2].m128i_i8[0] &= ~1u;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v29[0] == &v30 )
    {
      a1[1] = _mm_load_si128(&v30);
    }
    else
    {
      a1->m128i_i64[0] = v29[0];
      a1[1].m128i_i64[0] = v30.m128i_i64[0];
    }
    v12 = ptr;
    a1->m128i_i64[1] = v29[1];
    if ( v12 != v34 )
      free(v12);
    goto LABEL_6;
  }
  v3 = v18;
  a1[2].m128i_i8[0] |= 1u;
  v18 = 0;
  a1->m128i_i64[0] = v3;
LABEL_3:
  sub_12EBA60(&v18);
  return a1;
}
