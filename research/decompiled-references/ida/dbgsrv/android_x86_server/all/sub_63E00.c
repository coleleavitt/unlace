/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63E00
// Address: 0x00063E00

//----- (00063E00) --------------------------------------------------------
char __cdecl sub_63E00(int a1)
{
  char result; // al
  unsigned int v2; // edi

  result = 1;
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      return result;
    case 5:
      free_idcv((char *)a1);
      *(_DWORD *)(a1 + 4) = 1;
      result = 1;
      break;
    case 7:
      v2 = *(_DWORD *)(a1 + 8);
      free_idcv((char *)a1);
      *(_DWORD *)(a1 + 4) = v2 > 1;
      result = 1;
      break;
    case 9:
      *(_DWORD *)(a1 + 4) = *(_QWORD *)(a1 + 4) != 0;
      *(_BYTE *)a1 = 2;
      break;
    default:
      set_qerrno(61);
      result = 0;
      break;
  }
  return result;
}
