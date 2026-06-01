/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B740
// Address: 0x000000010001B740

//----- (000000010001B740) ----------------------------------------------------
__int64 __fastcall sub_10001B740(__int64 a1, unsigned __int64 *a2)
{
  __m128 v4; // xmm1
  __int64 v5; // rdi
  __int64 v6; // r13
  __m128i si128; // xmm2
  __m128i v8; // xmm3
  char **v9; // r15
  __int64 v10; // r12
  char *v11; // rax
  char *v12; // rcx
  char *v13; // roff
  void **v14; // r15
  int v15; // r12d
  void *v16; // rax
  unsigned __int64 v17; // rsi
  void *v18; // rcx
  unsigned __int64 v19; // rdx
  __m128i v21[2]; // [rsp+10h] [rbp-70h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 48) == 1 )
  {
    sub_100010070((int)"Found a 32-bit segment in 64-bit program, ignoring it");
  }
  else
  {
    v4 = (__m128)*a2;
    v23 = *(_OWORD *)(a2 + 1);
    v5 = *((unsigned int *)a2 + 6);
    v6 = *((unsigned int *)a2 + 9);
    si128 = _mm_cvtepu32_epi64(*(__m64 *)((char *)a2 + 28));
    v8 = *(__m128i *)(a2 + 5);
    v9 = *(char ***)(a1 + 24);
    v10 = *(_QWORD *)(a1 + 40);
    v11 = *v9;
    v12 = v9[1];
    if ( v9[2] < v12 + 1 )
    {
      v22 = *((unsigned int *)a2 + 6);
      v21[0] = si128;
      v21[1] = v8;
      v11 = (char *)qvector_reserve((__int64)v9, v11, (unsigned __int64)(v12 + 1), 0x48u);
      v5 = v22;
      si128 = _mm_load_si128(v21);
      *v9 = v11;
      v12 = v9[1];
    }
    v13 = &v11[72 * (_QWORD)v12];
    _mm_storel_ps((double *)v13, v4);
    *(_OWORD *)(v13 + 8) = v23;
    *((_QWORD *)v13 + 3) = v5 + v10;
    *((__m128i *)v13 + 2) = si128;
    *((_QWORD *)v13 + 6) = v6;
    *(__m128i *)(v13 + 56) = v8;
    ++v9[1];
    v14 = *(void ***)(a1 + 32);
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    LODWORD(v23) = v15;
    v16 = *v14;
    v17 = (unsigned __int64)v14[2];
    v18 = v14[1];
    v19 = (unsigned __int64)v18 + 1;
    if ( *v14 <= &v23 && (char *)*v14 + 4 * v17 > (char *)&v23 )
    {
      if ( v17 < v19 )
      {
        v16 = qvector_reserve((__int64)v14, v16, v19, 4u);
        *v14 = v16;
        v18 = v14[1];
      }
    }
    else if ( v17 < v19 )
    {
      v16 = qvector_reserve((__int64)v14, v16, v19, 4u);
      *v14 = v16;
      v18 = v14[1];
      v15 = v23;
    }
    *((_DWORD *)v16 + (_QWORD)v18) = v15;
    v14[1] = (char *)v14[1] + 1;
    *(_DWORD *)(a1 + 52) = *((_DWORD *)a2 + 12);
  }
  return 0;
}
