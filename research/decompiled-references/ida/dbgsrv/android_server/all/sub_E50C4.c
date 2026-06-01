/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E50C4
// Address: 0x00000000000E50C4

//----- (00000000000E50C4) ----------------------------------------------------
__int64 __fastcall sub_E50C4(__int64 a1, char **a2)
{
  int v2; // w22
  int v3; // w23
  _BYTE *v4; // x21
  char *v5; // x25
  __int64 result; // x0
  unsigned int v9; // w24
  char *v10; // x8
  unsigned __int64 v11; // x10
  unsigned int i; // w25
  char *v13; // x8
  unsigned __int64 v14; // x10
  char *v15; // x0
  char *v16; // x0
  size_t v17; // x1
  char *v18; // x8
  _BYTE *v19; // x21
  char *v20; // x0
  size_t v21; // x1
  char *v22; // x8

  v2 = *((_DWORD *)a2 + 6);
  v3 = *((_DWORD *)a2 + 7);
  a2[3] = (char *)-1LL;
  v4 = *(_BYTE **)(a1 + 16);
  v5 = a2[1];
  result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 24LL))(v4);
  if ( v4[9] != 1 )
    result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 32LL))(v4, a2);
  v9 = *((_DWORD *)a2 + 7);
  if ( v9 == -1 )
  {
    v10 = a2[1];
    v11 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v10 + 3) >= v11 )
    {
      v20 = *a2;
      if ( 2 * v11 >= (unsigned __int64)(v10 + 3) )
        v21 = 2 * v11;
      else
        v21 = (size_t)(v10 + 3);
      a2[2] = (char *)v21;
      result = (__int64)realloc(v20, v21);
      v10 = a2[1];
      *a2 = (char *)result;
    }
    else
    {
      result = (__int64)*a2;
    }
    v22 = &v10[result];
    v22[2] = 46;
    *(_WORD *)v22 = 11822;
    a2[1] += 3;
  }
  else if ( v9 )
  {
    if ( v9 >= 2 )
    {
      for ( i = 1; i < v9; ++i )
      {
        v13 = a2[1];
        v14 = (unsigned __int64)a2[2];
        if ( (unsigned __int64)(v13 + 2) >= v14 )
        {
          v16 = *a2;
          if ( 2 * v14 >= (unsigned __int64)(v13 + 2) )
            v17 = 2 * v14;
          else
            v17 = (size_t)(v13 + 2);
          a2[2] = (char *)v17;
          v15 = (char *)realloc(v16, v17);
          v13 = a2[1];
          *a2 = v15;
        }
        else
        {
          v15 = *a2;
        }
        *(_WORD *)&v13[(_QWORD)v15] = 8236;
        v18 = a2[1];
        *((_DWORD *)a2 + 6) = i;
        a2[1] = v18 + 2;
        v19 = *(_BYTE **)(a1 + 16);
        result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v19 + 24LL))(v19, a2);
        if ( v19[9] != 1 )
          result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v19 + 32LL))(v19, a2);
      }
    }
  }
  else
  {
    a2[1] = v5;
  }
  *((_DWORD *)a2 + 6) = v2;
  *((_DWORD *)a2 + 7) = v3;
  return result;
}
