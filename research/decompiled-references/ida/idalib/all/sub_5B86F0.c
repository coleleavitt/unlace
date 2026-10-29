__int64 __fastcall sub_5B86F0(
        __int64 *a1,
        __int64 *a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  unsigned __int64 v11; // rax
  size_t v13; // rax
  int v14; // eax
  __m128i v15; // xmm0
  size_t v16; // [rsp+0h] [rbp-F8h]
  size_t n; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v18; // [rsp+18h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+20h] [rbp-D8h] BYREF
  void *v20; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+38h] [rbp-C0h]
  void *ptr; // [rsp+48h] [rbp-B0h]
  __int128 v23; // [rsp+50h] [rbp-A8h]
  _QWORD v24[5]; // [rsp+60h] [rbp-98h] BYREF
  __m128i v25; // [rsp+88h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-60h]
  __int64 v27; // [rsp+A0h] [rbp-58h]
  char v28; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+B8h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = *a2;
    v18 = 0;
    v11 = sub_3BDD60(a1, v7);
    if ( v11 == -1 || !(unsigned __int8)sub_54BE00(a1, &v18, v11) )
    {
      LODWORD(a6) = 0;
    }
    else
    {
      v20 = nullptr;
      ptr = nullptr;
      v25.m128i_i64[1] = 1;
      v26 = -1;
      v27 = 0;
      v28 = 0;
      v19 = 0;
      v21 = 0;
      v23 = 0;
      *(_OWORD *)v24 = 0;
      if ( a3 )
      {
        v13 = strlen(a3);
        if ( v13 )
        {
          n = v13;
          v16 = v13 + 1;
          v20 = (void *)qvector_reserve(&v20, 0, v13 + 1, 1);
          *(_QWORD *)&v21 = v16;
          memmove(v20, a3, n);
          *((_BYTE *)v20 + n) = 0;
        }
      }
      *(_QWORD *)&v19 = 8 * a4;
      copy_tinfo_t(v24);
      *((_QWORD *)&v19 + 1) = 8 * get_tinfo_size(0, v24[0], 0);
      if ( a6 )
      {
        v14 = a6[3].m128i_i32[0];
        *(__m128i *)&v24[1] = _mm_loadu_si128(a6);
        v15 = _mm_loadu_si128(a6 + 1);
        v26 = v14;
        *(__m128i *)&v24[3] = v15;
        v25 = _mm_loadu_si128(a6 + 2);
      }
      LOBYTE(a6) = (unsigned int)set_tinfo_property4(&v18, 9, &v19, 1, -1, a7) == 0;
      clear_tinfo_t(v24);
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20);
      }
    }
    clear_tinfo_t(&v18);
  }
  else
  {
    LODWORD(a6) = 0;
  }
  return (unsigned int)a6;
}
