void __fastcall sub_1556590(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // eax
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __m128i v12; // xmm0
  int v13; // eax
  _DWORD *v14; // rbx
  int v15; // ebx
  _QWORD v16[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = a1 + 16;
  v4 = sub_2237400(a1, a1 + 16, a2, 72, v16);
  v5 = *(_DWORD **)a1;
  v6 = v4;
  v7 = *(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v7 )
  {
    v8 = v4;
    do
    {
      v9 = *v5;
      v10 = (__int64 *)(v5 + 6);
      v11 = v8 + 24;
      v5 += 18;
      v8 += 72;
      *(_DWORD *)(v8 - 72) = v9;
      *(_QWORD *)(v8 - 64) = *((_QWORD *)v5 - 8);
      *(_QWORD *)(v8 - 56) = *((_QWORD *)v5 - 7);
      sub_E90750(v11, v10);
      v12 = _mm_loadu_si128((const __m128i *)(v5 - 6));
      *(_DWORD *)(v8 - 8) = *(v5 - 2);
      v13 = *(v5 - 1);
      *(__m128i *)(v8 - 24) = v12;
      *(_DWORD *)(v8 - 4) = v13;
    }
    while ( (_DWORD *)v7 != v5 );
    v14 = *(_DWORD **)a1;
    v7 = *(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 72;
          if ( *(_DWORD *)(v7 + 44) )
            break;
          if ( (_DWORD *)v7 == v14 )
            goto LABEL_7;
        }
        free(*(void **)(v7 + 32));
      }
      while ( (_DWORD *)v7 != v14 );
LABEL_7:
      v7 = *(_QWORD *)a1;
    }
  }
  v15 = v16[0];
  if ( v3 != v7 )
    free((void *)v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v15;
}
