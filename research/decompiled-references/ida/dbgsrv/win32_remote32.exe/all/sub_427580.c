/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427580
// Address: 0x00427580

//----- (00427580) --------------------------------------------------------
int __thiscall sub_427580(int (***this)[49])
{
  int (***v1)[49]; // edi
  int (**v2)[49]; // ebx
  int v3; // eax
  int *v4; // esi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  int (**v8)[49]; // edx
  int (**v9)[49]; // ecx
  int (**v10)[49]; // esi
  int result; // eax
  int (**v12)[49]; // [esp-4h] [ebp-28h]
  int v13; // [esp-4h] [ebp-28h]
  int v15; // [esp+14h] [ebp-10h]

  v1 = this;
  v2 = *this;
  v3 = (int)&(*this)[(_DWORD)*(this + 1)];
  v15 = v3;
  if ( *this != (int (**)[49])v3 )
  {
    do
    {
      v4 = (int *)*v2;
      if ( *v2 )
      {
        v5 = (void *)v4[14];
        if ( v5 )
        {
          v4[15] = 0;
          sub_453A20(v5);
          v4[14] = 0;
          v4[16] = 0;
        }
        if ( v4[11] )
        {
          sub_428990(v4 + 11, 0);
          sub_453A20((void *)v4[11]);
          v4[11] = 0;
          v4[13] = 0;
        }
        if ( v4[8] )
        {
          sub_422F80((unsigned int *)v4 + 8, 0);
          sub_453A20((void *)v4[8]);
          v4[8] = 0;
          v4[10] = 0;
        }
        v6 = (void *)v4[4];
        if ( v6 )
        {
          v4[5] = 0;
          sub_453A20(v6);
          v4[4] = 0;
          v4[6] = 0;
        }
        v7 = (void *)*v4;
        if ( *v4 )
        {
          v4[1] = 0;
          sub_453A20(v7);
          *v4 = 0;
          v4[2] = 0;
        }
        sub_4627F2(v4);
        v3 = v15;
      }
      ++v2;
    }
    while ( v2 != (int (**)[49])v3 );
    v1 = this;
  }
  if ( *v1 )
  {
    v12 = *v1;
    v1[1] = nullptr;
    sub_453A20(v12);
    *v1 = nullptr;
    v1[2] = nullptr;
  }
  v8 = v1[6];
  if ( (int (**)[49])dword_4B4060 != v8 )
  {
    v9 = off_4B4064;
    v2 = &off_4B4064[6 * dword_4B4060];
    v10 = &off_4B4064[6 * (_DWORD)v8];
    if ( v10 < v2 )
    {
      do
      {
        v13 = (int)v10;
        v10 += 6;
        sub_427810(v13);
      }
      while ( v10 < v2 );
      v9 = off_4B4064;
    }
    sub_453A20(v9);
    off_4B4064 = v1[5];
    dword_4B4060 = (int)v1[6];
  }
  sub_41FC70((void **)v1 + 10);
  sub_4342E0((int)v2, (int *)v1[3]);
  v1[3] = nullptr;
  result = sub_438510((int)v2, (int)v1[4]);
  v1[4] = nullptr;
  return result;
}
// 4B4060: using guessed type int dword_4B4060;
// 4B4064: using guessed type int (**off_4B4064)[49];
