bool __fastcall sub_3C8980(__int64 *a1, __int64 a2, char a3, unsigned __int64 *a4, int a5, __int64 a6)
{
  bool result; // al
  int v8; // edx
  bool v9; // [rsp+0h] [rbp-28h]
  bool v10; // [rsp+0h] [rbp-28h]
  __int64 v11; // [rsp+10h] [rbp-18h]
  int v12; // [rsp+18h] [rbp-10h]
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
          v11 = a6;
          v12 = a5;
          sub_3C8820(a1, a2, 15, a4, a5, a6);
          result = v13;
          a6 = v11;
          a5 = v12;
        }
        v9 = result;
        sub_3C8820(a1, a2, 16, a4, a5, a6);
        return v9;
      }
      else
      {
        v10 = a4 != nullptr && (unsigned int)(a5 - 1) <= 0x1F;
        sub_3C8820(a1, a2, 15, a4, a5, a6);
        return v10;
      }
    }
  }
  return result;
}
