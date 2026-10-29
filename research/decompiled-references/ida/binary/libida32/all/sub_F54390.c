void __fastcall sub_F54390(__int64 a1, unsigned __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  size_t v8; // r14
  __m128i *v9; // rax
  void *v10; // rdx
  _BYTE *v11; // rsi
  __m128i *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm3
  __m128i *src; // [rsp+8h] [rbp-1C0h]
  __m128i v20; // [rsp+10h] [rbp-1B8h] BYREF
  __m128i v21; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+30h] [rbp-198h] BYREF
  int v23; // [rsp+38h] [rbp-190h]
  __int128 v24; // [rsp+40h] [rbp-188h]
  void *dest; // [rsp+50h] [rbp-178h]
  char v26; // [rsp+58h] [rbp-170h]
  int v27; // [rsp+5Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+60h] [rbp-168h]
  void *ptr; // [rsp+70h] [rbp-158h] BYREF
  __m128i si128; // [rsp+78h] [rbp-150h]
  _BYTE v31[320]; // [rsp+88h] [rbp-140h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
  ptr = v31;
  v23 = 2;
  v26 = 0;
  v22 = &off_2BC1F40;
  v27 = 1;
  dest = nullptr;
  v24 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v22, 0, 0, 0);
  v8 = *(_QWORD *)(a3 + 8);
  v21.m128i_i16[2] = 0;
  v9 = *(__m128i **)a3;
  v20 = _mm_loadu_si128(a4);
  v21.m128i_i32[0] = 0;
  src = v9;
  if ( a1 )
  {
    v21.m128i_i8[4] = v8 == 0;
    sub_F4E2A0(&v20, a1, a2, (unsigned __int64)&v22, v6, v7);
    if ( v8 > *((_QWORD *)&v24 + 1) - (_QWORD)dest )
    {
      sub_22581D0(&v22, src, v8);
    }
    else if ( v8 )
    {
      memcpy(dest, src, v8);
      dest = (char *)dest + v8;
    }
    sub_F521E0(&v20, a1, (unsigned __int64)&v22);
  }
  else
  {
    sub_971800((__int64)&v22, "NULL TYPE");
  }
  v10 = p_ptr[1];
  v11 = *p_ptr;
  v20.m128i_i64[0] = (__int64)&v21;
  sub_F4AD80(&v20, v11, (__int64)v10 + (_QWORD)v11);
  v12 = *(__m128i **)a3;
  if ( *(_QWORD *)a3 == a3 + 16 )
  {
    v17 = v20.m128i_i64[1];
    if ( (__m128i *)v20.m128i_i64[0] == &v21 )
    {
      if ( *(_QWORD *)(a3 + 8) )
      {
        if ( !v20.m128i_i64[1] )
        {
          *(_QWORD *)(a3 + 8) = 0;
          *(_BYTE *)(a3 + 16) = 0;
          goto LABEL_11;
        }
        *(__m128i *)(a3 + 16) = _mm_load_si128(&v21);
      }
      else if ( v20.m128i_i64[1] )
      {
        v18 = _mm_load_si128(&v21);
        *(_QWORD *)(a3 + 8) = v20.m128i_i64[1];
        *(__m128i *)(a3 + 16) = v18;
        goto LABEL_11;
      }
    }
    else
    {
      *(_QWORD *)a3 = v20.m128i_i64[0];
      *(_QWORD *)(a3 + 16) = v21.m128i_i64[0];
    }
    *(_QWORD *)(a3 + 8) = v17;
    goto LABEL_11;
  }
  v13 = v20.m128i_i64[0];
  v14 = *(_QWORD *)(a3 + 16);
  if ( (__m128i *)v20.m128i_i64[0] == &v21 )
  {
    v13 = a3 + 16;
    *(__m128i *)(a3 + 16) = _mm_load_si128(&v21);
  }
  else
  {
    *(_QWORD *)(a3 + 16) = v21.m128i_i64[0];
  }
  v15 = v20.m128i_i64[1];
  *(_QWORD *)a3 = v13;
  v16 = *(_QWORD *)(a3 + 8);
  v20.m128i_i64[0] = (__int64)v12;
  v21.m128i_i64[0] = v14;
  *(_QWORD *)(a3 + 8) = v15;
  v20.m128i_i64[1] = v16;
  if ( v12 != &v21 )
    operator delete(v12);
LABEL_11:
  v22 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v22);
  if ( ptr != v31 )
    free(ptr);
}

