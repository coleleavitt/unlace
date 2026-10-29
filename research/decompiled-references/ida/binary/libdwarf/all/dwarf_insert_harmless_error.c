void __fastcall dwarf_insert_harmless_error(__int64 a1, const char *a2)
{
  __int64 v2; // r13
  unsigned int v3; // r12d
  size_t v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx

  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    v2 = *(_QWORD *)(a1 + 10792);
    if ( v2 )
    {
      v3 = *(_DWORD *)(a1 + 10780);
      v4 = strlen(a2);
      _dwarf_safe_strcpy(*(_QWORD *)(v2 + 8LL * v3), 300, a2, v4);
      v5 = *(_DWORD *)(a1 + 10776);
      ++*(_DWORD *)(a1 + 10788);
      v6 = (v3 + 1) % v5;
      *(_DWORD *)(a1 + 10780) = v6;
      if ( v6 == *(_DWORD *)(a1 + 10784) )
        *(_DWORD *)(a1 + 10784) = (v6 + 1) % v5;
    }
    else
    {
      ++*(_DWORD *)(a1 + 10788);
    }
  }
}

