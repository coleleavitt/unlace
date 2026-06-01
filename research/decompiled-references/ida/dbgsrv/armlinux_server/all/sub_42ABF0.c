/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42ABF0
// Address: 0x000000000042ABF0

//----- (000000000042ABF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_42ABF0(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v5; // x1
  int v6; // w2
  bool v7; // cf

  if ( *(_QWORD *)(a1 + 8) > 1u )
    return a1;
  v5 = a2[36];
  v6 = 0;
  if ( a1 )
    v7 = a1 >= v5;
  else
    v7 = 0;
  if ( v7 && a1 <= v5 + 96LL * a2[37] )
    v6 = (0xAAAAAAAAAAAAAAABLL * ((__int64)(a1 - v5) >> 5) >= a2[39]) + 1;
  sub_42ABB0((__int64)a2, a1, v6, *(_DWORD *)(a1 + 48));
  return a1;
}
