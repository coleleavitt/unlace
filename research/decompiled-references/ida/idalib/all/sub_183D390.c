unsigned __int64 __fastcall sub_183D390(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rbp
  __m128i v9; // xmm0
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // rdx
  const __m128i *v13; // rcx
  __m128i *v14; // rax
  __m128i v15; // xmm2
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rax
  _BYTE *v22; // [rsp+8h] [rbp-1A0h]
  __m128i v23; // [rsp+10h] [rbp-198h] BYREF
  __int64 v24; // [rsp+20h] [rbp-188h]
  __m128i v25; // [rsp+30h] [rbp-178h] BYREF
  __int64 v26; // [rsp+40h] [rbp-168h]
  unsigned __int64 v27; // [rsp+48h] [rbp-160h]
  void *ptr; // [rsp+50h] [rbp-158h] BYREF
  __int64 v29; // [rsp+58h] [rbp-150h]
  _DWORD v30[82]; // [rsp+60h] [rbp-148h] BYREF

  v7 = *(_QWORD **)(a1 + 248);
  v30[64] = a4;
  v30[65] = a4;
  ptr = v30;
  v29 = 0x800000000LL;
  v8 = (unsigned __int64)sub_A81910(v7, a3, a4);
  sub_F1D250((__int64)&v23, a3, 0, 0);
  v9 = _mm_load_si128(&v23);
  v26 = v24;
  v10 = (unsigned int)v29;
  v25 = v9;
  v11 = (unsigned int)v29 + 1LL;
  v27 = v8 & 0xFFFFFFFFFFFFFFFCLL | 2;
  if ( v11 > HIDWORD(v29) )
  {
    if ( ptr > &v25 || &v25 >= (__m128i *)((char *)ptr + 32 * (unsigned int)v29) )
    {
      sub_2237220(&ptr, v30, v11, 32);
      v12 = (char *)ptr;
      v10 = (unsigned int)v29;
      v13 = &v25;
    }
    else
    {
      v22 = ptr;
      sub_2237220(&ptr, v30, v11, 32);
      v10 = (unsigned int)v29;
      v12 = (char *)ptr;
      v13 = (const __m128i *)((char *)ptr + (char *)&v25 - v22);
    }
  }
  else
  {
    v12 = (char *)ptr;
    v13 = &v25;
  }
  v14 = (__m128i *)&v12[32 * v10];
  *v14 = _mm_loadu_si128(v13);
  v15 = _mm_loadu_si128(v13 + 1);
  LODWORD(v29) = v29 + 1;
  v14[1] = v15;
  sub_F22AA0((unsigned __int64 *)&v25, a2);
  v16 = sub_1CDD580(a1, v25.m128i_i64[0], a4, &ptr);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 248);
    v20 = sub_183D350(a1);
    v21 = sub_E91C40(*(_QWORD **)(a1 + 248), 0, v20);
    v17 = sub_A76250(v19, 6, (__int64)v21, v16, 0);
  }
  else
  {
    v17 = 0;
  }
  if ( ptr != v30 )
    free(ptr);
  return v17;
}
