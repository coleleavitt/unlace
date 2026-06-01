__int64 __fastcall sub_5AC630(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  size_t v6; // r12
  _BYTE *v8; // rax
  __m128i v9; // xmm0
  void *v10; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __m128i v12; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( a3 < *(_QWORD *)(a2 + 48)
    && ((v3 = 32 * a3, v4 = 32 * a3 + *(_QWORD *)(a2 + 40), *(_QWORD *)(v4 + 8) > 1u) || *(_DWORD *)(v4 + 24)) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v5 = *(_QWORD *)(a2 + 40) + v3;
    if ( *(_QWORD *)(v5 + 8) <= 1u )
    {
      ptr = nullptr;
      v12 = 0;
      sub_35A790((char **)&ptr);
      v9 = _mm_loadu_si128(&v12);
      *(_QWORD *)a1 = ptr;
      *(__m128i *)(a1 + 8) = v9;
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
      {
        v10 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 8));
        *(_QWORD *)(a1 + 16) = v6;
        *(_QWORD *)a1 = v10;
        memcpy(v10, *(const void **)v5, v6);
        *(_QWORD *)(a1 + 8) = v6;
      }
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v8 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = 1;
    *v8 = 0;
  }
  return a1;
}
