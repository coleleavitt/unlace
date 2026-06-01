int __cdecl chmod(const char *a1, mode_t a2)
{
  int result; // w0
  unsigned __int64 StatusReg; // x22
  int *v6; // x8
  int v7; // w21
  int *v9; // x8
  int *v10; // x8
  __int64 _38; // [xsp+38h] [xbp+8h]

  result = __chmod(a1, a2);
  if ( result < 0 )
  {
    StatusReg = _ReadStatusReg(TPIDRRO_EL0);
    v6 = *(int **)(StatusReg + 8);
    if ( !v6 )
      v6 = &errno;
    v7 = a2 & 0xC00;
    if ( *v6 == 1 && v7 != 0 )
    {
      if ( (a2 & 0x400) == 0 )
        goto LABEL_24;
      result = __chmod(a1, a2 ^ 0x400);
      if ( result < 0 )
      {
        v9 = *(int **)(StatusReg + 8);
        if ( !v9 )
          v9 = &errno;
        if ( *v9 == 1 )
        {
LABEL_24:
          if ( (a2 & 0x800) == 0 )
            goto LABEL_12;
          result = __chmod(a1, a2 ^ 0x800);
          if ( result < 0 )
          {
            v10 = *(int **)(StatusReg + 8);
            if ( !v10 )
              v10 = &errno;
            if ( *v10 == 1 )
            {
LABEL_12:
              if ( v7 == 3072 )
              {
                if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
                  __break(0xC471u);
                return __chmod(a1, a2 ^ 0xC00);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
