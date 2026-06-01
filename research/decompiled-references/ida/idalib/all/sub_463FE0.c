__int64 __fastcall sub_463FE0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 (*v6)(void); // rax
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // r13
  __int64 v14; // rax
  size_t v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax

  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v6 == (char *)sub_3DB7B0 )
    result = a1 + 16;
  else
    result = v6();
  if ( a3 >= *(_QWORD *)result && a3 < *(_QWORD *)(result + 8) )
  {
    result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0);
    if ( a3 == result )
    {
      v8 = *(int *)(a1 + 8);
      switch_dbctx(v8);
      v11 = (_QWORD *)(a1 + 48);
      v12 = *(_QWORD **)(a1 + 56);
      if ( !v12 )
        goto LABEL_20;
      v13 = v11;
      do
      {
        while ( 1 )
        {
          v9 = v12[2];
          v14 = v12[3];
          if ( v12[4] < a3 )
            break;
          v13 = v12;
          v12 = (_QWORD *)v12[2];
          if ( !v9 )
            goto LABEL_12;
        }
        v12 = (_QWORD *)v12[3];
      }
      while ( v14 );
LABEL_12:
      if ( v11 == v13 || a3 < v13[4] )
LABEL_20:
        sub_4625B0(v8, a3, v9, v11, v10);
      v15 = v13[10];
      if ( v15 )
      {
        v12 = (_QWORD *)qalloc_or_throw(v13[10]);
        memcpy(v12, (const void *)v13[9], v15);
      }
      v16 = a2[1];
      v17 = *a2;
      if ( a2[2] < (unsigned __int64)(v16 + 1) )
      {
        v18 = qvector_reserve(a2, v17, v16 + 1, 24);
        *a2 = v18;
        v16 = a2[1];
        v17 = v18;
      }
      result = v17 + 24 * v16;
      *(_QWORD *)result = v12;
      *(__m128i *)(result + 8) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
      ++a2[1];
    }
  }
  return result;
}
