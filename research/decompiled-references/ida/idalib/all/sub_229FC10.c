char *__fastcall sub_229FC10(_QWORD *a1, unsigned __int64 a2)
{
  const char *v2; // rax
  __int64 v3; // rdx
  char *v4; // rax
  size_t v5; // rdx
  _UNKNOWN **v6; // rbx
  char *v7; // r12
  size_t v8; // rbp
  char *v9; // rdi
  int v10; // eax
  char **v11; // rdx

  v2 = sub_229C150(a1, a2);
  v4 = sub_229B8F0((__int64)v2, v3);
  if ( !v5 )
    return nullptr;
  v6 = &off_2BEC420;
  v7 = v4;
  v8 = v5;
  while ( 1 )
  {
    v9 = (char *)v6[1];
    if ( v8 <= (unsigned __int64)v9 && !memcmp(&v9[(_QWORD)*v6 - v8], v7, v8) )
      break;
    v6 += 9;
    if ( &unk_2BECFF0 == (_UNKNOWN *)v6 )
      return nullptr;
  }
  v10 = *((_DWORD *)v6 + 16);
  if ( !v10 )
    return nullptr;
  v11 = &off_2BED300;
  do
  {
    if ( *((_DWORD *)v11 + 4) == v10 && *((_BYTE *)v11 + 20) )
      return *v11;
    v11 += 4;
  }
  while ( v11 != (char **)&off_2BEDEE0 );
  return "generic";
}
