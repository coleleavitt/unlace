/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DDFDC
// Address: 0x00000000000DDFDC

//----- (00000000000DDFDC) ----------------------------------------------------
__int64 __fastcall sub_DDFDC(_QWORD *a1, char **a2)
{
  _BYTE *v2; // x8
  _BYTE *v3; // x22
  size_t v6; // x21
  char *v7; // x8
  size_t v8; // x10
  char *v9; // x0
  char *v10; // x0
  size_t v11; // x1
  _BYTE *v12; // x20
  __int64 result; // x0

  v3 = (_BYTE *)a1[2];
  v2 = (_BYTE *)a1[3];
  v6 = v2 - v3;
  if ( v2 != v3 )
  {
    v7 = a2[1];
    v8 = (size_t)a2[2];
    if ( (unsigned __int64)&v7[v6] >= v8 )
    {
      v10 = *a2;
      if ( 2 * v8 >= (unsigned __int64)&v7[v6] )
        v11 = 2 * v8;
      else
        v11 = (size_t)&v7[v6];
      a2[2] = (char *)v11;
      v9 = (char *)realloc(v10, v11);
      v7 = a2[1];
      *a2 = v9;
    }
    else
    {
      v9 = *a2;
    }
    memmove(&v7[(_QWORD)v9], v3, v6);
    a2[1] += v6;
  }
  v12 = (_BYTE *)a1[4];
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v12 + 24LL))(v12, a2);
  if ( v12[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v12 + 32LL))(v12, a2);
  return result;
}
