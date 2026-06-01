void __fastcall sub_1EA60C0(__int64 a1, unsigned __int64 a2)
{
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r14
  void *v7; // r13
  double v8; // r12
  double v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a2;
  v3 = operator new[](a2);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v3;
  v7 = *(void **)a1;
  *(_QWORD *)&v8 = (unsigned int)(v2 - v4 + v5);
  memcpy((void *)(v3 + *(_QWORD *)&v8), (const void *)(*(_QWORD *)a1 + v5), v4 - v5);
  if ( v7 != (void *)(a1 + 24) && v7 )
    operator delete[](v7);
  v9[0] = v8;
  *(_QWORD *)a1 = v6;
  *(__m128 *)(a1 + 8) = _mm_loadh_ps(v9);
}
