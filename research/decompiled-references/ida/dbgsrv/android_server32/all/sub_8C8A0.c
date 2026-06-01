/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C8A0
// Address: 0x0008C8A0

//----- (0008C8A0) --------------------------------------------------------
_DWORD *__fastcall sub_8C8A0(int a1, _DWORD *a2)
{
  int v2; // r4
  __int64 *v3; // r1
  _DWORD v5[11]; // [sp+0h] [bp-30h] BYREF

  v2 = a1;
  if ( a2 )
  {
    sub_8F17E(v5, a2);
    a1 = v2;
    v3 = (__int64 *)v5;
  }
  else
  {
    v3 = nullptr;
  }
  return sub_8C8E4(a1, v3, 0);
}
