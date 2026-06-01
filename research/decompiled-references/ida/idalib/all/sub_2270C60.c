unsigned __int64 __fastcall sub_2270C60(__int64 *a1, unsigned __int64 *a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // eax
  __m128i v10; // xmm1
  unsigned __int64 v11; // rax
  unsigned __int64 *v13; // [rsp+8h] [rbp-20h] BYREF

  v7 = *a1;
  a1[10] += 72;
  v8 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[1] >= v8 + 72 && v7 )
    *a1 = v8 + 72;
  else
    v8 = sub_986170((__int64)a1, 72, 72, 4, a5, a6);
  v9 = *a3;
  v10 = _mm_loadu_si128((const __m128i *)(a3 + 2));
  *(_OWORD *)v8 = 0;
  *(_DWORD *)(v8 + 16) = v9;
  *(_QWORD *)(v8 + 40) = v8 + 56;
  *(__m128i *)(v8 + 24) = v10;
  sub_226E090((_QWORD *)(v8 + 40), *((_BYTE **)a3 + 3), *((_QWORD *)a3 + 3) + *((_QWORD *)a3 + 4));
  v11 = *a2;
  v13 = a2;
  *(__m128 *)v8 = _mm_loadh_ps((const double *)&v13);
  *(_QWORD *)(v11 + 8) = v8;
  *a2 = v8;
  return v8;
}
