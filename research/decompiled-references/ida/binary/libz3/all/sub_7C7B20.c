__int64 __fastcall sub_7C7B20(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, int a5, int a6)
{
  char **exception; // r12
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __int64 v16; // rax
  _QWORD *v17; // rdx
  void *v18; // r13
  unsigned int v19; // r8d
  size_t v20; // rdi
  _DWORD *v21; // rax
  _QWORD *v22; // r9
  int v23; // r8d
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 v26; // rdi
  _QWORD *v27; // rax
  int v28; // [rsp+0h] [rbp-B8h]
  __m128i v29; // [rsp+8h] [rbp-B0h] BYREF
  _DWORD *v30; // [rsp+18h] [rbp-A0h]
  unsigned int v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+24h] [rbp-94h]
  _DWORD *v33; // [rsp+28h] [rbp-90h]
  int v34; // [rsp+30h] [rbp-88h]
  char v35; // [rsp+38h] [rbp-80h]
  _BYTE v36[16]; // [rsp+40h] [rbp-78h] BYREF
  char v37[16]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v38[11]; // [rsp+60h] [rbp-58h] BYREF

  result = *a3;
  v29.m128i_i64[1] = a1;
  if ( result )
  {
    v10 = 0;
    do
    {
      if ( v10 >= *(_DWORD *)(result - 4) )
        break;
      v11 = v29.m128i_i64[1];
      sub_168DB50(
        (unsigned int)v36,
        v29.m128i_i32[2] + 96,
        *(_QWORD *)(a2 + 16),
        v10,
        a5,
        a6,
        v28,
        v29.m128i_i32[0],
        v29.m128i_i32[2],
        (_DWORD)v30,
        v31,
        (_DWORD)v33,
        v34,
        v35);
      sub_7C71D0(v11, (__int64)v36);
      v29.m128i_i64[0] = *a3 + 4LL * v10;
      v12 = sub_182D020(qword_1C7F2C0, v36);
      v13 = (_QWORD *)*a4;
      v14 = (__m128i)(unsigned __int64)v12;
      v15 = _mm_cvtsi32_si128(*(_DWORD *)v29.m128i_i64[0]);
      if ( *a4 )
      {
        v16 = *((unsigned int *)v13 - 1);
        v17 = &v13[v16];
        if ( (_DWORD)v16 == *((_DWORD *)v13 - 2) )
        {
          v19 = (unsigned int)(3 * v16 + 1) >> 1;
          v20 = 8 * v19 + 8;
          if ( 8 * (int)v16 + 8 >= (unsigned int)v20 || (unsigned int)v16 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v38, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v38);
            sub_233E40((__int64)v38);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v30) = (unsigned int)(3 * v16 + 1) >> 1;
          v31 = _mm_cvtsi128_si32(v15);
          v29.m128i_i64[0] = v14.m128i_i64[0];
          v21 = (_DWORD *)sub_186B270(v20);
          v22 = (_QWORD *)*a4;
          v14 = _mm_loadl_epi64(&v29);
          v13 = v21 + 2;
          v15 = _mm_cvtsi32_si128(v31);
          v23 = (int)v30;
          if ( *a4 )
          {
            v24 = *((unsigned int *)v22 - 1);
            v25 = 0;
            v21[1] = v24;
            v26 = 8 * v24;
            if ( v26 )
            {
              do
              {
                *(_QWORD *)&v21[v25 / 4 + 2] = v22[v25 / 8];
                v25 += 8LL;
              }
              while ( v25 != v26 );
            }
            v33 = v21;
            v32 = v23;
            v30 = v21 + 2;
            v31 = _mm_cvtsi128_si32(v15);
            v29.m128i_i64[0] = v14.m128i_i64[0];
            sub_186B220(v22 - 1);
            v21 = v33;
            v13 = v30;
            v14 = _mm_loadl_epi64(&v29);
            v15 = _mm_cvtsi32_si128(v31);
            v23 = v32;
            v17 = &v30[2 * v33[1]];
          }
          else
          {
            v21[1] = 0;
            v17 = v21 + 2;
          }
          *a4 = v13;
          *v21 = v23;
        }
      }
      else
      {
        v29.m128i_i64[0] = v12;
        v31 = _mm_cvtsi128_si32(v15);
        v27 = (_QWORD *)sub_186B270(0x18u);
        v13 = v27 + 1;
        *v27 = 2;
        v14 = _mm_loadl_epi64(&v29);
        *a4 = v27 + 1;
        v15 = _mm_cvtsi32_si128(v31);
        v17 = v27 + 1;
      }
      v18 = qword_1C7F2C0;
      ++v10;
      *v17 = _mm_unpacklo_epi32(v14, v15).m128i_u64[0];
      ++*((_DWORD *)v13 - 1);
      sub_182CBA0(v18, v36);
      sub_182CBA0(v18, v37);
      result = *a3;
    }
    while ( *a3 );
  }
  return result;
}

