__int64 __fastcall sub_194AE10(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        double a6,
        __m128 a7)
{
  __int64 v8; // rbp
  int v10; // edx
  _DWORD *v11; // rdx
  const __m128i *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __m128i *v15; // rdx
  const __m128i *v16; // rax
  int v17; // ecx
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-158h] BYREF
  const __m128i *v21; // [rsp+10h] [rbp-150h]
  void *ptr; // [rsp+18h] [rbp-148h] BYREF
  __int64 v23; // [rsp+20h] [rbp-140h]
  _BYTE v24[256]; // [rsp+28h] [rbp-138h] BYREF
  __int64 v25; // [rsp+128h] [rbp-38h]

  v21 = a4;
  v20 = a3;
  ptr = v24;
  v23 = 0x800000000LL;
  v25 = 0;
  v25 = a4->m128i_i64[1];
  if ( (unsigned __int8)sub_194AAA0(a1, &v20, 0, &v20, *(_DWORD *)(a3 + 20), (__int64)&ptr, a6, a7, 0) )
  {
    v8 = 0;
  }
  else
  {
    v8 = sub_1CDD580(*a1, a5, v21->m128i_u32[0], &ptr);
    if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v10 = 8 * *(_DWORD *)(v8 + 20);
      if ( *(_BYTE *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 22 )
      {
        sub_1EA6140(a2, v8, (unsigned int)(v10 + 32), 8);
        v16 = v21;
        v15->m128i_i32[0] = 0;
        v17 = v23;
        v18 = _mm_loadu_si128(v16);
        v15->m128i_i64[1] = 0;
        v19 = 0;
        v15[1] = v18;
        if ( v17 )
        {
          while ( 1 )
          {
            v15[2].m128i_i64[v19] = *((_QWORD *)ptr + 4 * v19 + 3);
            if ( v19 == v17 - 1 )
              break;
            ++v19;
          }
        }
      }
      else
      {
        sub_1EA6140(a2, v8, (unsigned int)(v10 + 16), 8);
        v12 = v21;
        v11[1] = v21->m128i_i32[1];
        *v11 = v12->m128i_i32[0];
        v11[2] = v12->m128i_i32[2];
        v13 = 0;
        v11[3] = v12->m128i_i32[3];
        v14 = (unsigned int)(v23 - 1);
        if ( (_DWORD)v23 )
        {
          while ( 1 )
          {
            *(_QWORD *)&v11[2 * v13 + 4] = *((_QWORD *)ptr + 4 * v13 + 3);
            if ( v14 == v13 )
              break;
            ++v13;
          }
        }
      }
    }
  }
  if ( ptr != v24 )
    free(ptr);
  return v8;
}
