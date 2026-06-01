__int64 __fastcall sub_3F0EA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  const char *v6; // rsi
  void *v7; // rdi
  void *v8; // rbp
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  void *v11; // rdi
  _BYTE *v13; // rax
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v16; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 40) + 80 * a3;
  v17 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(_DWORD *)v3 == -1 )
  {
    v13 = (_BYTE *)qvector_reserve(a1, 0, 2, 1);
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = 2;
    *v13 = 63;
    *(_BYTE *)(*(_QWORD *)a1 + 1LL) = 0;
  }
  else
  {
    v5 = v3 + 56;
    if ( *(_QWORD *)(v3 + 64) <= 1u )
      v5 = v3 + 8;
    v6 = haystack;
    ptr = nullptr;
    v16 = 0;
    if ( *(_QWORD *)(v5 + 8) )
      v6 = *(const char **)v5;
    qstr2user(&ptr, v6, 0xFFFFFFFFLL);
    v7 = *(void **)a1;
    v8 = ptr;
    ptr = nullptr;
    v9 = _mm_loadu_si128(&v16);
    v16 = 0;
    if ( v7 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v14 = v9;
      qfree(v7);
      v10 = _mm_load_si128(&v14);
      v11 = ptr;
      *(_QWORD *)a1 = v8;
      *(__m128i *)(a1 + 8) = v10;
      if ( v11 )
      {
        v16.m128i_i64[0] = 0;
        qfree(v11);
      }
    }
    else
    {
      *(_QWORD *)a1 = v8;
      *(__m128i *)(a1 + 8) = v9;
    }
  }
  return a1;
}

