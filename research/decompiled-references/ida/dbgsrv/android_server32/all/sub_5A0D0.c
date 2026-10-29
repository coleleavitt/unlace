/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A0D0
// Address: 0x0005A0D0

//----- (0005A0D0) --------------------------------------------------------
int __fastcall sub_5A0D0(int a1)
{
  const char *v2; // r0
  int v3; // r5
  int *v4; // r0
  int *v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v12; // [sp+4h] [bp-254h]
  int v13; // [sp+8h] [bp-250h]
  _UNKNOWN **v14; // [sp+Ch] [bp-24Ch] BYREF
  void *v15; // [sp+10h] [bp-248h]
  int v16; // [sp+14h] [bp-244h]
  int v17; // [sp+18h] [bp-240h]
  int v18; // [sp+28h] [bp-230h]
  int v19; // [sp+244h] [bp-14h]

  if ( *(_DWORD *)(a1 + 4) )
    v2 = *(const char **)a1;
  else
    v2 = &byte_B3CBE;
  v3 = 0;
  v4 = open_linput(v2, 0);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_DWORD *)(a1 + 12);
    v3 = 0;
    if ( v6 == 11 )
    {
      v15 = nullptr;
      v16 = 0;
      v17 = 0;
      v14 = &off_DA024;
      v3 = sub_59A30((int)&v14, (int)v5, 1, 1);
      v14 = &off_DA024;
      if ( v3 )
        v3 = v19;
      if ( v15 )
      {
        v16 = 0;
        qfree(v15);
        v17 = 0;
        v15 = nullptr;
      }
    }
    else if ( v6 == 18 )
    {
      sub_2BCCC((int)&v14, v5, 0, 0);
      v3 = 0;
      sub_27920((int)&v14, nullptr);
      if ( sub_27938((int)&v14) )
      {
        if ( sub_27A6C((int)&v14) )
        {
          sub_2D12C((int *)&v14, v7, v8, v9, v12, v13, (int)v14, (int)v15, v16);
          if ( v10 )
            v3 = v18;
        }
      }
      sub_283E4(&v14);
    }
    close_linput(v5);
  }
  return v3;
}
// 5A138: variable 'v7' is possibly undefined
// 5A138: variable 'v8' is possibly undefined
// 5A138: variable 'v9' is possibly undefined
// 5A138: variable 'v12' is possibly undefined
// 5A138: variable 'v13' is possibly undefined
// 5A13E: variable 'v10' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
// DA024: using guessed type _UNKNOWN *off_DA024;
