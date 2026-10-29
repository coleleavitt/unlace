/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EDD0
// Address: 0x0042EDD0

//----- (0042EDD0) --------------------------------------------------------
void __thiscall sub_42EDD0(_DWORD *this, unsigned int a2)
{
  bool v3; // cf
  bool v4; // cc
  unsigned int *v5; // eax
  void *v6[3]; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v7[3]; // [esp+18h] [ebp-18h] BYREF
  int v8; // [esp+2Ch] [ebp-4h]

  v3 = a2 < *(this + 1);
  v4 = a2 <= *(this + 1);
  if ( a2 != *(this + 1) )
  {
    memset(v7, 0, sizeof(v7));
    v8 = 1;
    if ( v3 )
    {
      sub_415F90(this, a2);
    }
    else if ( !v4 )
    {
      if ( (unsigned int)v7 < *this || (unsigned int)v7 >= *this + 12 * *(this + 2) )
      {
        sub_42EF00((int)this, a2, v7);
      }
      else
      {
        v5 = sub_402AD0(v6, v7);
        LOBYTE(v8) = 2;
        sub_42EF00((int)this, a2, v5);
        LOBYTE(v8) = 3;
        if ( v6[0] )
        {
          v6[1] = nullptr;
          sub_453A20(v6[0]);
        }
      }
    }
    v8 = 4;
    if ( v7[0] )
      sub_453A20((void *)v7[0]);
  }
}
