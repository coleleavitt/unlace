/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B5C0
// Address: 0x0004B5C0

//----- (0004B5C0) --------------------------------------------------------
int __fastcall sub_4B5C0(int a1, const char **a2)
{
  const char *v2; // r8
  char *v5; // r0
  const char *v6; // r5
  unsigned int v7; // r3
  unsigned int v8; // r7
  _BYTE *v9; // r0
  unsigned int v10; // r6
  char *v11; // r0
  int result; // r0
  signed int v13; // r6

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v5 = strchr(*a2, 10);
  v6 = v5 + 1;
  if ( !v5 )
    v6 = &v2[strlen(v2)];
  v7 = *(_DWORD *)(a1 + 8);
  v8 = v6 - v2 + 1;
  *(_DWORD *)(a1 + 4) = 0;
  v9 = *(_BYTE **)a1;
  if ( v8 > v7 )
  {
    v9 = sub_77EB0(a1, *(void **)a1, v6 - v2 + 1, 1u);
    *(_DWORD *)a1 = v9;
  }
  *(_DWORD *)(a1 + 4) = v8;
  v9[v6 - v2] = 0;
  memmove(*(void **)a1, v2, v6 - v2);
  v10 = *(_DWORD *)(a1 + 4);
  if ( v10 > 1 )
  {
    v11 = *(char **)a1;
    if ( *(_BYTE *)(*(_DWORD *)a1 + v10 - 2) == 10 )
    {
      v13 = v10 - 1;
      if ( v13 <= 1 )
      {
        if ( v11 )
        {
          *(_DWORD *)(a1 + 4) = 0;
          sub_77E08(v11);
          *(_DWORD *)a1 = 0;
          *(_DWORD *)(a1 + 8) = 0;
        }
      }
      else
      {
        if ( (unsigned int)v13 > *(_DWORD *)(a1 + 8) )
        {
          v11 = (char *)sub_77EB0(a1, *(void **)a1, v13, 1u);
          *(_DWORD *)a1 = v11;
        }
        *(_DWORD *)(a1 + 4) = v13;
        v11[v13 - 1] = 0;
      }
    }
  }
  *a2 = v6;
  result = *(_DWORD *)(a1 + 4);
  if ( result )
    --result;
  return result;
}
