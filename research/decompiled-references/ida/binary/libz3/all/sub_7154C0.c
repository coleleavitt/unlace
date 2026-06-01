__m128i *__fastcall sub_7154C0(__m128i *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r12
  _QWORD *v5; // rax
  unsigned int *v6; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *a2;
  v13[0] = *a2;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v5 = (_QWORD *)sub_186B270(0x18u);
  v5[1] = a3;
  v6 = (unsigned int *)v5;
  v7 = v5 + 1;
  v13[1] = (__int64)(v5 + 1);
  *v5 = 0x100000002LL;
  sub_714A10(a2, v13, (__int64)(a2 + 14));
  v8 = sub_15EC1C0(v4, v6[1]);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v4);
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = &v7[v6[1]];
  while ( v7 < v9 )
  {
    while ( 1 )
    {
      v10 = *v7;
      if ( *v7 )
      {
        if ( (*(_DWORD *)(v10 + 8))-- == 1 )
          break;
      }
      if ( ++v7 >= v9 )
        goto LABEL_11;
    }
    ++v7;
    sub_15D7BC0(v4, v10);
  }
LABEL_11:
  sub_186B220(v6);
  return a1;
}

