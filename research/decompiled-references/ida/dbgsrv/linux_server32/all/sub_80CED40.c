/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CED40
// Address: 0x080CED40

//----- (080CED40) --------------------------------------------------------
int __cdecl sub_80CED40(int a1)
{
  int v1; // edx
  int result; // eax
  _BYTE v3[12]; // [esp+0h] [ebp-5Ch] BYREF
  int v4; // [esp+Ch] [ebp-50h]
  unsigned int v5; // [esp+4Ch] [ebp-10h]

  v5 = __readgsdword(0x14u);
  v1 = sub_80CEBF0(a1, (int)v3);
  result = 0;
  if ( !v1 )
  {
    result = v4 & 0xF000;
    LOBYTE(result) = result != 0x4000;
  }
  if ( v5 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
