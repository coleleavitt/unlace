__int64 __fastcall sub_49C30(__int64 a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  size_t v9; // rdi
  size_t v10; // r13
  size_t v11; // rax
  void *v12; // rax
  unsigned int random; // eax
  char *v14; // rdi
  size_t v15; // rdx
  unsigned int v17; // [rsp+0h] [rbp-30h]

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( a2 >= *(_QWORD *)(a1 + 688) )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(a1 + 696) + 112 * a2;
  v7 = *(_QWORD *)(v6 + 96);
  if ( v7 )
  {
    *a3 = v7;
    return 0;
  }
  if ( *(_DWORD *)(v6 + 104) )
    return 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(v6 + 24);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(v6 + 40);
  v11 = *(_QWORD *)(a1 + 32);
  if ( v10 >= v11 )
    goto LABEL_18;
  if ( v9 <= v10 )
    v10 = *(_QWORD *)(v6 + 24);
  if ( v11 < v10 + *(_QWORD *)(v6 + 48) )
  {
    *a4 = 423;
    return 1;
  }
  if ( v9 >= 2 * v11 )
  {
LABEL_18:
    *a4 = 491;
    return 1;
  }
  v12 = malloc(v9);
  *(_QWORD *)(v6 + 96) = v12;
  if ( !v12 )
  {
    *a4 = 62;
    return 1;
  }
  random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v12);
  v14 = *(char **)(v6 + 96);
  if ( !random )
  {
    v15 = *(_QWORD *)(v6 + 24);
    if ( v10 < v15 )
    {
      memset(&v14[v10], 0, v15 - v10);
      v14 = *(char **)(v6 + 96);
    }
    *a3 = v14;
    return 0;
  }
  v17 = random;
  free(v14);
  *(_QWORD *)(v6 + 96) = 0;
  return v17;
}

