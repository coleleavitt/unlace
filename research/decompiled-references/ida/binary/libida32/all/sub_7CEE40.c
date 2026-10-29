void __fastcall sub_7CEE40(const char **a1, const char *a2, __int64 a3)
{
  const char *v3; // r14
  const char *v5; // r12
  int v6; // eax
  size_t v7; // r15
  int v8; // eax
  size_t v9; // r15
  __int64 v10; // rbx
  size_t v11; // r15
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax

  v3 = a2;
  if ( a1[2] < a2 )
  {
    a2 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, v3, 96);
  }
  v5 = a1[1];
  if ( v5 < v3 )
  {
    do
    {
      while ( 1 )
      {
        v10 = (__int64)&(*a1)[96 * (_QWORD)v5];
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        v11 = *(_QWORD *)(a3 + 8);
        if ( v11 )
        {
          v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8), a2);
          *(_QWORD *)(v10 + 16) = v11;
          *(_QWORD *)v10 = v12;
          a2 = *(const char **)a3;
          memcpy(v12, *(const void **)a3, v11);
          *(_QWORD *)(v10 + 8) = v11;
        }
        v6 = *(_DWORD *)(a3 + 24);
        *(_QWORD *)(v10 + 32) = 0;
        *(_OWORD *)(v10 + 40) = 0;
        *(_DWORD *)(v10 + 24) = v6;
        v7 = *(_QWORD *)(a3 + 40);
        if ( v7 )
        {
          v14 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 40), a2);
          *(_QWORD *)(v10 + 32) = v14;
          *(_QWORD *)(v10 + 48) = v7;
          a2 = *(const char **)(a3 + 32);
          memcpy(v14, a2, v7);
          *(_QWORD *)(v10 + 40) = v7;
        }
        v8 = *(_DWORD *)(a3 + 56);
        *(_QWORD *)(v10 + 64) = 0;
        *(_OWORD *)(v10 + 72) = 0;
        *(_DWORD *)(v10 + 56) = v8;
        v9 = *(_QWORD *)(a3 + 72);
        if ( v9 )
          break;
        ++v5;
        *(_DWORD *)(v10 + 88) = *(_DWORD *)(a3 + 88);
        if ( v3 == v5 )
          goto LABEL_12;
      }
      v13 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 72), a2);
      *(_QWORD *)(v10 + 64) = v13;
      ++v5;
      *(_QWORD *)(v10 + 80) = v9;
      a2 = *(const char **)(a3 + 64);
      memcpy(v13, a2, v9);
      *(_QWORD *)(v10 + 72) = v9;
      *(_DWORD *)(v10 + 88) = *(_DWORD *)(a3 + 88);
    }
    while ( v3 != v5 );
  }
LABEL_12:
  a1[1] = v3;
}

