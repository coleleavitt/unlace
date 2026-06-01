/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7785C
// Address: 0x000000000007785C

//----- (000000000007785C) ----------------------------------------------------
__int64 __fastcall sub_7785C(__int64 *a1)
{
  int v1; // w8
  __int64 result; // x0
  unsigned __int64 v4; // x20
  _BOOL8 v5; // x8
  __int64 v6; // x8

  v1 = *(unsigned __int8 *)a1 - 2;
  result = 1;
  switch ( v1 )
  {
    case 0:
      return result;
    case 3:
      free_idcv(a1);
      a1[1] = 1;
      result = 1;
      break;
    case 5:
      v4 = a1[2];
      free_idcv(a1);
      v5 = v4 > 1;
      goto LABEL_6;
    case 7:
      v6 = a1[1];
      *(_BYTE *)a1 = 2;
      v5 = v6 != 0;
LABEL_6:
      a1[1] = v5;
      result = 1;
      break;
    default:
      set_qerrno(0x3Du);
      result = 0;
      break;
  }
  return result;
}
