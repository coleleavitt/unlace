const char *__fastcall sub_221DDC0(int a1, char *a2, __int64 a3, char a4)
{
  char *v4; // r8
  __int64 v5; // rax
  char *v6; // rdx
  signed __int64 v7; // rax
  char *v8; // rax
  const char *result; // rax
  unsigned __int64 v10; // rsi

  v4 = a2;
  v5 = 24 * a3;
  v6 = &a2[24 * a3];
  v7 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 3);
  if ( v7 >> 2 > 0 )
  {
    if ( a1 != *(_DWORD *)a2 )
    {
      if ( a1 == *((_DWORD *)a2 + 6) )
      {
        a2 += 24;
      }
      else if ( a1 == *((_DWORD *)a2 + 12) )
      {
        a2 += 48;
      }
      else if ( a1 == *((_DWORD *)a2 + 18) )
      {
        a2 += 72;
      }
      else
      {
        v8 = &a2[96 * (v7 >> 2)];
        while ( 1 )
        {
          a2 = v4 + 96;
          if ( v4 + 96 == v8 )
          {
            v7 = 0xAAAAAAAAAAAAAAABLL * ((v6 - v8) >> 3);
            goto LABEL_14;
          }
          if ( a1 == *((_DWORD *)v4 + 24) )
            goto LABEL_19;
          if ( a1 == *((_DWORD *)v4 + 30) )
          {
            a2 = v4 + 120;
            goto LABEL_19;
          }
          if ( a1 == *((_DWORD *)v4 + 36) )
          {
            a2 = v4 + 144;
            goto LABEL_19;
          }
          if ( a1 == *((_DWORD *)v4 + 42) )
            break;
          v4 += 96;
        }
        a2 = v4 + 168;
      }
    }
    goto LABEL_19;
  }
LABEL_14:
  if ( v7 == 2 )
    goto LABEL_27;
  if ( v7 == 3 )
  {
    if ( a1 == *(_DWORD *)a2 )
      goto LABEL_19;
    a2 += 24;
LABEL_27:
    if ( a1 == *(_DWORD *)a2 )
      goto LABEL_19;
    a2 += 24;
    goto LABEL_29;
  }
  if ( v7 != 1 )
    return &byte_22F0C30;
LABEL_29:
  if ( a1 != *(_DWORD *)a2 )
    return &byte_22F0C30;
LABEL_19:
  if ( v6 == a2 )
    return &byte_22F0C30;
  result = *((const char **)a2 + 1);
  v10 = *((_QWORD *)a2 + 2);
  if ( !a4 )
  {
    if ( v10 > 3 )
      v10 = 4;
    result += v10;
  }
  return result;
}
