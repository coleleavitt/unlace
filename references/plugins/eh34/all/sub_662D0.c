__int64 __fastcall sub_662D0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  _QWORD *v5; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __m128i v17; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v5 = *(_QWORD **)(a2 + 448);
  v18 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 456);
  v8 = &v5[v7];
  if ( v5 == v8 )
    goto LABEL_8;
  v9 = v5;
  while ( *v9 != a3 )
  {
    if ( v8 == ++v9 )
      goto LABEL_8;
  }
  if ( v8 == v9 )
  {
LABEL_8:
    v13 = v7 + 1;
    if ( *(_QWORD *)(a2 + 464) < v13 )
    {
      v14 = qvector_reserve(a2 + 448, v5, v13, 8);
      v15 = *(_QWORD *)(a2 + 456);
      *(_QWORD *)(a2 + 448) = v14;
      v8 = (_QWORD *)(v14 + 8 * v15);
    }
    *v8 = a3;
    ++*(_QWORD *)(a2 + 456);
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    sub_64B50(
      (__int64)&v16,
      *(unsigned __int8 **)(a2 + 32),
      (__int64)"push_function_on_stack(%a): infinite loop detected",
      a4);
    v10 = v16;
    v11 = _mm_loadu_si128(&v17);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v10;
    *(__m128i *)(a1 + 8) = v11;
  }
  return a1;
}
