__int64 __fastcall sub_44FC40(__int64 a1, __int64 *a2, const char *a3)
{
  __int64 (*v6)(void); // rax
  __int64 result; // rax
  const char *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // r13
  __int64 v15; // rax
  size_t v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax

  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v6 == (char *)sub_3D58E0 )
    result = a1 + 16;
  else
    result = v6();
  if ( (unsigned __int64)a3 >= *(_QWORD *)result && (unsigned __int64)a3 < *(_QWORD *)(result + 8) )
  {
    v8 = a3;
    result = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0);
    if ( a3 == (const char *)result )
    {
      v9 = *(int *)(a1 + 8);
      switch_dbctx(v9);
      v12 = (_QWORD *)(a1 + 48);
      v13 = *(_QWORD **)(a1 + 56);
      if ( !v13 )
        goto LABEL_20;
      v14 = v12;
      do
      {
        while ( 1 )
        {
          v10 = v13[2];
          v15 = v13[3];
          if ( v13[4] < (unsigned __int64)a3 )
            break;
          v14 = v13;
          v13 = (_QWORD *)v13[2];
          if ( !v10 )
            goto LABEL_12;
        }
        v13 = (_QWORD *)v13[3];
      }
      while ( v15 );
LABEL_12:
      if ( v12 == v14 || (unsigned __int64)a3 < v14[4] )
LABEL_20:
        sub_44E230(v9, a3, v10, v12, v11);
      v16 = v14[10];
      if ( v16 )
      {
        v13 = (_QWORD *)qalloc_or_throw(v14[10], v8);
        memcpy(v13, (const void *)v14[9], v16);
      }
      v17 = a2[1];
      v18 = *a2;
      if ( a2[2] < (unsigned __int64)(v17 + 1) )
      {
        v19 = qvector_reserve(a2, v18, v17 + 1, 24);
        *a2 = v19;
        v17 = a2[1];
        v18 = v19;
      }
      result = v18 + 24 * v17;
      *(_QWORD *)result = v13;
      *(__m128i *)(result + 8) = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
      ++a2[1];
    }
  }
  return result;
}

