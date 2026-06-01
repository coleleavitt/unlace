/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46348
// Address: 0x00046348

//----- (00046348) --------------------------------------------------------
int __fastcall sub_46348(int a1)
{
  int result; // r0
  int v3; // r0
  int *v4; // r0
  int v5; // r3
  int v6; // [sp+0h] [bp-8h] BYREF

  if ( !a1 )
    return sub_70A2C(1531);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        result = 0;
        break;
      case 3:
        v3 = sub_71EB0(&v6, (int *)(a1 + 8), 0);
        if ( v3 == 1 )
        {
          v5 = v6;
          *(_BYTE *)a1 = 2;
          *(_DWORD *)(a1 + 8) = v5;
          result = 0;
        }
        else
        {
          result = sub_42358(v3);
        }
        break;
      case 7:
        if ( *(_DWORD *)(a1 + 12) )
          v4 = *(int **)(a1 + 8);
        else
          v4 = &dword_8DA5C;
        v6 = 0;
        sub_7EAE4((int)v4, "%i", &v6);
        sub_455C8((unsigned __int8 *)a1);
        *(_DWORD *)(a1 + 8) = v6;
        result = 0;
        break;
      case 9:
        result = 0;
        *(_BYTE *)a1 = 2;
        break;
      case 0xA:
        if ( sub_45A60((unsigned __int8 *)a1, 2) )
          continue;
        result = sub_70A10();
        break;
      default:
        return sub_70A2C(1531);
    }
    break;
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
