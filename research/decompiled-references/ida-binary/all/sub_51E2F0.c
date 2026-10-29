unsigned __int64 __fastcall sub_51E2F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  size_t v6; // rdx
  const char *v7; // r12
  __m128i si128; // xmm0
  __int64 v9; // rdx
  void *v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  void *ptr[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 64);
  v15 = __readfsqword(0x28u);
  LOBYTE(v4) = sub_51C1B0(v3);
  if ( !(_BYTE)v4 )
  {
    v12 = 0;
    *(_OWORD *)v11 = 0;
    if ( a2 )
    {
      v5 = *(_QWORD *)(a2 + 48);
      v6 = 0;
      v7 = &s1;
      if ( v5 )
      {
        v6 = v5 - 1;
        v7 = *(const char **)(a2 + 40);
        v4 = (unsigned __int64)(v5 - 1) >> 63;
      }
      if ( !v7 || (_BYTE)v4 )
      {
        v6 = 0;
        if ( v7 )
          v6 = strlen(v7);
      }
      QT::QString::fromUtf8(ptr, v6, v7);
      si128 = _mm_load_si128((const __m128i *)v11);
      v9 = v12;
      *(__m128i *)v11 = _mm_load_si128((const __m128i *)ptr);
      v12 = v14;
      v14 = v9;
      *(__m128i *)ptr = si128;
      if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
        free(ptr[0]);
    }
    sub_51D2F0(a1, (const QT::QString *)v11);
    if ( v11[0] && !_InterlockedSub((volatile signed __int32 *)v11[0], 1u) )
      free(v11[0]);
  }
  return v15 - __readfsqword(0x28u);
}
