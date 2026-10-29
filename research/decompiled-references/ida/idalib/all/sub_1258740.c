char *__fastcall sub_1258740(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rdx
  char *v3; // r12
  void *v5; // r15
  unsigned __int64 v6; // rdx
  size_t v7; // rbp
  unsigned __int64 v8; // r12
  _BYTE *v9; // rax
  double v10; // rcx
  _BYTE *v11; // r14
  __int64 v12; // rbp
  double v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_BYTE **)(a1 + 8);
  if ( v2 == *(_BYTE **)(a1 + 16) )
  {
    v5 = *(void **)a1;
    v6 = (unsigned __int64)&v2[-*(_QWORD *)a1];
    v7 = v6;
    if ( v6 == -1 )
      std::__throw_length_error("vector::_M_realloc_insert");
    v8 = 1;
    if ( v6 )
    {
      v8 = 2 * v6;
      if ( v6 > 2 * v6 )
        v8 = -1;
    }
    v9 = (_BYTE *)operator new(v8);
    *(_QWORD *)&v10 = &v9[v8];
    v11 = v9;
    v3 = &v9[v7];
    v9[v7] = *a2;
    if ( v7 )
    {
      v13[0] = v10;
      memmove(v9, v5, v7);
      v10 = v13[0];
      v12 = (__int64)&v11[v7 + 1];
    }
    else
    {
      v12 = (__int64)(v9 + 1);
      v3 = v9;
      if ( !v5 )
      {
LABEL_10:
        *(_QWORD *)&v13[0] = v12;
        *(double *)(a1 + 16) = v10;
        *(__m128 *)a1 = _mm_loadh_ps(v13);
        return v3;
      }
    }
    v13[0] = v10;
    operator delete(v5);
    v10 = v13[0];
    goto LABEL_10;
  }
  *v2 = *a2;
  v3 = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3 + 1;
  return v3;
}
