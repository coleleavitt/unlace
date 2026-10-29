__int64 __fastcall sub_BB200(__int64 *a1)
{
  __int64 *i; // r12
  __int64 v2; // rax
  __m128i v3; // xmm3
  __m128i v4; // xmm4
  unsigned int v5; // edx
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  __int64 v10; // rdi
  __m128i v11; // xmm5
  __int64 v12; // rdi
  int v13; // eax
  __m128i v14; // xmm6
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r13
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // r13
  __m128i v22; // xmm0
  int v23; // edx
  __m128i v24; // [rsp+0h] [rbp-78h] BYREF
  __m128i v25; // [rsp+10h] [rbp-68h] BYREF
  __m128i v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-48h]
  int v28; // [rsp+38h] [rbp-40h]
  unsigned __int16 v29; // [rsp+3Eh] [rbp-3Ah]

  i = a1;
  v2 = *a1;
  v3 = _mm_loadu_si128((const __m128i *)a1 + 1);
  *((_OWORD *)a1 + 1) = 0;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 5));
  v5 = *((_DWORD *)a1 - 16);
  *(_OWORD *)(a1 + 5) = 0;
  v6 = a1[1];
  v7 = a1[4];
  v27 = v2;
  LODWORD(v2) = *((_DWORD *)a1 + 14);
  v8 = v27;
  a1[1] = 0;
  a1[4] = 0;
  v28 = v2;
  LOWORD(v2) = *((_WORD *)a1 + 30);
  v26 = v3;
  v29 = v2;
  v25 = v4;
  if ( v5 >= v8 )
  {
    v9 = HIDWORD(v27);
    for ( i = a1 - 8; v8 < v5 || v9 < *((_DWORD *)i + 1); i -= 8 )
    {
      v16 = *i;
      v17 = i[9];
      v18 = i[1];
      v19 = _mm_loadu_si128((const __m128i *)i + 1);
      i[1] = 0;
      i[8] = v16;
      *((_OWORD *)i + 1) = 0;
      if ( v17 )
      {
        i[10] = 0;
        v24 = v19;
        qfree();
        v19 = _mm_load_si128(&v24);
      }
      v20 = i[12];
      i[9] = v18;
      *((__m128i *)i + 5) = v19;
      v21 = i[4];
      v22 = _mm_loadu_si128((const __m128i *)(i + 5));
      i[4] = 0;
      *(_OWORD *)(i + 5) = 0;
      if ( v20 )
      {
        i[13] = 0;
        v24 = v22;
        qfree();
        v22 = _mm_load_si128(&v24);
      }
      v23 = *((_DWORD *)i + 14);
      i[12] = v21;
      *(__m128i *)(i + 13) = v22;
      *((_DWORD *)i + 30) = v23;
      *((_BYTE *)i + 124) = *((_BYTE *)i + 60);
      *((_BYTE *)i + 125) = *((_BYTE *)i + 61);
      v5 = *((_DWORD *)i - 16);
      if ( v5 < v8 )
        goto LABEL_6;
    }
    i += 8;
LABEL_6:
    v10 = i[1];
    *i = v27;
    if ( v10 )
    {
      i[2] = 0;
      qfree();
    }
  }
  v11 = _mm_load_si128(&v26);
  v12 = i[4];
  i[1] = v6;
  *((__m128i *)i + 1) = v11;
  if ( v12 )
  {
    i[5] = 0;
    qfree();
  }
  v13 = v28;
  v14 = _mm_load_si128(&v25);
  i[4] = v7;
  *((_DWORD *)i + 14) = v13;
  result = v29;
  *(__m128i *)(i + 5) = v14;
  *((_WORD *)i + 30) = result;
  return result;
}

