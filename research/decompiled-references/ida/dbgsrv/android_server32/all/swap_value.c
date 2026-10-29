/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_value
// Address: 0x00083CE4

//----- (00083CE4) --------------------------------------------------------
int __fastcall swap_value(int a1, int *a2, int a3)
{
  int result; // r0
  int v5; // r1

  result = a3 - 1;
  switch ( a3 )
  {
    case 1:
      result = *(unsigned __int8 *)a2;
      *(_BYTE *)a1 = result;
      break;
    case 2:
      result = ((*(unsigned __int16 *)a2 << 24) + ((*(unsigned __int16 *)a2 << 8) & 0xFF0000u)) >> 16;
      *(_WORD *)a1 = result;
      break;
    case 4:
      result = (*a2 << 24) + ((*a2 << 8) & 0xFF0000) + (((unsigned int)*a2 >> 8) & 0xFF00) + HIBYTE(*a2);
      *(_DWORD *)a1 = result;
      break;
    case 8:
      result = swap64(*a2, a2[1]);
      *(_DWORD *)a1 = result;
      *(_DWORD *)(a1 + 4) = v5;
      break;
    case 16:
      if ( (int *)a1 != a2 )
      {
        *(_DWORD *)(a1 + 12) = a2[3];
        *(_DWORD *)(a1 + 8) = a2[2];
        *(_DWORD *)(a1 + 4) = a2[1];
        *(_DWORD *)a1 = *a2;
      }
      result = swap128(a1);
      break;
    default:
      return result;
  }
  return result;
}
// 83D46: variable 'v5' is possibly undefined
