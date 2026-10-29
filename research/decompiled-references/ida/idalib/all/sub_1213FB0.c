__int64 __fastcall sub_1213FB0(__int64 a1, int a2, int a3, int a4, const void *a5, size_t a6)
{
  unsigned int v6; // ebx
  bool v7; // sf
  bool v8; // of
  int v9; // eax
  int v11; // eax
  size_t v12; // r13
  const void *v15; // r14
  size_t v16; // rdx
  const void *v17; // rdi
  unsigned int v18; // eax

  v8 = __OFSUB__(*(_DWORD *)(a1 + 32), a2);
  v7 = *(_DWORD *)(a1 + 32) - a2 < 0;
  if ( *(_DWORD *)(a1 + 32) != a2 )
    goto LABEL_6;
  v9 = *(_DWORD *)(a1 + 36);
  if ( v9 == a3 )
  {
    v11 = *(_DWORD *)(a1 + 40);
    if ( v11 == a4 )
    {
      v12 = *(_QWORD *)(a1 + 120);
      v15 = *(const void **)(a1 + 112);
      if ( a6 == v12 )
      {
        v6 = 0;
        if ( !a6 )
          return v6;
        if ( !memcmp(*(const void **)(a1 + 112), a5, a6) )
          return v6;
        v18 = memcmp(v15, a5, a6);
        if ( !v18 )
          return v6;
      }
      else
      {
        v6 = 1;
        if ( !a6 )
          return v6;
        v6 = 0;
        if ( !v12 )
          return v6;
        v16 = *(_QWORD *)(a1 + 120);
        v17 = *(const void **)(a1 + 112);
        if ( a6 <= v12 )
          v16 = a6;
        v18 = memcmp(v17, a5, v16);
        if ( !v18 )
        {
          LOBYTE(v6) = a6 > v12;
          return v6;
        }
      }
      return v18 >> 31;
    }
    v6 = 1;
    if ( a4 != -1 )
    {
      v6 = 0;
      if ( v11 != -1 )
        LOBYTE(v6) = v11 < a4;
    }
  }
  else
  {
    v6 = 1;
    if ( a3 != -1 )
    {
      v6 = 0;
      if ( v9 != -1 )
      {
        v8 = __OFSUB__(v9, a3);
        v7 = v9 - a3 < 0;
LABEL_6:
        LOBYTE(v6) = v7 ^ v8;
      }
    }
  }
  return v6;
}
