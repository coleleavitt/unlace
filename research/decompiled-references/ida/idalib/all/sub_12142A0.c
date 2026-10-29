void __fastcall sub_12142A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r13
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  __m128i *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  _BYTE *v9; // rdx
  _QWORD *v10; // rbp
  _QWORD *v11; // r13
  __m128i *v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  _BYTE *v15; // rdx
  size_t v16; // rax
  void *v17; // rdi
  size_t v18; // rbp
  unsigned __int64 v19; // rbx
  size_t v20; // rax
  void *v21; // rdi
  size_t v22; // rbp
  __m128i v23; // xmm0
  __m128i si128; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax

  v2 = a1 + 85;
  v4 = a2;
  v5 = a1[87];
  if ( (_QWORD *)v5 != a1 + 85 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *(__m128i **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v6 > 0x21u )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A9C20);
          v7 = a2;
          v6[2].m128i_i16[0] = 8250;
          *v6 = si128;
          v6[1] = _mm_load_si128((const __m128i *)&xmmword_23A9C30);
          *(_QWORD *)(a2 + 32) += 34LL;
        }
        else
        {
          v7 = sub_227BF10(a2, "Found candidate GCC installation: ", 34);
        }
        v8 = sub_227BF10(v7, *(_QWORD *)(v5 + 32), *(_QWORD *)(v5 + 40));
        v9 = *(_BYTE **)(v8 + 32);
        if ( v9 != *(_BYTE **)(v8 + 24) )
          break;
        sub_227BF10(v8, "\n", 1);
        v5 = std::_Rb_tree_increment(v5);
        if ( v2 == (_QWORD *)v5 )
          goto LABEL_6;
      }
      *v9 = 10;
      ++*(_QWORD *)(v8 + 32);
      v5 = std::_Rb_tree_increment(v5);
    }
    while ( (_QWORD *)v5 != v2 );
  }
LABEL_6:
  if ( a1[10] )
  {
    v25 = sub_995540(a2, "Selected GCC installation: ");
    v26 = sub_227BF10(v25, a1[9], a1[10]);
    sub_995540(v26, "\n");
  }
  v10 = (_QWORD *)a1[90];
  v11 = (_QWORD *)a1[91];
  if ( v11 != v10 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *(__m128i **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v12 > 0x13u )
        {
          v23 = _mm_load_si128((const __m128i *)&xmmword_23A9C40);
          v12[1].m128i_i32[0] = 540697193;
          v13 = a2;
          *v12 = v23;
          *(_QWORD *)(a2 + 32) += 20LL;
        }
        else
        {
          v13 = sub_227BF10(a2, "Candidate multilib: ", 20);
        }
        v14 = sub_110AD60(v13, v10);
        v15 = *(_BYTE **)(v14 + 32);
        if ( *(_BYTE **)(v14 + 24) != v15 )
          break;
        v10 += 24;
        sub_227BF10(v14, "\n", 1);
        if ( v11 == v10 )
          goto LABEL_13;
      }
      v10 += 24;
      *v15 = 10;
      ++*(_QWORD *)(v14 + 32);
    }
    while ( v11 != v10 );
LABEL_13:
    if ( -1431655765 * (unsigned int)((__int64)(a1[91] - a1[90]) >> 6) )
      goto LABEL_15;
  }
  if ( a1[18] || a1[22] || a1[26] )
  {
LABEL_15:
    v16 = j__strlen("Selected multilib: ");
    v17 = *(void **)(a2 + 32);
    v18 = v16;
    if ( v16 > *(_QWORD *)(a2 + 24) - (_QWORD)v17 )
    {
      v4 = sub_227BF10(a2, "Selected multilib: ", v16);
    }
    else if ( v16 )
    {
      memcpy(v17, "Selected multilib: ", v16);
      *(_QWORD *)(a2 + 32) += v18;
    }
    v19 = sub_110AD60(v4, a1 + 17);
    v20 = j__strlen("\n");
    v21 = *(void **)(v19 + 32);
    v22 = v20;
    if ( v20 > *(_QWORD *)(v19 + 24) - (_QWORD)v21 )
    {
      sub_227BF10(v19, "\n", v20);
    }
    else if ( v20 )
    {
      memcpy(v21, "\n", v20);
      *(_QWORD *)(v19 + 32) += v22;
    }
  }
}
