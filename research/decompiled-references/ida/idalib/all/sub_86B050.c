__int64 __fastcall sub_86B050(unsigned int *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  int v8; // edx
  int v9; // r15d
  char *v10; // rax
  __int64 result; // rax
  char *v12; // rax
  char *v13; // rax

  v8 = a5;
  a1[36] = 0;
  if ( a5 == 127 )
  {
    if ( a3 <= 126 )
    {
      v12 = sub_867CC0((__int64)a1, 1u, 127, a6, a3, 0);
      if ( !v12 )
        return *a1;
    }
    else
    {
      v12 = sub_867CC0((__int64)a1, 0x681u, 127, a6, a3, a4);
      if ( !v12 )
        return *a1;
    }
    *v12 = -57;
    return 0;
  }
  v9 = 15;
  if ( a3 <= 126 )
    v9 = a3;
  if ( (a3 & 0x80) != 0 && a5 <= 126 )
  {
LABEL_15:
    v13 = sub_867CC0((__int64)a1, 0x601u, v8, 0, a3, a4);
    if ( v13 )
    {
      *v13 = -119;
      return 0;
    }
    return *a1;
  }
  v10 = sub_867CC0((__int64)a1, 2u, v9, 0, a5, a6);
  if ( v10 )
  {
    *v10 = 15;
    v10[1] = a2 == 0 ? -73 : -65;
LABEL_8:
    if ( (a3 & 0x80) == 0 )
      return 0;
    v8 = v9;
    goto LABEL_15;
  }
  result = *a1;
  if ( !(_DWORD)result )
    goto LABEL_8;
  return result;
}
