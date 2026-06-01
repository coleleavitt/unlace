__int64 __fastcall sub_54F5C0(__int64 a1, char **a2)
{
  char *v2; // rbp
  char *v3; // rax
  unsigned int v4; // edx
  char v6; // al
  char *v7; // rdx
  char *v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a2;
  v8[1] = (char *)__readfsqword(0x28u);
  v3 = sub_54F0B0(a1, v2, 0, 0);
  if ( v3 )
  {
    v4 = 0;
    if ( (*v3 & 0x3F) == 1 )
    {
      v6 = *v2;
      v7 = v2 + 1;
      v8[0] = v2 + 1;
      if ( (v6 & 0x3F) == 0x3D )
      {
        sub_54DE00(0, v8);
        v7 = v8[0];
      }
      *a2 = v7;
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v4;
}

