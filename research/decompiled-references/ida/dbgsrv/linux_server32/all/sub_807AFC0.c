/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807AFC0
// Address: 0x0807AFC0

//----- (0807AFC0) --------------------------------------------------------
int __cdecl sub_807AFC0(_DWORD *a1)
{
  int v1; // eax
  _DWORD *v2; // edi
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  char *v7; // eax
  int v8; // [esp+4h] [ebp-28h]
  int v9; // [esp+8h] [ebp-24h]
  int v10; // [esp+Ch] [ebp-20h]

  sub_807A0A0(a1);
  v1 = *(_DWORD *)(a1[25] + 24);
  if ( !v1 )
  {
    v4 = a1[48];
    v5 = *(_DWORD *)(a1[47] + 4 * v4 - 4);
LABEL_8:
    if ( v4 )
    {
      v6 = v4 - 1;
      a1[48] = v6;
      if ( !v5 )
      {
LABEL_11:
        if ( v6 )
        {
          if ( !byte_811F8A1 )
            sub_80CFF40(270, v8, v9, v10);
          BUG();
        }
        return 0;
      }
    }
    else if ( !v5 )
    {
      return 0;
    }
    sub_8079DB0((unsigned int *)v5);
    operator delete((void *)v5, 0x10u);
    v6 = a1[48];
    goto LABEL_11;
  }
  while ( 1 )
  {
    v2 = *(_DWORD **)(*(_DWORD *)(a1[15] + 36) + 4 * v1);
    if ( sub_8084920(v2, (int)(v2 + 8)) != 0x7FFFFFFF )
      return sub_807AE10((int)a1, 0, 0);
    v4 = a1[48];
    v5 = *(_DWORD *)(a1[47] + 4 * v4 - 4);
    if ( *(int *)(v5 + 12) > 0 )
      break;
    if ( !v2[6] )
      goto LABEL_8;
    v1 = *(_DWORD *)(a1[25] + 24);
  }
  v7 = (char *)&dword_80DDFD8;
  if ( v2[9] )
    v7 = (char *)v2[8];
  sub_80C7910(0, v7);
  return sub_80C7880(56);
}
// 807B0FC: variable 'v8' is possibly undefined
// 807B0FC: variable 'v9' is possibly undefined
// 807B0FC: variable 'v10' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
