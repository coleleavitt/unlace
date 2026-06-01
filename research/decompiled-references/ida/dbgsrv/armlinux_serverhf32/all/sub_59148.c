/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59148
// Address: 0x00059148

//----- (00059148) --------------------------------------------------------
void **__fastcall sub_59148(int *a1)
{
  void **v2; // r0
  void **v3; // r5
  int v4; // r4
  _UNKNOWN **v6; // [sp+0h] [bp-248h] BYREF
  void *v7; // [sp+4h] [bp-244h]
  int v8; // [sp+8h] [bp-240h]
  int v9; // [sp+Ch] [bp-23Ch]
  int v10; // [sp+238h] [bp-10h]

  if ( !a1[1] )
  {
    v2 = (void **)sub_74920((int)&dword_8DA5C, 0);
    v3 = v2;
    if ( v2 )
      goto LABEL_3;
    return v2;
  }
  v2 = (void **)sub_74920(*a1, 0);
  v3 = v2;
  if ( !v2 )
    return v2;
LABEL_3:
  if ( a1[3] == 11 )
  {
    v7 = nullptr;
    v8 = 0;
    v9 = 0;
    v6 = &off_CFE60;
    v4 = sub_582F4((int)&v6, (int)v3, 1, 1);
    if ( v4 )
      v4 = v10;
    v6 = &off_CFE60;
    if ( v7 )
    {
      v8 = 0;
      sub_77E08(v7);
    }
  }
  else
  {
    v4 = 0;
  }
  sub_749E8(v3);
  return (void **)v4;
}
// 8DA5C: using guessed type int dword_8DA5C;
// CFE60: using guessed type _UNKNOWN *off_CFE60;
