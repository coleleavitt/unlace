/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8D90
// Address: 0x00000000000E8D90

//----- (00000000000E8D90) ----------------------------------------------------
char *__fastcall sub_E8D90(_QWORD *a1, char **a2)
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
  char *v15; // x8
  _BYTE *v16; // x21
  char *v17; // x8
  unsigned __int64 v18; // x10
  char *v19; // x0
  char *v20; // x0
  size_t v21; // x1
  char *v22; // x8
  _BYTE *v23; // x20
  char *v24; // x8
  unsigned __int64 v25; // x10
  char *result; // x0
  char *v27; // x0
  size_t v28; // x1

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
  v9 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 24LL))(v9, a2);
  if ( v9[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 32LL))(v9, a2);
  v10 = a2[1];
  v11 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v10 + 5) >= v11 )
  {
    v13 = *a2;
    if ( 2 * v11 >= (unsigned __int64)(v10 + 5) )
      v14 = 2 * v11;
    else
      v14 = (size_t)(v10 + 5);
    a2[2] = (char *)v14;
    v12 = (char *)realloc(v13, v14);
    v10 = a2[1];
    *a2 = v12;
  }
  else
  {
    v12 = *a2;
  }
  v15 = &v10[(_QWORD)v12];
  v15[4] = 40;
  *(_DWORD *)v15 = 541007913;
  a2[1] += 5;
  v16 = (_BYTE *)a1[3];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v16 + 24LL))(v16, a2);
  if ( v16[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v16 + 32LL))(v16, a2);
  v17 = a2[1];
  v18 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v17 + 5) >= v18 )
  {
    v20 = *a2;
    if ( 2 * v18 >= (unsigned __int64)(v17 + 5) )
      v21 = 2 * v18;
    else
      v21 = (size_t)(v17 + 5);
    a2[2] = (char *)v21;
    v19 = (char *)realloc(v20, v21);
    v17 = a2[1];
    *a2 = v19;
  }
  else
  {
    v19 = *a2;
  }
  v22 = &v17[(_QWORD)v19];
  v22[4] = 40;
  *(_DWORD *)v22 = 540680233;
  a2[1] += 5;
  v23 = (_BYTE *)a1[4];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v23 + 24LL))(v23, a2);
  if ( v23[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v23 + 32LL))(v23, a2);
  v24 = a2[1];
  v25 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v24 + 1) >= v25 )
  {
    v27 = *a2;
    if ( 2 * v25 >= (unsigned __int64)(v24 + 1) )
      v28 = 2 * v25;
    else
      v28 = (size_t)(v24 + 1);
    a2[2] = (char *)v28;
    result = (char *)realloc(v27, v28);
    v24 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v24[(_QWORD)result] = 41;
  ++a2[1];
  return result;
}
