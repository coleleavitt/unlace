__m128i *__fastcall sub_687820(__m128i *a1, _QWORD *a2, __int64 a3)
{
  bool (__fastcall *v4)(__int64, __int64); // rax
  _DWORD *v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  __m128i v9; // xmm1
  _QWORD *v10; // rdx
  __int64 i; // rax
  unsigned __int64 v12; // rax

  v4 = *(bool (__fastcall **)(__int64, __int64))(*a2 + 56LL);
  if ( v4 == sub_676470 )
  {
    v5 = *(_DWORD **)(a3 + 24);
    if ( !v5 || *v5 != 4 )
      goto LABEL_4;
  }
  else if ( !v4((__int64)a2, a3) )
  {
LABEL_4:
    v6 = a2[1];
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v6;
    return a1;
  }
  v8 = sub_6870C0(a2, a3);
  v9 = _mm_loadl_epi64((const __m128i *)(a2 + 1));
  v10 = *(_QWORD **)v8;
  for ( i = *(_QWORD *)v8 + 16LL * *(unsigned int *)(v8 + 8); (_QWORD *)i != v10; v10 += 2 )
  {
    if ( *v10 > 1u )
      break;
  }
  v12 = v10[1];
  *a1 = _mm_unpacklo_epi64((__m128i)v12, v9);
  if ( !v12 )
    return a1;
  ++*(_DWORD *)(v12 + 8);
  return a1;
}

