/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74404
// Address: 0x00074404

//----- (00074404) --------------------------------------------------------
int __fastcall sub_74404(int a1, unsigned int a2)
{
  void *v3; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+4h] [bp-Ch]
  int v5; // [sp+8h] [bp-8h]
  int v6; // [sp+Ch] [bp-4h]

  if ( *(_DWORD *)(a1 + 4) != a2 )
  {
    v4 = 0;
    v3 = nullptr;
    v5 = 0;
    sub_74D40(a1, a2, (unsigned int)&v3);
    if ( v3 )
    {
      v4 = 0;
      qfree(v3);
      v5 = 0;
      v3 = nullptr;
    }
  }
  return _stack_chk_guard - v6;
}
