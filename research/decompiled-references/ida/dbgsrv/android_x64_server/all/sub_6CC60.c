/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CC60
// Address: 0x000000000006CC60

//----- (000000000006CC60) ----------------------------------------------------
__int64 __fastcall sub_6CC60(__int64 a1, const char *a2, double a3, __m128 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  char *v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  __int64 result; // rax
  _DWORD *v11; // r14
  size_t v12; // rax
  size_t v13; // r12
  unsigned __int64 v14; // r13
  void *v15; // rax
  char *v16; // rax

  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = v5;
    while ( --v6 >= 0 )
    {
      v7 = *(char **)(*(_QWORD *)a1 + 8 * v5 - 8);
      v8 = s1;
      if ( *((_QWORD *)v7 + 1) )
        v8 = *(const char **)v7;
      v9 = strcmp(v8, a2);
      v5 = v6;
      if ( !v9 )
      {
        result = -1;
        if ( *((_DWORD *)v7 + 34) )
          return result;
        v11 = v7 + 136;
        sub_6CDF0((__int64)v7, a3, a4);
        goto LABEL_19;
      }
    }
  }
  v7 = (char *)operator new(0x90u);
  *(_OWORD *)v7 = 0;
  *((_QWORD *)v7 + 2) = 0;
  *((_OWORD *)v7 + 2) = 0;
  *((_QWORD *)v7 + 6) = 0;
  *((_OWORD *)v7 + 7) = 0;
  *((_OWORD *)v7 + 6) = 0;
  *((_OWORD *)v7 + 5) = 0;
  *((_OWORD *)v7 + 4) = 0;
  *((_QWORD *)v7 + 16) = 0;
  if ( a2 && (v12 = strlen(a2)) != 0 )
  {
    v13 = v12;
    v14 = v12 + 1;
    v15 = *(void **)v7;
    if ( *((_QWORD *)v7 + 2) < v14 )
    {
      v15 = qvector_reserve((__int64)v7, *(char **)v7, v14, 1u);
      *(_QWORD *)v7 = v15;
    }
    *((_QWORD *)v7 + 1) = v14;
    memmove(v15, a2, v13);
    *(_BYTE *)(*(_QWORD *)v7 + v13) = 0;
  }
  else
  {
    *((_QWORD *)v7 + 1) = 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v6 + 1) )
  {
    v16 = *(char **)a1;
  }
  else
  {
    v16 = (char *)qvector_reserve(a1, *(char **)a1, v6 + 1, 8u);
    *(_QWORD *)a1 = v16;
  }
  *(_QWORD *)&v16[8 * (*(_QWORD *)(a1 + 8))++] = v7;
  v11 = v7 + 136;
LABEL_19:
  *v11 = -1;
  *((_DWORD *)v7 + 6) = 0;
  return v6;
}
