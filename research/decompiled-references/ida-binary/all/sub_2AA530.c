__int64 __fastcall sub_2AA530(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  char *v9; // r14
  __int64 v10; // rdi
  void *v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r14
  size_t v16; // r11
  __int64 v17; // rax
  const char *v18; // rsi
  __int64 v19; // rax
  const void *v20; // r8
  void *v21; // rdi
  unsigned int v22; // ebx
  _QWORD *v24; // [rsp+0h] [rbp-78h]
  const void *v27; // [rsp+18h] [rbp-60h]
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  __m128i v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 440);
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v4 + 24) )
    return 0;
  dest = nullptr;
  v29 = 0;
  v24 = (_QWORD *)(*(_QWORD *)(v4 + 16) + 24LL * a3);
  v5 = v24[1];
  if ( (int)v5 <= 0 )
    return 1;
  v7 = 0;
  v8 = 272 * ((unsigned int)(v5 - 1) + 1LL);
  do
  {
    v14 = v7 + *v24;
    if ( &dest != (void **)(v14 + 8) )
    {
      v15 = *(_QWORD *)(v14 + 16);
      if ( !v15 || (v16 = v15 - 1, v15 == 1) )
      {
        v29.m128i_i64[0] = 0;
        goto LABEL_11;
      }
      v20 = *(const void **)(v14 + 8);
      v21 = dest;
      if ( v29.m128i_i64[1] < v15 )
      {
        v27 = *(const void **)(v14 + 8);
        dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v14 + 16), 1);
        v20 = v27;
        v21 = dest;
        v16 = v15 - 1;
      }
      v29.m128i_i64[0] = v15;
      memmove(v21, v20, v16);
      *((char *)dest + v15 - 1) = 0;
    }
    if ( !a4 && v29.m128i_i64[0] > 1uLL )
    {
      v18 = (const char *)dest;
      if ( tag_remove(&dest, dest, 0) < 0 )
      {
        v11 = dest;
        v22 = a4;
        goto LABEL_21;
      }
    }
LABEL_11:
    v17 = *(_QWORD *)(a2 + 8);
    v18 = *(const char **)a2;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v17 + 1) )
    {
      v19 = qvector_reserve(a2, v18, v17 + 1, 48);
      *(_QWORD *)a2 = v19;
      v18 = (const char *)v19;
      v17 = *(_QWORD *)(a2 + 8);
    }
    v9 = (char *)&v18[48 * v17];
    *((_QWORD *)v9 + 4) = 0xFFFFFFFF00000001LL;
    v9[40] = 0;
    *(_OWORD *)v9 = 0;
    *((_OWORD *)v9 + 1) = 0;
    ++*(_QWORD *)(a2 + 8);
    v10 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 )
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *(_QWORD *)v9 = v10;
    v7 += 272;
    v11 = *((void **)v9 + 1);
    v12 = _mm_loadu_si128((const __m128i *)v9 + 1);
    *((_QWORD *)v9 + 1) = dest;
    dest = v11;
    *((_QWORD *)v9 + 2) = v29.m128i_i64[0];
    v13 = v29.m128i_i64[1];
    v29 = v12;
    *((_QWORD *)v9 + 3) = v13;
    v9[32] = *(_BYTE *)(v14 + 32);
    *((_DWORD *)v9 + 9) = *(_DWORD *)(v14 + 36);
    v9[40] = *(_BYTE *)(v14 + 40);
  }
  while ( v7 != v8 );
  v22 = 1;
LABEL_21:
  if ( v11 )
  {
    v29.m128i_i64[0] = 0;
    qfree(v11, v18);
  }
  return v22;
}
