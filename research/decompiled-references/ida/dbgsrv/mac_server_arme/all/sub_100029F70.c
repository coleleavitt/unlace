/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100029F70
// Address: 0x0000000100029F70

//----- (0000000100029F70) ----------------------------------------------------
__int64 __fastcall sub_100029F70(__int64 a1)
{
  __int64 v1; // x8
  int *v2; // x19
  int *v3; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  v1 = *(_QWORD *)(a1 + 352);
  v2 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * v1 - 8);
  if ( v1 )
    *(_QWORD *)(a1 + 352) = v1 - 1;
  if ( (*v2 | 4) == 5 )
    sub_100029A64(a1, (__int64)v2, 0, -1);
  v3 = sub_100028214(v2);
  operator delete(v3);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return set_qerrno();
}
// 100029FE0: variable '_18' is possibly undefined
