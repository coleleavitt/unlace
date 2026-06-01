/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422C30
// Address: 0x00422C30

//----- (00422C30) --------------------------------------------------------
void __thiscall sub_422C30(unsigned int *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int *v3; // ecx
  unsigned int v4; // eax
  char v5[8]; // [esp+4h] [ebp-24h] BYREF
  __int128 v6; // [esp+Ch] [ebp-1Ch]
  int v7; // [esp+24h] [ebp-4h]

  v2 = *(this + 4);
  if ( a2 > v2 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(285);
  }
  v3 = this + 3;
  v4 = v2 - a2;
  if ( v4 != v3[1] )
  {
    v5[0] = 2;
    v6 = 0;
    LODWORD(v6) = 0;
    v7 = 1;
    sub_422EB0(v3, v4, v5);
    v7 = 2;
    sub_423B70((int)v5);
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
