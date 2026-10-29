/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422E30
// Address: 0x00422E30

//----- (00422E30) --------------------------------------------------------
void __thiscall sub_422E30(unsigned int *this, unsigned int a2)
{
  char v2[8]; // [esp+4h] [ebp-24h] BYREF
  __int128 v3; // [esp+Ch] [ebp-1Ch]
  int v4; // [esp+24h] [ebp-4h]

  if ( a2 != *(this + 1) )
  {
    v2[0] = 2;
    v3 = 0;
    LODWORD(v3) = 0;
    v4 = 1;
    sub_422EB0(this, a2, v2);
    v4 = 2;
    sub_423B70((int)v2);
  }
}
