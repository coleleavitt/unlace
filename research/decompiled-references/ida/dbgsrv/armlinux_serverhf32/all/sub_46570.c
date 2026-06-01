/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46570
// Address: 0x00046570

//----- (00046570) --------------------------------------------------------
int __fastcall sub_46570(int a1)
{
  int v2; // r5
  unsigned __int8 *v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  _DWORD *v9; // r4
  unsigned __int8 *v10; // [sp+0h] [bp-18h] BYREF
  _DWORD v11[4]; // [sp+4h] [bp-14h] BYREF

  if ( !a1 )
    return sub_70A2C(1531);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        sub_71F6C(*(_DWORD *)(a1 + 8), a1 + 8);
        v2 = 0;
        *(_BYTE *)a1 = 3;
        break;
      case 3:
        v2 = 0;
        break;
      case 7:
        if ( *(_DWORD *)(a1 + 12) )
          v4 = *(unsigned __int8 **)(a1 + 8);
        else
          v4 = (unsigned __int8 *)&dword_8DA5C;
        v10 = v4;
        sub_720CC(&v10, v11);
        sub_455C8((unsigned __int8 *)a1);
        v5 = v11[0];
        v6 = v11[1];
        v7 = v11[2];
        v8 = v11[3];
        *(_BYTE *)a1 = 3;
        v9 = (_DWORD *)(a1 + 8);
        v2 = 0;
        *v9 = v5;
        v9[1] = v6;
        v9[2] = v7;
        v9[3] = v8;
        break;
      case 9:
        v2 = 0;
        sub_71FDC(*(int *)(a1 + 8), a1 + 8);
        *(_BYTE *)a1 = 3;
        break;
      case 0xA:
        if ( sub_45A60((unsigned __int8 *)a1, 2) )
          continue;
        v2 = sub_70A10();
        break;
      default:
        return sub_70A2C(1531);
    }
    break;
  }
  return v2;
}
// 8DA5C: using guessed type int dword_8DA5C;
