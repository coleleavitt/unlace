__int64 __fastcall sub_320AF0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rbp

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 856LL);
  if ( result != *a2 && result != a2[1] && a2[2] != result )
  {
    *(_QWORD *)(a1 + 24) = _mm_add_epi32(
                             _mm_loadl_epi64((const __m128i *)(a1 + 24)),
                             _mm_loadl_epi64((const __m128i *)&qword_18B5FF0)).m128i_u64[0];
    v4 = (_QWORD *)sub_186B270(0x18u);
    v4[1] = *a2;
    v4[2] = a2[1];
    *v4 = 0x200000002LL;
    v8 = (_DWORD *)sub_186B300(v4, 0x20u);
    v9 = (unsigned int)v8[1];
    v10 = v8 + 2;
    *v8 = 3;
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)&v8[2 * v9 + 2] = a2[2];
    v8[1] = v9 + 1;
    v6 = sub_2FF8B0(v5);
    v7 = sub_15EC240(*(_QWORD *)(v5 + 8), 3);
    sub_E5EBF0(v6, v7);
    return sub_186B220(v10 - 2);
  }
  return result;
}

