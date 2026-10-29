/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DE0BC
// Address: 0x00000000000DE0BC

//----- (00000000000DE0BC) ----------------------------------------------------
__int64 __fastcall sub_DE0BC(__int64 a1, char **a2)
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
  __int64 result; // x0

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v2 + 24) >= v3 )
  {
    v7 = *a2;
    if ( 2 * v3 >= (unsigned __int64)(v2 + 24) )
      v8 = 2 * v3;
    else
      v8 = (size_t)(v2 + 24);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v2 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  qmemcpy(&v2[(_QWORD)v6], "construction vtable for ", 24);
  a2[1] += 24;
  v9 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 24LL))(v9, a2);
  if ( v9[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 32LL))(v9, a2);
  v10 = a2[1];
  v11 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v10 + 4) >= v11 )
  {
    v13 = *a2;
    if ( 2 * v11 >= (unsigned __int64)(v10 + 4) )
      v14 = 2 * v11;
    else
      v14 = (size_t)(v10 + 4);
    a2[2] = (char *)v14;
    v12 = (char *)realloc(v13, v14);
    v10 = a2[1];
    *a2 = v12;
  }
  else
  {
    v12 = *a2;
  }
  *(_DWORD *)&v10[(_QWORD)v12] = 762210605;
  a2[1] += 4;
  v15 = *(_BYTE **)(a1 + 24);
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 24LL))(v15, a2);
  if ( v15[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 32LL))(v15, a2);
  return result;
}
