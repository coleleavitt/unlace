__int64 __fastcall dwarf_skip_leb128(char *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  char *v4; // rcx
  char *v5; // rdi
  char *v6; // rax
  __int64 v7; // rax

  result = 1;
  if ( (unsigned __int64)a1 < a3 )
  {
    if ( *a1 >= 0 )
    {
      v7 = 1;
LABEL_12:
      *a2 = v7;
      return 0;
    }
    v4 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) < a3 )
    {
      if ( a1[1] < 0 )
      {
        v5 = a1 + 23;
        v6 = v4;
        while ( *v6 < 0 )
        {
          if ( v6 != v5 && (char *)a3 != ++v6 )
            continue;
          return 1;
        }
        v7 = (unsigned int)((_DWORD)v6 - (_DWORD)v4 + 2);
        goto LABEL_12;
      }
      *a2 = 2;
      return 0;
    }
  }
  return result;
}

