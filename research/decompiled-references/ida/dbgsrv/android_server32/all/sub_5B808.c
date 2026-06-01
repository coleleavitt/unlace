/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B808
// Address: 0x0005B808

//----- (0005B808) --------------------------------------------------------
int __fastcall sub_5B808(unsigned int *a1, unsigned int a2)
{
  int v3; // [sp+0h] [bp-28h] BYREF
  void *v4; // [sp+4h] [bp-24h]
  int v5; // [sp+8h] [bp-20h]
  int v6; // [sp+Ch] [bp-1Ch]
  int v7; // [sp+10h] [bp-18h]
  int v8; // [sp+14h] [bp-14h]
  int v9; // [sp+18h] [bp-10h]
  int v10; // [sp+1Ch] [bp-Ch]
  int v11; // [sp+20h] [bp-8h]
  int v12; // [sp+24h] [bp-4h]

  if ( a1[1] != a2 )
  {
    v9 = 0;
    v4 = nullptr;
    v5 = 0;
    v6 = 0;
    v7 = 4;
    v8 = 0;
    v11 = 0;
    v3 = -1;
    v10 = -1;
    sub_634C8(a1, a2, (unsigned int)&v3);
    if ( v4 )
    {
      v5 = 0;
      qfree(v4);
      v6 = 0;
      v4 = nullptr;
    }
  }
  return _stack_chk_guard - v12;
}
