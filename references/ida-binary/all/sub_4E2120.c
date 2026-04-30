unsigned __int64 __fastcall sub_4E2120(__int64 a1, __int64 a2, QT::QHeaderView *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // rdi
  __int64 v12; // rax
  _BYTE *v13; // rdx
  __m128i v14; // xmm0
  _BYTE *v16; // rax
  _BYTE *v17; // rdi
  unsigned __int64 i; // rbx
  _BYTE *v19; // [rsp+0h] [rbp-48h] BYREF
  __m128i v20; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v19 = nullptr;
  v5 = (int)QT::QHeaderView::count(a3);
  v20 = 0;
  v6 = (v5 + 7) >> 3;
  if ( v6 )
  {
    v16 = (_BYTE *)qvector_reserve(&v19, 0, v6, 1);
    v20.m128i_i64[0] = (v5 + 7) >> 3;
    v7 = 255;
    v19 = v16;
    v17 = memset(v16, 255, v5 >> 3);
    v8 = v5 & 7;
    if ( (v5 & 7) != 0 )
      v17[v5 >> 3] |= (1 << v8) - 1;
    if ( (int)v5 > 0 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (unsigned int)i;
        if ( (unsigned __int8)QT::QHeaderView::isSectionHidden(a3, i) )
        {
          v8 = i & 7;
          v19[i >> 3] &= ~(1 << v8);
        }
      }
    }
  }
  else
  {
    v7 = 255;
    memset(nullptr, 255, v5 >> 3);
    if ( (v5 & 7) != 0 )
    {
      v8 = v5 & 7;
      MEMORY[0x1FFFFFFFFFFFFFFF] |= (1 << (v5 & 7)) - 1;
    }
  }
  v12 = *(_QWORD *)(a2 + 16);
  v13 = v19;
  v14 = _mm_loadu_si128(&v20);
  v19 = *(_BYTE **)a2;
  v11 = v19;
  *(_QWORD *)a2 = v13;
  v20.m128i_i64[1] = v12;
  *(__m128i *)(a2 + 8) = v14;
  if ( v11 )
    qfree(v11, (const char *)v7, v13, v8, v9, v10, v19, 0, v20.m128i_i64[1]);
  return v21 - __readfsqword(0x28u);
}
