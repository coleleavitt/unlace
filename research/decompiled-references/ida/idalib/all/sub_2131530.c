void __fastcall sub_2131530(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __m128i v10; // xmm0
  int v11; // eax
  __int64 v12; // r14
  void *v13; // rdi
  int v14; // r14d
  __int64 v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1 + 16;
  v4 = sub_2237400(a1, a1 + 16, a2, 40, v15);
  v5 = *(_QWORD *)a1;
  v6 = v4;
  v7 = *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v7 )
  {
    v8 = v4;
    do
    {
      v9 = *(_DWORD *)v5;
      v10 = _mm_loadu_si128((const __m128i *)(v5 + 8));
      v5 += 40;
      v8 += 40;
      *(_DWORD *)(v8 - 40) = v9;
      v11 = *(_DWORD *)(v5 - 8);
      *(__m128i *)(v8 - 32) = v10;
      *(_DWORD *)(v8 - 8) = v11;
      *(_QWORD *)(v8 - 16) = *(_QWORD *)(v5 - 16);
      *(_DWORD *)(v5 - 8) = 0;
    }
    while ( v7 != v5 );
    v12 = *(_QWORD *)a1;
    v7 = *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v7 )
    {
      do
      {
        v7 -= 40;
        if ( *(_DWORD *)(v7 + 32) > 0x40u )
        {
          v13 = *(void **)(v7 + 24);
          if ( v13 )
            operator delete[](v13);
        }
      }
      while ( v12 != v7 );
      v7 = *(_QWORD *)a1;
    }
  }
  v14 = v15[0];
  if ( v2 != v7 )
    free((void *)v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v14;
}
