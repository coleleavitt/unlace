/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DA6C
// Address: 0x0046DA6C

//----- (0046DA6C) --------------------------------------------------------
int __cdecl sub_46DA6C(char *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // ebx
  char v5; // al
  char v6; // al
  char v8; // al
  char v9; // dl
  char v10; // cl
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = 0;
  v12[0] = a2;
  v12[1] = a1;
  v12[2] = &a3;
  do
  {
    if ( *a1 != byte_4A6508[v4] && *a1 != byte_4A650C[v4] )
    {
      sub_46E635((int)v12);
      return 7;
    }
    v5 = sub_470F48((int)a2);
    ++v4;
    *a1 = v5;
  }
  while ( v4 != 3 );
  sub_4718A2(a2, v5);
  a3 = a2[4];
  a4 = a2[5];
  v6 = sub_470F48((int)a2);
  *a1 = v6;
  if ( v6 != 40 )
    return sub_46E635((int)v12) != 0 ? 4 : 7;
  *a1 = sub_470F48((int)a2);
  if ( sub_46DBC1(a1, (int)a2) )
  {
    sub_4718A2(a2, *a1);
    return 5;
  }
  else
  {
    v8 = sub_46DB87(a1, (int)a2);
    v9 = *a1;
    if ( v8 )
    {
      sub_4718A2(a2, v9);
      return 6;
    }
    else
    {
      if ( v9 != 41 )
      {
        v10 = *a1;
        while ( v10
             && ((unsigned __int8)(v10 - 48) <= 9u
              || (unsigned __int8)(v10 - 97) <= 0x19u
              || (unsigned __int8)(v10 - 65) <= 0x19u
              || v10 == 95) )
        {
          v10 = sub_470F48((int)a2);
          *a1 = v10;
          if ( v10 == 41 )
            return 4;
        }
        return sub_46E635((int)v12) != 0 ? 4 : 7;
      }
      return 4;
    }
  }
}
