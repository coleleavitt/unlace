const char *__fastcall sub_229FF20(_DWORD *a1, const void *a2, size_t a3)
{
  char **v4; // rbx
  char **v6; // rdx
  char *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned __int64 v11; // rcx
  const char *result; // rax
  char *v13; // rax
  unsigned __int64 v14; // rdx
  const char *v15; // rax
  __int64 v16; // rdx
  char *v17; // r12
  size_t v18; // rdx
  size_t v19; // r13
  _UNKNOWN **v20; // rbx
  char *v21; // rdi

  if ( a3 )
  {
    v4 = &off_2BED300;
    do
    {
      if ( v4[1] == (char *)a3 && !memcmp(a2, *v4, a3) )
      {
        v6 = (char **)(&off_2BEC420 + 9 * *((unsigned int *)v4 + 4));
        v7 = *v6;
        v8 = (unsigned __int64)v6[1];
        goto LABEL_7;
      }
      v4 += 4;
    }
    while ( &off_2BEDEE0 != (_UNKNOWN **)v4 );
    v8 = 7;
    v7 = "invalid";
  }
  else
  {
    v7 = (char *)sub_22B7480(a1);
  }
LABEL_7:
  if ( a1[13] != 5 )
  {
    v9 = a1[11];
    if ( v9 == 15 )
      return "aapcs";
    v10 = a1[12];
    if ( v10 <= 0x31 )
    {
      if ( ((1LL << v10) & 0x20000006201E0LL) != 0 )
        return "aapcs-linux";
      if ( ((1LL << v10) & 0x18000) != 0 )
        return "aapcs";
    }
    if ( v9 != 11 )
    {
      LOBYTE(v11) = 0;
      if ( v9 <= 0x27 )
        v11 = (0x8000021008uLL >> v9) & 1;
      if ( v10 == 49 || (_BYTE)v11 )
        return "aapcs-linux";
      return "aapcs";
    }
    return "apcs-gnu";
  }
  if ( a1[12] == 15 || !a1[11] )
    return "aapcs";
  v13 = (char *)sub_229C150(v7, v8);
  v15 = sub_229C150(v13, v14);
  v17 = sub_229B8F0((__int64)v15, v16);
  v19 = v18;
  if ( v18 )
  {
    v20 = &off_2BEC420;
    while ( 1 )
    {
      v21 = (char *)v20[1];
      if ( v19 <= (unsigned __int64)v21 && !memcmp(&v21[(_QWORD)*v20 - v19], v17, v19) )
        break;
      v20 += 9;
      if ( &unk_2BECFF0 == (_UNKNOWN *)v20 )
        goto LABEL_30;
    }
    if ( byte_26FBB40[*((unsigned int *)v20 + 16)] == 3 )
      return "aapcs";
  }
LABEL_30:
  result = "aapcs16";
  if ( a1[9] != 26 )
    return "apcs-gnu";
  return result;
}
