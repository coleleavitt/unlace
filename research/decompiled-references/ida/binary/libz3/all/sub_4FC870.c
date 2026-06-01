__int64 __fastcall sub_4FC870(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  size_t v11; // rdx
  int v12; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 128LL))(
         *(_QWORD *)(a1 + 32),
         a2,
         0);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v2 + 8);
  v5 = v2;
  if ( v4 != *(_QWORD *)(v3 + 40) )
    v3 = sub_4C3EF0(*(_QWORD *)(v4 + 24), v4);
  v6 = sub_186B270(0x28u);
  *(_QWORD *)v6 = qword_1C665B0;
  *(_QWORD *)(v6 + 16) = 0;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v6 + 8) = v3;
  if ( v7 )
  {
    v8 = _mm_loadl_epi64((const __m128i *)(v7 - 8));
    v9 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
    *v9 = v8.m128i_i64[0];
    *(_QWORD *)(v6 + 16) = v9 + 1;
    v10 = *(_QWORD **)(a1 + 16);
    if ( v10 )
    {
      v11 = 8LL * *((unsigned int *)v10 - 1);
      if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          v9[1] = *v10;
      }
      else
      {
        memcpy(v9 + 1, v10, v11);
      }
    }
  }
  v12 = *(_DWORD *)(v3 + 8);
  *(_QWORD *)(v6 + 32) = v5;
  *(_DWORD *)(v6 + 24) = v12;
  *(_QWORD *)v6 = &off_1C669F0;
  return v6;
}

