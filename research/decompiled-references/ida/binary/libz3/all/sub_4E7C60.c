__int64 __fastcall sub_4E7C60(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v7; // rax
  __m128i v8; // xmm0
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 result; // rax
  __int64 v20; // [rsp+8h] [rbp-30h]

  v7 = (_QWORD *)*a3;
  *(_QWORD *)a1 = qword_1C665B0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v7 )
  {
    v8 = _mm_loadl_epi64((const __m128i *)(v7 - 1));
    v20 = v8.m128i_i64[0];
    v10 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
    v11 = (_QWORD *)*a3;
    *(_QWORD *)(a1 + 16) = v10 + 1;
    *v10 = v8.m128i_i64[0];
    if ( v11 )
    {
      v12 = 8LL * *((unsigned int *)v11 - 1);
      if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          v10[1] = *v11;
      }
      else
      {
        memmove(v10 + 1, v11, v12);
      }
    }
  }
  v13 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a1 = &off_1C66640;
  v14 = sub_4D6490(v13);
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = v14;
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v15 = sub_4D6490(*(_QWORD *)(a2 + 24));
  *(_QWORD *)(a1 + 48) = 0;
  v16 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 56) = v15;
  v17 = sub_4D6490(v16);
  *(_QWORD *)(a1 + 64) = 0;
  v18 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 72) = v17;
  result = sub_4D6490(v18);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = result;
  return result;
}

