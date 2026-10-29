__int64 __fastcall sub_1084EF0(__int64 a1, _BYTE *a2, size_t a3)
{
  char **v3; // rax
  char *i; // rdx
  char **v6; // r12
  char *v8; // rax
  char **v9; // r12
  char *v10; // rax
  char *v11; // rdi

  if ( a3 )
  {
    if ( *a2 == 43 || *a2 == 45 )
    {
      return 0;
    }
    else
    {
      v6 = &off_2BF03E0;
      if ( a3 == -1 )
      {
        while ( 1 )
        {
          v8 = v6[1];
          if ( v8 )
          {
            if ( **v6 != 43 && v8 == (char *)-1LL && !memcmp(*v6, a2, a3) )
              break;
          }
          v6 += 3;
          if ( &unk_2BF0530 == (_UNKNOWN *)v6 )
            return 0;
        }
      }
      else
      {
        v9 = &off_2BF03E0;
        while ( 1 )
        {
          v10 = v9[1];
          if ( v10 )
          {
            v11 = *v9;
            if ( **v9 == 43 )
            {
              ++v11;
              --v10;
            }
            if ( v10 == (char *)a3 && !memcmp(v11, a2, a3) )
              break;
          }
          v9 += 3;
          if ( v9 == (char **)&unk_2BF0530 )
            return 0;
        }
      }
      return 1;
    }
  }
  else
  {
    v3 = &off_2BF03E0;
    for ( i = &byte_6; i; i = v3[1] )
    {
      if ( **v3 == 43 && i == (_BYTE *)&dword_0 + 1 )
        break;
      v3 += 3;
      if ( v3 == (char **)&unk_2BF0530 )
        return 0;
    }
    return 1;
  }
}
