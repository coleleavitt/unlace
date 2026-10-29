__int64 __fastcall sub_59E470(
        __int64 *a1,
        int *a2,
        const char *a3,
        unsigned int a4,
        __int64 a5,
        const __m128i *a6,
        unsigned int a7)
{
  int v7; // esi
  __int64 v9; // rbx
  unsigned int v11; // eax
  __int64 v12; // rbx
  size_t v14; // rax
  int v15; // eax
  __m128i v16; // xmm0
  size_t v17; // [rsp+0h] [rbp-E8h]
  size_t n; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v19; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+20h] [rbp-C8h] BYREF
  void *v21; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+38h] [rbp-B0h]
  void *ptr; // [rsp+48h] [rbp-A0h]
  __int128 v24; // [rsp+50h] [rbp-98h]
  _BYTE v25[24]; // [rsp+60h] [rbp-88h] BYREF
  __m128i v26; // [rsp+78h] [rbp-70h]
  int v27; // [rsp+88h] [rbp-60h]
  __int64 v28; // [rsp+90h] [rbp-58h]
  char v29; // [rsp+98h] [rbp-50h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = *a2;
    v9 = a4;
    v19 = 0;
    v11 = sub_3B90A0(a1, v7);
    if ( v11 == -1 || !(unsigned __int8)sub_532DA0(a1, &v19, v11) )
    {
      LODWORD(v12) = 0;
    }
    else
    {
      v21 = nullptr;
      ptr = nullptr;
      v26.m128i_i64[1] = 1;
      v27 = -1;
      v28 = 0;
      v29 = 0;
      v20 = 0;
      v22 = 0;
      v24 = 0;
      *(_OWORD *)v25 = 0;
      if ( a3 )
      {
        v14 = strlen(a3);
        if ( v14 )
        {
          n = v14;
          v17 = v14 + 1;
          v21 = (void *)qvector_reserve(&v21, 0, v14 + 1, 1);
          *(_QWORD *)&v22 = v17;
          memmove(v21, a3, n);
          *((_BYTE *)v21 + n) = 0;
        }
      }
      v12 = 8 * v9;
      *(_QWORD *)&v20 = v12;
      copy_tinfo_t(v25);
      *((_QWORD *)&v20 + 1) = 8 * get_tinfo_size(0, *(_QWORD *)v25, 0);
      if ( a6 )
      {
        v15 = a6[2].m128i_i32[0];
        *(__m128i *)&v25[8] = _mm_loadu_si128(a6);
        v16 = _mm_loadu_si128(a6 + 1);
        v27 = v15;
        v26 = v16;
      }
      LOBYTE(v12) = (unsigned int)set_tinfo_property4(&v19, 9, &v20, 1, -1, a7) == 0;
      clear_tinfo_t(v25);
      if ( ptr )
      {
        *(_QWORD *)&v24 = 0;
        qfree(ptr);
      }
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v21);
      }
    }
    clear_tinfo_t(&v19);
  }
  else
  {
    LODWORD(v12) = 0;
  }
  return (unsigned int)v12;
}

