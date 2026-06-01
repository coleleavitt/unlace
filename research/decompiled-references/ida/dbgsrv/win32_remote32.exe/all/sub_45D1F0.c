/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D1F0
// Address: 0x0045D1F0

//----- (0045D1F0) --------------------------------------------------------
int __stdcall sub_45D1F0(LPCCH lpMultiByteStr)
{
  int v1; // esi
  LPWSTR v3; // [esp+8h] [ebp-18h] BYREF
  unsigned int v4; // [esp+Ch] [ebp-14h]
  int v5; // [esp+1Ch] [ebp-4h]

  sub_4579C0(&v3, lpMultiByteStr);
  v5 = 0;
  if ( v4 <= 1 )
  {
    v1 = -1;
    *sub_46B984() = 42;
  }
  else
  {
    v1 = sub_476242(v3);
    if ( !v1 )
      goto LABEL_6;
  }
  sub_45CC20(1);
LABEL_6:
  v5 = 1;
  if ( v3 )
  {
    v4 = 0;
    sub_453A20(v3);
  }
  return v1;
}
// 45D237: conditional instruction was optimized away because %var_14.4>=2u
