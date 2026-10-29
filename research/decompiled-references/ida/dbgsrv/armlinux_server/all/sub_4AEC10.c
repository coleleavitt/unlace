/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AEC10
// Address: 0x00000000004AEC10

//----- (00000000004AEC10) ----------------------------------------------------
char *__fastcall sub_4AEC10(char *a1, void *a2, __int64 *a3, _DWORD *a4)
{
  bool v4; // zf
  char *v5; // x19
  __int64 v11; // x23
  size_t v12; // x0
  char *v13; // x0
  char *s[2]; // [xsp+40h] [xbp+40h] BYREF
  __int64 v15; // [xsp+50h] [xbp+50h]
  int v16; // [xsp+58h] [xbp+58h]

  if ( !a1 || (a2 ? (v4 = a3 == nullptr) : (v4 = 0), v4) )
  {
    if ( a4 )
    {
      v5 = nullptr;
      *a4 = -3;
      return v5;
    }
  }
  else
  {
    s[0] = nullptr;
    s[1] = nullptr;
    v15 = 0;
    v16 = 0;
    if ( sub_4AE790(a1, (void (__fastcall *)(_BYTE *, __int64, __int64))sub_4A5C20, (__int64)s) )
    {
      v5 = s[0];
      if ( v16 )
      {
        v11 = 1;
        if ( s[0] )
        {
LABEL_13:
          if ( a2 )
          {
            v12 = strlen(s[0]);
            if ( v12 >= *a3 )
            {
              free(a2);
              *a3 = v11;
            }
            else
            {
              memcpy(a2, v5, v12 + 1);
              v13 = v5;
              v5 = (char *)a2;
              free(v13);
            }
          }
          else if ( a3 )
          {
            *a3 = v11;
          }
          if ( a4 )
          {
            *a4 = 0;
            return v5;
          }
          return v5;
        }
        if ( a4 )
          goto LABEL_22;
      }
      else
      {
        v11 = v15;
        if ( s[0] )
          goto LABEL_13;
        if ( a4 )
        {
          if ( v15 != 1 )
            goto LABEL_26;
LABEL_22:
          v5 = nullptr;
          *a4 = -1;
          return v5;
        }
      }
    }
    else
    {
      free(s[0]);
      if ( a4 )
      {
LABEL_26:
        v5 = nullptr;
        *a4 = -2;
        return v5;
      }
    }
  }
  return nullptr;
}
