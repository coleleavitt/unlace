/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EBB3C
// Address: 0x00000000000EBB3C

//----- (00000000000EBB3C) ----------------------------------------------------
char *__fastcall sub_EBB3C(__int64 a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  char *v9; // x8
  _BYTE *v10; // x20
  char *v11; // x8
  unsigned __int64 v12; // x10
  char *result; // x0
  char *v14; // x0
  size_t v15; // x1

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v2 + 9) >= v3 )
  {
    v7 = *a2;
    if ( 2 * v3 >= (unsigned __int64)(v2 + 9) )
      v8 = 2 * v3;
    else
      v8 = (size_t)(v2 + 9);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v2 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  v9 = &v2[(_QWORD)v6];
  v9[8] = 40;
  *(_QWORD *)v9 = *(_QWORD *)"noexcept(";
  a2[1] += 9;
  v10 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 24LL))(v10, a2);
  if ( v10[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 32LL))(v10, a2);
  v11 = a2[1];
  v12 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v11 + 1) >= v12 )
  {
    v14 = *a2;
    if ( 2 * v12 >= (unsigned __int64)(v11 + 1) )
      v15 = 2 * v12;
    else
      v15 = (size_t)(v11 + 1);
    a2[2] = (char *)v15;
    result = (char *)realloc(v14, v15);
    v11 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v11[(_QWORD)result] = 41;
  ++a2[1];
  return result;
}
