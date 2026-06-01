/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055660
// Address: 0x0000000100055660

//----- (0000000100055660) ----------------------------------------------------
__int64 __fastcall sub_100055660(__int64 a1, const void *a2, size_t a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r15
  size_t v5; // r13
  char *v6; // rax
  const void *v7; // r12
  unsigned __int64 v8; // rsi
  size_t v9; // r15
  unsigned __int8 v11; // [rsp+Fh] [rbp-31h] BYREF

  if ( a3 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = 0x7FFFFFFFFFFFFFFFLL;
    if ( !__CFADD__(a3, v3) )
      v4 = a3 + v3;
    if ( v3 >= v4 )
    {
      if ( v3 != v4 )
      {
        v11 = 0;
        v7 = a2;
        v8 = v4;
        v9 = a3;
        sub_10001CE90(a1, v8, &v11);
        a2 = v7;
        a3 = v9;
      }
    }
    else
    {
      v5 = a3;
      v6 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v4 )
      {
        v6 = (char *)qvector_reserve(a1, *(void **)a1, v4, 1u);
        *(_QWORD *)a1 = v6;
      }
      __bzero(&v6[*(_QWORD *)(a1 + 8)], v4 - *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = v4;
      a3 = v5;
    }
    memcpy((void *)(*(_QWORD *)a1 + v3), a2, a3);
  }
  return a1;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
