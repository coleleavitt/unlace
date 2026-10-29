__int64 __fastcall sub_563AD0(_QWORD *a1, const char *a2, unsigned int a3, char a4)
{
  unsigned int v4; // r15d
  size_t v6; // rbp
  size_t v7; // rdx
  __int64 v8; // rbx
  const char *v9; // r13
  _BYTE *v10; // rax

  v4 = -1;
  v6 = a3;
  v7 = 6;
  if ( v6 <= 6 )
    v7 = v6;
  if ( strncmp(a2, "ERROR", v7) )
  {
    v4 = sub_562BF0((__int64)a1);
    if ( (_WORD)v4 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 == 65534 )
          goto LABEL_9;
        v10 = (_BYTE *)(a1[13] + 3 * v8);
        if ( *v10 || v10[2] )
        {
          if ( v10[1] == a4 )
          {
            v9 = *(const char **)(a1[9] + 8 * v8);
            if ( !strncmp(v9, a2, v6) && !v9[v6] )
              return *(unsigned __int16 *)(a1[14] + 2 * v8);
          }
LABEL_9:
          if ( (unsigned __int16)++v8 >= (unsigned __int16)v4 )
            return 0;
        }
        else if ( (unsigned __int16)++v8 >= (unsigned __int16)v4 )
        {
          return 0;
        }
      }
    }
  }
  return v4;
}
