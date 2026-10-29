void __fastcall sub_6A7ED0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  _BYTE *v4; // rdi
  __int64 v5; // r15
  int v6; // ebp
  __int64 v7; // r13
  _BYTE *v8; // rax
  size_t v9; // rdx
  _BYTE *v10; // r13
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  _QWORD *v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  _BYTE dest[88]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(unsigned int *)(a1 + 56);
  v4 = *(_BYTE **)(a1 + 48);
  v5 = *(_QWORD *)(a2 + 18200);
  v17 = 0x400000000LL;
  v6 = v3;
  ptr = dest;
  if ( v4 == (_BYTE *)(a1 + 64) )
  {
    if ( !(_DWORD)v3 )
    {
      v4 = dest;
      goto LABEL_14;
    }
    if ( (unsigned int)v3 > 4 )
    {
      sub_25D6060(&ptr, dest, v3, 8);
      v4 = ptr;
      v9 = 8LL * *(unsigned int *)(a1 + 56);
      if ( !v9 )
      {
        v7 = 8 * v3;
        goto LABEL_6;
      }
      v8 = ptr;
      v7 = 8 * v3;
      v4 = *(_BYTE **)(a1 + 48);
    }
    else
    {
      v7 = 8 * v3;
      v8 = dest;
      v9 = v7;
    }
    memcpy(v8, v4, v9);
    v4 = ptr;
LABEL_6:
    LODWORD(v17) = v6;
    v10 = &v4[v7];
    goto LABEL_8;
  }
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 60));
  v12 = _mm_cvtsi32_si128(v3);
  ptr = v4;
  v10 = &v4[8 * v3];
  *(_QWORD *)(a1 + 48) = a1 + 64;
  *(_DWORD *)(a1 + 60) = 0;
  v17 = _mm_unpacklo_epi32(v12, v11).m128i_u64[0];
LABEL_8:
  *(_DWORD *)(a1 + 56) = 0;
  if ( v10 != v4 )
  {
    v13 = v4;
    do
    {
      while ( 1 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 16LL))(v5, *v13);
        v15 = *(unsigned int *)(a1 + 8);
        if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(v15 + 1) )
          break;
        ++v13;
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v15) = v14;
        ++*(_DWORD *)(a1 + 8);
        if ( v10 == (_BYTE *)v13 )
          goto LABEL_13;
      }
      ++v13;
      sub_25D6060(a1, a1 + 16, v15 + 1, 8);
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = v14;
    }
    while ( v10 != (_BYTE *)v13 );
LABEL_13:
    v4 = ptr;
  }
LABEL_14:
  if ( v4 != dest )
    free(v4);
}

