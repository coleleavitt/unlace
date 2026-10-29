bool __fastcall sub_FD49A0(unsigned int a1)
{
  unsigned __int16 *v1; // rdx
  bool result; // al
  unsigned __int8 v3; // dl
  char *v4; // rdx

  v1 = sub_FD2C00(a1);
  result = 0;
  if ( v1 )
  {
    v3 = *((_BYTE *)v1 + 3) & 0x3F;
    if ( v3 <= 0x27u )
    {
      v4 = (char *)&off_2B54200 + 16 * v3;
      if ( (unsigned __int8)v4[8] > 3u )
        return **(_DWORD **)v4 == 541282881;
    }
  }
  return result;
}
