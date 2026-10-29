__int64 __fastcall sub_590E10(__int64 a1, const char *a2)
{
  char v2; // bl
  const char *v3; // rdi
  unsigned int v4; // eax
  __int64 result; // rax
  const char *v6; // rdi
  unsigned int v7; // eax
  const char *v8; // rdi
  unsigned int v9; // eax

  if ( !(unsigned int)get_default_encoding_idx(1) )
  {
    v8 = "UTF-8";
    if ( sub_58F700(1, a2) )
      v8 = "windows-1252";
    v9 = add_encoding((int)v8);
    set_default_encoding_idx(1, v9);
  }
  v2 = getinf_flag(3, 32);
  if ( !(unsigned int)get_default_encoding_idx(2) )
  {
    v3 = "UTF-16LE";
    if ( v2 )
      v3 = "UTF-16BE";
    v4 = add_encoding((int)v3);
    set_default_encoding_idx(2, v4);
  }
  result = get_default_encoding_idx(4);
  if ( !(_DWORD)result )
  {
    v6 = "UTF-32LE";
    if ( v2 )
      v6 = "UTF-32BE";
    v7 = add_encoding((int)v6);
    return set_default_encoding_idx(4, v7);
  }
  return result;
}

