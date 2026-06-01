/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4ACC8
// Address: 0x0004ACC8

//----- (0004ACC8) --------------------------------------------------------
int __fastcall sub_4ACC8(int a1)
{
  int v2; // r4
  int result; // r0
  unsigned int v4; // r6
  int v5; // r1

  v2 = 1;
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      goto LABEL_8;
    case 5:
      free_idcv((unsigned __int8 *)a1);
      *(_DWORD *)(a1 + 8) = 1;
      result = 1;
      break;
    case 7:
      v4 = *(_DWORD *)(a1 + 12);
      free_idcv((unsigned __int8 *)a1);
      *(_DWORD *)(a1 + 8) = v4 > 1;
      result = 1;
      break;
    case 9:
      *(_BYTE *)a1 = 2;
      v5 = 1;
      if ( !*(_QWORD *)(a1 + 8) )
        v5 = *(_DWORD *)(a1 + 12) | *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = v5;
      result = 1;
      break;
    default:
      set_qerrno(61);
      v2 = 0;
LABEL_8:
      result = v2;
      break;
  }
  return result;
}
