bool __fastcall sub_13D2FE0(char *a1, char *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char *v5; // r8
  bool result; // al

  v3 = (a2 - a1) >> 3;
  if ( a2 - a1 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v4 = v3 >> 1;
        v5 = &a1[8 * (v3 >> 1)];
        if ( *a3 <= *((_DWORD *)v5 + 1) )
          break;
        a1 = v5 + 8;
        v3 = v3 - v4 - 1;
        if ( v3 <= 0 )
          goto LABEL_4;
      }
      v3 >>= 1;
    }
    while ( v4 );
  }
LABEL_4:
  result = 0;
  if ( a2 != a1 )
    return *a3 >= *(_DWORD *)a1;
  return result;
}
