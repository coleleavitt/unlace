__int64 __fastcall sub_3E460(__int64 a1, unsigned __int64 a2, size_t *a3, _DWORD *a4)
{
  size_t *v5; // rbx
  size_t v6; // rax
  size_t v8; // r14
  void *v10; // rax
  unsigned int random; // eax
  void *v12; // rdi
  unsigned int v13; // [rsp+0h] [rbp-40h]

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( a2 >= *(_QWORD *)(a1 + 208) )
    return 0xFFFFFFFFLL;
  v5 = (size_t *)(*(_QWORD *)(a1 + 216) + 160 * a2);
  v6 = v5[19];
  if ( !v6 )
  {
    v8 = v5[8];
    if ( v8 )
    {
      if ( *(_QWORD *)(a1 + 24) >= v8 + v5[9] )
      {
        v10 = malloc(v5[8]);
        v5[19] = (size_t)v10;
        if ( v10 )
        {
          random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v10);
          v12 = (void *)v5[19];
          if ( random )
          {
            v13 = random;
            free(v12);
            v5[19] = 0;
            return v13;
          }
          *a3 = (size_t)v12;
          return 0;
        }
        *a4 = 62;
      }
      else
      {
        *a4 = 423;
      }
      return 1;
    }
    return 0xFFFFFFFFLL;
  }
  *a3 = v6;
  return 0;
}

