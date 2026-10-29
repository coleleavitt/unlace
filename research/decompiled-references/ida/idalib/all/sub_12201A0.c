_BYTE *__fastcall sub_12201A0(__int64 a1, unsigned __int64 a2)
{
  __int8 *v2; // r12
  __int64 v4; // rdi
  void *v5; // rax
  unsigned __int64 v6; // rdx
  __m128i *v7; // rdi
  _BYTE *result; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  __m128i *v11; // rbx
  int v12; // r14d
  __int64 v13; // rdi
  __m128i *v14; // rbx
  int v15; // r14d
  __int64 v16; // rdi
  _DWORD v17[12]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (__int8 *)a2;
  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(void **)a1;
  v6 = v4 + 1;
  v7 = (__m128i *)(*(_QWORD *)a1 + 32 * v4);
  if ( v6 > *(unsigned int *)(a1 + 12) )
  {
    v9 = a1 + 16;
    if ( (unsigned __int64)v5 > a2 || (unsigned __int64)v7 <= a2 )
    {
      v14 = (__m128i *)sub_2237400(a1, a1 + 16, v6, 32, v17);
      sub_10E9550(a1, v14);
      v15 = v17[0];
      if ( *(_QWORD *)a1 != v9 )
        free(*(void **)a1);
      v16 = *(unsigned int *)(a1 + 8);
      *(_QWORD *)a1 = v14;
      *(_DWORD *)(a1 + 12) = v15;
      v7 = &v14[2 * v16];
    }
    else
    {
      v10 = a2 - (_QWORD)v5;
      v11 = (__m128i *)sub_2237400(a1, a1 + 16, v6, 32, v17);
      sub_10E9550(a1, v11);
      v12 = v17[0];
      if ( *(_QWORD *)a1 != v9 )
        free(*(void **)a1);
      v13 = *(unsigned int *)(a1 + 8);
      *(_QWORD *)a1 = v11;
      v2 = &v11->m128i_i8[v10];
      *(_DWORD *)(a1 + 12) = v12;
      v7 = &v11[2 * v13];
    }
  }
  v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
  result = sub_1213B80(v7, *(_BYTE **)v2, *(_QWORD *)v2 + *((_QWORD *)v2 + 1));
  ++*(_DWORD *)(a1 + 8);
  return result;
}
