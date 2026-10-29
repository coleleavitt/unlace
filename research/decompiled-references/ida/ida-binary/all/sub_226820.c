__int64 __fastcall sub_226820(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  bool v10; // zf
  const char *v12; // rsi
  unsigned int v13; // ebp
  size_t v15; // rbp
  void *v16; // rax
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v10 = *(_QWORD *)(a1 + 16) == 0;
  v19 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  v12 = &s1;
  src = nullptr;
  if ( !v10 )
    v12 = *(const char **)(a1 + 8);
  v13 = 3;
  if ( (unsigned __int8)sub_2262C0((__int64 *)&src, v12, 0.0, a4, a5, a6, a7, a8, a9, a10) )
  {
    free_idcv(a2);
    v15 = n[0];
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v15 )
    {
      v16 = (void *)qalloc_or_throw(v15);
      *(_QWORD *)(a2 + 24) = v15;
      v12 = (const char *)src;
      *(_QWORD *)(a2 + 8) = v16;
      memcpy(v16, v12, v15);
      *(_QWORD *)(a2 + 16) = v15;
    }
    v13 = 0;
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, v12);
  }
  return v13;
}
