__int64 __fastcall pb_chooser_t__::vfunc_11(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *i; // r12
  _QWORD *v7; // r14
  int v8; // r15d
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __m128 v13; // xmm0
  const char *v15; // rsi
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v18 = __readfsqword(0x28u);
  for ( i = &v3[v4]; i != v3; ++v3 )
  {
    while ( 1 )
    {
      if ( *v3 < *(_QWORD *)(a1 + 208) )
      {
        v7 = (_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL * *v3);
        if ( v7[1] )
          break;
      }
      if ( i == ++v3 )
        goto LABEL_9;
    }
    v8 = 0;
    v9 = 0;
    do
    {
      ++v8;
      revert_byte(*v7 + v9);
      v9 = v8;
    }
    while ( (unsigned __int64)v8 < v7[1] );
  }
LABEL_9:
  v16 = 0;
  v17 = 0;
  v10 = sub_49F240(a1, a2);
  v16 = qvector_reserve(&v16, 0, v17 + 1, 8);
  v15 = (const char *)v16;
  *(_QWORD *)(v16 + 8 * v17) = v10;
  v11 = *(_QWORD **)a2;
  v12 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = v16;
  v13 = _mm_loadh_ps((const double *)&v17 + 1);
  v16 = (__int64)v11;
  *((_QWORD *)&v17 + 1) = v12;
  *(__m128 *)(a2 + 8) = v13;
  if ( v11 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v11, v15);
  }
  return 1;
}
