/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80926A0
// Address: 0x080926A0

//----- (080926A0) --------------------------------------------------------
int __cdecl sub_80926A0(int a1, int a2)
{
  bool v2; // cc
  int v3; // ecx
  char *i; // eax
  unsigned int v5; // edx
  void *v6; // eax
  int v7; // edi
  int v8; // ebp
  unsigned int v9; // eax
  int v10; // eax
  int result; // eax
  int v12; // [esp+0h] [ebp-24h]
  unsigned int v13; // [esp+4h] [ebp-20h]
  int v14; // [esp+28h] [ebp+4h]
  int v15; // [esp+28h] [ebp+4h]

  v2 = *(_DWORD *)(a2 + 8) <= 0x3FFu;
  *(_DWORD *)(a2 + 4) = 0;
  if ( v2 )
    *(_DWORD *)a2 = sub_80CF920(a2, *(void **)a2, 0x400u, 1u);
  v3 = a1;
  for ( i = (char *)(*(_DWORD *)(a1 + 4) - 1); ; i = (char *)(*(_DWORD *)(v3 + 4) + 1) )
  {
    *(_DWORD *)(v3 + 4) = i;
    v8 = (unsigned __int8)*i;
    v9 = *i;
    if ( v9 > 0x7F || (v14 = v3, v10 = isalnum(v9), v3 = v14, !v10) )
    {
      result = v8;
      if ( (_BYTE)v8 != 95 && (_BYTE)v8 != 36 )
        break;
    }
    v7 = *(_DWORD *)(a2 + 4);
    if ( v7 )
    {
      v12 = *(_DWORD *)(a2 + 4);
      v5 = v7 + 1;
      v6 = *(void **)a2;
      --v7;
      if ( *(_DWORD *)(a2 + 8) >= v5 )
        goto LABEL_5;
    }
    else
    {
      v12 = 1;
      v6 = *(void **)a2;
      v5 = 2;
      if ( *(_DWORD *)(a2 + 8) >= 2u )
        goto LABEL_5;
    }
    v15 = v3;
    v13 = v5;
    v6 = sub_80CF920(a2, v6, v5, 1u);
    v3 = v15;
    v5 = v13;
    *(_DWORD *)a2 = v6;
LABEL_5:
    *(_DWORD *)(a2 + 4) = v5;
    *((_BYTE *)v6 + v7) = v8;
    *(_BYTE *)(*(_DWORD *)a2 + v12) = 0;
  }
  return result;
}
