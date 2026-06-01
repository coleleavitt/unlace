/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464D8
// Address: 0x000464D8

//----- (000464D8) --------------------------------------------------------
int __fastcall sub_464D8(int a1)
{
  int result; // r0
  int v3; // r0
  int *v4; // r0
  int v5; // r3
  int v6; // [sp+0h] [bp-8h] BYREF

  if ( !a1 )
    return sub_70B98(1531);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        result = 0;
        break;
      case 3:
        v3 = sub_7201C(&v6, (int *)(a1 + 8), 0);
        if ( v3 == 1 )
        {
          v5 = v6;
          *(_BYTE *)a1 = 2;
          *(_DWORD *)(a1 + 8) = v5;
          result = 0;
        }
        else
        {
          result = sub_424E8(v3);
        }
        break;
      case 7:
        if ( *(_DWORD *)(a1 + 12) )
          v4 = *(int **)(a1 + 8);
        else
          v4 = &dword_8DB98;
        v6 = 0;
        sub_7EC4C((int)v4, "%i", &v6);
        sub_45758((unsigned __int8 *)a1);
        *(_DWORD *)(a1 + 8) = v6;
        result = 0;
        break;
      case 9:
        result = 0;
        *(_BYTE *)a1 = 2;
        break;
      case 0xA:
        if ( sub_45BF0((unsigned __int8 *)a1, 2) )
          continue;
        result = sub_70B7C();
        break;
      default:
        return sub_70B98(1531);
    }
    break;
  }
  return result;
}
// 8DB98: using guessed type int dword_8DB98;
