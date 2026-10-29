/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D8D0
// Address: 0x0043D8D0

//----- (0043D8D0) --------------------------------------------------------
void __thiscall sub_43D8D0(_DWORD *this, unsigned int a2)
{
  bool v3; // cf
  bool v4; // cc
  int v5[2]; // [esp+Ch] [ebp-3Ch] BYREF
  __int128 v6; // [esp+14h] [ebp-34h]
  int v7[2]; // [esp+24h] [ebp-24h] BYREF
  __int64 v8; // [esp+2Ch] [ebp-1Ch]
  __int64 v9; // [esp+34h] [ebp-14h]
  int v10; // [esp+44h] [ebp-4h]

  v3 = a2 < *(this + 1);
  v4 = a2 <= *(this + 1);
  if ( a2 != *(this + 1) )
  {
    v7[0] = -2;
    v9 = 0;
    v8 = -1;
    v10 = 2;
    if ( v3 )
    {
      sub_415E40(this, a2);
    }
    else if ( !v4 )
    {
      if ( (unsigned int)v7 < *this || (unsigned int)v7 >= *this + 24 * *(this + 2) )
      {
        sub_43D9E0((int)this, a2, v7);
      }
      else
      {
        v5[0] = -2;
        v6 = 0;
        sub_43AA50(v5, v7);
        LOBYTE(v10) = 3;
        sub_43D9E0((int)this, a2, v5);
        if ( v5[0] >= -1 )
        {
          LOBYTE(v10) = 4;
          if ( (_DWORD)v6 )
          {
            DWORD1(v6) = 0;
            sub_453A20((void *)v6);
          }
        }
      }
    }
    v10 = -1;
    if ( v7[0] >= -1 )
    {
      v10 = 6;
      if ( (_DWORD)v8 )
      {
        HIDWORD(v8) = 0;
        sub_453A20((void *)v8);
      }
    }
  }
}
