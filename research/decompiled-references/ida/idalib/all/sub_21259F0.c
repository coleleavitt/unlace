__int64 __fastcall sub_21259F0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v4; // rdx
  unsigned __int8 *v5; // rsi
  char v6; // cl
  unsigned __int8 *v7; // rax
  int v8; // edx
  unsigned __int8 v9; // cl
  int v10; // edx
  unsigned __int8 *v11; // rcx
  __int64 v12; // rdx
  __m128i *v14; // rax
  __m128i si128; // xmm0
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 *v18; // rdi
  __m128i *v19; // rax
  void *v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(unsigned __int8 **)(a2 + 56);
  v5 = (unsigned __int8 *)(*(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
  v6 = *(_BYTE *)(a2 + 161);
  if ( v5 != v4 )
  {
    v7 = v4 + 1;
    *(_QWORD *)(a2 + 56) = v4 + 1;
    if ( !v6 )
    {
      v8 = *v4;
      v9 = v8;
      if ( !*(_BYTE *)(a2 + 150) )
      {
        while ( v9 != 34 )
        {
          v11 = v7;
          if ( v8 == 92 )
          {
            if ( v5 == v7 )
              goto LABEL_25;
            v11 = v7 + 1;
            *(_QWORD *)(a2 + 56) = v7 + 1;
          }
          if ( v5 == v11 )
            goto LABEL_25;
          v7 = v11 + 1;
          *(_QWORD *)(a2 + 56) = v11 + 1;
          v8 = *v11;
          v9 = *v11;
        }
LABEL_18:
        v12 = *(_QWORD *)(a2 + 136);
        *(_DWORD *)a1 = 3;
        *(_DWORD *)(a1 + 32) = 64;
        *(_QWORD *)(a1 + 8) = v12;
        *(_QWORD *)(a1 + 16) = &v7[-v12];
        *(_QWORD *)(a1 + 24) = 0;
        return a1;
      }
      while ( v8 == 34 )
      {
LABEL_7:
        if ( v5 == v7 || *v7 != 34 )
          goto LABEL_18;
        if ( v5 == v7 + 1 )
        {
          *(_QWORD *)(a2 + 56) = v5;
          goto LABEL_25;
        }
        *(_QWORD *)(a2 + 56) = v7 + 2;
        v8 = v7[1];
        v7 += 2;
      }
      while ( v5 != v7 )
      {
        *(_QWORD *)(a2 + 56) = v7 + 1;
        v10 = *v7++;
        if ( v10 == 34 )
          goto LABEL_7;
      }
      goto LABEL_25;
    }
LABEL_21:
    v14 = (__m128i *)operator new(0x21u);
    v22 = 32;
    v20 = v14;
    *v14 = _mm_load_si128((const __m128i *)&xmmword_23AB470);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB4C0);
    v21 = 32;
    v14[2].m128i_i8[0] = 0;
    v14[1] = si128;
    goto LABEL_22;
  }
  if ( v6 )
    goto LABEL_21;
LABEL_25:
  v19 = (__m128i *)operator new(0x1Du);
  v22 = 28;
  v20 = v19;
  *v19 = _mm_load_si128((const __m128i *)&xmmword_23AB4B0);
  strcpy(v19[1].m128i_i8, "ing constant");
  v21 = 28;
LABEL_22:
  v16 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a2 + 80) = v16;
  sub_9EE8A0(a2 + 88, (__int64)&v20);
  v17 = *(_QWORD *)(a2 + 56);
  v18 = (__int64 *)v20;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v16;
  *(_DWORD *)(a1 + 32) = 64;
  *(_QWORD *)(a1 + 16) = v17 - v16;
  *(_QWORD *)(a1 + 24) = 0;
  if ( v18 == &v22 )
    return a1;
  operator delete(v18);
  return a1;
}
