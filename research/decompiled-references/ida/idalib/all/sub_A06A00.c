__int64 __fastcall sub_A06A00(__int64 a1)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  void *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  void *v13; // rbx
  void *v14; // rbx
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD **)(a1 + 48);
  if ( *(_DWORD *)(a1 + 56) )
    sub_A06990(v16, v2, &v2[2 * *(unsigned int *)(a1 + 64)], a1 + 48, 0);
  else
    sub_A06990(v16, &v2[2 * *(unsigned int *)(a1 + 64)], &v2[2 * *(unsigned int *)(a1 + 64)], a1 + 48, 1);
  v4 = v16[0].m128_u64[1];
  v3 = v16[0].m128_u64[0];
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 + 64));
  sub_A06990(v16, v5, v5, a1 + 48, 1);
  v6 = v16[0].m128_u64[0];
  if ( v3 != v16[0].m128_u64[0] )
  {
    do
    {
      while ( 1 )
      {
LABEL_4:
        v7 = *(_QWORD *)(v3 + 8);
        if ( v7 )
        {
          if ( (v7 & 4) != 0 )
          {
            v8 = (void *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v8 )
            {
              ((void (*)(void))sub_A0A960)();
              operator delete(v8, 8u);
            }
          }
        }
        v9 = v3 + 16;
        if ( v3 + 16 != v4 )
          break;
LABEL_21:
        v3 = v4;
        if ( v6 == v4 )
          goto LABEL_16;
      }
      v10 = *(_QWORD *)(v3 + 16);
      if ( v10 == -4096 || v10 == -8192 )
      {
        v11 = (__int64 *)(v3 + 32);
        while ( 1 )
        {
          v3 = (unsigned __int64)v11;
          if ( v11 == (__int64 *)v4 )
            goto LABEL_21;
          v12 = *v11;
          v11 += 2;
          if ( v12 != -8192 && v12 != -4096 )
          {
            if ( v6 != v3 )
              goto LABEL_4;
            goto LABEL_16;
          }
        }
      }
      v3 += 16LL;
    }
    while ( v6 != v9 );
  }
LABEL_16:
  v13 = *(void **)(a1 + 32);
  if ( v13 )
  {
    sub_A0A960(*(_QWORD *)(a1 + 32));
    operator delete(v13, 8u);
  }
  v14 = *(void **)(a1 + 40);
  if ( v14 )
  {
    sub_A0A960(*(_QWORD *)(a1 + 40));
    operator delete(v14, 8u);
  }
  return operator delete(*(_QWORD *)(a1 + 48), 16LL * *(unsigned int *)(a1 + 64), 8);
}
