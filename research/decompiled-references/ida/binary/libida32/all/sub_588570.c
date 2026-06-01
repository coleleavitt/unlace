__int64 __fastcall sub_588570(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r12d
  unsigned int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  int i; // esi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // r13
  __int64 v12; // rax
  const char *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax

  v2 = 0;
  v4 = *a2;
  if ( (*a2 & 0x10) != 0 )
  {
    *(_BYTE *)(a1 + 60) = 1;
    v2 = 1;
    v4 = *a2 & 0xFFFFFFEF;
    *a2 = v4;
  }
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 56) = v4;
  if ( v5 > 0 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v8 = *(_QWORD **)(v6 + 32);
      if ( !v8 || (v9 = v8[1]) == 0 )
      {
        if ( !under_debugger )
          interr(3441);
        BUG();
      }
      v6 = *v8 + 56 * v9 - 56;
    }
  }
  v10 = *(_QWORD *)(v6 + 32);
  v11 = 0;
  if ( v10 && *(_QWORD *)(v10 + 8) )
  {
    v11 = 1;
    *(_DWORD *)(a1 + 16) = v5 + 1;
    v6 = **(_QWORD **)(v6 + 32) + 56LL * *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL) - 56;
  }
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(const char **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v12 + 1) )
  {
    v15 = qvector_reserve(a1 + 24, v13, v12 + 1, 1);
    *(_QWORD *)(a1 + 24) = v15;
    v13 = (const char *)v15;
    *(_BYTE *)(v15 + (*(_QWORD *)(a1 + 32))++) = v11;
    if ( *(_QWORD *)(v6 + 32) )
      goto LABEL_13;
LABEL_15:
    v16 = qalloc_or_throw(24, v13);
    *(_QWORD *)v16 = 0;
    *(_OWORD *)(v16 + 8) = 0;
    *(_QWORD *)(v6 + 32) = v16;
    goto LABEL_13;
  }
  v13[v12] = v11;
  ++*(_QWORD *)(a1 + 32);
  if ( !*(_QWORD *)(v6 + 32) )
    goto LABEL_15;
LABEL_13:
  *(_DWORD *)(a1 + 48) += (*(char *)(a1 + 56) < 0) + 1;
  return v2;
}

