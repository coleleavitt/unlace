__int64 __fastcall sub_3F8030(__int64 a1, int a2, signed int a3, double a4)
{
  __int64 v4; // r12
  unsigned __int8 v6; // r13
  __int16 v7; // ax
  unsigned int v8; // r15d
  unsigned __int8 v9; // al
  unsigned int v10; // eax
  __int16 v12; // ax
  unsigned __int64 dtype_size; // [rsp+8h] [rbp-40h]

  v4 = a1 + 64;
  if ( !sub_3EE080(a1, a1 + 64) )
  {
    if ( !under_debugger )
      sub_3835A0(0xC87Cu, a1 + 64, a4);
    BUG();
  }
  v6 = sub_3EE470(a1, a1 + 64, 0, a4);
  v7 = *(_WORD *)(a1 + 48);
  if ( v7 == 24 || v7 == 493 )
  {
    v8 = 19;
    sub_3F6E70(a1, 7u, v6, a3, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 628LL), a4, 0, 1);
    a3 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL);
    v12 = *(_WORD *)(a1 + 48);
    if ( v12 != 22 )
    {
      v8 = 4;
      if ( v12 == 24 )
        v8 = 20;
    }
  }
  else
  {
    v8 = 19;
    if ( v7 != 22 )
      v8 = 4;
  }
  v9 = sub_3EE110(a1, v4, a4);
  dtype_size = get_dtype_size(v9);
  v10 = sub_3EE210(a1, v4, a4);
  return sub_3F7790(a1, v8, a2, a3, dtype_size / v10, v6, a4, 0);
}
