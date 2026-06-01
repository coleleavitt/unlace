/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449DD8
// Address: 0x0000000000449DD8

//----- (0000000000449DD8) ----------------------------------------------------
__int64 __fastcall sub_449DD8(__int64 *a1, __int64 *a2)
{
  int v4; // w0
  __int64 result; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  size_t v8; // x22
  size_t v9; // x21
  const void *v10; // x1
  bool v11; // cf
  const void *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned __int64 v15; // x1
  unsigned __int64 v16; // x2
  int v17; // w1
  int v18; // w2

  v4 = sub_449C18(a1, a2);
  if ( v4 == 6 )
  {
    v17 = *((_DWORD *)a2 + 2);
    v18 = *((_DWORD *)a1 + 2);
    if ( v18 >= v17 )
      LODWORD(result) = 0;
    else
      LODWORD(result) = -1;
    if ( v18 > v17 )
      return 1;
    else
      return (unsigned int)result;
  }
  else
  {
    if ( v4 <= 6 )
    {
      if ( v4 == 3 )
        return sub_4881E8((__int64)(a1 + 1), (__int64)(a2 + 1));
      if ( v4 == 5 )
        return a1[1] != a2[1];
      if ( v4 != 2 )
        return 1;
LABEL_16:
      v13 = a2[1];
      v14 = a1[1];
      if ( v14 >= v13 )
        LODWORD(result) = 0;
      else
        LODWORD(result) = -1;
      if ( v14 > v13 )
        return 1;
      else
        return (unsigned int)result;
    }
    if ( v4 != 8 )
    {
      if ( v4 < 8 )
      {
        v6 = a2[2];
        v7 = a1[2];
        v8 = v7 - 1;
        if ( !v7 )
          v8 = 0;
        if ( v6 )
        {
          v9 = v6 - 1;
          v10 = (const void *)a2[1];
          v11 = v8 >= v6 - 1;
          v12 = (const void *)a1[1];
          if ( !v11 )
          {
            LODWORD(result) = memcmp(v12, v10, v8);
            if ( (_DWORD)result )
              return (unsigned int)result;
            else
              return 0xFFFFFFFFLL;
          }
          result = memcmp(v12, v10, v9);
          if ( (_DWORD)result )
            return result;
        }
        else
        {
          v9 = 0;
        }
        return v8 > v9;
      }
      if ( v4 != 9 )
        return 1;
      goto LABEL_16;
    }
    v15 = a2[1];
    v16 = a1[1];
    if ( v16 >= v15 )
      LODWORD(result) = 0;
    else
      LODWORD(result) = -1;
    if ( v16 > v15 )
      return 1;
    else
      return (unsigned int)result;
  }
}
