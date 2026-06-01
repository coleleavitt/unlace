/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A1F0
// Address: 0x0005A1F0

//----- (0005A1F0) --------------------------------------------------------
int __fastcall sub_5A1F0(const char *a1)
{
  int *v2; // r0
  int v3; // r6
  int *v4; // r5
  int v5; // r0
  int v6; // r1
  _DWORD *v7; // r0
  void *v8; // r4
  int v9; // r0
  int v11; // [sp+4h] [bp-250h]
  _UNKNOWN **v12; // [sp+8h] [bp-24Ch] BYREF
  void *v13; // [sp+Ch] [bp-248h]
  int v14; // [sp+10h] [bp-244h]
  int v15; // [sp+14h] [bp-240h]

  v2 = open_linput(a1, 0);
  v3 = -1;
  if ( v2 )
  {
    v4 = v2;
    sub_2BCCC((int)&v12, v2, 0, 0);
    if ( sub_27938((int)&v12) )
    {
      v5 = sub_27A6C((int)&v12);
      v6 = 18;
      if ( !v5 )
        v6 = -1;
      v3 = v6;
    }
    sub_283E4(&v12);
    close_linput(v4);
  }
  v7 = open_linput(a1, 0);
  if ( v7 )
  {
    v8 = v7;
    v11 = v3;
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    v12 = &off_DA024;
    v9 = sub_59A30((int)&v12, (int)v7, 0, 1);
    v12 = &off_DA024;
    v3 = 11;
    if ( !v9 )
      v3 = v11;
    if ( v13 )
    {
      v14 = 0;
      qfree(v13);
      v15 = 0;
      v13 = nullptr;
    }
    close_linput(v8);
  }
  return v3;
}
// DA024: using guessed type _UNKNOWN *off_DA024;
