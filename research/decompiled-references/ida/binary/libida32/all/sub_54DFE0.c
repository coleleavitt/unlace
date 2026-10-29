__int64 __fastcall sub_54DFE0(__int64 a1, char **a2)
{
  char *v2; // rax
  char v3; // al
  __int64 result; // rax
  char v5; // [rsp+Fh] [rbp-29h] BYREF
  char *v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = (char *)__readfsqword(0x28u);
  v2 = *a2;
  if ( !*a2 )
    return 0;
  v6[0] = v2 + 1;
  v3 = *v2;
  if ( (v3 & 0xF) != 0xD )
    return 0;
  v5 = 0;
  if ( (v3 & 0x3F) != 0x3D && ((unsigned int)sub_693160(v6, &v5) || v5) )
    return 0;
  result = sub_54DE00(a1, v6);
  if ( !(_BYTE)result )
  {
    *a2 = nullptr;
    return 0;
  }
  *a2 = v6[0];
  return result;
}

