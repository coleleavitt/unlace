void __fastcall sub_BC3460(__int64 a1, __int64 a2, unsigned int **a3, double a4)
{
  unsigned int *v6; // r8
  unsigned int v7; // r13d
  double *v9; // rax
  unsigned int *v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 i; // rdx
  __int64 v13; // rbp
  unsigned int *v14; // r12
  unsigned int v15; // [rsp+Ch] [rbp-3Ch]
  __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned int *v17[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = *a3;
  if ( *a3 )
  {
    v7 = *(v6 - 1);
    v15 = *(v6 - 2);
    v9 = (double *)sub_186B270(4LL * v15 + 8);
    v10 = *a3;
    v6 = (unsigned int *)(v9 + 1);
    *(_QWORD *)&a4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v7)).m128i_u64[0];
    *v9 = a4;
    if ( v10 )
    {
      v11 = 4LL * *(v10 - 1);
      if ( v11 )
      {
        for ( i = 0; i != v11; i += 4LL )
          *(_DWORD *)((char *)v9 + i + 8) = v10[i / 4];
      }
    }
  }
  v17[0] = v6;
  v16 = 0;
  sub_BB8720(a1, a2, &v16, v17);
  *(_BYTE *)(a1 + 4170) = 1;
  v13 = v16;
  v14 = v17[0];
  sub_BC3130(a1, &v16, v17, a4);
  if ( v14 )
    sub_186B220(v14 - 2);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
}

