/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4355C0
// Address: 0x004355C0

//----- (004355C0) --------------------------------------------------------
int __stdcall sub_4355C0(int a1, char **a2)
{
  char *v2; // ebx
  __int8 *v4; // eax
  __int8 *v5; // edi
  int v6; // ebp
  unsigned int v7; // eax
  int v8; // ecx

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v4 = sub_464F10(v2, 0xAu);
  if ( v4 )
    v5 = v4 + 1;
  else
    v5 = sub_464F10(v2, 0);
  v6 = v5 - v2;
  *(_DWORD *)(a1 + 4) = 0;
  v7 = v5 - v2 + 1;
  if ( v7 > *(_DWORD *)(a1 + 8) )
  {
    *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v5 - v2 + 1, 1u);
    v7 = v6 + 1;
  }
  *(_DWORD *)(a1 + 4) = v7;
  *(_BYTE *)(*(_DWORD *)a1 + v6) = 0;
  sub_464310(*(_DWORD *)a1, (unsigned int)v2, v5 - v2);
  v8 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
  if ( v8 )
  {
    if ( *(_BYTE *)(*(_DWORD *)a1 + v8 - 1) == 10 )
      sub_437840(a1, 1);
  }
  *a2 = v5;
  return *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
}
