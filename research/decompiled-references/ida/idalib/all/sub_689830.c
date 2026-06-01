__int64 __fastcall sub_689830(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  unsigned int v4; // eax
  unsigned int v6; // ebx
  unsigned int v8; // eax
  void *v9; // r13
  unsigned int v10; // r14d
  const char *v11; // rdi
  __int64 v12; // rax
  __m128i *v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  LOBYTE(v4) = a3 == 0 || a2 == 0;
  if ( (_BYTE)v4 )
  {
    return 0;
  }
  else
  {
    ptr = nullptr;
    v6 = v4;
    v17 = 0;
    v8 = sub_689730((__int64 *)&ptr, a4);
    v9 = ptr;
    v10 = v8;
    if ( (_BYTE)v8 )
    {
      v11 = (const char *)ptr;
      if ( !(_QWORD)v17 )
        v11 = haystack;
      v12 = sub_815BE0(v11);
      v13 = (__m128i *)v12;
      if ( v12 )
      {
        v6 = v10;
        *(__m128i *)a2 = _mm_loadu_si128((const __m128i *)v12);
        *(__m128i *)(a2 + 16) = _mm_loadu_si128((const __m128i *)(v12 + 16));
        *(__m128i *)(a2 + 29) = _mm_loadu_si128((const __m128i *)(v12 + 29));
        v14 = *(_QWORD *)a3;
        v15 = _mm_loadu_si128((const __m128i *)(a3 + 8));
        *(_QWORD *)a3 = v13[3].m128i_i64[1];
        *(_QWORD *)(a3 + 8) = v13[4].m128i_i64[0];
        *(_QWORD *)(a3 + 16) = v13[4].m128i_i64[1];
        v13[3].m128i_i64[1] = v14;
        v13[4] = v15;
        free_idasgn(v13);
      }
    }
    if ( v9 )
      qfree(v9);
  }
  return v6;
}
