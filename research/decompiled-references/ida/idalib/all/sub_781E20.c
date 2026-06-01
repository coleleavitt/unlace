__int64 __fastcall sub_781E20(_QWORD *a1)
{
  const char *v1; // r13
  bool v2; // zf
  _DWORD *v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rbx
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r14
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  double v14[8]; // [rsp+8h] [rbp-40h] BYREF

  v1 = haystack;
  v2 = a1[6] == 0;
  v14[0] = *(double *)(a1[43] + 8LL * a1[44] - 8);
  if ( !v2 )
    v1 = (const char *)a1[5];
  v3 = (_DWORD *)operator new(0x20u);
  v3[6] = 0;
  v4 = v3;
  *v3 = 5;
  v5 = operator new(0x18u);
  *(_QWORD *)v5 = 0;
  v6 = (_QWORD *)v5;
  *(_OWORD *)(v5 + 8) = 0;
  if ( v1 )
  {
    v7 = strlen(v1);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void *)qvector_reserve(v6, 0, v7 + 1, 1);
    *v6 = v10;
    v6[1] = v8;
    memmove(v10, v1, v9);
    *(_BYTE *)(*v6 + v9) = 0;
  }
  v11 = a1[43];
  v12 = a1[44];
  *(__m128 *)(v4 + 2) = _mm_loadh_ps(v14);
  *(_QWORD *)(v11 + 8 * v12 - 8) = v4;
  return 0;
}
