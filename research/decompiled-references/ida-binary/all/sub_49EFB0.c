__int64 __fastcall sub_49EFB0(__int64 a1, __int64 a2)
{
  char *v3; // rsi
  __int64 v4; // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // r15
  unsigned int v8; // ebx
  const char *v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  char *dest; // [rsp+0h] [rbp-60h]
  __int64 v19; // [rsp+8h] [rbp-58h] BYREF
  __m128i v20; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+20h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v3 = nullptr;
  v20 = 0;
  v19 = 0;
  sub_4BEE60(&v19, 0, a1);
  if ( v20.m128i_i64[0] <= 1uLL )
  {
    v3 = (char *)v19;
    if ( v20.m128i_i64[1] <= 0x39uLL )
    {
      v19 = qvector_reserve(&v19, v19, 58, 1);
      v3 = (char *)v19;
    }
    v20.m128i_i64[0] = 58;
    *(__m128i *)v3 = _mm_load_si128((const __m128i *)&xmmword_5DC4D0);
    v17 = v19;
    *((__m128i *)v3 + 1) = _mm_load_si128((const __m128i *)&xmmword_5DDCC0);
    *((__m128i *)v3 + 2) = _mm_load_si128((const __m128i *)&xmmword_5DDCD0);
    *(__m128i *)(v3 + 41) = _mm_load_si128((const __m128i *)&xmmword_5DDCE0);
    *(_BYTE *)(v17 + 57) = 0;
  }
  if ( a2 )
  {
    v4 = *(_QWORD *)a2;
    v5 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    v6 = _mm_loadu_si128(&v20);
    *(_QWORD *)a2 = v19;
    v19 = v4;
    *(__m128i *)(a2 + 8) = v6;
    v20 = v5;
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    v8 = 0;
    dest = *(char **)a1;
    v9 = *(const char **)a1;
    if ( **(_BYTE **)a1 )
    {
      do
      {
        v3 = "NOMAINMENU\n";
        if ( !strncmp(v9, "NOMAINMENU\n", 0xBu) )
        {
          v15 = 1;
          v16 = 11;
        }
        else
        {
          v3 = "NOSTATUSBAR\n";
          if ( strncmp(v9, "NOSTATUSBAR\n", 0xCu) )
            break;
          v15 = 2;
          v16 = 12;
        }
        v9 += v16;
        v8 |= v15;
      }
      while ( *v9 );
      v10 = v7 - 1;
      v11 = v9 - dest;
      if ( v7 != 1 )
      {
        if ( v11 )
        {
          v12 = 1;
          v13 = 0;
          if ( v11 < v10 )
          {
            v3 = (char *)v9;
            v13 = v10 - v11;
            memmove(dest, v9, v10 - v11);
            v12 = v13 + 1;
            dest = *(char **)a1;
            if ( *(_QWORD *)(a1 + 16) >= v13 + 1 )
              goto LABEL_12;
          }
          else if ( *(_QWORD *)(a1 + 16) )
          {
LABEL_12:
            *(_QWORD *)(a1 + 8) = v12;
            dest[v13] = 0;
            goto LABEL_13;
          }
          v3 = dest;
          dest = (char *)qvector_reserve(a1, dest, v12, 1);
          *(_QWORD *)a1 = dest;
          goto LABEL_12;
        }
      }
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_13:
  if ( v19 )
  {
    v20.m128i_i64[0] = 0;
    qfree(v19, v3);
  }
  return v8;
}
