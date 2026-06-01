__int64 __fastcall sub_2125670(__int64 a1, __int64 a2)
{
  unsigned __int8 *v4; // rcx
  unsigned __int8 *v5; // rsi
  char v6; // dl
  unsigned __int8 *v7; // rax
  int v8; // edx
  int v9; // edx
  __m128i *v10; // rax
  __m128i v11; // xmm0
  __m128i *v12; // rax
  __m128i si128; // xmm0
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v18; // rdx
  __m128i *v19; // rax
  __int64 v20; // rcx
  char v21; // si
  __int64 v22; // rax
  __m128 v23; // xmm0
  __int64 v24; // [rsp+8h] [rbp-50h] BYREF
  void *v25; // [rsp+10h] [rbp-48h] BYREF
  __int64 v26; // [rsp+18h] [rbp-40h]
  __int64 v27; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(unsigned __int8 **)(a2 + 56);
  v5 = (unsigned __int8 *)(*(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
  v6 = *(_BYTE *)(a2 + 161);
  if ( v5 == v4 )
  {
    if ( !v6 )
    {
      if ( *(_BYTE *)(a2 + 150) )
      {
LABEL_27:
        v19 = (__m128i *)operator new(0x1Du);
        v27 = 28;
        v25 = v19;
        *v19 = _mm_load_si128((const __m128i *)&xmmword_23AB4B0);
        strcpy(v19[1].m128i_i8, "ing constant");
        v26 = 28;
LABEL_17:
        v14 = *(_QWORD *)(a2 + 136);
        *(_QWORD *)(a2 + 80) = v14;
        sub_9EE8A0(a2 + 88, (__int64)&v25);
        v15 = *(_QWORD *)(a2 + 56);
        v16 = (__int64 *)v25;
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v14;
        *(_DWORD *)(a1 + 32) = 64;
        *(_QWORD *)(a1 + 16) = v15 - v14;
        *(_QWORD *)(a1 + 24) = 0;
        if ( v16 != &v27 )
          operator delete(v16);
        return a1;
      }
      goto LABEL_25;
    }
LABEL_16:
    v12 = (__m128i *)operator new(0x24u);
    v27 = 35;
    v25 = v12;
    *v12 = _mm_load_si128((const __m128i *)&xmmword_23AB470);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB480);
    v12[2].m128i_i16[0] = 27745;
    v12[2].m128i_i8[2] = 115;
    v26 = 35;
    v12[2].m128i_i8[3] = 0;
    v12[1] = si128;
    goto LABEL_17;
  }
  v7 = v4 + 1;
  *(_QWORD *)(a2 + 56) = v4 + 1;
  if ( v6 )
    goto LABEL_16;
  v8 = *v4;
  if ( *(_BYTE *)(a2 + 150) )
  {
    while ( v8 == 39 )
    {
LABEL_7:
      if ( v5 == v7 || *v7 != 39 )
      {
        v18 = *(_QWORD *)(a2 + 136);
        *(_DWORD *)a1 = 3;
        *(_DWORD *)(a1 + 32) = 64;
        *(_QWORD *)(a1 + 8) = v18;
        *(_QWORD *)(a1 + 16) = &v7[-v18];
        *(_QWORD *)(a1 + 24) = 0;
        return a1;
      }
      if ( v5 == v7 + 1 )
      {
        *(_QWORD *)(a2 + 56) = v5;
        goto LABEL_27;
      }
      *(_QWORD *)(a2 + 56) = v7 + 2;
      v8 = v7[1];
      v7 += 2;
    }
    while ( v5 != v7 )
    {
      *(_QWORD *)(a2 + 56) = v7 + 1;
      v9 = *v7++;
      if ( v9 == 39 )
        goto LABEL_7;
    }
    goto LABEL_27;
  }
  if ( (_BYTE)v8 == 92 )
  {
    if ( v7 != v5 )
    {
      v7 = v4 + 2;
      *(_QWORD *)(a2 + 56) = v4 + 2;
      goto LABEL_12;
    }
LABEL_25:
    v10 = (__m128i *)operator new(0x1Au);
    v27 = 25;
    v25 = v10;
    *v10 = _mm_load_si128((const __m128i *)&xmmword_23AB490);
    v10[1].m128i_i64[0] = 0x746F757120656C67LL;
    v10[1].m128i_i8[8] = 101;
    goto LABEL_15;
  }
LABEL_12:
  if ( v5 == v7 || (*(_QWORD *)(a2 + 56) = v7 + 1, *v7 != 39) )
  {
    v10 = (__m128i *)operator new(0x1Au);
    v11 = _mm_load_si128((const __m128i *)&xmmword_23AB4A0);
    v27 = 25;
    v25 = v10;
    v10[1].m128i_i64[0] = 0x6E6F6C206F6F7420LL;
    v10[1].m128i_i8[8] = 103;
    *v10 = v11;
LABEL_15:
    v26 = 25;
    v10[1].m128i_i8[9] = 0;
    goto LABEL_17;
  }
  v20 = *(_QWORD *)(a2 + 136);
  if ( (unsigned __int64)&v7[-v20 + 1] > 1 && *(_WORD *)v20 == 23591 )
  {
    v21 = *(_BYTE *)(v20 + 2);
    if ( v21 == 102 )
    {
      v22 = 12;
    }
    else
    {
      if ( v21 <= 102 )
      {
        v22 = 39;
        if ( v21 == 39 )
          goto LABEL_36;
        v22 = 8;
        if ( v21 == 98 )
          goto LABEL_36;
      }
      else
      {
        v22 = 13;
        if ( v21 == 114 )
          goto LABEL_36;
        v22 = 9;
        if ( v21 == 116 )
          goto LABEL_36;
        v22 = 10;
        if ( v21 == 110 )
          goto LABEL_36;
      }
      v22 = v21;
    }
  }
  else
  {
    v22 = *(char *)(v20 + 1);
  }
LABEL_36:
  v24 = v22;
  *(_DWORD *)a1 = 4;
  *(_QWORD *)(a1 + 8) = v20;
  v23 = _mm_loadh_ps((const double *)&v24);
  *(_DWORD *)(a1 + 32) = 64;
  *(__m128 *)(a1 + 16) = v23;
  return a1;
}
