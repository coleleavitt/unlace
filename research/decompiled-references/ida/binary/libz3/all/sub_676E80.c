__m128i *__fastcall sub_676E80(__m128i *a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // r15
  __int64 v7; // rax
  void *v8; // r12
  _QWORD v9[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = sub_1673B10(a2 + 144, a3);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v9[0] = 0;
    v9[1] = 0;
    v10[0] = 1;
    v10[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v10);
    BYTE4(v10[0]) &= ~1u;
    LODWORD(v10[0]) = 1;
    v7 = sub_16746C0(a2 + 144, v9, a3);
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v5);
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    v8 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v9);
    sub_182CBA0(v8, v10);
  }
  else
  {
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v5;
  }
  return a1;
}

