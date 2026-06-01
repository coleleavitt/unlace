/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20000
// Address: 0x00020000

//----- (00020000) --------------------------------------------------------
char *__cdecl sub_20000(int a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  char **v4; // edi
  char **v5; // esi
  bool v6; // cc
  char *v7; // eax
  char *v8; // eax
  char *v9; // edx
  int v10; // eax
  char *v11; // edi
  char *v12; // esi
  unsigned __int16 v14; // [esp+16h] [ebp-36h]
  __int16 v15; // [esp+25h] [ebp-27h]
  char v16; // [esp+27h] [ebp-25h]
  _QWORD v17[4]; // [esp+28h] [ebp-24h] BYREF

  v2 = a2;
  v3 = a1;
  memset(v17, 0, 9);
  v4 = *(char ***)(a1 + 572);
  if ( v4 )
  {
    v5 = (char **)(a1 + 572);
    v6 = (int)v4[4] < a2;
    if ( (int)v4[4] <= a2 )
      goto LABEL_7;
    while ( 1 )
    {
      v7 = *v4;
      v5 = v4;
      if ( !*v4 )
        break;
      while ( 1 )
      {
        v4 = (char **)v7;
        v6 = *((_DWORD *)v7 + 4) < a2;
        if ( *((_DWORD *)v7 + 4) > a2 )
          break;
LABEL_7:
        if ( v6 )
        {
          v5 = v4 + 1;
          v7 = v4[1];
          if ( v7 )
            continue;
        }
        goto LABEL_12;
      }
    }
  }
  else
  {
    v4 = (char **)(a1 + 572);
  }
  v5 = v4;
LABEL_12:
  v8 = *v5;
  if ( !*v5 )
  {
    v9 = (char *)operator new(0x40u);
    *((_DWORD *)v9 + 4) = a2;
    *((_DWORD *)v9 + 5) = a2;
    *(_QWORD *)(v9 + 29) = 0;
    *((_QWORD *)v9 + 3) = v17[0];
    v9[39] = v16;
    *(_WORD *)(v9 + 37) = v15;
    *((_DWORD *)v9 + 10) = 1;
    *((_WORD *)v9 + 22) = 0;
    *(_DWORD *)(v9 + 46) = v14;
    *((_WORD *)v9 + 25) = 0;
    *((_DWORD *)v9 + 13) = 0;
    *((_DWORD *)v9 + 14) = 0;
    *((_DWORD *)v9 + 15) = 0;
    *(_DWORD *)v9 = 0;
    *((_DWORD *)v9 + 1) = 0;
    *((_DWORD *)v9 + 2) = v4;
    *v5 = v9;
    v10 = **(_DWORD **)(a1 + 568);
    v11 = v9;
    if ( v10 )
    {
      *(_DWORD *)(a1 + 568) = v10;
      v9 = *v5;
    }
    sub_2D500(*(_DWORD *)(a1 + 572), (int)v9);
    v3 = a1;
    ++*(_DWORD *)(a1 + 576);
    v2 = a2;
    v8 = v11;
  }
  v12 = v8;
  sub_202B0(v3, (_DWORD *)v8 + 13, v2);
  return v12 + 20;
}
// 200F1: variable 'v16' is possibly undefined
// 200F9: variable 'v15' is possibly undefined
// 2005E: variable 'v14' is possibly undefined
