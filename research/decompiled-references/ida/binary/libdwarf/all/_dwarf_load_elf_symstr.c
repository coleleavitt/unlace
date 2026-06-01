__int64 __fastcall dwarf_load_elf_symstr(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  void *v6; // rax
  __int64 result; // rax
  unsigned int v8; // [rsp+0h] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 472);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 464);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 < v3 || (v5 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 184 * v2 + 48), v4 < v5) || v4 < v3 + v5 )
  {
    *a2 = 470;
    return 1;
  }
  v6 = calloc(1u, v3 + 1);
  *(_QWORD *)(a1 + 456) = v6;
  if ( !v6 )
  {
    *(_OWORD *)(a1 + 464) = 0;
    *a2 = 62;
    return 1;
  }
  result = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v6);
  if ( (_DWORD)result )
  {
    v8 = result;
    free(*(void **)(a1 + 456));
    *(_QWORD *)(a1 + 456) = 0;
    *(_OWORD *)(a1 + 464) = 0;
    return v8;
  }
  return result;
}

