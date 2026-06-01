/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38B2C
// Address: 0x00038B2C

//----- (00038B2C) --------------------------------------------------------
unsigned int __fastcall sub_38B2C(int a1, char *a2, int a3)
{
  int v4; // r6
  int v7; // [sp+8h] [bp-14h]
  void *v8[4]; // [sp+Ch] [bp-10h] BYREF

  v4 = *(_DWORD *)(a1 + 108);
  if ( v4 )
  {
    v7 = *(_DWORD *)(a1 + 116);
    sub_1B09C((int)v8, a2);
    sub_405F0(v4, v7, (int)v8);
    if ( v8[0] )
    {
      v8[1] = nullptr;
      qfree(v8[0]);
      v8[2] = nullptr;
      v8[0] = nullptr;
    }
    sub_407B8(*(_DWORD *)(a1 + 108), *(_DWORD *)(a1 + 116), a3);
  }
  return _stack_chk_guard - (unsigned int)v8[3];
}
