/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4490
// Address: 0x000D4490

//----- (000D4490) --------------------------------------------------------
int __cdecl sub_D4490(int a1, void **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  void *v4; // eax
  size_t v5; // eax
  const void *v6; // esi
  size_t v7; // edi
  char *v8; // ecx
  unsigned int v9; // eax
  char *v10; // eax
  size_t v11; // eax
  _BYTE *v13; // [esp+10h] [ebp-1Ch] BYREF
  _BYTE *v14; // [esp+14h] [ebp-18h]

  if ( *(_BYTE *)(a1 + 12) )
  {
    v2 = (char *)a2[1];
    v3 = (unsigned int)a2[2];
    if ( (unsigned int)(v2 + 1) >= v3 )
    {
      v5 = 2 * v3;
      if ( v5 < (unsigned int)(v2 + 1) )
        v5 = (size_t)(v2 + 1);
      a2[2] = (void *)v5;
      v4 = realloc(*a2, v5);
      *a2 = v4;
      v2 = (char *)a2[1];
    }
    else
    {
      v4 = *a2;
    }
    v2[(_DWORD)v4] = 126;
    a2[1] = (char *)a2[1] + 1;
  }
  (*(void (__stdcall **)(_BYTE **))(**(_DWORD **)(a1 + 8) + 20))(&v13);
  v6 = v13;
  v7 = v14 - v13;
  if ( v14 != v13 )
  {
    v8 = (char *)a2[1];
    v9 = (unsigned int)a2[2];
    if ( (unsigned int)&v8[v7] >= v9 )
    {
      v11 = 2 * v9;
      if ( v11 < (unsigned int)&v8[v7] )
        v11 = (size_t)&v8[v7];
      a2[2] = (void *)v11;
      v10 = (char *)realloc(*a2, v11);
      *a2 = v10;
      v8 = (char *)a2[1];
    }
    else
    {
      v10 = (char *)*a2;
    }
    memmove(&v8[(_DWORD)v10], v6, v7);
    a2[1] = (char *)a2[1] + v7;
  }
  return _stack_chk_guard;
}
