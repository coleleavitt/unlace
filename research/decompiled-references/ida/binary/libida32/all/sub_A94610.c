_QWORD *__fastcall sub_A94610(_QWORD *a1, __int64 a2, int a3, __int64 a4, void *a5, __int64 a6, unsigned __int64 a7)
{
  unsigned __int64 v9; // r13
  size_t v10; // r12
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 i; // rax

  v9 = sub_A94460(a1, a2, *(const __m128i **)a4, *(unsigned int *)(a4 + 8), a5, a6, a7);
  v10 = (unsigned int)sub_F48820(v9);
  v11 = (_QWORD *)sub_A55760(a1 + 294, v10 + 8, 3u);
  *v11 = v9;
  v12 = v11;
  memset(v11 + 1, 0, v10);
  *((_DWORD *)v12 + 3) = 0;
  v13 = *v12;
  *((_DWORD *)v12 + 2) = a3;
  *((_DWORD *)v12 + 4) = *(_DWORD *)(a4 + 272);
  *((_DWORD *)v12 + 5) = *(_DWORD *)(a4 + 276);
  v14 = *(_DWORD *)(v13 + 20);
  if ( v14 )
  {
    v15 = (unsigned int)(v14 - 1);
    for ( i = 0; ; ++i )
    {
      v12[i + 3] = *(_QWORD *)(*(_QWORD *)a4 + 32 * i + 24);
      if ( i == v15 )
        break;
    }
  }
  return v12;
}

