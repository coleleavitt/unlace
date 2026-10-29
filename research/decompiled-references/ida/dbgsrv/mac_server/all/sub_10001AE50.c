/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001AE50
// Address: 0x000000010001AE50

//----- (000000010001AE50) ----------------------------------------------------
__int64 __fastcall sub_10001AE50(__int64 a1, unsigned __int64 a2, _QWORD *a3, int a4)
{
  int v5; // r15d
  _QWORD *v6; // r12
  unsigned __int64 *range; // rax

  if ( *(_QWORD *)(a1 + 152) )
  {
    v5 = a4;
    v6 = a3;
    range = rangeset_t_find_range(a1 + 144, a2);
    a3 = v6;
    a4 = v5;
    if ( range )
      a4 = v5 | 2;
  }
  return sub_1000192C0(a1, a2, a3, a4);
}
