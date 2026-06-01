/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033AD0
// Address: 0x0000000100033AD0

//----- (0000000100033AD0) ----------------------------------------------------
__int64 __fastcall sub_100033AD0(__int64 a1, const char *a2)
{
  __int64 v3; // r12
  const char **v4; // r14
  const char *v5; // rdi
  size_t v6; // rax
  size_t v7; // r12
  size_t v8; // r13
  char *v9; // rdi
  __int64 result; // rax
  _QWORD *v11; // rax

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    while ( --v3 >= 0 )
    {
      v4 = *(const char ***)(*(_QWORD *)a1 + 8 * v3);
      v5 = _s1;
      if ( v4[1] )
        v5 = *v4;
      if ( !strcmp(v5, a2) )
      {
        result = -1;
        if ( *((_DWORD *)v4 + 34) )
          return result;
        sub_100033C40((__int64)v4);
        goto LABEL_18;
      }
    }
  }
  v4 = (const char **)operator new(0x90u);
  *(_OWORD *)v4 = 0;
  v4[2] = nullptr;
  *((_OWORD *)v4 + 2) = 0;
  v4[6] = nullptr;
  *((_OWORD *)v4 + 4) = 0;
  *((_OWORD *)v4 + 5) = 0;
  *((_OWORD *)v4 + 6) = 0;
  *((_OWORD *)v4 + 7) = 0;
  v4[16] = nullptr;
  if ( a2 )
  {
    v6 = strlen(a2);
    if ( v6 )
    {
      v7 = v6;
      v8 = v6 + 1;
      if ( v6 == -1 )
      {
        v9 = nullptr;
      }
      else
      {
        v9 = (char *)qvector_reserve((__int64)v4, nullptr, v6 + 1, 1u);
        *v4 = v9;
      }
      v4[1] = (const char *)v8;
      memmove(v9, a2, v7);
      (*v4)[v7] = 0;
    }
  }
  v11 = *(_QWORD **)a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v3 + 1) )
  {
    v11 = qvector_reserve(a1, *(void **)a1, v3 + 1, 8u);
    *(_QWORD *)a1 = v11;
  }
  v11[(*(_QWORD *)(a1 + 8))++] = v4;
LABEL_18:
  *((_DWORD *)v4 + 34) = -1;
  *((_DWORD *)v4 + 6) = 0;
  return v3;
}
