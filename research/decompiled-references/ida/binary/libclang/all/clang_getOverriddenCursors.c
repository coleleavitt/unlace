void __fastcall clang_getOverriddenCursors(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        const __m128i a8)
{
  __int64 *v8; // rbx
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // rax
  __m128i *v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 *v24; // rax
  __int64 *v25; // rax
  __m128i v26; // [rsp+0h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v28[20]; // [rsp+30h] [rbp-48h] BYREF
  int v29; // [rsp+44h] [rbp-34h]
  __int64 v30; // [rsp+48h] [rbp-30h]

  v8 = a2;
  if ( a1 )
  {
    v10 = (unsigned int)a7;
    *a1 = 0;
    if ( a2 )
    {
      v11 = a8.m128i_i64[1];
      *(_DWORD *)a2 = 0;
      if ( v11 )
      {
        if ( (unsigned int)clang_isDeclaration(v10) )
        {
          v16 = *(_QWORD **)(v11 + 32);
          v17 = v16[4];
          if ( v16[3] == v17 )
          {
            v18 = operator new(0x50u);
            *(_QWORD *)v18 = v18 + 16;
            v27 = v18;
            *(_QWORD *)(v18 + 8) = 0x200000000LL;
            v25 = (__int64 *)v16[1];
            if ( v25 == (__int64 *)v16[2] )
            {
              a2 = &v27;
              sub_63D4F0((__int64)v16, &v27);
            }
            else
            {
              *v25 = v18;
              v16[1] += 8LL;
            }
          }
          else
          {
            v18 = *(_QWORD *)(v17 - 8);
            v16[4] = v17 - 8;
            v27 = v18;
          }
          v19 = *(_DWORD *)(v18 + 12);
          *(_DWORD *)(v18 + 8) = 0;
          *(_OWORD *)&v28[4] = 0;
          v29 = 0;
          *(_DWORD *)v28 = 70;
          v30 = v11;
          *(_QWORD *)&v28[8] = v18;
          if ( v19 )
          {
            v20 = 0;
          }
          else
          {
            a2 = (__int64 *)(v18 + 16);
            sub_25D6060(v18, v18 + 16, 1, 32);
            v20 = 32LL * *(unsigned int *)(v18 + 8);
          }
          v21 = (__m128i *)(*(_QWORD *)v18 + v20);
          *v21 = _mm_load_si128((const __m128i *)v28);
          v21[1] = _mm_load_si128((const __m128i *)&v28[16]);
          v22 = _mm_loadu_si128((const __m128i *)&a7);
          ++*(_DWORD *)(v18 + 8);
          v26 = v22;
          v23 = _mm_loadu_si128(&a8);
          sub_63A310(
            v18,
            (__int64)a2,
            v12,
            v13,
            v14,
            v15,
            v26.m128i_i32[0],
            v26.m128i_i64[1],
            v23.m128i_i32[0],
            v23.m128i_i64[1]);
          if ( *(_DWORD *)(v18 + 8) == 1 )
          {
            v24 = (__int64 *)v16[4];
            if ( v24 == (__int64 *)v16[5] )
            {
              sub_63D4F0((__int64)(v16 + 3), &v27);
            }
            else
            {
              *v24 = v18;
              v16[4] += 8LL;
            }
          }
          else
          {
            *a1 = *(_QWORD *)v18 + 32LL;
            *(_DWORD *)v8 = *(_DWORD *)(v18 + 8) - 1;
          }
        }
      }
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)a2 = 0;
  }
}

