__int64 __fastcall sub_4ED0(int a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r9
  char *v7; // rax
  __int64 result; // rax
  char *v9; // rcx
  char v10; // r9
  char v11; // r9
  char v12; // r9

  v6 = a2;
  LOWORD(v6) = BYTE1(a2);
  if ( BYTE1(a2) )
  {
    if ( a1 == 7 )
    {
      sub_3FF0(a2);
      v9 = sub_3FF0(v11);
    }
    else if ( a1 == 12 )
    {
      sub_4280(a2);
      v9 = sub_4280(v12);
    }
    else
    {
      v9 = "?";
      if ( !a1 )
      {
        sub_3D90(a2);
        v9 = sub_3D90(v10);
      }
    }
    return qsnprintf(a3, 1024, "%s:%s", v9);
  }
  else
  {
    if ( a1 == 7 )
    {
      v7 = sub_3FF0(a2);
    }
    else if ( a1 == 12 )
    {
      v7 = sub_4280(a2);
    }
    else
    {
      v7 = "?";
      if ( !a1 )
        v7 = sub_3D90(a2);
    }
    result = qstrncpy(a3, v7, 1024, a4, a5, v6);
    *(_BYTE *)(a3 + 1023) = 0;
  }
  return result;
}
