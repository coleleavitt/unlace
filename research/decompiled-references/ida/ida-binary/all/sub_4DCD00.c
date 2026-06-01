_QWORD *__fastcall sub_4DCD00(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  _DWORD *v10; // rcx
  _DWORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx

  v7 = (_QWORD *)a2[1];
  v8 = *(_QWORD *)(*a2 + 16LL);
  v9 = v7[1] - *v7;
  *(_QWORD *)(v8 + 32) = 0;
  *(_OWORD *)(v8 + 16) = 0;
  if ( v9 )
  {
    if ( v9 > 0x7FFFFFFFFFFFFFFCLL )
      sub_162118(a1, a2, a3, a4, a5, a6);
    v10 = (_DWORD *)operator new(v9);
  }
  else
  {
    v10 = nullptr;
  }
  *(_QWORD *)(v8 + 32) = (char *)v10 + v9;
  *(__m128i *)(v8 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  v11 = (_DWORD *)*v7;
  v12 = v7[1] - *v7;
  if ( v12 <= 4 )
  {
    if ( v12 == 4 )
      *v10 = *v11;
  }
  else
  {
    v10 = memmove(v10, v11, v7[1] - *v7);
  }
  *(_BYTE *)(v8 + 40) = 1;
  *(_QWORD *)(v8 + 24) = (char *)v10 + v12;
  v13 = *(_QWORD *)(*a2 + 16LL);
  *(_QWORD *)(*a2 + 16LL) = 0;
  *a1 = v13;
  return a1;
}
