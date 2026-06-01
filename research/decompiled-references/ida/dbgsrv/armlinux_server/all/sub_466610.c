/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466610
// Address: 0x0000000000466610

//----- (0000000000466610) ----------------------------------------------------
__int64 __fastcall sub_466610(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE *v6; // x0
  unsigned int v7; // w19
  void *ptr[3]; // [xsp+38h] [xbp-28h] BYREF
  _BYTE v10[5]; // [xsp+50h] [xbp-10h] BYREF
  _BYTE v11[3]; // [xsp+55h] [xbp-Bh] BYREF

  sub_479010(55, (__int64 *)ptr);
  sub_470FA8((__int64)ptr, a2);
  v6 = sub_48E2D8(v10, (unsigned __int64)v11, a3);
  if ( v6 != v10 )
    sub_4630F0((__int64)ptr, v10, v6 - v10);
  v7 = sub_46F3C8(a1 + 192, (__int64 *)ptr, -1, 0);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    j__free(ptr[0]);
  }
  return v7;
}
