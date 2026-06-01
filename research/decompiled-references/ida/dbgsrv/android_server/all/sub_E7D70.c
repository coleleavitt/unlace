/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7D70
// Address: 0x00000000000E7D70

//----- (00000000000E7D70) ----------------------------------------------------
__int64 __fastcall sub_E7D70(_QWORD *a1, char **a2)
{
  _BYTE *v2; // x21
  _BYTE *v5; // x8
  _BYTE *v6; // x22
  size_t v7; // x21
  char *v8; // x8
  size_t v9; // x10
  char *v10; // x0
  char *v11; // x0
  size_t v12; // x1
  _BYTE *v13; // x20
  __int64 result; // x0

  v2 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 24LL))(v2);
  if ( v2[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v2 + 32LL))(v2, a2);
  v6 = (_BYTE *)a1[3];
  v5 = (_BYTE *)a1[4];
  v7 = v5 - v6;
  if ( v5 != v6 )
  {
    v8 = a2[1];
    v9 = (size_t)a2[2];
    if ( (unsigned __int64)&v8[v7] >= v9 )
    {
      v11 = *a2;
      if ( 2 * v9 >= (unsigned __int64)&v8[v7] )
        v12 = 2 * v9;
      else
        v12 = (size_t)&v8[v7];
      a2[2] = (char *)v12;
      v10 = (char *)realloc(v11, v12);
      v8 = a2[1];
      *a2 = v10;
    }
    else
    {
      v10 = *a2;
    }
    memmove(&v8[(_QWORD)v10], v6, v7);
    a2[1] += v7;
  }
  v13 = (_BYTE *)a1[5];
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v13 + 24LL))(v13, a2);
  if ( v13[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v13 + 32LL))(v13, a2);
  return result;
}
