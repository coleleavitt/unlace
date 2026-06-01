__int64 __fastcall sub_57E150(_QWORD *a1)
{
  _QWORD *v1; // rax
  __m128i v2; // xmm0
  unsigned int v3; // r12d
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  void *v6; // rbp
  void *v7; // rcx
  size_t v8; // rdx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+8h] [rbp-30h]
  _QWORD v12[4]; // [rsp+18h] [rbp-20h] BYREF

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = _mm_loadl_epi64((const __m128i *)(v1 - 1));
    v3 = *((_DWORD *)v1 - 1);
    v11 = v2.m128i_i64[0];
    v4 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v2) + 8);
    v5 = (_QWORD *)*a1;
    v6 = v4;
    v7 = v4 + 1;
    *v4 = v2.m128i_i64[0];
    if ( v5 )
    {
      v8 = 8LL * *((unsigned int *)v5 - 1);
      if ( v8 <= 8 )
      {
        if ( v8 == 8 )
          v4[1] = *v5;
      }
      else
      {
        v7 = memmove(v4 + 1, v5, v8);
      }
    }
    v12[0] = v7;
    v9 = sub_5783B0((__int64)v12, v3);
    sub_186B220(v6);
    return v9;
  }
  else
  {
    v12[0] = 0;
    return (unsigned int)sub_5783B0((__int64)v12, 0);
  }
}

