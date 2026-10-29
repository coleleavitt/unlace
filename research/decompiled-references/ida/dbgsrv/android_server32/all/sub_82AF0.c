/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82AF0
// Address: 0x00082AF0

//----- (00082AF0) --------------------------------------------------------
int __fastcall sub_82AF0(int a1)
{
  void *v3; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+4h] [bp-Ch]
  int v5; // [sp+8h] [bp-8h]
  int v6; // [sp+Ch] [bp-4h]

  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      v4 = 0;
      v3 = nullptr;
      v5 = 0;
      sub_83BF0((int *)a1, &v3);
      add_undo_record();
      *(_DWORD *)(a1 + 4) = 0;
      if ( v3 )
      {
        v4 = 0;
        qfree(v3);
        v5 = 0;
        v3 = nullptr;
      }
    }
  }
  return _stack_chk_guard - v6;
}
