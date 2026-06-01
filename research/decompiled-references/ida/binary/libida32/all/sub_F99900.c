bool __fastcall sub_F99900(_DWORD *a1, unsigned __int64 a2)
{
  const void *v2; // r12
  size_t v3; // rbx
  unsigned int *v4; // r14
  __int64 v5; // rax
  bool v6; // zf
  const char *v7; // rax
  const char *v8; // r15
  const char *v9; // r15
  unsigned int *v11; // rbx
  const char *v12; // rdi
  char v13; // [rsp+Fh] [rbp-39h]

  v2 = a1;
  v3 = a2;
  if ( a2 <= 3 )
  {
    v13 = 0;
    if ( !a2 )
      goto LABEL_12;
LABEL_4:
    v4 = (unsigned int *)&unk_23DEE20;
    while ( 1 )
    {
      v5 = *v4;
      v6 = (_UNKNOWN *)((char *)&unk_23E6340 + v5) == nullptr;
      v7 = (char *)&unk_23E6340 + v5;
      v8 = v7;
      if ( !v6 && v3 == strlen(v7) && !memcmp(v2, v8, v3) )
      {
        v9 = (char *)&unk_23E6340 + v4[2];
        if ( v13 == (strchr(v9, 122) != nullptr) )
          break;
      }
      v4 += 5;
      if ( &unk_23E633C == (_UNKNOWN *)v4 )
        return 0;
    }
    return strchr(v9, 102) != nullptr;
  }
  if ( *a1 != 761558131 )
  {
    v13 = 0;
    goto LABEL_4;
  }
  v3 = a2 - 4;
  v2 = a1 + 1;
  v13 = 1;
  if ( a2 != 4 )
    goto LABEL_4;
LABEL_12:
  v11 = (unsigned int *)&unk_23DEE20;
  while ( 1 )
  {
    v12 = (char *)&unk_23E6340 + *v11;
    if ( !v12 || ~(strlen(v12) + 1) == -2 )
    {
      v9 = (char *)&unk_23E6340 + v11[2];
      if ( (strchr(v9, 122) != nullptr) == v13 )
        break;
    }
    v11 += 5;
    if ( v11 == (unsigned int *)&unk_23E633C )
      return 0;
  }
  return strchr(v9, 102) != nullptr;
}

