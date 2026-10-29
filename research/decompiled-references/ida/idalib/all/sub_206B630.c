__m128 *__fastcall sub_206B630(__m128 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int8 v6; // dl
  __int64 v7; // rdi
  __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  double v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v5 = sub_1703870(a2, a3);
  if ( *(_BYTE *)(a2 + 20) )
    v7 = *(unsigned int *)(a2 + 12);
  else
    v7 = *(unsigned int *)(a2 + 8);
  v8 = *(_QWORD *)a2 + 8 * v7;
  if ( v5 != (_QWORD *)v8 && *v5 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v9 = v5 + 1;
    do
    {
      v10 = v9;
      if ( (_QWORD *)v8 == v9 )
        break;
      ++v9;
    }
    while ( *v10 >= 0xFFFFFFFFFFFFFFFELL );
  }
  *(_QWORD *)&v12[0] = *(_QWORD *)a2 + 8 * v7;
  a1[1].m128_i8[0] = v6;
  *a1 = _mm_loadh_ps(v12);
  return a1;
}
