__int64 __fastcall sub_4FC950(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+8h] [rbp-30h]

  v4 = a1;
  v6 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)(a1 + 40) != v6 )
    v4 = sub_4C3EF0(*(_QWORD *)(v6 + 24), v6);
  v7 = sub_186B270(0x28u);
  *(_QWORD *)v7 = qword_1C665B0;
  *(_QWORD *)(v7 + 16) = 0;
  v8 = (_QWORD *)*a2;
  *(_QWORD *)(v7 + 8) = v4;
  if ( v8 )
  {
    v9 = _mm_loadl_epi64((const __m128i *)(v8 - 1));
    v15 = v9.m128i_i64[0];
    v10 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v9) + 8);
    *v10 = v9.m128i_i64[0];
    *(_QWORD *)(v7 + 16) = v10 + 1;
    v11 = (_QWORD *)*a2;
    if ( *a2 )
    {
      v12 = 8LL * *((unsigned int *)v11 - 1);
      if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          v10[1] = *v11;
      }
      else
      {
        memcpy(v10 + 1, v11, v12);
      }
    }
  }
  v13 = *(_DWORD *)(v4 + 8);
  *(_QWORD *)(v7 + 32) = a3;
  *(_DWORD *)(v7 + 24) = v13;
  *(_QWORD *)v7 = &off_1C669F0;
  return v7;
}

