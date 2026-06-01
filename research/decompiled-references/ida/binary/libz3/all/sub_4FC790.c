__int64 __fastcall sub_4FC790(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rax
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  size_t v10; // rdx
  int v11; // eax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32));
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v1 + 8);
  v4 = v1;
  if ( v3 != *(_QWORD *)(v2 + 40) )
    v2 = sub_4C3EF0(*(_QWORD *)(v3 + 24), v3);
  v5 = sub_186B270(0x28u);
  *(_QWORD *)v5 = qword_1C665B0;
  *(_QWORD *)(v5 + 16) = 0;
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v5 + 8) = v2;
  if ( v6 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(v6 - 8));
    v8 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
    *v8 = v7.m128i_i64[0];
    *(_QWORD *)(v5 + 16) = v8 + 1;
    v9 = *(_QWORD **)(a1 + 16);
    if ( v9 )
    {
      v10 = 8LL * *((unsigned int *)v9 - 1);
      if ( v10 <= 8 )
      {
        if ( v10 == 8 )
          v8[1] = *v9;
      }
      else
      {
        memcpy(v8 + 1, v9, v10);
      }
    }
  }
  v11 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)(v5 + 32) = v4;
  *(_DWORD *)(v5 + 24) = v11;
  *(_QWORD *)v5 = &off_1C669F0;
  return v5;
}

