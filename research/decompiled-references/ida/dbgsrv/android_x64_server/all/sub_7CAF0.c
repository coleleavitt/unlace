/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CAF0
// Address: 0x000000000007CAF0

//----- (000000000007CAF0) ----------------------------------------------------
__int64 __fastcall sub_7CAF0(__int64 a1, double a2, __m128 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // r14

  LOBYTE(v3) = 1;
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      return v3;
    case 5:
      free_idcv((char *)a1, a2, a3);
      *(_QWORD *)(a1 + 8) = 1;
      break;
    case 7:
      v4 = *(_QWORD *)(a1 + 16);
      free_idcv((char *)a1, a2, a3);
      *(_QWORD *)(a1 + 8) = v4 > 1;
      break;
    case 9:
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 8) != 0;
      *(_BYTE *)a1 = 2;
      break;
    default:
      set_qerrno(0x3Du);
      v3 = 0;
      break;
  }
  return v3;
}
// 7CB61: variable 'v3' is possibly undefined
