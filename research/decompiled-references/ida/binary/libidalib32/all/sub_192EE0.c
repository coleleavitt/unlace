__int64 __fastcall sub_192EE0(const char **a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  const char *v6; // r15
  unsigned int v7; // ebx
  const char *v8; // r14
  const char *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  const char *v12; // r12
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 dest; // [rsp+0h] [rbp-60h]
  __int64 v19; // [rsp+8h] [rbp-58h] BYREF
  __m128i v20; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+20h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v20 = 0;
  v19 = 0;
  sub_17C2C0(&v19, nullptr, (__int64)a1);
  if ( v20.m128i_i64[0] <= 1uLL )
  {
    v16 = v19;
    if ( v20.m128i_i64[1] <= 0x39uLL )
    {
      v19 = qvector_reserve();
      v16 = v19;
    }
    v20.m128i_i64[0] = 58;
    *(__m128i *)v16 = _mm_load_si128((const __m128i *)&xmmword_1D21A0);
    v17 = v19;
    *(__m128i *)(v16 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2D90);
    *(__m128i *)(v16 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D2DA0);
    *(__m128i *)(v16 + 41) = _mm_load_si128((const __m128i *)&xmmword_1D2DB0);
    *(_BYTE *)(v17 + 57) = 0;
  }
  if ( a2 )
  {
    v3 = *(_QWORD *)a2;
    v4 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    v5 = _mm_loadu_si128(&v20);
    *(_QWORD *)a2 = v19;
    v19 = v3;
    *(__m128i *)(a2 + 8) = v5;
    v20 = v4;
  }
  v6 = a1[1];
  if ( v6 )
  {
    v7 = 0;
    dest = (__int64)*a1;
    v8 = *a1;
    if ( **a1 )
    {
      do
      {
        if ( !strncmp(v8, "NOMAINMENU\n", 0xBu) )
        {
          v14 = 1;
          v15 = 11;
        }
        else
        {
          if ( strncmp(v8, "NOSTATUSBAR\n", 0xCu) )
            break;
          v14 = 2;
          v15 = 12;
        }
        v8 += v15;
        v7 |= v14;
      }
      while ( *v8 );
      v9 = v6 - 1;
      v10 = (unsigned __int64)&v8[-dest];
      if ( v6 != (_BYTE *)&dword_0 + 1 )
      {
        if ( v10 )
        {
          v11 = 1;
          v12 = nullptr;
          if ( v10 < (unsigned __int64)v9 )
          {
            v12 = &v9[-v10];
            memmove((void *)dest, v8, (size_t)&v9[-v10]);
            v11 = (__int64)(v12 + 1);
            dest = (__int64)*a1;
            if ( a1[2] >= v12 + 1 )
              goto LABEL_12;
          }
          else if ( a1[2] )
          {
LABEL_12:
            a1[1] = (const char *)v11;
            v12[dest] = 0;
            goto LABEL_13;
          }
          dest = qvector_reserve();
          *a1 = (const char *)dest;
          goto LABEL_12;
        }
      }
    }
  }
  else
  {
    v7 = 0;
  }
LABEL_13:
  if ( v19 )
  {
    v20.m128i_i64[0] = 0;
    qfree();
  }
  return v7;
}

