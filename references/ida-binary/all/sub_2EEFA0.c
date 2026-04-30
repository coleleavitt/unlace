unsigned __int64 __fastcall metadata_dumper_t__::vfunc_2(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  char *v11; // rdx
  size_t v12; // r12
  __int64 v13; // r14
  __int64 v14; // r15
  char *v15; // rax
  size_t v17; // r12
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+8h] [rbp-48h] BYREF
  _QWORD *v25; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-38h]

  v2 = *(__int64 **)(a1 + 56);
  v26 = __readfsqword(0x28u);
  v4 = v2[1];
  v5 = *v2;
  if ( v2[2] < (unsigned __int64)(v4 + 1) )
  {
    v20 = qvector_reserve(v2, v5, v4 + 1, 24);
    *v2 = v20;
    v5 = v20;
    v4 = v2[1];
  }
  v6 = (__int64 *)(v5 + 24 * v4);
  *v6 = 0;
  *(_OWORD *)(v6 + 1) = 0;
  ++v2[1];
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD **)(a2 + 32);
  v23 = 0;
  v24 = v7;
  v25 = v8;
  if ( v8 )
    v8 = &v25;
  ((void (__fastcall *)(__int64 *, _QWORD, __int64 *, _QWORD *, _QWORD, _QWORD))deserialize_tinfo)(
    &v23,
    0,
    &v24,
    v8,
    0,
    0);
  print_tinfo(v6, 0, 0, 0, 0, &v23, 0, 0);
  v9 = *v6;
  v10 = v6[2];
  v11 = (char *)v6[1];
  if ( !*(_BYTE *)a2 )
  {
    if ( v11 )
    {
      v17 = (size_t)(v11 - 1);
      v18 = (__int64)(v11 + 10);
      v19 = (__int64)(v11 + 11);
      if ( v10 >= (unsigned __int64)(v11 + 11) )
      {
        v6[1] = v19;
        *(_BYTE *)(v9 + v18) = 0;
        if ( v11 == (_BYTE *)&dword_0 + 1 )
        {
LABEL_14:
          qmemcpy((void *)*v6, "Prototype: ", 11);
          goto LABEL_10;
        }
LABEL_19:
        memmove((void *)(*v6 + 11), (const void *)*v6, v17);
        goto LABEL_14;
      }
    }
    else
    {
      if ( v10 > 0xB )
      {
        v6[1] = 12;
        *(_BYTE *)(v9 + 11) = 0;
        goto LABEL_14;
      }
      v17 = 0;
      v19 = 12;
      v18 = 11;
    }
    v22 = qvector_reserve(v6, v9, v19, 1);
    *v6 = v22;
    v6[1] = v19;
    *(_BYTE *)(v22 + v18) = 0;
    if ( !v17 )
      goto LABEL_14;
    goto LABEL_19;
  }
  if ( !v11 )
  {
    if ( v10 > 0x1A )
    {
      v6[1] = 27;
      *(_BYTE *)(v9 + 26) = 0;
      goto LABEL_9;
    }
    v12 = 0;
    v14 = 27;
    v13 = 26;
    goto LABEL_22;
  }
  v12 = (size_t)(v11 - 1);
  v13 = (__int64)(v11 + 25);
  v14 = (__int64)(v11 + 26);
  if ( v10 < (unsigned __int64)(v11 + 26) )
  {
LABEL_22:
    v21 = qvector_reserve(v6, v9, v14, 1);
    *v6 = v21;
    v6[1] = v14;
    *(_BYTE *)(v21 + v13) = 0;
    if ( !v12 )
      goto LABEL_9;
    goto LABEL_20;
  }
  v6[1] = v14;
  *(_BYTE *)(v9 + v13) = 0;
  if ( v11 != (_BYTE *)&dword_0 + 1 )
LABEL_20:
    memmove((void *)(*v6 + 26), (const void *)*v6, v12);
LABEL_9:
  v15 = (char *)*v6;
  *(__m128i *)v15 = _mm_load_si128((const __m128i *)&xmmword_5DCF50);
  *(__m128i *)(v15 + 10) = _mm_load_si128((const __m128i *)&xmmword_5DCF60);
LABEL_10:
  clear_tinfo_t(&v23);
  return v26 - __readfsqword(0x28u);
}
