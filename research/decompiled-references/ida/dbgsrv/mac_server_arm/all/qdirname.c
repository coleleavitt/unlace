/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdirname
// Address: 0x000000010006E39C

//----- (000000010006E39C) ----------------------------------------------------
bool __fastcall qdirname(char *a1, unsigned __int64 a2, char *__s)
{
  _BOOL8 result; // x0
  char *v7; // x21
  char *v8; // x0
  char *v9; // x8
  size_t v10; // x21
  _BOOL8 v11; // x22
  int v12; // w8

  if ( !__s )
    return 0;
  if ( a1 && a2 < 2 )
    return 0;
  v7 = strrchr(__s, 47);
  v8 = strrchr(__s, 92);
  if ( v7 <= v8 )
    v9 = v8;
  else
    v9 = v7;
  result = v9 != nullptr;
  if ( !v9 )
  {
    if ( !a1 )
      return 0;
    *a1 = 46;
    v10 = 1;
    goto LABEL_19;
  }
  if ( v9 - __s >= a2 )
    v10 = a2 - 1;
  else
    v10 = v9 - __s;
  if ( v10 )
  {
    if ( a1 )
    {
LABEL_15:
      if ( a1 != __s )
      {
        v11 = result;
        memcpy(a1, __s, v10);
        result = v11;
      }
LABEL_19:
      a1[v10] = 0;
      return result;
    }
  }
  else
  {
    v12 = (unsigned __int8)*v9;
    v10 = v12 == 47 || v12 == 92;
    if ( a1 )
      goto LABEL_15;
  }
  return 1;
}
