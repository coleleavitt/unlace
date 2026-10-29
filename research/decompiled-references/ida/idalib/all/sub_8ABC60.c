__int64 __fastcall sub_8ABC60(char **a1, __int64 *a2, __int64 a3, __int64 a4, char a5, __int64 *a6)
{
  unsigned int v10; // r12d
  void *v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  size_t v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __m128i v24; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v24 = 0;
  ptr = nullptr;
  if ( !(unsigned __int8)sub_83B5B0(&ptr, a4, 0x100000, a6) || !(unsigned __int8)sub_8A8050((__int64)&ptr, a6) )
  {
    v15 = a6[1];
    v16 = a6[2];
    v17 = *a6;
    if ( v15 )
    {
      v19 = v15 + 21;
      v20 = v15 - 1;
      v21 = v15 + 20;
      if ( v16 >= v15 + 21 )
        goto LABEL_15;
    }
    else
    {
      if ( v16 > 0x15 )
      {
        a6[1] = 22;
        *(_BYTE *)(v17 + 21) = 0;
LABEL_12:
        v18 = *a6;
        *(__m128i *)v18 = _mm_load_si128((const __m128i *)&xmmword_23A89A0);
        *(_QWORD *)(v18 + 13) = 0x203A656C69662064LL;
LABEL_13:
        v10 = 2;
        goto LABEL_6;
      }
      v20 = 0;
      v19 = 22;
      v21 = 21;
    }
    v22 = qvector_reserve(a6, v17, v19, 1);
    *a6 = v22;
    v17 = v22;
LABEL_15:
    a6[1] = v19;
    *(_BYTE *)(v17 + v21) = 0;
    if ( v20 )
      memmove((void *)(*a6 + 21), (const void *)*a6, v20);
    goto LABEL_12;
  }
  v10 = sub_8ABB00(a1, a2, (__int64)&ptr, a5, (char **)a6, a4);
  if ( a3 )
  {
    v11 = *(void **)a3;
    v12 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    v13 = _mm_loadu_si128(&v24);
    *(_QWORD *)a3 = ptr;
    ptr = v11;
    *(__m128i *)(a3 + 8) = v13;
    v24 = v12;
  }
  if ( v10 )
  {
    if ( (unsigned __int64)a6[1] <= 1 )
      sub_35A790((char **)a6);
    goto LABEL_13;
  }
LABEL_6:
  if ( ptr )
  {
    v24.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v10;
}
