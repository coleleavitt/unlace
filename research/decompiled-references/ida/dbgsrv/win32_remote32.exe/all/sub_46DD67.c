/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DD67
// Address: 0x0046DD67

//----- (0046DD67) --------------------------------------------------------
int __cdecl sub_46DD67(int a1, int a2, _DWORD *a3)
{
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // [esp-4h] [ebp-4h]

  switch ( a1 )
  {
    case 0:
      return sub_46D3DD((int *)a2, (int)a3);
    case 1:
      return sub_46D41F((_DWORD *)a2, (int)a3);
    case 2:
      v4 = (*(_BYTE *)(a2 + 776) != 0) << 31;
      goto LABEL_6;
    case 3:
      v4 = ((*(_BYTE *)(a2 + 776) != 0) << 31) | 0x7FF00000;
LABEL_6:
      v5 = a3;
      *a3 = 0;
      goto LABEL_7;
    case 4:
      v5 = a3;
      v4 = ((*(_BYTE *)(a2 + 776) != 0) << 31) | 0x7FFFFFFF;
      *a3 = -1;
LABEL_7:
      v5[1] = v4;
      return 0;
    case 5:
      sub_46D275(*(_BYTE *)(a2 + 776), a3);
      return 0;
    case 6:
      *a3 = 0;
      a3[1] = -524288;
      return 0;
    case 7:
      *a3 = 0;
      a3[1] = 0;
      goto LABEL_14;
    case 8:
      v7 = 2;
      v6 = (*(_BYTE *)(a2 + 776) != 0) << 31;
      goto LABEL_16;
    case 9:
      v7 = 3;
      v6 = ((*(_BYTE *)(a2 + 776) != 0) << 31) | 0x7FF00000;
LABEL_16:
      *a3 = 0;
      a3[1] = v6;
      result = v7;
      break;
    default:
LABEL_14:
      result = 1;
      break;
  }
  return result;
}
