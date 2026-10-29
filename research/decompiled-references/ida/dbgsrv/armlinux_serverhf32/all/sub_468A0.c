/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468A0
// Address: 0x000468A0

//----- (000468A0) --------------------------------------------------------
int __fastcall sub_468A0(int a1)
{
  int result; // r0
  __int64 v3; // r2
  _BOOL4 v4; // r5

  switch ( *(_BYTE *)a1 )
  {
    case 2:
      result = 1;
      break;
    case 5:
      sub_455C8((unsigned __int8 *)a1);
      *(_DWORD *)(a1 + 8) = 1;
      result = 1;
      break;
    case 7:
      v4 = *(_DWORD *)(a1 + 12) > 1u;
      sub_455C8((unsigned __int8 *)a1);
      *(_DWORD *)(a1 + 8) = v4;
      result = 1;
      break;
    case 9:
      v3 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)a1 = 2;
      *(_DWORD *)(a1 + 8) = v3 != 0;
      result = 1;
      break;
    default:
      sub_70A2C(61);
      result = 0;
      break;
  }
  return result;
}
