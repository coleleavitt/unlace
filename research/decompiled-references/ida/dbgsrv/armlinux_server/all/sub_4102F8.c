/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4102F8
// Address: 0x00000000004102F8

//----- (00000000004102F8) ----------------------------------------------------
__int64 __fastcall sub_4102F8(_QWORD *a1)
{
  __int64 result; // x0
  _QWORD *v3; // x1
  __int64 (*v4)(void); // x2

  a1[254] = 0;
  sub_410058((__int64)a1);
  result = (__int64)a1;
  v3 = a1 + 109;
  a1[108] = -1;
  do
  {
    *(_DWORD *)v3 = 12;
    v3[1] = -1;
    v3[2] = 0;
    v3 += 3;
  }
  while ( v3 != a1 + 157 );
  do
  {
    *(_DWORD *)v3 = 12;
    v3[1] = -1;
    v3[2] = 0;
    v3 += 3;
  }
  while ( v3 != a1 + 205 );
  v4 = *(__int64 (**)(void))(*a1 + 648LL);
  if ( v4 != sub_4071E8 )
    return v4();
  return result;
}
