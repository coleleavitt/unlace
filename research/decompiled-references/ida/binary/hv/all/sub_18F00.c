__int64 __fastcall sub_18F00(_QWORD *a1, char a2)
{
  char *v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rbp
  unsigned int v6; // ecx
  _BYTE *v8; // rdi
  void *v9; // r12

  v2 = &byte_165961;
  v3 = *a1;
  v5 = *a1;
  if ( *(_QWORD *)(*a1 + 32LL) )
    v2 = *(char **)(v3 + 24);
  v6 = 0;
  if ( *v2 == 45 )
  {
    v8 = *(_BYTE **)(v3 + 24);
    if ( v8[1] == a2 && !v8[2] )
    {
      v9 = (void *)(v3 + 24);
      if ( v8 )
      {
        *(_QWORD *)(v3 + 32) = 0;
        j__free(v8);
        v3 = *a1;
      }
      memmove(v9, (const void *)(v5 + 48), v3 + 24LL * a1[1]-- - (_QWORD)v9 - 24);
      return 1;
    }
  }
  return v6;
}

