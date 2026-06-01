__int64 __fastcall sub_40D970(char **endptr, char *a2, _DWORD *a3, _DWORD *a4)
{
  char *v5; // rbx
  __int64 result; // rax
  char *v8; // rax
  char *v9; // rbx
  unsigned __int8 v10; // r12
  char *v11; // rdi

  v5 = *endptr;
  if ( **endptr == 32 )
  {
    v11 = v5 + 1;
    do
    {
      *endptr = v11;
      v5 = v11++;
    }
    while ( *(v11 - 1) == 32 );
  }
  result = 0;
  if ( *v5 )
  {
    *a2 = *v5;
    v8 = *endptr;
    v9 = v8 + 1;
    ++*endptr;
    if ( v8[1] == 117 )
    {
      v9 = v8 + 2;
      *a4 |= 1u;
      *endptr = v8 + 2;
      v10 = v8[2];
      if ( v10 != 42 )
        goto LABEL_5;
    }
    else
    {
      v10 = *v9;
      if ( *v9 != 42 )
      {
LABEL_5:
        if ( ((*__ctype_b_loc())[v10] & 0x800) != 0 )
          *a3 = __strtoul_internal(v9, endptr, 10, 0);
        else
          *a3 = -2;
        return 1;
      }
    }
    *a3 = -1;
    *endptr = v9 + 1;
    return 1;
  }
  return result;
}

