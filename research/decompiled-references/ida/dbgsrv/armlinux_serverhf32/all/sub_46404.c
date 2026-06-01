/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46404
// Address: 0x00046404

//----- (00046404) --------------------------------------------------------
int __fastcall sub_46404(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r0
  int v5; // r3
  int *v6; // r0
  __int64 v7; // r2
  __int64 v8; // [sp+0h] [bp-10h] BYREF

  if ( !a1 )
    return sub_70A2C(1531);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        v3 = *(_DWORD *)(a1 + 8);
        *(_BYTE *)a1 = 9;
        result = 0;
        *(_QWORD *)(a1 + 8) = v3;
        return result;
      case 3:
        v4 = sub_71EEC(&v8, (int *)(a1 + 8), 0);
        if ( v4 == 1 )
          goto LABEL_14;
        result = sub_42358(v4);
        break;
      case 7:
        v5 = *(_DWORD *)(a1 + 12);
        if ( v5 )
        {
          v6 = *(int **)(a1 + 8);
        }
        else
        {
          v5 = 1536;
          v6 = &dword_8DA5C;
        }
        v8 = 0;
        sub_7EAE4((int)v6, "%lli", &v8, v5);
        sub_455C8((unsigned __int8 *)a1);
LABEL_14:
        v7 = v8;
        *(_BYTE *)a1 = 9;
        *(_QWORD *)(a1 + 8) = v7;
        result = 0;
        break;
      case 9:
        result = 0;
        break;
      case 0xA:
        if ( sub_45A60((unsigned __int8 *)a1, 2) )
          continue;
        result = sub_70A10();
        break;
      default:
        return sub_70A2C(1531);
    }
    return result;
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
