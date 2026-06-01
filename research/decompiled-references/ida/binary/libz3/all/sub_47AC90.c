__int64 __fastcall sub_47AC90(_QWORD *a1, __int64 *a2)
{
  __m128i v3; // xmm0
  size_t v4; // rdi
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rbx
  int v10; // eax
  void *v11; // r15
  __int64 v12; // [rsp+8h] [rbp-40h]

  if ( *a2 )
  {
    v3 = _mm_loadl_epi64((const __m128i *)(*a2 - 8));
    v4 = 40LL * (unsigned int)_mm_cvtsi128_si32(v3) + 8;
  }
  else
  {
    v3.m128i_i64[0] = 0;
    v4 = 8;
  }
  v12 = v3.m128i_i64[0];
  result = sub_186B270(v4);
  v6 = result + 8;
  *a1 = result + 8;
  v7 = *a2;
  *(_QWORD *)result = v3.m128i_i64[0];
  if ( v7 )
  {
    result = 5LL * *(unsigned int *)(v7 - 4);
    v8 = v7 + 40LL * *(unsigned int *)(v7 - 4);
    if ( v7 != v8 )
    {
      v9 = v6;
      do
      {
        *(_BYTE *)(v9 + 4) &= 0xFCu;
        v11 = qword_1C7F2C0;
        *(_BYTE *)(v9 + 20) &= 0xFCu;
        *(_DWORD *)v9 = 0;
        *(_QWORD *)(v9 + 8) = 0;
        *(_DWORD *)(v9 + 16) = 1;
        *(_QWORD *)(v9 + 24) = 0;
        if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
        {
          sub_182C690(v11, v9, v7);
          if ( (*(_BYTE *)(v7 + 20) & 1) != 0 )
          {
LABEL_11:
            sub_182C690(v11, v9 + 16, v7 + 16);
            goto LABEL_8;
          }
        }
        else
        {
          *(_DWORD *)v9 = *(_DWORD *)v7;
          if ( (*(_BYTE *)(v7 + 20) & 1) != 0 )
            goto LABEL_11;
        }
        v10 = *(_DWORD *)(v7 + 16);
        *(_BYTE *)(v9 + 20) &= ~1u;
        *(_DWORD *)(v9 + 16) = v10;
LABEL_8:
        result = *(_QWORD *)(v7 + 32);
        v7 += 40;
        v9 += 40;
        *(_QWORD *)(v9 - 8) = result;
      }
      while ( v8 != v7 );
    }
  }
  return result;
}

