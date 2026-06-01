unsigned __int64 __fastcall sub_177D10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rax
  __m128i v6; // xmm0
  volatile signed __int32 *v7; // rax
  char *v9; // rbx
  char *v10; // rbp
  QT::QTextFormat *v11; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v13 = 0;
  sub_177C10((const __m128i **)a2, (__m128i *)ptr, a1, 0);
  QT::QTextLayout::setFormats(*(_QWORD *)(a1 + 48), ptr);
  v2 = *(_QWORD *)a1;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)a2 = v2;
  *(__m128i *)(a2 + 8) = v3;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 24) = v5;
  v7 = (volatile signed __int32 *)ptr[0];
  *(__m128i *)(a2 + 32) = v6;
  if ( v7 && !_InterlockedSub(v7, 1u) )
  {
    v9 = (char *)ptr[1];
    v10 = (char *)ptr[1] + 24 * v13;
    if ( ptr[1] != v10 )
    {
      do
      {
        v11 = (QT::QTextFormat *)(v9 + 8);
        v9 += 24;
        QT::QTextFormat::~QTextFormat(v11);
      }
      while ( v10 != v9 );
    }
    free(ptr[0]);
  }
  return v14 - __readfsqword(0x28u);
}
