__int64 __fastcall sub_788930(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  void *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  void *v14; // r14
  __m128i si128; // xmm0
  unsigned int i; // r14d
  int v17; // edx
  int v18; // ecx
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // [rsp+0h] [rbp-B8h]
  __int64 *v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+10h] [rbp-A8h]
  int v24[2]; // [rsp+18h] [rbp-A0h]
  size_t n[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v26; // [rsp+30h] [rbp-88h]
  const void **v27; // [rsp+38h] [rbp-80h]
  int v28[2]; // [rsp+40h] [rbp-78h] BYREF
  int v29[2]; // [rsp+48h] [rbp-70h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __m128i v31; // [rsp+58h] [rbp-60h]
  __int64 v32; // [rsp+68h] [rbp-50h]
  int v33; // [rsp+70h] [rbp-48h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v22 = a1;
  v23 = a2;
  v34 = __readfsqword(0x28u);
  v6 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v6);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)v24 = v22[1];
  if ( *(_QWORD *)v24 )
  {
    HIBYTE(v26) = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      ptr = nullptr;
      ++v8;
      v32 = 0;
      v9 = *v22;
      v33 = -1;
      v31 = 0;
      v10 = v7 + v9;
      switch ( *(_DWORD *)v10 )
      {
        case 1:
          v20 = *(_DWORD *)(v10 + 4);
          *(_QWORD *)v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v20 + 1)).m128i_u64[0];
          rangeset_t_add((int)&ptr, (int)v28, v20 + 1, a4, (int)&ptr, a6, v21, v22, v23, v24[0], (int)&ptr, n[1], v26);
          break;
        case 2:
          *(_QWORD *)v29 = *(_QWORD *)(v10 + 4);
          goto LABEL_20;
        case 3:
          for ( i = 0; ; ++i )
          {
            if ( (unsigned __int8)((unsigned int)sub_8930A0(i) >> 16) == *(_DWORD *)(v10 + 4) )
            {
              v29[0] = i;
              v29[1] = i + 1;
              rangeset_t_add((int)&ptr, (int)v29, v17, v18, (int)&ptr, v19, v21, v22, v23, v24[0], n[0], n[1], v26);
            }
            if ( i == 1114111 )
              break;
          }
          break;
        case 4:
          *(_QWORD *)v29 = 0;
          sub_8931F0(v29, *(unsigned int *)(v10 + 4));
LABEL_20:
          n[0] = (size_t)&ptr;
          sub_788850((__int64)v22, (int)&ptr, (unsigned int *)v29, v10, (int)&ptr, a6);
          break;
        case 5:
          v12 = sub_893780(qword_2CA1698, v10 + 4, sub_789390);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8);
            v14 = nullptr;
            if ( v13 )
            {
              v27 = (const void **)v12;
              n[0] = 8 * v13;
              v14 = (void *)qalloc_or_throw(8 * v13, (const char *)(v10 + 4));
              memcpy(v14, *v27, n[0]);
            }
            si128 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
            if ( ptr )
            {
              *(__m128i *)n = si128;
              v31.m128i_i64[0] = 0;
              qfree(ptr);
              si128 = _mm_load_si128((const __m128i *)n);
            }
            ptr = v14;
            v32 = 0;
            v31 = si128;
          }
          break;
        case 6:
          HIBYTE(v26) = 1;
          break;
        default:
          if ( !under_debugger )
            interr(1475);
          BUG();
      }
      if ( *(_BYTE *)(v10 + 264) )
        rangeset_t_sub2(v23);
      else
        rangeset_t_add2(v23);
      if ( ptr )
      {
        v31.m128i_i64[0] = 0;
        qfree(ptr);
      }
      v7 += 268;
    }
    while ( v8 != *(_QWORD *)v24 );
  }
  else
  {
    HIBYTE(v26) = 0;
  }
  return HIBYTE(v26);
}

