/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DBFB
// Address: 0x0046DBFB

//----- (0046DBFB) --------------------------------------------------------
int __cdecl sub_46DBFB(int a1, int a2, unsigned int *a3)
{
  int result; // eax
  int v4; // ecx
  unsigned int *v5; // ecx
  unsigned int v6; // edx
  int v7; // [esp-4h] [ebp-8h]

  switch ( a1 )
  {
    case 0:
      return sub_46D3BC((int *)a2, (int)a3);
    case 1:
      return sub_46D3FE((_DWORD *)a2, (int)a3);
    case 2:
      v4 = *(_BYTE *)(a2 + 776) != 0 ? 0x80000000 : 0;
      goto LABEL_6;
    case 3:
      v5 = a3;
      v6 = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) == 0 ? 2139095040 : -8388608) & 0xFF800000;
      goto LABEL_9;
    case 4:
      v4 = *(_BYTE *)(a2 + 776) == 0 ? 0x7FFFFFFF : -1;
LABEL_6:
      *a3 = v4;
      return 0;
    case 5:
      v5 = a3;
      v6 = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) == 0 ? 2139095040 : -8388608) & 0xFF800001 | 1;
LABEL_9:
      *v5 = v6;
      return 0;
    case 6:
      *a3 = -4194304;
      return 0;
    case 7:
      *a3 = 0;
      goto LABEL_14;
    case 8:
      v7 = 2;
      *a3 = *(_BYTE *)(a2 + 776) != 0 ? 0x80000000 : 0;
      goto LABEL_16;
    case 9:
      v7 = 3;
      *a3 = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) == 0 ? 2139095040 : -8388608) & 0xFF800000;
LABEL_16:
      result = v7;
      break;
    default:
LABEL_14:
      result = 1;
      break;
  }
  return result;
}
