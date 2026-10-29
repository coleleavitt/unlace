__int64 __fastcall sub_86B2A0(unsigned int *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax
  int v8; // r13d
  int v9; // r12d
  char v11; // r12

  result = *a1;
  if ( !(_DWORD)result )
  {
    v8 = a4;
    v9 = a2;
    a1[36] = 0;
    if ( a6 == a3 )
      goto LABEL_5;
    if ( a4 != a3 )
    {
      result = sub_868510(a1, a3, 0, a6, 0);
      if ( (_DWORD)result )
        return result;
LABEL_5:
      if ( dword_2CD6FCC )
      {
        if ( (dword_2CD6FCC & 0x20) != 0 )
          goto LABEL_7;
      }
      else
      {
        sub_866DC0();
        if ( (dword_2CD6FCC & 0x20) != 0 )
        {
LABEL_7:
          if ( v8 == 127 )
          {
            result = sub_868510(a1, 16, 0, 127, a5);
            if ( (_DWORD)result )
              return result;
            a5 = 0;
            v8 = 16;
          }
          goto LABEL_8;
        }
      }
      return sub_868AA0(a1, v9, a3, v8, a5);
    }
    v9 = a2 ^ 1;
    if ( dword_2CD6FCC )
    {
      if ( (dword_2CD6FCC & 0x20) == 0 )
        goto LABEL_13;
    }
    else
    {
      sub_866DC0();
      if ( (dword_2CD6FCC & 0x20) == 0 )
      {
LABEL_13:
        v8 = a6;
        a5 = 0;
        return sub_868AA0(a1, v9, a3, v8, a5);
      }
    }
    v8 = a6;
    a5 = 0;
LABEL_8:
    v11 = byte_23C2EA0[v9] - 64;
    result = (__int64)sub_867CC0((__int64)a1, 2u, a3, 0, v8, a5);
    if ( result )
    {
      *(_BYTE *)result = 15;
      *(_BYTE *)(result + 1) = v11;
    }
  }
  return result;
}
