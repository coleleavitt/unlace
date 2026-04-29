unsigned __int64 __fastcall sub_20C620(_QWORD *a1)
{
  __m128i *v1; // r12
  unsigned __int64 *v2; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  _BYTE *v6; // rdi
  _BYTE *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // rdi
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v1 = (__m128i *)(a1 + 109);
  v2 = (unsigned __int64 *)a1[109];
  v14 = __readfsqword(0x28u);
  if ( !v2 )
    goto LABEL_13;
  v4 = *v2;
  if ( !a1[110] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[109] + 8LL) = _mm_unpacklo_epi64(
                                    (__m128i)(unsigned __int64)a1[109],
                                    (__m128i)(unsigned __int64)a1[109]);
    *(_QWORD *)a1[109] &= ~1uLL;
    *(_QWORD *)a1[109] |= 2uLL;
    goto LABEL_14;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v6 = *(_BYTE **)(v5 + 8);
    if ( (*v6 & 2) != 0 )
    {
      v7 = *(_BYTE **)(v5 + 16);
      if ( (*v7 & 2) != 0 )
        goto LABEL_20;
    }
    else
    {
      sub_20B450((__int64)v6);
      v7 = *(_BYTE **)(v5 + 16);
      if ( (*v7 & 2) != 0 )
        goto LABEL_8;
    }
    sub_20B450((__int64)v7);
LABEL_8:
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
LABEL_9:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v2 = (unsigned __int64 *)a1[109];
      v4 = *v2;
      goto LABEL_12;
    }
LABEL_20:
    v12 = *(_QWORD *)(v5 + 24);
    if ( v12 )
    {
      *(_QWORD *)(v5 + 32) = 0;
      qfree(v12);
    }
    *(_QWORD *)v5 |= 2uLL;
    goto LABEL_9;
  }
LABEL_12:
  *v2 = v4 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[109] + 8LL) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)a1[109],
                                  (__m128i)(unsigned __int64)a1[109]);
  *(_QWORD *)a1[109] &= ~1uLL;
  *(_QWORD *)a1[109] |= 2uLL;
LABEL_13:
  a1[110] = 0;
LABEL_14:
  v8 = a1[55];
  v9 = a1[54];
  v10 = v9;
  if ( 104 * v8 )
  {
    do
    {
      if ( *(_QWORD *)(v10 + 40) > 1u )
      {
        v13 = v10 + 32;
        sub_20C480(v1, v10 + 32, &v13);
        v9 = a1[54];
        v8 = a1[55];
      }
      v10 += 104;
    }
    while ( v10 != v9 + 104 * v8 );
  }
  return v14 - __readfsqword(0x28u);
}
