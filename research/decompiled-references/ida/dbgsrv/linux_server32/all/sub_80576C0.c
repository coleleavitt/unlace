/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80576C0
// Address: 0x080576C0

//----- (080576C0) --------------------------------------------------------
int __cdecl sub_80576C0(int a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebx
  int v11; // [esp-14h] [ebp-38h]
  int v12; // [esp-10h] [ebp-34h]
  int v13; // [esp-Ch] [ebp-30h]

  v2 = *(_DWORD **)(a2 + 664);
  v3 = *(_DWORD *)(a1 + 4);
  if ( v2 )
  {
    v4 = (_DWORD *)(a2 + 660);
    do
    {
      while ( 1 )
      {
        v5 = v2[2];
        v6 = v2[3];
        if ( v3 > v2[4] )
          break;
        v4 = v2;
        v2 = (_DWORD *)v2[2];
        if ( !v5 )
          goto LABEL_6;
      }
      v2 = (_DWORD *)v2[3];
    }
    while ( v6 );
LABEL_6:
    if ( (_DWORD *)(a2 + 660) != v4 && v3 >= v4[4] )
    {
      if ( *((_BYTE *)v4 + 45) && !*(_BYTE *)(a2 + 733) && (*(_BYTE *)(a1 + 8) & 0x7F) != 0 )
      {
        if ( !byte_811F8A1 )
          sub_80CFF40(30185, v11, v12, v13);
        BUG();
      }
      if ( *((_BYTE *)v4 + 44) && *(_WORD *)(a1 + 8) == 4991 )
      {
        *((_BYTE *)v4 + 44) = 0;
        v4[10] = 1;
      }
      else
      {
        *((_BYTE *)v4 + 45) = 1;
        v4[12] = *(_DWORD *)(a1 + 8);
        ++*(_DWORD *)(a2 + 764);
      }
      return 1;
    }
  }
  v7 = *(_DWORD **)(a2 + 680);
  v8 = &v7[*(_DWORD *)(a2 + 684)];
  if ( v7 != v8 )
  {
    while ( v3 != *v7 )
    {
      if ( v8 == ++v7 )
        return 0;
    }
    v9 = 0;
    if ( v7 == v8 )
      return v9;
    ptrace(PTRACE_CONT, v3, 0, 0);
    return 1;
  }
  return 0;
}
// 80577F3: variable 'v11' is possibly undefined
// 80577F3: variable 'v12' is possibly undefined
// 80577F3: variable 'v13' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
