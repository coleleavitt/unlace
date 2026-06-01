/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8070270
// Address: 0x08070270

//----- (08070270) --------------------------------------------------------
int __cdecl sub_8070270(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ebp
  int v6; // edx
  int v7; // eax
  int v8; // ebp
  unsigned int v9; // eax
  void *v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // [esp-16h] [ebp-38h]
  int v14; // [esp-12h] [ebp-34h]
  int v15; // [esp-Eh] [ebp-30h]
  unsigned __int8 v16; // [esp+1h] [ebp-21h]

  v16 = *(_BYTE *)(a1 + 16);
  if ( !v16 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(20082, v13, v14, v15);
    JUMPOUT(0x804D014);
  }
  v2 = *(_DWORD *)(a1 + 4);
  v3 = 28 * *(_DWORD *)(a1 + 8);
  v4 = v2 + v3;
  if ( !v3 )
    return 0;
  while ( !*(_DWORD *)(v2 + 4) || strcmp(*(const char **)v2, "GNU") || *(_DWORD *)(v2 + 24) != 3 )
  {
    v2 += 28;
    if ( v2 == v4 )
      return 0;
  }
  v6 = 0;
  v7 = *(_DWORD *)(v2 + 16);
  if ( v7 )
  {
    v8 = v7 - 1;
    v9 = 2 * (v7 - 1);
    *(_DWORD *)(a2 + 4) = 0;
    if ( *(_DWORD *)(a2 + 8) < v9 )
    {
      v10 = sub_80CF920(a2, *(void **)a2, v9, 1u);
      v6 = 0;
      *(_DWORD *)a2 = v10;
    }
    if ( v8 > 0 )
    {
      v11 = 0;
      if ( *(_DWORD *)(v2 + 16) )
      {
        v12 = 0;
        goto LABEL_16;
      }
      while ( 1 )
      {
        ++v11;
        sub_8070240((void **)a2, "%02x", v6);
        if ( v8 == v11 )
          break;
        v12 = v11;
LABEL_16:
        v6 = *(unsigned __int8 *)(*(_DWORD *)(v2 + 12) + v12);
      }
    }
    return v16;
  }
  *(_DWORD *)(a2 + 4) = 0;
  return v16;
}
// 80703AB: control flows out of bounds to 804D014
// 80703B9: variable 'v13' is possibly undefined
// 80703B9: variable 'v14' is possibly undefined
// 80703B9: variable 'v15' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
