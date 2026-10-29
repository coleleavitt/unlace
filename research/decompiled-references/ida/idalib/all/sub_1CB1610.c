__int64 __fastcall sub_1CB1610(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  const __m128i *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int *v10; // rsi
  void *v11; // rdi
  size_t v12; // rbx
  const void *v13; // rsi
  unsigned __int64 v14; // rax

  if ( (*(_WORD *)a2 & 0x1FF) == 0x47 && (*(_QWORD *)a2 & 0x80000LL) != 0 && *(_QWORD *)(a2 + 32) )
  {
    v6 = (const __m128i *)(a1 + 8);
    sub_E90250(*(_QWORD *)(a2 + 32), a3, (const __m128i *)(a1 + 8), 1, 1);
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(v7 + 40);
    if ( (v8 & 7) == 0 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v9 )
      {
        v10 = *(unsigned int **)(v9 + 16);
        v11 = *(void **)(a3 + 32);
        v12 = *v10;
        v13 = v10 + 4;
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v11 >= v12 )
        {
          if ( v12 )
          {
            memcpy(v11, v13, v12);
            *(_QWORD *)(a3 + 32) += v12;
          }
        }
        else
        {
          sub_227BF10(a3, v13, v12);
        }
      }
    }
    v3 = 1;
    if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 41 <= 1 )
    {
      v14 = sub_BBFE00(v7);
      sub_F712D0(
        a3,
        (const __m128i *)(*(_QWORD *)(v7 + 128) + 8LL),
        **(unsigned int **)(v7 + 128),
        v6,
        *(_QWORD *)(v14 + 56));
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
