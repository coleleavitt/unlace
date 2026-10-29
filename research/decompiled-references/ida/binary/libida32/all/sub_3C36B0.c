bool __fastcall sub_3C36B0(_QWORD *a1, unsigned int a2, char a3, int *a4, int a5, unsigned int a6)
{
  bool result; // al
  int v8; // edx
  bool v9; // [rsp+8h] [rbp-20h]
  bool v10; // [rsp+8h] [rbp-20h]
  int v11; // [rsp+14h] [rbp-14h]
  unsigned int v12; // [rsp+18h] [rbp-10h]
  bool v13; // [rsp+1Fh] [rbp-9h]

  result = a4 != nullptr && (unsigned int)(a5 - 1) <= 0x1F;
  if ( result )
  {
    if ( *a4 == -1 )
    {
      return 0;
    }
    else
    {
      v8 = a3 & 0xF;
      if ( v8 )
      {
        if ( v8 == 15 )
        {
          v13 = a4 != nullptr && (unsigned int)(a5 - 1) <= 0x1F;
          v12 = a6;
          v11 = a5;
          sub_3C3560(a1, a2, 0xFu, a4, a5, a6);
          result = v13;
          a6 = v12;
          a5 = v11;
        }
        v9 = result;
        sub_3C3560(a1, a2, 0x10u, a4, a5, a6);
        return v9;
      }
      else
      {
        v10 = a4 != nullptr && (unsigned int)(a5 - 1) <= 0x1F;
        sub_3C3560(a1, a2, 0xFu, a4, a5, a6);
        return v10;
      }
    }
  }
  return result;
}

