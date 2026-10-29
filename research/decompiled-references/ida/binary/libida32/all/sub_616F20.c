unsigned __int64 __fastcall sub_616F20(__int64 a1, __int64 a2, int a3, unsigned int a4, _QWORD *a5)
{
  __m128i si128; // xmm0
  __int64 v8; // rax
  const char *v9; // r13
  size_t v10; // rax
  size_t v11; // r14
  size_t v12; // rbp
  void *v13; // rax

  si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = -1;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = &off_2B08F60;
  *(__m128i *)(a1 + 16) = si128;
  v8 = switch_dbctx(a3);
  *(_DWORD *)(a1 + 48) = -1;
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 56) = 0;
  v9 = (const char *)a5[2];
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  if ( v9 )
  {
    v10 = strlen(v9);
    v11 = v10 + 1;
    v12 = v10;
    v13 = (void *)qvector_reserve(a1 + 80, 0, v10 + 1, 1);
    *(_QWORD *)(a1 + 80) = v13;
    *(_QWORD *)(a1 + 88) = v11;
    memmove(v13, v9, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 80) + v12) = 0;
    a5 = *(_QWORD **)(a1 + 64);
  }
  *(_QWORD *)(a1 + 104) = a5[1];
  *(_QWORD *)(a1 + 112) = a5[3];
  *(_QWORD *)(a1 + 120) = a5[4];
  return sub_616DF0(a1, a4);
}

