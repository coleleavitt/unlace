__int64 __fastcall sub_403F00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v5; // rax
  const char **v6; // rdx
  const char *v7; // rsi
  void *v8; // rdi
  void *v9; // rbp
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  void *v12; // rdi
  _BYTE *v14; // rax
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v17; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 40);
  v18 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  v5 = (_QWORD *)(v3 + 88 * a3);
  *(_OWORD *)(a1 + 8) = 0;
  if ( *v5 == -1 )
  {
    v14 = (_BYTE *)qvector_reserve(a1, 0, 2, 1);
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = 2;
    *v14 = 63;
    *(_BYTE *)(*(_QWORD *)a1 + 1LL) = 0;
  }
  else
  {
    v6 = (const char **)(v5 + 8);
    if ( v5[9] <= 1u )
      v6 = (const char **)(v5 + 2);
    v7 = haystack;
    ptr = nullptr;
    v17 = 0;
    if ( v6[1] )
      v7 = *v6;
    qstr2user(&ptr, v7, 0xFFFFFFFFLL);
    v8 = *(void **)a1;
    v9 = ptr;
    ptr = nullptr;
    v10 = _mm_loadu_si128(&v17);
    v17 = 0;
    if ( v8 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v15 = v10;
      qfree(v8);
      v11 = _mm_load_si128(&v15);
      v12 = ptr;
      *(_QWORD *)a1 = v9;
      *(__m128i *)(a1 + 8) = v11;
      if ( v12 )
      {
        v17.m128i_i64[0] = 0;
        qfree(v12);
      }
    }
    else
    {
      *(_QWORD *)a1 = v9;
      *(__m128i *)(a1 + 8) = v10;
    }
  }
  return a1;
}
