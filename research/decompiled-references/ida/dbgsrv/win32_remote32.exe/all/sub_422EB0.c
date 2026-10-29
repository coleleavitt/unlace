/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422EB0
// Address: 0x00422EB0

//----- (00422EB0) --------------------------------------------------------
void __thiscall sub_422EB0(unsigned int *this, unsigned int a2, char *a3)
{
  char v4[8]; // [esp+Ch] [ebp-24h] BYREF
  __int128 v5; // [esp+14h] [ebp-1Ch]
  int v6; // [esp+2Ch] [ebp-4h]

  if ( a2 >= *(this + 1) )
  {
    if ( a2 > *(this + 1) )
    {
      if ( (unsigned int)a3 < *this || (unsigned int)a3 >= *this + 24 * *(this + 2) )
      {
        sub_423000((int)this, a2, a3);
      }
      else
      {
        v4[0] = 2;
        v5 = 0;
        sub_423670(v4, a3);
        v6 = 0;
        sub_423000((int)this, a2, v4);
        v6 = 1;
        sub_423B70((int)v4);
      }
    }
  }
  else
  {
    sub_422F80(this, a2);
  }
}
