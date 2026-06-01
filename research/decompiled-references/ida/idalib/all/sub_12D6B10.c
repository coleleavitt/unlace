__int64 __fastcall sub_12D6B10(__int64 a1, int a2, const void *a3, size_t a4, char a5, char a6)
{
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  const __m128i *v19; // rdx
  __m128i *v20; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24[3]; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v25; // [rsp+18h] [rbp-70h] BYREF
  int v26; // [rsp+20h] [rbp-68h] BYREF
  void *v27; // [rsp+28h] [rbp-60h]
  size_t v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+3Ch] [rbp-4Ch]
  __int64 v31; // [rsp+44h] [rbp-44h]
  char v32; // [rsp+50h] [rbp-38h]

  result = 1;
  v24[0] = a2;
  if ( !a4 )
    return result;
  v25 = 0;
  if ( a5 )
  {
    if ( (unsigned __int8)sub_12D67E0((__int64 *)a1, a2, (__int64)&v25, v24) )
      goto LABEL_4;
LABEL_12:
    *(_BYTE *)(a1 + 32) = 0;
    return 0;
  }
  if ( !(unsigned __int8)sub_12D64E0((__int64 *)a1, a2, (__int64)&v25) )
    goto LABEL_12;
LABEL_4:
  v13 = *(char **)(a1 + 504);
  v27 = nullptr;
  v28 = 0;
  v29 = v24[0];
  v31 = 0;
  v30 = v25;
  v26 = 0;
  *(_QWORD *)(a1 + 584) += a4;
  if ( *(_QWORD *)(a1 + 512) >= (unsigned __int64)&v13[a4] && v13 )
    *(_QWORD *)(a1 + 504) = &v13[a4];
  else
    v13 = (char *)sub_986170(a1 + 504, a4, a4, 0, v11, v12);
  v14 = memmove(v13, a3, a4);
  v15 = *(unsigned int *)(a1 + 48);
  v28 = a4;
  v27 = v14;
  v16 = *(unsigned int *)(a1 + 52);
  v17 = v15 + 1;
  v32 = a6;
  if ( v15 + 1 > v16 )
  {
    v21 = *(_QWORD *)(a1 + 40);
    v22 = a1 + 40;
    v23 = a1 + 56;
    if ( v21 <= (unsigned __int64)&v26 && (unsigned __int64)&v26 < v21 + 56 * v15 )
    {
      sub_2237220(v22, v23, v17, 56);
      v18 = *(_QWORD *)(a1 + 40);
      v15 = *(unsigned int *)(a1 + 48);
      v19 = (const __m128i *)((char *)&v26 + v18 - v21);
    }
    else
    {
      sub_2237220(v22, v23, v17, 56);
      v18 = *(_QWORD *)(a1 + 40);
      v15 = *(unsigned int *)(a1 + 48);
      v19 = (const __m128i *)&v26;
    }
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 40);
    v19 = (const __m128i *)&v26;
  }
  v20 = (__m128i *)(v18 + 56 * v15);
  *v20 = _mm_loadu_si128(v19);
  v20[1] = _mm_loadu_si128(v19 + 1);
  v20[2] = _mm_loadu_si128(v19 + 2);
  v20[3].m128i_i64[0] = v19[3].m128i_i64[0];
  result = 1;
  ++*(_DWORD *)(a1 + 48);
  return result;
}
