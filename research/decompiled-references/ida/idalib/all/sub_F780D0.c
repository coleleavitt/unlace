void __fastcall sub_F780D0(__int64 a1, unsigned __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  size_t v8; // r14
  __m128i *v9; // rax
  __int64 v10; // rcx
  void *v11; // rdx
  _BYTE *v12; // rsi
  __m128i *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm3
  __m128i *src; // [rsp+8h] [rbp-1C0h]
  __m128i v21; // [rsp+10h] [rbp-1B8h] BYREF
  __m128i v22; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+30h] [rbp-198h] BYREF
  int v24; // [rsp+38h] [rbp-190h]
  __int128 v25; // [rsp+40h] [rbp-188h]
  void *dest; // [rsp+50h] [rbp-178h]
  char v27; // [rsp+58h] [rbp-170h]
  int v28; // [rsp+5Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+60h] [rbp-168h]
  void *ptr; // [rsp+70h] [rbp-158h] BYREF
  __m128i si128; // [rsp+78h] [rbp-150h]
  _BYTE v32[320]; // [rsp+88h] [rbp-140h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v32;
  v24 = 2;
  v27 = 0;
  v23 = &off_2BEBEE0;
  v28 = 1;
  dest = nullptr;
  v25 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v23, 0, 0, 0);
  v8 = *(_QWORD *)(a3 + 8);
  v22.m128i_i16[2] = 0;
  v9 = *(__m128i **)a3;
  v21 = _mm_loadu_si128(a4);
  v22.m128i_i32[0] = 0;
  src = v9;
  if ( a1 )
  {
    v22.m128i_i8[4] = v8 == 0;
    sub_F71FE0(&v21, a1, a2, (unsigned __int64)&v23, v6, v7);
    if ( v8 > *((_QWORD *)&v25 + 1) - (_QWORD)dest )
    {
      sub_227BF10(&v23, src, v8);
    }
    else if ( v8 )
    {
      memcpy(dest, src, v8);
      dest = (char *)dest + v8;
    }
    sub_F75F20(&v21, a1, (unsigned __int64)&v23, v10);
  }
  else
  {
    sub_995540((__int64)&v23, "NULL TYPE");
  }
  v11 = p_ptr[1];
  v12 = *p_ptr;
  v21.m128i_i64[0] = (__int64)&v22;
  sub_F6EAC0(&v21, v12, (__int64)v11 + (_QWORD)v12);
  v13 = *(__m128i **)a3;
  if ( *(_QWORD *)a3 == a3 + 16 )
  {
    v18 = v21.m128i_i64[1];
    if ( (__m128i *)v21.m128i_i64[0] == &v22 )
    {
      if ( *(_QWORD *)(a3 + 8) )
      {
        if ( !v21.m128i_i64[1] )
        {
          *(_QWORD *)(a3 + 8) = 0;
          *(_BYTE *)(a3 + 16) = 0;
          goto LABEL_11;
        }
        *(__m128i *)(a3 + 16) = _mm_load_si128(&v22);
      }
      else if ( v21.m128i_i64[1] )
      {
        v19 = _mm_load_si128(&v22);
        *(_QWORD *)(a3 + 8) = v21.m128i_i64[1];
        *(__m128i *)(a3 + 16) = v19;
        goto LABEL_11;
      }
    }
    else
    {
      *(_QWORD *)a3 = v21.m128i_i64[0];
      *(_QWORD *)(a3 + 16) = v22.m128i_i64[0];
    }
    *(_QWORD *)(a3 + 8) = v18;
    goto LABEL_11;
  }
  v14 = v21.m128i_i64[0];
  v15 = *(_QWORD *)(a3 + 16);
  if ( (__m128i *)v21.m128i_i64[0] == &v22 )
  {
    v14 = a3 + 16;
    *(__m128i *)(a3 + 16) = _mm_load_si128(&v22);
  }
  else
  {
    *(_QWORD *)(a3 + 16) = v22.m128i_i64[0];
  }
  v16 = v21.m128i_i64[1];
  *(_QWORD *)a3 = v14;
  v17 = *(_QWORD *)(a3 + 8);
  v21.m128i_i64[0] = (__int64)v13;
  v22.m128i_i64[0] = v15;
  *(_QWORD *)(a3 + 8) = v16;
  v21.m128i_i64[1] = v17;
  if ( v13 != &v22 )
    operator delete(v13);
LABEL_11:
  v23 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v23);
  if ( ptr != v32 )
    free(ptr);
}
