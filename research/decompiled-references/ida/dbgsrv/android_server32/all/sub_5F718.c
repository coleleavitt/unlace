/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F718
// Address: 0x0005F718

//----- (0005F718) --------------------------------------------------------
int __fastcall sub_5F718(int a1, unsigned int a2)
{
  int v3; // [sp+0h] [bp-1Ch] BYREF
  int v4; // [sp+8h] [bp-14h]
  int v5; // [sp+Ch] [bp-10h]
  int v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]
  int v8; // [sp+18h] [bp-4h]

  if ( *(_DWORD *)(a1 + 4) != a2 )
  {
    v7 = 0;
    v6 = 0;
    v5 = -1;
    v4 = -1;
    v3 = -2;
    sub_63A30(a1, a2, (unsigned int)&v3);
    if ( v3 >= -1 )
    {
      if ( v4 )
      {
        v5 = 0;
        qfree((void *)v4);
        v6 = 0;
        v4 = 0;
      }
      v3 = -2;
    }
  }
  return _stack_chk_guard - v8;
}
