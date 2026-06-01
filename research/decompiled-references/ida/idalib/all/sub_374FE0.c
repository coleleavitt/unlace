__int64 __fastcall sub_374FE0(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  const char *v3; // rax
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r12
  size_t v8; // r13
  void *v9; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  v3 = (const char *)qbasename(v2);
  v4 = v3;
  if ( v3 )
  {
    v5 = strlen(v3);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v6 = v5;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v5 )
    {
      v8 = v5 + 1;
      v9 = (void *)qvector_reserve(a2 + 8, 0, v5 + 1, 1);
      *(_QWORD *)(a2 + 16) = v8;
      *(_QWORD *)(a2 + 8) = v9;
      memmove(v9, v4, v6);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
    }
    return 0;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    return 0;
  }
}
