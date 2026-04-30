__int64 __fastcall sub_2BC150(__int64 a1, __m128i *a2, const __m128i *a3, _QWORD *a4, double a5)
{
  __int64 v7; // rdx
  __int64 v8; // r13
  const __m128i *v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r12
  _DWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  const char *v18; // rsi
  _QWORD *v19; // rdx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 *v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdi
  __int32 v26; // eax
  __m128i v27; // xmm0
  __int32 v28; // eax
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  __m128i v30; // [rsp+10h] [rbp-48h] BYREF
  __int64 v31; // [rsp+20h] [rbp-38h]

  if ( !a4 )
    return 0;
  v7 = a3[1].m128i_u32[2];
  if ( (int)v7 < 0 )
  {
    if ( (_DWORD)v7 == -1 && a3[1].m128i_i32[3] == -1 )
    {
      v10 = (const __m128i *)sub_1EA680(*(_QWORD *)(a1 + 16) + 384LL, (__int64)a2, v7, (__int64)a4, a5);
      if ( v10 != a2 )
      {
        v11 = a2[2].m128i_i64[1];
        if ( v11 )
        {
          qfree(v11, a2->m128i_i8);
          a2[2].m128i_i64[1] = 0;
        }
        *a2 = _mm_loadu_si128(v10);
        a2[1] = _mm_loadu_si128(v10 + 1);
        a2[2].m128i_i32[0] = v10[2].m128i_i32[0];
        v12 = v10[2].m128i_i64[1];
        if ( v12 )
          a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      a2[1].m128i_i64[1] = a3[1].m128i_i64[1];
      return 1;
    }
  }
  else
  {
    v8 = (int)v7;
    if ( (unsigned __int64)(int)v7 < a4[3] )
    {
      v13 = a4[2];
      v14 = (_DWORD *)sub_2B5900(a5, a1, a4, (__int64 (__fastcall *)(__int64))v7, (__int64)a4);
      v17 = a3[1].m128i_i16[7];
      v18 = (const char *)(unsigned int)a3[1].m128i_i16[6];
      if ( *v14 >= (unsigned int)v18 || (unsigned int)(v14[1] == 0) + v14[1] - 1 >= (__int16)v17 )
      {
        v19 = (_QWORD *)(v13 + 24 * v8);
        if ( v17 < v19[1] )
        {
          v20 = _mm_loadu_si128(a3);
          v21 = _mm_loadu_si128(a3 + 1);
          v29 = v20;
          v22 = (__int64 *)(*v19 + 272 * v17);
          v30 = v21;
          v23 = *v22;
          v31 = a3[2].m128i_i64[0];
          if ( v23 )
          {
            v24 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD *, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v23 + 16LL))(
                    v23,
                    v18,
                    v19,
                    v17,
                    v15,
                    v16,
                    v29.m128i_i64[0],
                    v29.m128i_i64[1],
                    v30.m128i_i64[0],
                    v30.m128i_i64[1]);
            v25 = a2[2].m128i_i64[1];
            v23 = v24;
            if ( !v25 )
              goto LABEL_21;
          }
          else
          {
            v25 = a2[2].m128i_i64[1];
            if ( !v25 )
            {
              v28 = v31;
              *a2 = v20;
              a2[1] = v21;
              a2[2].m128i_i32[0] = v28;
              return 1;
            }
          }
          qfree(v25, v18, v19, v17, v15, v16, *(_OWORD *)&v29, *(_OWORD *)&v30);
          a2[2].m128i_i64[1] = 0;
LABEL_21:
          v26 = v31;
          *a2 = _mm_load_si128(&v29);
          v27 = _mm_load_si128(&v30);
          a2[2].m128i_i32[0] = v26;
          a2[1] = v27;
          if ( v23 )
          {
            a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            qfree(v23, v18);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
