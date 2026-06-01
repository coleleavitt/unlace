__int64 __fastcall sub_B58200(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  char *v3; // rbx
  char v4; // al
  __int64 result; // rax

  v2 = sub_B4F900(a1);
  v3 = (char *)sub_B58190(a1);
  v4 = *v3;
  if ( (*v3 & 0x20) != 0 )
    return (v4 & 0x10) != 0;
  *v3 = v4 | 0x20;
  result = sub_C1AD00(v2, a2, 0);
  *v3 = (16 * (result & 1)) | *v3 & 0xEF;
  return result;
}

