__int64 __fastcall sub_EC5A30(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __m128i *v3; // rcx
  __guard *v4; // rbx
  unsigned int v5; // ebp
  __guard *v6; // rax
  __int64 v7; // rax
  _WORD *v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __m128i *v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rbp
  const void *v15; // r15
  size_t v16; // rax
  _WORD *v17; // rdi
  size_t v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  _DWORD *v25; // rcx
  _BYTE *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rcx
  __int64 result; // rax
  _BYTE *v31; // rdx
  __m128i si128; // xmm0
  __m128i v33; // xmm0

  if ( !byte_2CAD565 )
  {
    a1 = 238;
    sub_EC3F70(238);
  }
  v2 = sub_2259990(a1, a2);
  v3 = *(__m128i **)(v2 + 32);
  if ( *(_QWORD *)(v2 + 24) - (_QWORD)v3 > 0x15u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_2385070);
    v3[1].m128i_i32[0] = 1937006964;
    v3[1].m128i_i16[2] = 2618;
    *v3 = si128;
    *(_QWORD *)(v2 + 32) += 22LL;
  }
  else
  {
    a2 = "\n*** Stmt/Expr Stats:\n";
    a1 = v2;
    sub_22581D0(v2, "\n*** Stmt/Expr Stats:\n", 22);
  }
  v4 = qword_2CAD580;
  v5 = 0;
  v6 = qword_2CAD580;
  do
  {
    if ( *v6 )
      v5 += *((_DWORD *)v6 + 2);
    v6 += 2;
  }
  while ( &byte_2CAE590 != v6 );
  v7 = sub_2259990(a1, a2);
  v8 = *(_WORD **)(v7 + 32);
  if ( *(_QWORD *)(v7 + 24) - (_QWORD)v8 > 1u )
  {
    *v8 = 8224;
    *(_QWORD *)(v7 + 32) += 2LL;
  }
  else
  {
    v7 = sub_22581D0(v7, "  ", 2);
  }
  v9 = v5;
  v10 = v7;
  v11 = sub_2257BD0(v7, v5);
  v12 = *(__m128i **)(v11 + 32);
  if ( *(_QWORD *)(v11 + 24) - (_QWORD)v12 > 0x13u )
  {
    v33 = _mm_load_si128((const __m128i *)&xmmword_2385080);
    v12[1].m128i_i32[0] = 170814561;
    *v12 = v33;
    *(_QWORD *)(v11 + 32) += 20LL;
  }
  else
  {
    v9 = (unsigned __int64)" stmts/exprs total.\n";
    v10 = v11;
    sub_22581D0(v11, " stmts/exprs total.\n", 20);
  }
  v13 = 0;
  do
  {
    if ( !*v4 || !*((_DWORD *)v4 + 2) )
      goto LABEL_26;
    v24 = sub_2259990(v10, v9);
    v25 = *(_DWORD **)(v24 + 32);
    if ( *(_QWORD *)(v24 + 24) - (_QWORD)v25 > 3u )
    {
      *v25 = 538976288;
      *(_QWORD *)(v24 + 32) += 4LL;
    }
    else
    {
      v24 = sub_22581D0(v24, "    ", 4);
    }
    v14 = sub_2257BD0(v24, *((unsigned int *)v4 + 2));
    v26 = *(_BYTE **)(v14 + 32);
    if ( *(_BYTE **)(v14 + 24) == v26 )
    {
      v14 = sub_22581D0(v14, " ", 1);
    }
    else
    {
      *v26 = 32;
      ++*(_QWORD *)(v14 + 32);
    }
    v15 = (const void *)*v4;
    if ( *v4 )
    {
      v16 = strlen((const char *)*v4);
      v17 = *(_WORD **)(v14 + 32);
      v18 = v16;
      v19 = *(_QWORD *)(v14 + 24) - (_QWORD)v17;
      if ( v18 <= v19 )
      {
        if ( v18 )
        {
          memcpy(v17, v15, v18);
          v27 = *(_QWORD *)(v14 + 24);
          v17 = (_WORD *)(v18 + *(_QWORD *)(v14 + 32));
          *(_QWORD *)(v14 + 32) = v17;
          v19 = v27 - (_QWORD)v17;
        }
        goto LABEL_19;
      }
      v14 = sub_22581D0(v14, v15, v18);
    }
    v17 = *(_WORD **)(v14 + 32);
    v19 = *(_QWORD *)(v14 + 24) - (_QWORD)v17;
LABEL_19:
    if ( v19 > 1 )
    {
      *v17 = 8236;
      *(_QWORD *)(v14 + 32) += 2LL;
    }
    else
    {
      v14 = sub_22581D0(v14, ", ", 2);
    }
    v20 = sub_2257BD0(v14, *((unsigned int *)v4 + 3));
    v21 = *(_QWORD *)(v20 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v20 + 24) - v21) > 6 )
    {
      *(_DWORD *)v21 = 1667327264;
      *(_WORD *)(v21 + 4) = 8296;
      *(_BYTE *)(v21 + 6) = 40;
      *(_QWORD *)(v20 + 32) += 7LL;
    }
    else
    {
      v20 = sub_22581D0(v20, " each (", 7);
    }
    v9 = (unsigned int)(*((_DWORD *)v4 + 3) * *((_DWORD *)v4 + 2));
    v22 = sub_2257BD0(v20, v9);
    v23 = *(_QWORD **)(v22 + 32);
    if ( *(_QWORD *)(v22 + 24) - (_QWORD)v23 > 7u )
    {
      v10 = 0xA29736574796220LL;
      *v23 = 0xA29736574796220LL;
      *(_QWORD *)(v22 + 32) += 8LL;
    }
    else
    {
      v9 = (unsigned __int64)" bytes)\n";
      v10 = v22;
      sub_22581D0(v22, " bytes)\n", 8);
    }
    v13 += *((_DWORD *)v4 + 3) * *((_DWORD *)v4 + 2);
LABEL_26:
    v4 += 2;
  }
  while ( &byte_2CAE590 != v4 );
  v28 = sub_2259990(v10, v9);
  v29 = *(void **)(v28 + 32);
  if ( *(_QWORD *)(v28 + 24) - (_QWORD)v29 > 0xDu )
  {
    qmemcpy(v29, "Total bytes = ", 14);
    *(_QWORD *)(v28 + 32) += 14LL;
  }
  else
  {
    v28 = sub_22581D0(v28, "Total bytes = ", 14);
  }
  result = sub_2257BD0(v28, v13);
  v31 = *(_BYTE **)(result + 32);
  if ( *(_BYTE **)(result + 24) == v31 )
    return sub_22581D0(result, "\n", 1);
  *v31 = 10;
  ++*(_QWORD *)(result + 32);
  return result;
}

