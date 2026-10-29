void __fastcall sub_7CBE60(const char **a1, const char *a2, __int64 a3)
{
  const char *v3; // r15
  const char *v5; // r12
  __int128 v6; // xmm0
  int v7; // eax
  size_t v8; // r13
  char *v9; // rbx
  size_t v10; // r13
  void *v11; // rax
  void *v12; // rax

  v3 = a2;
  if ( a1[2] < a2 )
  {
    a2 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, v3, 64);
  }
  v5 = a1[1];
  if ( v5 < v3 )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v9 = (char *)&(*a1)[64 * (_QWORD)v5];
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = v6;
        v10 = *(_QWORD *)(a3 + 8);
        if ( v10 )
        {
          v11 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8), a2);
          *((_QWORD *)v9 + 2) = v10;
          *(_QWORD *)v9 = v11;
          a2 = *(const char **)a3;
          memcpy(v11, *(const void **)a3, v10);
          *((_QWORD *)v9 + 1) = v10;
          v6 = 0;
        }
        v7 = *(_DWORD *)(a3 + 24);
        *((_QWORD *)v9 + 4) = 0;
        *(_OWORD *)(v9 + 40) = v6;
        *((_DWORD *)v9 + 6) = v7;
        v8 = *(_QWORD *)(a3 + 40);
        if ( v8 )
          break;
        ++v5;
        *((_DWORD *)v9 + 14) = *(_DWORD *)(a3 + 56);
        if ( v3 == v5 )
          goto LABEL_10;
      }
      v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 40), a2);
      *((_QWORD *)v9 + 4) = v12;
      ++v5;
      *((_QWORD *)v9 + 6) = v8;
      a2 = *(const char **)(a3 + 32);
      memcpy(v12, a2, v8);
      *((_QWORD *)v9 + 5) = v8;
      v6 = 0;
      *((_DWORD *)v9 + 14) = *(_DWORD *)(a3 + 56);
    }
    while ( v3 != v5 );
  }
LABEL_10:
  a1[1] = v3;
}

