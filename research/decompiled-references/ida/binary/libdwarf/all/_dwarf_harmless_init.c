void *__fastcall dwarf_harmless_init(__int64 a1, int a2)
{
  size_t v3; // rdi
  void *result; // rax
  __int64 v5; // rbx

  *(_DWORD *)(a1 + 20) = 0;
  *(_OWORD *)(a1 + 4) = 0;
  v3 = (unsigned int)(a2 + 1);
  *(_DWORD *)a1 = v3;
  result = calloc(v3, 8u);
  *(_QWORD *)(a1 + 16) = result;
  if ( result )
  {
    v5 = 0;
    if ( a2 != -1 )
    {
      do
      {
        result = calloc(1u, 0x12Cu);
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5) = result;
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5++) = result;
      }
      while ( (unsigned int)v5 < *(_DWORD *)a1 );
    }
  }
  else
  {
    *(_DWORD *)a1 = 0;
    return nullptr;
  }
  return result;
}

