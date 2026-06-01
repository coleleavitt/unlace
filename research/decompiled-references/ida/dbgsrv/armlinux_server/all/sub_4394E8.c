/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4394E8
// Address: 0x00000000004394E8

//----- (00000000004394E8) ----------------------------------------------------
__int64 __fastcall sub_4394E8(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 v3; // x4
  _DWORD *v4; // x19
  unsigned int v5; // w20

  v3 = *(_QWORD *)(a1 + 352);
  v4 = *(_DWORD **)(*(_QWORD *)(a1 + 344) + 8 * v3 - 8);
  if ( v3 )
    *(_QWORD *)(a1 + 352) = v3 - 1;
  if ( !a3 || (v5 = 58, (*v4 & 0xFFFFFFFB) == 1) )
    v5 = sub_4390B8(a1, (__int64)v4, a2, a3);
  if ( v4 )
  {
    sub_4382E8((__int64)v4);
    j_j__free_0(v4);
  }
  return sub_4869C8(v5);
}
