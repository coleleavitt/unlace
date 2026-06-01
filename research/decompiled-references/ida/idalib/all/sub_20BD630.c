void __fastcall sub_20BD630(__int64 a1)
{
  __int64 v1; // rbp
  const __m128i *v2; // r13
  __int64 *v3; // rsi
  __int64 v4; // rdx
  const __m128i *v5; // rdx
  __m128i *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __m128i *v14; // rax
  __int64 v15; // rax
  __m128i *v16; // r14
  int v17; // eax
  __int64 v18; // rax
  __m128 ptr; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v20[248]; // [rsp+10h] [rbp-F8h] BYREF

  if ( (*(_BYTE *)(a1 + 7) & 8) != 0 )
  {
    v1 = *(_QWORD *)(sub_20AC080(***(_QWORD ***)(a1 + 8) + 496LL, a1) + 8);
    v2 = (const __m128i *)sub_20ABC80(v1 + 24);
    if ( *(_DWORD *)(v1 + 24) >> 1 )
    {
      if ( (*(_BYTE *)(v1 + 24) & 1) != 0 )
      {
        v3 = (__int64 *)(v1 + 32);
        v4 = 12;
      }
      else
      {
        v3 = *(__int64 **)(v1 + 32);
        v4 = 3LL * *(unsigned int *)(v1 + 40);
      }
      sub_20ABC20(&ptr, v3, &v3[v4], v1 + 24, 0);
      v5 = (const __m128i *)ptr.m128_u64[1];
      v6 = (__m128i *)ptr.m128_u64[0];
    }
    else
    {
      v6 = (__m128i *)sub_20ABC80(v1 + 24);
    }
    ptr.m128_u64[0] = (unsigned __int64)v20;
    ptr.m128_u64[1] = 0x800000000LL;
    sub_20A1320((__int64)&ptr, v6, v5, v2);
    v11 = (__int64 *)ptr.m128_u64[0];
    v12 = ptr.m128_u64[0] + 24LL * ptr.m128_u32[2];
    if ( v12 != ptr.m128_u64[0] )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = v11[1];
          v16 = (__m128i *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            break;
LABEL_12:
          v11 += 3;
          if ( (__int64 *)v12 == v11 )
            goto LABEL_16;
        }
        v17 = v15 & 3;
        if ( v17 )
        {
          if ( v17 == 1 )
          {
            v8 = v16->m128i_u8[0];
            v7 = (unsigned int)(v8 - 5);
            if ( (unsigned int)v7 <= 0x20 && ((1LL << v8) & 0x3E7FFFFE00LL) != 0 )
            {
              v13 = sub_2058290(*(_QWORD **)(a1 + 8), (__int64)v6, v7, v8, v9, v10);
              v14 = (__m128i *)sub_20AFB20(v13);
              v6 = (__m128i *)*v11;
              sub_20BCC00(v16, *v11, v14);
            }
          }
          goto LABEL_12;
        }
        v11 += 3;
        v18 = sub_2058290(*(_QWORD **)(a1 + 8), (__int64)v6, v7, v8, v9, v10);
        v6 = (__m128i *)sub_20AFB20(v18);
        sub_20B5550((__int64)v16, v6);
        if ( (__int64 *)v12 == v11 )
        {
LABEL_16:
          v11 = (__int64 *)ptr.m128_u64[0];
          break;
        }
      }
    }
    if ( v11 != (__int64 *)v20 )
      free(v11);
  }
}
