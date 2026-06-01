/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400465E0
// Address: 0x00000001400465E0

//----- (00000001400465E0) ----------------------------------------------------
__int64 __fastcall sub_1400465E0(_QWORD *a1, __int16 a2)
{
  _QWORD *v2; // rdi
  void *v4; // rdx
  unsigned __int64 v6; // r8

  v2 = a1 + 16;
  v4 = (void *)a1[16];
  v6 = a1[17] + 1LL;
  if ( v6 > a1[18] )
  {
    v4 = sub_14005ABE0((__int64)v2, v4, v6, 2u);
    *v2 = v4;
  }
  *((_WORD *)v4 + a1[17]++) = a2;
  return 0;
}
