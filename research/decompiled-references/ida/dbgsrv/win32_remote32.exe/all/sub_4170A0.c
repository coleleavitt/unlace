/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4170A0
// Address: 0x004170A0

//----- (004170A0) --------------------------------------------------------
void __cdecl sub_4170A0(unsigned int a1, LPCCH lpMultiByteStr, int a3)
{
  char *v3; // eax
  int v4; // [esp+4h] [ebp-18h] BYREF
  int v5; // [esp+8h] [ebp-14h]
  int v6; // [esp+Ch] [ebp-10h]
  int v7; // [esp+18h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  sub_459B00((int)&v4, lpMultiByteStr, 0, 0xFDE9u);
  v3 = (char *)MultiByteStr;
  if ( v5 )
    v3 = (char *)v4;
  sub_45ACB0(a1, v3, a3);
  v7 = 1;
  if ( v4 )
  {
    v5 = 0;
    sub_453A20((void *)v4);
  }
}
