/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A078
// Address: 0x0003A078

//----- (0003A078) --------------------------------------------------------
int __fastcall sub_3A078(int a1)
{
  _DWORD *v2; // r5
  const char *v3; // r0
  char *v4; // r0
  const char *v5; // r6

  *(_BYTE *)(a1 + 128) = 0;
  sub_401F8(*(_DWORD **)(a1 + 112), 1, *(_WORD *)(a1 + 72));
  if ( *(unsigned __int8 *)(a1 + 120) != 175 )
    sub_3A11C(a1);
  sub_403EC(*(_DWORD *)(a1 + 108) + 16, (int *)(a1 + 216));
  if ( *(_DWORD *)(a1 + 104) )
  {
    v2 = *(_DWORD **)(a1 + 108);
    v3 = v2[1] ? (const char *)*v2 : &byte_B3CBE;
    v4 = strchr(v3, 46);
    if ( v4 )
    {
      v5 = v4 + 1;
      if ( !strcmp(v4 + 1, "__getattr__") )
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 104) + 32) = sub_40968(*(_DWORD *)(a1 + 64), (int)v2);
      }
      else if ( !strcmp(v5, "__setattr__") )
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 104) + 36) = sub_40968(*(_DWORD *)(a1 + 64), (int)v2);
      }
    }
  }
  sub_38F58((_DWORD *)a1);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
