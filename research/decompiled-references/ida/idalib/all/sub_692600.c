unsigned __int64 __fastcall sub_692600(__int64 *a1, const __m128i *a2)
{
  __int64 v4; // r12
  _QWORD **v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  _QWORD *v15; // rbp
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v26; // rax

  v4 = a1[1];
  v5 = *(_QWORD ***)(v4 + 48);
  v6 = *(_QWORD *)(v4 + 56);
  v7 = &v5[v6];
  if ( v5 == v7 )
  {
LABEL_7:
    v11 = *(_QWORD *)(v4 + 64);
    v12 = v6 + 1;
    if ( v11 < v12 )
    {
      v17 = qvector_reserve(v4 + 48, 0, v12, 8);
      v18 = *(_QWORD *)(v4 + 56);
      v19 = *(_QWORD *)(v4 + 64);
      *(_QWORD *)(v4 + 64) = v11;
      v20 = *(__int64 **)(v4 + 48);
      v21 = v17;
      v22 = v18 - 1;
      if ( v22 >= 0 )
      {
        v23 = v17;
        do
        {
          v24 = *v20;
          v23 += 8;
          ++v20;
          *(_QWORD *)(v23 - 8) = v24;
        }
        while ( v22-- != 0 );
        v20 = *(__int64 **)(v4 + 48);
      }
      qfree(v20);
      v26 = *(_QWORD *)(v4 + 56);
      *(_QWORD *)(v4 + 48) = v21;
      *(_QWORD *)(v4 + 64) = v19;
      v7 = (_QWORD *)(v21 + 8 * v26);
    }
    *v7 = 0;
    ++*(_QWORD *)(v4 + 56);
    v13 = operator new(0x38u);
    v14 = _mm_loadu_si128(a2);
    *(_QWORD *)(v13 + 16) = 0;
    *(__m128i *)v13 = v14;
    *(_QWORD *)(v13 + 40) = -1;
    *(_BYTE *)(v13 + 48) = 0;
    *(_OWORD *)(v13 + 24) = 0;
    v15 = (_QWORD *)*v7;
    *v7 = v13;
    if ( v15 )
    {
      v16 = (void *)v15[2];
      if ( v16 )
      {
        v15[3] = 0;
        qfree(v16);
      }
      operator delete(v15, 0x38u);
    }
    *(_BYTE *)(v4 + 144) = 1;
    v9 = (_QWORD *)*v7;
  }
  else
  {
    v8 = a2->m128i_i64[0];
    while ( 1 )
    {
      v9 = *v5;
      if ( **v5 == v8 && v9[1] == a2->m128i_i64[1] )
        break;
      if ( v7 == ++v5 )
        goto LABEL_7;
    }
  }
  return sub_691EB0(a1, (__int64)v9);
}
