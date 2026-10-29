/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008250
// Address: 0x0000000140008250

//----- (0000000140008250) ----------------------------------------------------
__int64 __fastcall sub_140008250(__int64 a1, const char *a2, const char *a3)
{
  const __m128i *v4; // r15
  const __m128i *v6; // rax
  const __m128i *v7; // rdi
  const __m128i *v8; // r14
  signed __int64 v9; // rbx
  __int64 v10; // rsi
  _BYTE *v11; // rax
  size_t v12; // rsi
  __int64 v13; // rbx
  _BYTE *v14; // rax
  size_t v15; // r14
  __int64 v16; // rbx
  _BYTE *v17; // rax
  __m128i *v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // bl
  size_t v23; // [rsp+20h] [rbp-20h]
  __int128 v24; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-8h]
  const __m128i *v28; // [rsp+98h] [rbp+58h]

  v4 = (const __m128i *)a2;
  v24 = 0;
  v25 = 0;
  v23 = strlen(a2);
  v6 = (const __m128i *)Str1;
  if ( *(_QWORD *)(a1 + 8) )
    v6 = *(const __m128i **)a1;
  v28 = v6;
  v7 = v6;
  v8 = sub_14006C4B8(v6, v4);
  if ( !v8 )
    goto LABEL_28;
  do
  {
    v9 = (char *)v8 - (char *)v7;
    if ( v8 != v7 )
    {
      v10 = *((_QWORD *)&v24 + 1) - 1LL;
      if ( !*((_QWORD *)&v24 + 1) )
        v10 = 0;
      if ( v9 + v10 + 1 <= v25 )
      {
        v11 = (_BYTE *)v24;
      }
      else
      {
        v11 = sub_14005ABE0((__int64)&v24, (void *)v24, v9 + v10 + 1, 1u);
        *(_QWORD *)&v24 = v11;
      }
      *((_QWORD *)&v24 + 1) = v9 + v10 + 1;
      v11[v10 + v9] = 0;
      memcpy((void *)(v10 + v24), v7, (char *)v8 - (char *)v7);
      v4 = (const __m128i *)a2;
    }
    if ( a3 )
    {
      v12 = strlen(a3);
      v13 = *((_QWORD *)&v24 + 1) - 1LL;
      if ( !*((_QWORD *)&v24 + 1) )
        v13 = 0;
      if ( v12 + v13 + 1 <= v25 )
      {
        v14 = (_BYTE *)v24;
      }
      else
      {
        v14 = sub_14005ABE0((__int64)&v24, (void *)v24, v12 + v13 + 1, 1u);
        *(_QWORD *)&v24 = v14;
      }
      *((_QWORD *)&v24 + 1) = v12 + v13 + 1;
      v14[v13 + v12] = 0;
      memcpy((void *)(v13 + v24), a3, v12);
    }
    v7 = (const __m128i *)((char *)v8 + v23);
    v8 = sub_14006C4B8((const __m128i *)((char *)v8 + v23), v4);
  }
  while ( v8 );
  if ( v7 == v28 )
  {
LABEL_28:
    v21 = 0;
    v18 = (__m128i *)v24;
  }
  else
  {
    if ( v7->m128i_i8[0] )
    {
      v15 = strlen(v7->m128i_i8);
      v16 = *((_QWORD *)&v24 + 1) - 1LL;
      if ( !*((_QWORD *)&v24 + 1) )
        v16 = 0;
      if ( v16 + v15 + 1 <= v25 )
      {
        v17 = (_BYTE *)v24;
      }
      else
      {
        v17 = sub_14005ABE0((__int64)&v24, (void *)v24, v16 + v15 + 1, 1u);
        *(_QWORD *)&v24 = v17;
      }
      *((_QWORD *)&v24 + 1) = v16 + v15 + 1;
      v17[v16 + v15] = 0;
      memcpy((void *)(v16 + v24), v7, v15);
    }
    v18 = *(__m128i **)a1;
    v19 = *(_QWORD *)(a1 + 8);
    v20 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)a1 = v24;
    *(_QWORD *)(a1 + 16) = v25;
    *(_QWORD *)&v24 = v18;
    *((_QWORD *)&v24 + 1) = v19;
    v25 = v20;
    v21 = 1;
  }
  if ( v18 )
  {
    *((_QWORD *)&v24 + 1) = 0;
    j_free(v18);
  }
  return v21;
}
