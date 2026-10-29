/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43AA50
// Address: 0x0043AA50

//----- (0043AA50) --------------------------------------------------------
int *__thiscall sub_43AA50(int *this, int *a2)
{
  int v3; // eax
  void **v4; // ecx
  _DWORD *v5; // ebx
  int v6; // ecx

  if ( this != a2 )
  {
    v3 = *this;
    if ( *a2 < -1 )
    {
      v5 = this + 2;
      if ( v3 >= -1 )
        sub_40B640((void **)this + 2, 0);
      v6 = a2[3];
      *v5 = a2[2];
      *(this + 3) = v6;
    }
    else
    {
      v4 = (void **)(this + 2);
      if ( v3 < -1 )
      {
        if ( this != (int *)-8 )
          sub_402AD0(v4, (unsigned int *)a2 + 2);
      }
      else
      {
        sub_43A9B0(v4, (unsigned int *)a2 + 2);
      }
    }
    *this = *a2;
  }
  return this;
}
