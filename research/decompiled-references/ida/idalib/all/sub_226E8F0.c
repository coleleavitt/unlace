__int64 *__fastcall sub_226E8F0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rsi
  __int64 *result; // rax
  unsigned int v5; // ecx
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 *v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 *v11; // rax
  int v12; // ecx
  __m128i v13; // xmm0
  __int64 v14; // rax
  char *v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+10h] [rbp-78h]
  const char *v20; // [rsp+20h] [rbp-68h] BYREF
  __int16 v21; // [rsp+40h] [rbp-48h]

  v2 = *(unsigned int *)(a1 + 232);
  v3 = *(__int64 **)(a1 + 224);
  result = &v3[3 * v2];
  if ( v3 != result )
  {
    v5 = *(_DWORD *)(a1 + 232);
    v6 = *(__int64 **)(a1 + 224);
    do
    {
      while ( 1 )
      {
        v8 = v6 + 3;
        v7 = *(unsigned int *)(a1 + 64);
        if ( *((_DWORD *)v6 + 3) != (_DWORD)v7 )
          break;
        v7 = (unsigned int)(*((_DWORD *)v6 + 2) + 1024);
        if ( (unsigned int)v7 < *(_DWORD *)(a1 + 60) )
          break;
        v6 += 3;
        result = &v3[3 * v2];
        if ( result == v8 )
          return result;
      }
      if ( *((_BYTE *)v6 + 20) )
      {
        v14 = *v6;
        v20 = "Could not find expected : for simple key";
        v15 = *(char **)(v14 + 24);
        v21 = 259;
        v16 = *(_QWORD *)(a1 + 48);
        if ( (unsigned __int64)v15 >= v16 )
          v15 = (char *)(v16 - 1);
        v19 = *(_QWORD *)(a1 + 336);
        if ( v19 )
        {
          v17 = std::_V2::generic_category((std::_V2 *)v7);
          *(_DWORD *)v19 = 22;
          *(_QWORD *)(v19 + 8) = v17;
        }
        if ( !*(_BYTE *)(a1 + 75) )
          sub_223BFB0(*(__int64 **)a1, v15, 0, (__int64)&v20, 0, 0, nullptr, 0, *(_BYTE *)(a1 + 76));
        v18 = *(unsigned int *)(a1 + 232);
        v3 = *(__int64 **)(a1 + 224);
        *(_BYTE *)(a1 + 75) = 1;
        v5 = v18;
        result = &v3[3 * v18];
      }
      v9 = (char *)result - (char *)v8;
      v10 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
      if ( v9 > 0 )
      {
        v11 = v6;
        do
        {
          v12 = *((_DWORD *)v11 + 10);
          v13 = _mm_loadu_si128((const __m128i *)(v11 + 3));
          v11 += 3;
          *((_DWORD *)v11 - 2) = v12;
          LOBYTE(v12) = *((_BYTE *)v11 + 20);
          *(__m128i *)(v11 - 3) = v13;
          *((_BYTE *)v11 - 4) = v12;
          --v10;
        }
        while ( v10 );
        v5 = *(_DWORD *)(a1 + 232);
        v3 = *(__int64 **)(a1 + 224);
      }
      v2 = --v5;
      *(_DWORD *)(a1 + 232) = v5;
      result = &v3[3 * v5];
    }
    while ( result != v6 );
  }
  return result;
}
