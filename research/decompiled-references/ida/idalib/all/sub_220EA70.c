_QWORD *__fastcall sub_220EA70(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // r15
  unsigned int v7; // r14d
  unsigned __int16 *v8; // rdi
  __int8 *v10; // rsi
  unsigned __int64 i; // rcx
  char v12; // al
  _QWORD *v13; // rdx
  void **v14; // rcx
  __m128i *v15; // rax
  void **v16; // r10
  size_t v17; // rcx
  size_t v18; // rax
  size_t v19; // r11
  unsigned __int64 v20; // rcx
  char *v21; // rdx
  __m128i si128; // xmm0
  __m128i *v23; // rax
  __int64 v24; // r8
  size_t v25; // rdx
  __m128i *v26; // rdi
  unsigned __int64 v27; // rcx
  const char *v28; // r14
  size_t v29; // rax
  char *v30; // rcx
  _QWORD *v31; // rax
  __m128i v32; // xmm2
  void **v33; // [rsp+0h] [rbp-D8h] BYREF
  void *src; // [rsp+8h] [rbp-D0h]
  void **v35; // [rsp+10h] [rbp-C8h]
  void **v36; // [rsp+18h] [rbp-C0h]
  void *dest; // [rsp+20h] [rbp-B8h] BYREF
  __m128 v38; // [rsp+28h] [rbp-B0h] BYREF
  void *v39[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v40[2]; // [rsp+50h] [rbp-88h] BYREF
  void *v41; // [rsp+60h] [rbp-78h] BYREF
  size_t n; // [rsp+68h] [rbp-70h]
  __m128i v43; // [rsp+70h] [rbp-68h] BYREF
  void *v44; // [rsp+80h] [rbp-58h] BYREF
  size_t v45; // [rsp+88h] [rbp-50h]
  __m128i v46; // [rsp+90h] [rbp-48h] BYREF

  v38.m128_i8[8] = 0;
  v38.m128_u64[0] = 0;
  v6 = sub_2219FE0(a2 + 160, a2 + 184, a2 + 192);
  dest = &v38.m128_u16[4];
  if ( v6 <= 3 )
  {
    v28 = off_2BEA740[v6];
    v29 = strlen(v28);
    v30 = (char *)v28;
    v7 = v6;
    sub_99BDC0(&dest, 0, 0, v30, v29);
    goto LABEL_4;
  }
  v7 = v6;
  if ( v6 > 0xC )
  {
    sub_99BDC0(&dest, 0, 0, "Invalid", 7u);
    goto LABEL_4;
  }
  v10 = &v46.m128i_i8[5];
  for ( i = 1LL << v6; ; i /= 0xAu )
  {
    --v10;
    v12 = i % 0xA + 48;
    *v10 = v12;
    if ( i <= 9 )
      break;
  }
  v13 = v40;
  v14 = (void **)(&v46.m128i_u8[5] - (unsigned __int8 *)v10);
  v39[0] = v40;
  if ( (unsigned __int64)(&v46.m128i_u8[5] - (unsigned __int8 *)v10) > 0xF )
  {
    if ( (__int64)v14 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v35 = &v44;
    src = v10;
    v31 = (_QWORD *)operator new((unsigned __int64)v14 + 1);
    v14 = (void **)(&v46.m128i_u8[5] - (unsigned __int8 *)v10);
    v39[0] = v31;
    v40[0] = &v46.m128i_u8[5] - (unsigned __int8 *)v10;
    goto LABEL_36;
  }
  if ( v14 == (void **)((char *)&dword_0 + 1) )
  {
    LOBYTE(v40[0]) = v12;
    goto LABEL_13;
  }
  if ( v14 )
  {
    v31 = v40;
LABEL_36:
    src = &v44;
    v33 = v14;
    memcpy(v31, v10, (size_t)v14);
    v13 = v39[0];
    v14 = v33;
  }
LABEL_13:
  v39[1] = v14;
  *((_BYTE *)v14 + (_QWORD)v13) = 0;
  v33 = &v44;
  v15 = (__m128i *)sub_99BDC0(v39, 0, 0, "8-byte alignment, ", 0x12u);
  v16 = &v41;
  v41 = &v43;
  if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
  {
    v43 = _mm_loadu_si128(v15 + 1);
  }
  else
  {
    v41 = (void *)v15->m128i_i64[0];
    v43.m128i_i64[0] = v15[1].m128i_i64[0];
  }
  v17 = v15->m128i_u64[1];
  v15[1].m128i_i8[0] = 0;
  n = v17;
  v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
  v15->m128i_i64[1] = 0;
  v18 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 0x17 )
    std::__throw_length_error("basic_string::append");
  v19 = n + 24;
  if ( v41 == &v43 )
    v20 = 15;
  else
    v20 = v43.m128i_i64[0];
  if ( v19 > v20 )
  {
    v36 = &v44;
    v35 = (void **)(n + 24);
    src = (void *)n;
    v33 = &v41;
    sub_998B30((__int64)&v41, n, 0, "-byte extended alignment", 0x18u);
    v19 = (size_t)v35;
    v18 = (size_t)src;
    v16 = &v41;
  }
  else
  {
    v21 = (char *)v41 + n;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB930);
    *((_QWORD *)v21 + 2) = 0x746E656D6E67696CLL;
    *(__m128i *)v21 = si128;
  }
  n = v19;
  *((_BYTE *)v41 + v18 + 24) = 0;
  v23 = (__m128i *)v41;
  v44 = &v46;
  if ( v41 == &v43 )
  {
    v25 = n;
    v32 = _mm_load_si128(&v43);
    v43.m128i_i8[0] = 0;
    n = 0;
    v26 = (__m128i *)dest;
    v45 = v25;
    v46 = v32;
    goto LABEL_40;
  }
  v24 = v43.m128i_i64[0];
  v25 = n;
  v41 = &v43;
  v44 = v23;
  v26 = (__m128i *)dest;
  v46.m128i_i64[0] = v43.m128i_i64[0];
  v45 = n;
  n = 0;
  v43.m128i_i8[0] = 0;
  if ( v23 == &v46 )
  {
LABEL_40:
    if ( v25 )
    {
      if ( v25 == 1 )
      {
        v26->m128i_i8[0] = v46.m128i_i8[0];
        v25 = v45;
        v26 = (__m128i *)dest;
      }
      else
      {
        src = &v41;
        v33 = &v44;
        memcpy(v26, &v46, v25);
        v26 = (__m128i *)dest;
        v16 = &v41;
        v25 = v45;
      }
    }
    v38.m128_u64[0] = v25;
    v26->m128i_i8[v25] = 0;
    v26 = (__m128i *)v44;
    goto LABEL_25;
  }
  if ( dest == &v38.m128_u16[4] )
  {
    v33 = (void **)v24;
    dest = v23;
    v38 = _mm_loadh_ps((const double *)&v33);
    goto LABEL_45;
  }
  v33 = (void **)v24;
  v27 = v38.m128_u64[1];
  dest = v23;
  v38 = _mm_loadh_ps((const double *)&v33);
  if ( !v26 )
  {
LABEL_45:
    v26 = &v46;
    v44 = &v46;
    goto LABEL_25;
  }
  v44 = v26;
  v46.m128i_i64[0] = v27;
LABEL_25:
  v45 = 0;
  v26->m128i_i8[0] = 0;
  if ( v44 != &v46 )
  {
    v33 = &v41;
    operator delete(v44);
    v16 = v33;
  }
  if ( v41 != v16 + 2 )
    operator delete(v41);
  if ( v39[0] != v40 )
    operator delete(v39[0]);
LABEL_4:
  sub_221F830(a2, a3, v7, dest, v38.m128_u64[0]);
  v8 = (unsigned __int16 *)dest;
  *a1 = 0;
  if ( v8 != &v38.m128_u16[4] )
    operator delete(v8);
  return a1;
}
