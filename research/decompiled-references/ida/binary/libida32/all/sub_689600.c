unsigned __int64 __fastcall sub_689600(__int64 a1, char **a2, int a3)
{
  char *v3; // rax
  unsigned __int64 result; // rax
  unsigned int v5; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v3 = sub_54F0B0(a1, *a2, a3, 0);
  if ( !v3 )
    return 0;
  v6[0] = v3 + 1;
  if ( (*v3 & 0xF) != 0xC )
    return 0;
  result = (unsigned __int64)sub_54DA40(v3 + 1, nullptr, nullptr);
  v6[0] = result + 1;
  LOBYTE(result) = *(_BYTE *)result & 0xF0;
  if ( (_BYTE)result == 0xC0 )
  {
    if ( !(unsigned __int8)sub_693030(v6, &v5) )
      return 0;
    result = v5;
  }
  else
  {
    result = (unsigned __int8)result;
  }
  v5 = result;
  if ( (_DWORD)result == 16 )
    result = getinf(99);
  *a2 = (char *)v6[0];
  return result;
}

