_QWORD *__fastcall dwarf_initialize_search_hash(__int64 *a1, __int64 a2, size_t a3)
{
  __int64 v3; // r12
  _QWORD *v7; // r13
  __int64 v8; // rcx
  size_t v9; // rdi
  unsigned __int64 v10; // rdx
  void *v11; // rax

  v3 = *a1;
  if ( *a1 )
    return (_QWORD *)v3;
  v7 = calloc(1u, 0x30u);
  if ( !v7 )
    return (_QWORD *)v3;
  v8 = 0;
  v9 = 521;
  while ( v9 < a3 )
  {
    v9 = qword_A6680[++v8];
    if ( !v9 )
      goto LABEL_12;
  }
  *v7 = v9;
  if ( v9 <= 0x1869F )
    v10 = 90 * v9 / 0x64;
  else
    v10 = 90 * (v9 / 0x64);
  v7[2] = v10;
  if ( v10 >= v9 >> 1 )
  {
    v7[3] = 0;
    v7[1] = v8;
    v7[5] = a2;
    v11 = calloc(v9, 0x18u);
    v7[4] = v11;
    if ( v11 )
    {
      *a1 = (__int64)v7;
      return v7;
    }
  }
LABEL_12:
  free(v7);
  return nullptr;
}

