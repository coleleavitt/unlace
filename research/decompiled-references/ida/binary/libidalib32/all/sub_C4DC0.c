unsigned __int64 sub_C4DC0()
{
  unsigned __int64 v0; // rcx
  TGroup *v1; // rdi
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r12
  int v7; // eax
  int v8; // edx
  size_t v9; // r15
  void *v10; // rcx
  __m128i v11; // xmm0
  void *v13; // rax
  void *v14; // rsi
  void *v15; // rdx
  void *v16; // rax
  void *v17; // [rsp+0h] [rbp-80h]
  __m128i v18; // [rsp+8h] [rbp-78h] BYREF
  int v19; // [rsp+18h] [rbp-68h] BYREF
  void *src; // [rsp+20h] [rbp-60h]
  size_t n[3]; // [rsp+28h] [rbp-58h]
  unsigned __int64 v22; // [rsp+40h] [rbp-40h]

  v0 = xmmword_251378;
  v1 = qword_251040;
  v22 = __readfsqword(0x28u);
  v19 = -2;
  src = (void *)-1LL;
  *(_OWORD *)n = 0;
  if ( (_QWORD)xmmword_251378 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = qword_251370;
      *(_BYTE *)(qword_251370 + v2 + 35) = 0;
      if ( v1 )
      {
        if ( (v3 & 0x80000000) == 0LL && (unsigned int)v3 < v0 )
        {
          v5 = v4 + 56LL * (unsigned int)v3;
          if ( v5 )
          {
            v6 = *(_QWORD *)(v5 + 48);
            if ( v6 )
            {
              *(_BYTE *)(v6 + 140) = *(_BYTE *)(v5 + 35);
              if ( &v19 != (int *)(v6 + 96) )
              {
                v7 = v19;
                v8 = *(_DWORD *)(v6 + 96);
                if ( v19 < -1 )
                {
                  if ( v8 >= -1 && *(_QWORD *)(v6 + 104) )
                  {
                    *(_QWORD *)(v6 + 112) = 0;
                    qfree();
                    v7 = v19;
                    v1 = qword_251040;
                    v0 = xmmword_251378;
                  }
                  v15 = src;
                  *(_DWORD *)(v6 + 96) = v7;
                  *(_QWORD *)(v6 + 104) = v15;
                }
                else
                {
                  v9 = n[0];
                  if ( v8 < -1 )
                  {
                    *(_QWORD *)(v6 + 104) = 0;
                    *(_OWORD *)(v6 + 112) = 0;
                    if ( v9 )
                    {
                      v13 = (void *)qalloc_or_throw();
                      *(_QWORD *)(v6 + 104) = v13;
                      v14 = src;
                      *(_QWORD *)(v6 + 120) = v9;
                      memcpy(v13, v14, v9);
                      *(_QWORD *)(v6 + 112) = v9;
                      v7 = v19;
                      v1 = qword_251040;
                      v0 = xmmword_251378;
                    }
                  }
                  else
                  {
                    v10 = nullptr;
                    if ( n[0] )
                    {
                      v16 = (void *)qalloc_or_throw();
                      v10 = memcpy(v16, src, v9);
                    }
                    v11 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
                    if ( *(_QWORD *)(v6 + 104) )
                    {
                      *(_QWORD *)(v6 + 112) = 0;
                      v17 = v10;
                      v18 = v11;
                      qfree();
                      v11 = _mm_load_si128(&v18);
                      v10 = v17;
                    }
                    v7 = v19;
                    *(_QWORD *)(v6 + 104) = v10;
                    v1 = qword_251040;
                    v0 = xmmword_251378;
                    *(__m128i *)(v6 + 112) = v11;
                  }
                  *(_DWORD *)(v6 + 96) = v7;
                }
              }
            }
          }
        }
      }
      ++v3;
      v2 += 56;
    }
    while ( v3 < v0 );
    if ( !v1 )
      goto LABEL_20;
  }
  else if ( !qword_251040 )
  {
    return v22 - __readfsqword(0x28u);
  }
  TGroup::freeBuffer(v1);
  TView::drawView(qword_251040);
LABEL_20:
  if ( v19 >= -1 && src )
  {
    n[0] = 0;
    qfree();
  }
  return v22 - __readfsqword(0x28u);
}

