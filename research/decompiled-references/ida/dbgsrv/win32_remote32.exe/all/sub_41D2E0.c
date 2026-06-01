/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D2E0
// Address: 0x0041D2E0

//----- (0041D2E0) --------------------------------------------------------
char __cdecl sub_41D2E0(int a1)
{
  char result; // al
  int v2; // esi

  switch ( *(_BYTE *)a1 )
  {
    case 2:
      goto LABEL_7;
    case 5:
      sub_423B70(a1);
      *(_DWORD *)(a1 + 8) = 1;
      result = 1;
      break;
    case 7:
      v2 = *(_DWORD *)(a1 + 12);
      sub_423B70(a1);
      *(_DWORD *)(a1 + 8) = (v2 != 0 ? v2 - 1 : 0) != 0;
      result = 1;
      break;
    case 9:
      if ( *(_QWORD *)(a1 + 8) )
      {
        *(_BYTE *)a1 = 2;
        *(_DWORD *)(a1 + 8) = 1;
        result = 1;
      }
      else
      {
        *(_BYTE *)a1 = 2;
        *(_DWORD *)(a1 + 8) = 0;
LABEL_7:
        result = 1;
      }
      break;
    default:
      sub_45CC20(61);
      result = 0;
      break;
  }
  return result;
}
