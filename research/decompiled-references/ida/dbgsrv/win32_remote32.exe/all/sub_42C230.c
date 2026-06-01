/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C230
// Address: 0x0042C230

//----- (0042C230) --------------------------------------------------------
int __stdcall sub_42C230(int a1)
{
  const char *v1; // eax
  int v2; // eax
  const char *v3; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // eax

  v1 = MultiByteStr;
  if ( *(_DWORD *)(a1 + 20) )
    v1 = *(const char **)(a1 + 16);
  v2 = sub_4278F0(*(unsigned int **)(a1 + 56), v1);
  if ( v2 )
  {
    v5 = *(_DWORD *)(v2 + 12);
    v6 = *(_DWORD *)(a1 + 96);
    v7 = *(_DWORD *)(*(_DWORD *)(a1 + 56) + 40);
    v8 = *(_DWORD *)(v6 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)(v7 + 4 * v5) + 8);
    if ( v9 == v8 )
    {
      return sub_45CC20(1537);
    }
    else
    {
      while ( v9 )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(v7 + 4 * v9) + 8);
        if ( v9 == v8 )
          return sub_45CC20(1537);
      }
      *(_DWORD *)(v6 + 8) = v5;
      return 0;
    }
  }
  else
  {
    v3 = MultiByteStr;
    if ( *(_DWORD *)(a1 + 20) )
      v3 = *(const char **)(a1 + 16);
    sub_45CB10(0, v3);
    return sub_45CC20(1536);
  }
}
