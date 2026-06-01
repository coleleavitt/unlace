bool __fastcall sub_698EE0(unsigned __int8 **a1)
{
  bool result; // al
  _BYTE *v2; // rdx
  int v3; // eax

  result = 0;
  if ( (unsigned __int64)a1[1] > 3 )
  {
    v2 = *a1;
    v3 = **a1 - 36;
    if ( **a1 == 36 && (v3 = (unsigned __int8)v2[1] - 36, v2[1] == 36) )
      return v2[2] == 32;
    else
      return v3 == 0;
  }
  return result;
}

