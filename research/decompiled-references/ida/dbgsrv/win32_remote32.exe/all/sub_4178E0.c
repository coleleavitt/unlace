/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4178E0
// Address: 0x004178E0

//----- (004178E0) --------------------------------------------------------
unsigned int __cdecl sub_4178E0(unsigned int a1, unsigned int a2, unsigned __int16 *a3)
{
  char *v3; // eax
  unsigned int v4; // edi
  char *v6; // [esp+Ch] [ebp-18h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v6 = nullptr;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  sub_45A700((int)&v6, a3, -1);
  v3 = (char *)MultiByteStr;
  if ( v7 )
    v3 = v6;
  sub_45ACB0(a1, v3, a2);
  v4 = v7 != 0 ? v7 - 1 : 0;
  if ( v4 > a2 )
    v4 = a2;
  v9 = 1;
  if ( v6 )
  {
    v7 = 0;
    sub_453A20(v6);
  }
  return v4;
}
