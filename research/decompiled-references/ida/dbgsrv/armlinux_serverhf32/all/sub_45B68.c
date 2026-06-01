/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B68
// Address: 0x00045B68

//----- (00045B68) --------------------------------------------------------
int __fastcall sub_45B68(int a1)
{
  int result; // r0
  size_t v3; // r9
  void *v4; // r0
  char v5; // r7
  _BYTE *v6; // r0
  int v7; // r3
  _BYTE *v8; // r0
  char v9; // r3
  char v10[1024]; // [sp+4h] [bp-408h] BYREF

  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        v7 = *(unsigned __int8 *)(a1 + 8);
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 12) = 0;
        *(_DWORD *)(a1 + 16) = 0;
        v10[0] = v7;
        if ( v7 )
        {
          v8 = sub_77EB0(a1 + 8, nullptr, 2u, 1u);
          v9 = v10[0];
          *(_DWORD *)(a1 + 8) = v8;
          *(_DWORD *)(a1 + 12) = 2;
          *v8 = v9;
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1) = 0;
        }
        *(_BYTE *)a1 = 7;
        result = 0;
        break;
      case 3:
        sub_72718(v10, 1024, (int *)(a1 + 8), 50);
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 12) = 0;
        *(_DWORD *)(a1 + 16) = 0;
        v3 = strlen(v10);
        v4 = sub_77EB0(a1 + 8, nullptr, v3 + 1, 1u);
        *(_DWORD *)(a1 + 8) = v4;
        *(_DWORD *)(a1 + 12) = v3 + 1;
        memmove(v4, v10, v3);
        result = 0;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v3) = 0;
        *(_BYTE *)a1 = 7;
        break;
      case 7:
        result = 0;
        break;
      case 9:
        v5 = *(_BYTE *)(a1 + 8);
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 12) = 0;
        *(_DWORD *)(a1 + 16) = 0;
        v10[0] = v5;
        v6 = sub_77EB0(a1 + 8, nullptr, 2u, 1u);
        *(_DWORD *)(a1 + 8) = v6;
        *(_DWORD *)(a1 + 12) = 2;
        *v6 = v5;
        result = 0;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1) = 0;
        *(_BYTE *)a1 = 7;
        break;
      case 0xA:
        if ( sub_45A60((unsigned __int8 *)a1, 2) )
          continue;
        result = sub_70A10();
        break;
      default:
        result = sub_70A2C(1531);
        break;
    }
    break;
  }
  return result;
}
