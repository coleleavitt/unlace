_QWORD *__fastcall sub_30DD20(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // r15
  _QWORD *v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // rbx
  unsigned __int8 *v13; // r14
  __int64 v14; // rax
  __int64 v16; // [rsp+10h] [rbp-68h]
  unsigned __int8 v17[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( !a5 )
    return (_QWORD *)a3;
  v7 = *(_QWORD *)(a2 + 480);
  v10 = (_QWORD *)j__qalloc_or_throw();
  v11 = *(_QWORD *)(a3 + 24);
  v12 = v10;
  v13 = (unsigned __int8 *)(v10 + 4);
  v16 = (__int64)(v10 + 6);
  v10[4] = 0xFFFFFFFF00000000LL;
  v10[5] = 0;
  v10[6] = 0xFFFFFFFF00000000LL;
  v10[7] = 0;
  v10[8] = 0xFFFFFFFF00000000LL;
  v10[9] = 0;
  sub_330970(v10, v11);
  *(_DWORD *)v12 = 12;
  v14 = *(_QWORD *)(v7 + 112);
  *(_QWORD *)v17 = 1;
  *(_QWORD *)&v17[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v14 + 84)), _mm_cvtsi32_si128(a4)).m128i_u64[0];
  sub_125180((__int64)v13, v17);
  sub_11CDA0((__int64)v17);
  sub_120A10(v16, *(_QWORD *)(v7 + 112), a5, *((_DWORD *)v12 + 9), *(_QWORD *)(a3 + 24), 0);
  sub_125180((__int64)(v12 + 8), v13);
  return sub_A3160(a2, v12, a3);
}
