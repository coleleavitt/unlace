/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469AA4
// Address: 0x00469AA4

//----- (00469AA4) --------------------------------------------------------
char __thiscall sub_469AA4(int this, unsigned int a2)
{
  char v4; // bl
  SIZE_T v5; // esi
  void *v6; // eax
  LPVOID v7; // [esp+8h] [ebp-4h] BYREF

  if ( a2 <= 0x7FFFFFFF )
  {
    v4 = 0;
    v5 = 2 * a2;
    if ( (*(_DWORD *)(this + 1028) || v5 > 0x400) && v5 > *(_DWORD *)(this + 1024) )
    {
      v6 = sub_479531(v5);
      v7 = v6;
      if ( v6 )
      {
        sub_469D73((LPVOID *)(this + 1028), &v7);
        v6 = v7;
        v4 = 1;
        *(_DWORD *)(this + 1024) = v5;
      }
      sub_479216(v6);
      return v4;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *sub_46B984() = 12;
    return 0;
  }
}
