/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40150
// Address: 0x00040150

//----- (00040150) --------------------------------------------------------
int __fastcall sub_40150(int a1, const void *a2, size_t a3)
{
  int v5; // r5
  _BYTE v8[4]; // [sp+4h] [bp-8h] BYREF
  int v9; // [sp+8h] [bp-4h]

  if ( a3 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    v8[0] = 0;
    sub_370F6((void **)a1, v5 + a3, v8);
    qmemcpy((void *)(*(_DWORD *)a1 + v5), a2, a3);
  }
  return _stack_chk_guard - v9;
}
