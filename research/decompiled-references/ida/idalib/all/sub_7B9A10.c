__int64 __fastcall sub_7B9A10(__int64 a1, __int64 a2, __int64 a3, size_t a4, __int64 a5, __int16 a6, __int64 *a7)
{
  char *v10; // rax
  void *v11; // rdi
  char *v12; // r12
  size_t v13; // rcx
  size_t v14; // rax
  size_t v15; // rdx
  __m128i v16; // xmm0
  size_t v18; // rbp
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // [rsp+17h] [rbp-39h] BYREF
  size_t v24[7]; // [rsp+18h] [rbp-38h] BYREF

  v24[1] = __readfsqword(0x28u);
  v10 = sub_7B96E0(a1, a2, nullptr, v24, a5, a6, a7);
  if ( !v10 )
    return -1;
  v11 = *(void **)a3;
  v12 = v10;
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)(a3 + 8) = 0;
    qfree(v11);
    *(_QWORD *)a3 = 0;
    *(_QWORD *)(a3 + 16) = 0;
  }
  v13 = v24[0];
  v14 = v24[0] / a4;
  v24[0] = v14;
  v15 = v14;
  v16 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
  if ( v13 < a4 )
  {
    qfree(v12);
    return 0;
  }
  else
  {
    *(_QWORD *)a3 = v12;
    *(__m128i *)(a3 + 8) = v16;
    if ( (a6 & 0x400) != 0 && v12[v14 - 1] )
    {
      v23 = 0;
      v18 = v14 + 1;
      if ( &v23 >= v12 && (v19 = &v12[v14], &v23 < &v12[v14]) )
      {
        if ( v14 != -1 )
        {
          v22 = qvector_reserve(a3, v12, v14 + 1, 1);
          *(_QWORD *)a3 = v22;
          v19 = (char *)(*(_QWORD *)(a3 + 8) + v22);
        }
        *v19 = 0;
      }
      else
      {
        if ( v14 < v18 )
        {
          v21 = qvector_reserve(a3, v12, v14 + 1, 1);
          *(_QWORD *)a3 = v21;
          v12 = (char *)v21;
          v20 = *(_QWORD *)(a3 + 8);
        }
        else
        {
          v20 = -1;
        }
        v12[v20] = 0;
      }
      ++*(_QWORD *)(a3 + 8);
      return v18;
    }
    return v15;
  }
}
