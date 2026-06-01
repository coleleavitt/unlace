/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_592CC
// Address: 0x000592CC

//----- (000592CC) --------------------------------------------------------
void **__fastcall sub_592CC(int *a1)
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
    v2 = (void **)sub_74A8C((int)&dword_8DB98, 0);
    v3 = v2;
    if ( v2 )
      goto LABEL_3;
    return v2;
  }
  v2 = (void **)sub_74A8C(*a1, 0);
  v3 = v2;
  if ( !v2 )
    return v2;
LABEL_3:
  if ( a1[3] == 11 )
  {
    v7 = nullptr;
    v8 = 0;
    v9 = 0;
    v6 = &off_D0E60;
    v4 = sub_58478((int)&v6, (int)v3, 1, 1);
    if ( v4 )
      v4 = v10;
    v6 = &off_D0E60;
    if ( v7 )
    {
      v8 = 0;
      sub_77F70(v7);
    }
  }
  else
  {
    v4 = 0;
  }
  sub_74B54(v3);
  return (void **)v4;
}
// 8DB98: using guessed type int dword_8DB98;
// D0E60: using guessed type _UNKNOWN *off_D0E60;
