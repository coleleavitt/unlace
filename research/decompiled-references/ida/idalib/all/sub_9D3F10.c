__int64 *__fastcall sub_9D3F10(__int64 *a1, __int64 a2, __int64 **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rdi
  __m128i v18; // [rsp+0h] [rbp-38h] BYREF

  v7 = *a3;
  v18.m128i_i64[0] = a4;
  v18.m128i_i32[2] = a5;
  v8 = sub_9D1090((_QWORD *)a2, &v18, v7, a4, a5, a6);
  v9 = v8;
  if ( v8 && (*(_BYTE *)(v8 + 43) & 0x10) != 0 )
  {
    v10 = v8;
    do
    {
      *(_BYTE *)(v10 + 43) &= ~0x10u;
      sub_9CAA60(a2, *(_QWORD *)(v10 + 8));
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 && (*(_BYTE *)(v10 + 43) & 0x10) != 0 );
  }
  v11 = *(_QWORD *)(a2 + 40);
  v12 = *(_QWORD *)(a2 + 32);
  v13 = (v11 - v12) >> 3;
  if ( (_DWORD)v13 )
  {
    v14 = 0;
    v15 = 8LL * (unsigned int)(v13 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v12 + v14);
        if ( (*(_BYTE *)(v16 + 43) & 0x10) != 0 && !*(_DWORD *)(v16 + 68) )
          break;
        v14 += 8;
        if ( v15 == v14 )
          goto LABEL_12;
      }
      sub_9D1530((void *)v16);
      v14 += 8;
      v12 = *(_QWORD *)(a2 + 32);
    }
    while ( v15 != v14 );
LABEL_12:
    v11 = *(_QWORD *)(a2 + 40);
  }
  if ( v12 != v11 )
    *(_QWORD *)(a2 + 40) = v12;
  if ( *(_BYTE *)(a2 + 80) )
    v9 = sub_9D2760(a2, v9);
  *a1 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 68);
  return a1;
}
