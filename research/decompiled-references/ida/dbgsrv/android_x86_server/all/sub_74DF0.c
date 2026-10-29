/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74DF0
// Address: 0x00074DF0

//----- (00074DF0) --------------------------------------------------------
int __cdecl sub_74DF0(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+0h] [ebp-1Ch]
  int v12[6]; // [esp+4h] [ebp-18h] BYREF

  v3 = a2;
  v12[1] = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 164) )
    goto LABEL_7;
  while ( 1 )
  {
    v4 = sub_6C7E0(a1, v12);
    if ( v12[0] )
      break;
    v11 = v4;
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 32);
      if ( !v8 )
        break;
      v5 = *(_DWORD *)(a1 + 28);
      v6 = v8 - 1;
      v7 = v8 + 27 * (v8 - 1) - 1;
      *(_DWORD *)a1 = *(_DWORD *)(v5 + v7 + 12);
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(v5 + v7 + 16);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(v5 + v7 + 24);
      *(_DWORD *)(a1 + 32) = v6;
      sub_1BC40((char **)(v5 + v7));
    }
    *(_DWORD *)(a1 + 4) = v11;
    *(_DWORD *)a1 = v11;
    *(_BYTE *)(a1 + 164) = 1;
    v3 = a2;
LABEL_7:
    v9 = sub_6EB10(a1, v3, 0, a3);
    if ( !v9 )
    {
      if ( *(_DWORD *)(a1 + 32) )
        v9 = sub_6FBF0(a1, v3);
    }
    v12[0] = v9;
    if ( v9 )
      return set_qerrno(v9);
    if ( *(_WORD *)(v3 + 12) == 1 )
    {
      *(_BYTE *)(a1 + 164) = 0;
    }
    else if ( *(_BYTE *)(a1 + 164) )
    {
      return 0;
    }
  }
  if ( v12[0] == 34 )
  {
LABEL_18:
    *(_WORD *)(v3 + 12) = 1;
    return 0;
  }
  if ( v12[0] == -1 )
  {
    v12[0] = 34;
    goto LABEL_18;
  }
  return set_qerrno(v12[0]);
}
