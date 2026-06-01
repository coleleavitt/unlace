/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48390
// Address: 0x00048390

//----- (00048390) --------------------------------------------------------
int __fastcall sub_48390(int a1, unsigned int a2)
{
  unsigned int v2; // r3
  void **v3; // r0
  unsigned __int8 v5[8]; // [sp+0h] [bp-20h] BYREF
  void *v6; // [sp+8h] [bp-18h]
  int v7; // [sp+Ch] [bp-14h]
  int v8; // [sp+10h] [bp-10h]
  int v9; // [sp+14h] [bp-Ch]
  int v10; // [sp+1Ch] [bp-4h]

  v2 = *(_DWORD *)(a1 + 16);
  v3 = (void **)(a1 + 12);
  if ( v2 < a2 )
  {
    if ( !under_debugger )
      interr(285);
    __debugbreak();
  }
  if ( a2 )
  {
    v5[0] = 2;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6 = nullptr;
    sub_3DE8C(v3, v2 - a2, v5);
    if ( v5[0] == 5 )
    {
      sub_448A0((int)v6, v5);
    }
    else if ( v5[0] == 7 && v6 )
    {
      v7 = 0;
      qfree(v6);
      v8 = 0;
      v6 = nullptr;
    }
  }
  return _stack_chk_guard - v10;
}
// E0550: using guessed type char under_debugger;
