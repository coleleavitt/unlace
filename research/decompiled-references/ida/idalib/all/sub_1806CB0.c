void __fastcall sub_1806CB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdi
  const void *v6; // r13
  __int64 v7; // rax
  const void *v8; // r13
  void *v9; // rdi
  int v10; // eax
  size_t v11; // rdx

  v2 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v2 )
  {
    v3 = *(_QWORD *)(a1 + 512);
    v4 = *(unsigned int *)(v3 + 16);
    v5 = v3 + 8;
    if ( (_DWORD)v4 )
    {
      v6 = *(const void **)(a2 + 8);
      if ( v2 + v4 > (unsigned __int64)*(unsigned int *)(v3 + 20) )
      {
        sub_2237220(v5, v3 + 24, v2 + v4, 80);
        v4 = *(unsigned int *)(v3 + 16);
      }
      memcpy((void *)(*(_QWORD *)(v3 + 8) + 80 * v4), v6, 80 * v2);
      *(_DWORD *)(v3 + 16) += v2;
      goto LABEL_6;
    }
    if ( v5 == a2 + 8 )
    {
LABEL_6:
      *(_DWORD *)(a2 + 16) = 0;
      return;
    }
    v7 = *(_QWORD *)(a2 + 8);
    v8 = (const void *)(a2 + 24);
    if ( v7 != a2 + 24 )
    {
      v9 = *(void **)(v3 + 8);
      if ( v9 != (void *)(v3 + 24) )
      {
        free(v9);
        v7 = *(_QWORD *)(a2 + 8);
        LODWORD(v2) = *(_DWORD *)(a2 + 16);
      }
      *(_QWORD *)(v3 + 8) = v7;
      v10 = *(_DWORD *)(a2 + 20);
      *(_DWORD *)(v3 + 16) = v2;
      *(_DWORD *)(v3 + 20) = v10;
      *(_QWORD *)(a2 + 8) = v8;
      *(_DWORD *)(a2 + 20) = 0;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(v3 + 20) < (unsigned int)v2 )
    {
      sub_2237220(v5, v3 + 24, (unsigned int)v2, 80);
      v8 = *(const void **)(a2 + 8);
      v11 = 80LL * *(unsigned int *)(a2 + 16);
      if ( !v11 )
        goto LABEL_16;
    }
    else
    {
      v11 = 80LL * (unsigned int)v2;
    }
    memcpy(*(void **)(v3 + 8), v8, v11);
LABEL_16:
    *(_DWORD *)(v3 + 16) = v2;
    goto LABEL_6;
  }
}
