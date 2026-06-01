void __fastcall sub_1497B50(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r13
  _QWORD *v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  int v13; // ebx
  _QWORD v14[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 144, v14);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = v4;
    do
    {
      *(_DWORD *)v8 = *(_DWORD *)v5;
      *(_DWORD *)(v8 + 4) = *((_DWORD *)v5 + 1);
      *(_DWORD *)(v8 + 8) = *((_DWORD *)v5 + 2);
      v10 = v5[2];
      *(_DWORD *)(v8 + 32) = 0;
      *(_QWORD *)(v8 + 16) = v10;
      *(_QWORD *)(v8 + 24) = v8 + 40;
      *(_DWORD *)(v8 + 36) = 2;
      if ( *((_DWORD *)v5 + 8) )
        sub_147FF00((char ***)(v8 + 24), (char ***)v5 + 3);
      *(__m128i *)(v8 + 56) = _mm_loadu_si128((const __m128i *)(v5 + 7));
      *(__m128i *)(v8 + 72) = _mm_loadu_si128((const __m128i *)(v5 + 9));
      *(__m128i *)(v8 + 88) = _mm_loadu_si128((const __m128i *)(v5 + 11));
      *(__m128i *)(v8 + 104) = _mm_loadu_si128((const __m128i *)(v5 + 13));
      *(__m128i *)(v8 + 120) = _mm_loadu_si128((const __m128i *)(v5 + 15));
      v9 = v5[17];
      v5 += 18;
      v8 += 144;
      *(_QWORD *)(v8 - 8) = v9;
    }
    while ( v7 != v5 );
    v11 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 18;
          v12 = (_QWORD *)v7[3];
          if ( v12 == v7 + 5 )
            break;
          free(v12);
          if ( v11 == v7 )
          {
            v7 = *(_QWORD **)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v11 != v7 );
      v7 = *(_QWORD **)a1;
    }
  }
LABEL_10:
  v13 = v14[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v13;
}
