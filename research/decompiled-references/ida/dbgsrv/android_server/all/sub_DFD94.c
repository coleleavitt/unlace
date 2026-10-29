/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFD94
// Address: 0x00000000000DFD94

//----- (00000000000DFD94) ----------------------------------------------------
__int64 __fastcall sub_DFD94(__int64 a1, char **a2)
{
  _BYTE *v2; // x21
  char *v5; // x8
  unsigned __int64 v6; // x10
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
  _BYTE *v10; // x20
  __int64 result; // x0

  v2 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 24LL))(v2);
  if ( v2[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v2 + 32LL))(v2, a2);
  v5 = a2[1];
  v6 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v5 + 2) >= v6 )
  {
    v8 = *a2;
    if ( 2 * v6 >= (unsigned __int64)(v5 + 2) )
      v9 = 2 * v6;
    else
      v9 = (size_t)(v5 + 2);
    a2[2] = (char *)v9;
    v7 = (char *)realloc(v8, v9);
    v5 = a2[1];
    *a2 = v7;
  }
  else
  {
    v7 = *a2;
  }
  *(_WORD *)&v5[(_QWORD)v7] = 14906;
  a2[1] += 2;
  v10 = *(_BYTE **)(a1 + 24);
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 24LL))(v10, a2);
  if ( v10[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 32LL))(v10, a2);
  return result;
}
