/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47544
// Address: 0x00047544

//----- (00047544) --------------------------------------------------------
int __fastcall sub_47544(int a1, unsigned int a2)
{
  unsigned __int8 v3[8]; // [sp+0h] [bp-20h] BYREF
  void *v4; // [sp+8h] [bp-18h]
  int v5; // [sp+Ch] [bp-14h]
  int v6; // [sp+10h] [bp-10h]
  int v7; // [sp+14h] [bp-Ch]
  int v8; // [sp+1Ch] [bp-4h]

  if ( *(_DWORD *)(a1 + 4) != a2 )
  {
    v3[0] = 2;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = nullptr;
    sub_3DE8C((void **)a1, a2, v3);
    if ( v3[0] == 5 )
    {
      sub_448A0((int)v4, v3);
    }
    else if ( v3[0] == 7 && v4 )
    {
      v5 = 0;
      qfree(v4);
      v6 = 0;
      v4 = nullptr;
    }
  }
  return _stack_chk_guard - v8;
}
