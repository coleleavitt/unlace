_BYTE *__fastcall sub_B602E0(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  void *v4; // r14
  size_t v5; // r15
  unsigned __int64 v6; // rbx
  _BYTE *v7; // rax
  double v8; // rcx
  _BYTE *v9; // r13
  __int64 v10; // r12
  double v11[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_BYTE **)(a1 + 8);
  if ( v2 == *(_BYTE **)(a1 + 16) )
  {
    v4 = *(void **)a1;
    v5 = (size_t)&v2[-*(_QWORD *)a1];
    if ( v5 == -1 )
      std::__throw_length_error("vector::_M_realloc_insert");
    v6 = 1;
    if ( v5 )
    {
      v6 = 2 * v5;
      if ( v5 > 2 * v5 )
        v6 = -1;
    }
    v7 = (_BYTE *)operator new(v6);
    *(_QWORD *)&v8 = &v7[v6];
    v9 = v7;
    v2 = &v7[v5];
    v7[v5] = *a2;
    if ( v5 )
    {
      v11[0] = v8;
      memmove(v7, v4, v5);
      v8 = v11[0];
      v10 = (__int64)&v9[v5 + 1];
    }
    else
    {
      v10 = (__int64)(v7 + 1);
      v2 = v7;
      if ( !v4 )
      {
LABEL_10:
        *(_QWORD *)&v11[0] = v10;
        *(double *)(a1 + 16) = v8;
        *(__m128 *)a1 = _mm_loadh_ps(v11);
        return v2;
      }
    }
    v11[0] = v8;
    operator delete(v4);
    v8 = v11[0];
    goto LABEL_10;
  }
  *v2 = *a2;
  *(_QWORD *)(a1 + 8) = v2 + 1;
  return v2;
}
