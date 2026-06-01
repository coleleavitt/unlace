const __m128i *__fastcall sub_93FA80(const __m128i **a1)
{
  unsigned int v2; // edx
  unsigned int v3; // r12d
  unsigned int v4; // edi
  unsigned int v5; // r12d
  size_t v6; // rdi
  __int64 v7; // rax
  const __m128i *v8; // r13
  _DWORD *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  const __m128i *v14; // rax
  const __m128i *v15; // rdi
  __int32 v16; // ecx
  char v17; // si
  __int64 v18; // rcx
  char v19; // si
  __m128i v20; // xmm0
  __int64 v21; // rax
  const __m128i *v22; // r14
  __int64 v23; // rdi
  __int64 *v24; // rsi
  const __m128i *result; // rax
  _QWORD *v26; // rax
  char **exception; // rbx
  void *v28; // [rsp+0h] [rbp-68h]
  __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 v30[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = (*a1)[-1].m128i_u32[2];
    v3 = 3 * v2 + 1;
    v4 = v3 & 0xFFFFFFFE;
    v5 = v3 >> 1;
    v6 = 16 * (v5 + v4) + 8;
    if ( 48 * v2 + 8 >= (unsigned int)v6 || v2 >= v5 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_91CD50(v30, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v30);
      sub_233E40((__int64)v30);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v7 = sub_186B270(v6);
    v8 = *a1;
    v9 = (_DWORD *)v7;
    v10 = v7 + 8;
    v29 = v10;
    if ( *a1 )
    {
      v11 = v10;
      v12 = v8[-1].m128i_u32[3];
      v13 = 3 * v12;
      v9[1] = v12;
      v14 = v8;
      v15 = &v8[v13];
      if ( v8 != v15 )
      {
        do
        {
          v16 = v14->m128i_i32[0];
          v17 = *(_BYTE *)(v11 + 12);
          v14 += 3;
          v11 += 48;
          *(_DWORD *)(v11 - 48) = v16;
          *(_DWORD *)(v11 - 40) = v14[-3].m128i_i32[2];
          *(_BYTE *)(v11 - 36) = v17 & 0xFC | v14[-3].m128i_i8[12] & 3;
          v18 = v14[-2].m128i_i64[0];
          v14[-2].m128i_i64[0] = 0;
          v19 = *(_BYTE *)(v11 - 20);
          *(_QWORD *)(v11 - 32) = v18;
          LODWORD(v18) = v14[-2].m128i_i32[2];
          v20 = _mm_loadu_si128(v14 - 1);
          v14[-1].m128i_i64[0] = 0;
          *(_DWORD *)(v11 - 24) = v18;
          LOBYTE(v18) = v14[-2].m128i_i8[12];
          *(__m128i *)(v11 - 16) = v20;
          *(_BYTE *)(v11 - 20) = v19 & 0xFC | v18 & 3;
          v14[-1].m128i_i64[1] = 0;
        }
        while ( v15 != v14 );
      }
      v21 = v8[-1].m128i_u32[3];
      if ( (_DWORD)v21 )
      {
        v22 = &v8[3 * v21];
        do
        {
          v23 = v8[2].m128i_i64[1];
          if ( v23 )
            sub_186B220((void *)(v23 - 8));
          v28 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v8->m128i_u64[1]);
          v24 = &v8[1].m128i_i64[1];
          v8 += 3;
          sub_182CBA0(v28, v24);
        }
        while ( v22 != v8 );
        v8 = *a1;
      }
      sub_186B220(&v8[-1].m128i_u64[1]);
    }
    else
    {
      v9[1] = 0;
    }
    *v9 = v5;
    *a1 = (const __m128i *)v29;
    return (const __m128i *)v29;
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x68u);
    *v26 = 2;
    result = (const __m128i *)(v26 + 1);
    *a1 = result;
  }
  return result;
}

