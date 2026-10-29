__int64 __fastcall sub_2237500(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  _BYTE *v8; // rax
  void *v10; // r9
  unsigned __int64 v11; // rax
  size_t v12; // r15
  unsigned __int64 v13; // rcx
  char *v14; // rax
  char *v15; // r10
  char *v16; // r9
  char *v17; // rcx
  __int64 v18; // r15
  char *v19; // rax
  char *v20; // [rsp+8h] [rbp-50h] BYREF
  void *src; // [rsp+10h] [rbp-48h]
  char v22; // [rsp+1Fh] [rbp-39h]

  v2 = operator new(0x18u);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = v2;
  *(_OWORD *)v2 = 0;
  *(_QWORD *)(v2 + 16) = 0;
  v6 = v4 - v3;
  if ( v6 )
  {
    v7 = 0;
    while ( 1 )
    {
      while ( *(_BYTE *)(v3 + v7) != 10 )
      {
LABEL_3:
        if ( v6 == ++v7 )
          goto LABEL_7;
      }
      v8 = *(_BYTE **)(v5 + 8);
      if ( v8 == *(_BYTE **)(v5 + 16) )
        break;
      *v8 = v7++;
      ++*(_QWORD *)(v5 + 8);
      if ( v6 == v7 )
        goto LABEL_7;
    }
    v10 = *(void **)v5;
    v11 = (unsigned __int64)&v8[-*(_QWORD *)v5];
    v12 = v11;
    if ( v11 == -1 )
      std::__throw_length_error("vector::_M_realloc_insert");
    v13 = 1;
    if ( v11 )
    {
      v13 = 2 * v11;
      if ( v11 > 2 * v11 )
        v13 = -1;
    }
    v22 = v7;
    src = v10;
    v20 = (char *)v13;
    v14 = (char *)operator new(v13);
    v15 = v14;
    v16 = (char *)src;
    v17 = &v20[(_QWORD)v14];
    v14[v12] = v22;
    if ( v12 )
    {
      src = v17;
      v20 = v16;
      v19 = (char *)memmove(v14, v16, v12);
      v16 = v20;
      v17 = (char *)src;
      v15 = v19;
      v18 = (__int64)&v19[v12 + 1];
    }
    else
    {
      v18 = (__int64)(v14 + 1);
      if ( !v16 )
      {
LABEL_14:
        v20 = (char *)v18;
        *(_QWORD *)(v5 + 16) = v17;
        *(__m128 *)v5 = _mm_loadh_ps((const double *)&v20);
        goto LABEL_3;
      }
    }
    src = v17;
    v20 = v15;
    operator delete(v16);
    v17 = (char *)src;
    goto LABEL_14;
  }
LABEL_7:
  *a1 = v5;
  return v5;
}
