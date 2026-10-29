/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_691F8
// Address: 0x000691F8

//----- (000691F8) --------------------------------------------------------
int __fastcall sub_691F8(int a1, unsigned int a2)
{
  int v3[2]; // [sp+0h] [bp-18h] BYREF
  void *v4; // [sp+8h] [bp-10h]
  int v5; // [sp+Ch] [bp-Ch]
  int v6; // [sp+10h] [bp-8h]
  int v7; // [sp+14h] [bp-4h]

  if ( *(_DWORD *)(a1 + 4) != a2 )
  {
    v6 = 0;
    v5 = 0;
    v4 = nullptr;
    v3[1] = 0;
    v3[0] = 0;
    sub_69800(a1, a2, v3);
    if ( v4 )
    {
      v5 = 0;
      qfree(v4);
      v6 = 0;
      v4 = nullptr;
    }
  }
  return _stack_chk_guard - v7;
}
