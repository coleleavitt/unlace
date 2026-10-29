/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4403E0
// Address: 0x00000000004403E0

//----- (00000000004403E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4403E0(__int64 a1, int a2)
{
  _QWORD *v3; // x0
  unsigned __int64 result; // x0

  v3 = (_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v3[2] = v3;
  v3[3] = v3;
  v3[4] = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 52) = a2;
  result = *(_QWORD *)(sub_43CF60() + 72);
  if ( *(int *)(a1 + 52) >= result )
    *(_DWORD *)(a1 + 52) = 0;
  return result;
}
