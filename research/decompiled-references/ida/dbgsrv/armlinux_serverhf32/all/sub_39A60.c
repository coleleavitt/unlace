/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39A60
// Address: 0x00039A60

//----- (00039A60) --------------------------------------------------------
int __fastcall sub_39A60(int a1)
{
  int result; // r0
  int v3; // r7
  _DWORD *v4; // r8
  const char *v5; // r0
  char *v6; // r0
  const char *v7; // r6

  *(_BYTE *)(a1 + 128) = 0;
  sub_3E56C(*(_DWORD **)(a1 + 112), 1, *(_WORD *)(a1 + 72));
  if ( *(unsigned __int8 *)(a1 + 120) == 175 || (result = sub_38AC8(a1)) == 0 )
  {
    sub_3E718(*(_DWORD *)(a1 + 108) + 16, (int *)(a1 + 216));
    v3 = *(_DWORD *)(a1 + 104);
    if ( v3 )
    {
      v4 = *(_DWORD **)(a1 + 108);
      v5 = v4[1] ? (const char *)*v4 : (const char *)&dword_8DA5C;
      v6 = strchr(v5, 46);
      if ( v6 )
      {
        v7 = v6 + 1;
        if ( !strcmp(v6 + 1, "__getattr__") )
        {
          *(_DWORD *)(v3 + 44) = sub_3ED34(*(_DWORD *)(a1 + 64), (int)v4);
          sub_398F4((_DWORD *)a1);
          return 0;
        }
        if ( !strcmp(v7, "__setattr__") )
          *(_DWORD *)(v3 + 48) = sub_3ED34(*(_DWORD *)(a1 + 64), (int)v4);
      }
    }
    sub_398F4((_DWORD *)a1);
    return 0;
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
