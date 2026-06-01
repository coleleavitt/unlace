/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7CB0
// Address: 0x00000000000E7CB0

//----- (00000000000E7CB0) ----------------------------------------------------
__int64 __fastcall sub_E7CB0(__int64 a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  _BYTE *v9; // x20
  __int64 result; // x0

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v2 + 2) >= v3 )
  {
    v7 = *a2;
    if ( 2 * v3 >= (unsigned __int64)(v2 + 2) )
      v8 = 2 * v3;
    else
      v8 = (size_t)(v2 + 2);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v2 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  *(_WORD *)&v2[(_QWORD)v6] = 14906;
  a2[1] += 2;
  v9 = *(_BYTE **)(a1 + 16);
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 24LL))(v9, a2);
  if ( v9[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 32LL))(v9, a2);
  return result;
}
