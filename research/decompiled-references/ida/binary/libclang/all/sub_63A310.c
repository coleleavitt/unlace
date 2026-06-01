void __fastcall sub_63A310(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  __int64 v11; // rax
  char *v12; // r14
  char *v13; // r12
  __int64 v14; // r15
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  const __m128i *v21; // r15
  __int64 v22; // rdi
  __m128i *v23; // rax
  __int64 v24; // rsi
  char *v25; // r15
  _DWORD v26[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-A0h]
  __int64 v28; // [rsp+20h] [rbp-98h]
  __int64 v29; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v31; // [rsp+38h] [rbp-80h]
  _BYTE v32[120]; // [rsp+40h] [rbp-78h] BYREF

  if ( a8 && (*(_BYTE *)(a8 + 28) & 0x7Fu) - 16 <= 0x3E )
  {
    ptr = v32;
    v31 = 0x800000000LL;
    v11 = sub_798D40(a8);
    sub_6BEDE0(v11, a8, &ptr);
    v12 = (char *)ptr;
    v13 = (char *)ptr + 8 * (unsigned int)v31;
    if ( v13 != ptr )
    {
      do
      {
        v14 = *(_QWORD *)v12;
        v15 = sub_132CA50(*(_QWORD *)v12);
        v16 = v15 - 16;
        v26[0] = v15;
        v17 = -1;
        if ( v16 > 1 )
          v17 = 0;
        v18 = *(unsigned int *)(a1 + 8);
        v19 = *(unsigned int *)(a1 + 12);
        v26[1] = v17;
        v27 = v14;
        v20 = *(_QWORD *)a1;
        v21 = (const __m128i *)v26;
        v22 = v18 + 1;
        v29 = a10;
        v28 = 1;
        if ( v19 < v18 + 1 )
        {
          v24 = a1 + 16;
          if ( (unsigned __int64)v26 < v20 || (unsigned __int64)v26 >= v20 + 32 * v18 )
          {
            sub_25D6060(a1, v24, v22, 32);
            v20 = *(_QWORD *)a1;
            v18 = *(unsigned int *)(a1 + 8);
          }
          else
          {
            v25 = (char *)v26 - v20;
            sub_25D6060(a1, v24, v22, 32);
            v20 = *(_QWORD *)a1;
            v18 = *(unsigned int *)(a1 + 8);
            v21 = (const __m128i *)&v25[*(_QWORD *)a1];
          }
        }
        v12 += 8;
        v23 = (__m128i *)(32 * v18 + v20);
        *v23 = _mm_loadu_si128(v21);
        v23[1] = _mm_loadu_si128(v21 + 1);
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v12 != v13 );
      v12 = (char *)ptr;
    }
    if ( v12 != v32 )
      free(v12);
  }
}

