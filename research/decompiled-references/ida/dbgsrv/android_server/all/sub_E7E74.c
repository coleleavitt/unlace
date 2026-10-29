/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7E74
// Address: 0x00000000000E7E74

//----- (00000000000E7E74) ----------------------------------------------------
char *__fastcall sub_E7E74(__int64 a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  _BYTE *v9; // x21
  char *v10; // x8
  unsigned __int64 v11; // x10
  char *v12; // x0
  char *v13; // x0
  size_t v14; // x1
  _BYTE *v15; // x20
  char *v16; // x8
  unsigned __int64 v17; // x10
  char *result; // x0
  char *v19; // x0
  size_t v20; // x1

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v2 + 1) >= v3 )
  {
    v7 = *a2;
    if ( 2 * v3 >= (unsigned __int64)(v2 + 1) )
      v8 = 2 * v3;
    else
      v8 = (size_t)(v2 + 1);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v2 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  v2[(_QWORD)v6] = 40;
  ++a2[1];
  v9 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 24LL))(v9, a2);
  if ( v9[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 32LL))(v9, a2);
  v10 = a2[1];
  v11 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v10 + 2) >= v11 )
  {
    v13 = *a2;
    if ( 2 * v11 >= (unsigned __int64)(v10 + 2) )
      v14 = 2 * v11;
    else
      v14 = (size_t)(v10 + 2);
    a2[2] = (char *)v14;
    v12 = (char *)realloc(v13, v14);
    v10 = a2[1];
    *a2 = v12;
  }
  else
  {
    v12 = *a2;
  }
  *(_WORD *)&v10[(_QWORD)v12] = 23337;
  a2[1] += 2;
  v15 = *(_BYTE **)(a1 + 24);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 24LL))(v15, a2);
  if ( v15[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 32LL))(v15, a2);
  v16 = a2[1];
  v17 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v16 + 1) >= v17 )
  {
    v19 = *a2;
    if ( 2 * v17 >= (unsigned __int64)(v16 + 1) )
      v20 = 2 * v17;
    else
      v20 = (size_t)(v16 + 1);
    a2[2] = (char *)v20;
    result = (char *)realloc(v19, v20);
    v16 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v16[(_QWORD)result] = 93;
  ++a2[1];
  return result;
}
