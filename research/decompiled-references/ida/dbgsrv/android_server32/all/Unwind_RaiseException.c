/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_RaiseException
// Address: 0x000995BC

//----- (000995BC) --------------------------------------------------------
int __fastcall Unwind_RaiseException(int *a1, int a2, int a3, int a4)
{
  int (__fastcall *v5)(_DWORD, int *, _BYTE *); // r3
  int v6; // r1
  int v7; // r2
  int v8; // r0
  int v10[3]; // [sp+0h] [bp-8A0h] BYREF
  int (__fastcall *v11)(_DWORD, int *, _BYTE *); // [sp+Ch] [bp-894h]
  int v12; // [sp+14h] [bp-88Ch]
  int v13; // [sp+20h] [bp-880h]
  _BYTE v14[1120]; // [sp+28h] [bp-878h] BYREF
  _DWORD v15[257]; // [sp+488h] [bp-418h] BYREF

  unw_getcontext(v15, a2, a3, a4, v10[0]);
  a1[3] = 0;
  unw_init_local((int)v14, v15);
  while ( 1 )
  {
    if ( unw_get_proc_info((int)v14, (int)v10) )
      return 3;
    v5 = v11;
    if ( v11 )
    {
      v6 = v13;
      v7 = v12;
      a1[18] = v10[0];
      a1[19] = v6;
      a1[20] = v7;
      v8 = v5(0, a1, v14);
      if ( v8 != 8 )
        break;
    }
  }
  if ( v8 != 6 )
  {
    if ( v8 == 9 )
      return 9;
    return 3;
  }
  sub_9965C(v15, (int)v14, a1, 0);
  return 2;
}
