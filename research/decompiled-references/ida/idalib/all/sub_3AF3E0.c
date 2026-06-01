__int64 __fastcall sub_3AF3E0(__m128i **a1, __int64 a2, const __m128i *a3, unsigned __int8 a4)
{
  __m128i *v6; // r13
  __int64 v7; // rbx
  __m128i **v8; // rax
  __int64 v9; // rdx
  __m128i **v10; // rbp
  char *v11; // r15
  __int64 v13; // rax

  v6 = *a1;
  v7 = *(_QWORD *)(qword_2CCB598 + 1576);
  memmove(a1, a1 + 1, *(_QWORD *)v7 + 8LL * *(_QWORD *)(v7 + 8) - (_QWORD)a1 - 8);
  --*(_QWORD *)(v7 + 8);
  v6[2] = _mm_loadu_si128(a3);
  v8 = (__m128i **)sub_3AF270((__int64)v6);
  v9 = *(_QWORD *)(v7 + 8);
  v10 = v8;
  v11 = (char *)v8 - *(_QWORD *)v7;
  if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
  {
    v13 = qvector_reserve(v7, *(_QWORD *)v7, v9 + 1, 8);
    v9 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)v7 = v13;
    v10 = (__m128i **)&v11[v13];
  }
  memmove(v10 + 1, v10, 8 * v9 - (_QWORD)v11);
  *v10 = v6;
  ++*(_QWORD *)(v7 + 8);
  return (*(__int64 (__fastcall **)(__int64, __int64, __m128i *, __int64, _QWORD))(*(_QWORD *)qword_2C819A8 + 16LL))(
           qword_2C819A8,
           2,
           v6,
           a2,
           (2 * a4) | (unsigned int)*(unsigned __int8 *)(v7 + 308));
}
