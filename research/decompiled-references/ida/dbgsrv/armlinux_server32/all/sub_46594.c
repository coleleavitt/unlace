/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46594
// Address: 0x00046594

//----- (00046594) --------------------------------------------------------
int __fastcall sub_46594(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r0
  int v5; // r3
  int *v6; // r0
  __int64 v7; // r2
  __int64 v8; // [sp+0h] [bp-10h] BYREF

  if ( !a1 )
    return sub_70B98(1531);
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
        v4 = sub_72058(&v8, (int *)(a1 + 8), 0);
        if ( v4 == 1 )
          goto LABEL_14;
        result = sub_424E8(v4);
        break;
      case 7:
        v5 = *(_DWORD *)(a1 + 12);
        if ( v5 )
        {
          v6 = *(int **)(a1 + 8);
        }
        else
        {
          v5 = 1568;
          v6 = &dword_8DB98;
        }
        v8 = 0;
        sub_7EC4C((int)v6, "%lli", &v8, v5);
        sub_45758((unsigned __int8 *)a1);
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
        if ( sub_45BF0((unsigned __int8 *)a1, 2) )
          continue;
        result = sub_70B7C();
        break;
      default:
        return sub_70B98(1531);
    }
    return result;
  }
}
// 8DB98: using guessed type int dword_8DB98;
