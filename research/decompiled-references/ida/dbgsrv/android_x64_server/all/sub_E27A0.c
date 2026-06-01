/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E27A0
// Address: 0x00000000000E27A0

//----- (00000000000E27A0) ----------------------------------------------------
char *__fastcall sub_E27A0(__int64 a1, char **a2)
{
  char *v3; // rcx
  unsigned __int64 v4; // rsi
  char *v5; // rax
  size_t v6; // rsi
  _BYTE *v7; // rbx
  char *v8; // rcx
  unsigned __int64 v9; // rsi
  char *v10; // rax
  size_t v11; // rsi
  _BYTE *v12; // rbx
  char *v13; // rcx
  unsigned __int64 v14; // rsi
  char *result; // rax
  size_t v16; // rsi

  v3 = a2[1];
  v4 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v3 + 1) >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < (unsigned __int64)(v3 + 1) )
      v6 = (size_t)(v3 + 1);
    a2[2] = (char *)v6;
    v5 = (char *)realloc(*a2, v6);
    *a2 = v5;
    v3 = a2[1];
  }
  else
  {
    v5 = *a2;
  }
  v3[(_QWORD)v5] = 40;
  ++a2[1];
  v7 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v7 + 24LL))(v7, a2);
  if ( v7[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v7 + 32LL))(v7, a2);
  v8 = a2[1];
  v9 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v8 + 2) >= v9 )
  {
    v11 = 2 * v9;
    if ( v11 < (unsigned __int64)(v8 + 2) )
      v11 = (size_t)(v8 + 2);
    a2[2] = (char *)v11;
    v10 = (char *)realloc(*a2, v11);
    *a2 = v10;
    v8 = a2[1];
  }
  else
  {
    v10 = *a2;
  }
  *(_WORD *)&v8[(_QWORD)v10] = 23337;
  a2[1] += 2;
  v12 = *(_BYTE **)(a1 + 24);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v12 + 24LL))(v12, a2);
  if ( v12[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v12 + 32LL))(v12, a2);
  v13 = a2[1];
  v14 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v13 + 1) >= v14 )
  {
    v16 = 2 * v14;
    if ( v16 < (unsigned __int64)(v13 + 1) )
      v16 = (size_t)(v13 + 1);
    a2[2] = (char *)v16;
    result = (char *)realloc(*a2, v16);
    *a2 = result;
    v13 = a2[1];
  }
  else
  {
    result = *a2;
  }
  v13[(_QWORD)result] = 93;
  ++a2[1];
  return result;
}
