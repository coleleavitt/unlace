/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7FF4
// Address: 0x00000000000E7FF4

//----- (00000000000E7FF4) ----------------------------------------------------
__int64 __fastcall sub_E7FF4(__int64 a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  unsigned __int64 v6; // x9
  char *v7; // x0
  char *v8; // x0
  char *v9; // x0
  size_t v10; // x1
  _BYTE *v11; // x21
  char *v12; // x8
  unsigned __int64 v13; // x10
  unsigned __int64 v14; // x9
  char *v15; // x0
  char *v16; // x0
  size_t v17; // x1
  char *v18; // x0
  size_t v19; // x1
  _BYTE *v20; // x21
  unsigned __int8 *v21; // x21
  char *v22; // x8
  unsigned __int64 v23; // x10
  char *v24; // x0
  char *v25; // x0
  size_t v26; // x1
  char *v27; // x8
  __int64 result; // x0

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  v6 = (unsigned __int64)(v2 + 1);
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( (unsigned __int64)(v2 + 1) >= v3 )
    {
      v9 = *a2;
      if ( 2 * v3 >= v6 )
        v10 = 2 * v3;
      else
        v10 = (size_t)(v2 + 1);
      a2[2] = (char *)v10;
      v7 = (char *)realloc(v9, v10);
      v2 = a2[1];
      *a2 = v7;
      v6 = (unsigned __int64)(v2 + 1);
    }
    else
    {
      v7 = *a2;
    }
    a2[1] = (char *)v6;
    v2[(_QWORD)v7] = 91;
    v11 = *(_BYTE **)(a1 + 16);
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v11 + 24LL))(v11, a2);
    if ( v11[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v11 + 32LL))(v11, a2);
    v12 = a2[1];
    v13 = (unsigned __int64)a2[2];
    v14 = (unsigned __int64)(v12 + 1);
    if ( (unsigned __int64)(v12 + 1) >= v13 )
    {
      v16 = *a2;
      if ( 2 * v13 >= v14 )
        v17 = 2 * v13;
      else
        v17 = (size_t)(v12 + 1);
      a2[2] = (char *)v17;
      v15 = (char *)realloc(v16, v17);
      v12 = a2[1];
      *a2 = v15;
      v14 = (unsigned __int64)(v12 + 1);
    }
    else
    {
      v15 = *a2;
    }
    a2[1] = (char *)v14;
    v12[(_QWORD)v15] = 93;
  }
  else
  {
    if ( (unsigned __int64)(v2 + 1) >= v3 )
    {
      v18 = *a2;
      if ( 2 * v3 >= v6 )
        v19 = 2 * v3;
      else
        v19 = (size_t)(v2 + 1);
      a2[2] = (char *)v19;
      v8 = (char *)realloc(v18, v19);
      v2 = a2[1];
      *a2 = v8;
      v6 = (unsigned __int64)(v2 + 1);
    }
    else
    {
      v8 = *a2;
    }
    a2[1] = (char *)v6;
    v2[(_QWORD)v8] = 46;
    v20 = *(_BYTE **)(a1 + 16);
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v20 + 24LL))(v20, a2);
    if ( v20[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v20 + 32LL))(v20, a2);
  }
  v21 = *(unsigned __int8 **)(a1 + 24);
  if ( (unsigned int)v21[8] - 43 >= 2 )
  {
    v22 = a2[1];
    v23 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v22 + 3) >= v23 )
    {
      v25 = *a2;
      if ( 2 * v23 >= (unsigned __int64)(v22 + 3) )
        v26 = 2 * v23;
      else
        v26 = (size_t)(v22 + 3);
      a2[2] = (char *)v26;
      v24 = (char *)realloc(v25, v26);
      v22 = a2[1];
      *a2 = v24;
    }
    else
    {
      v24 = *a2;
    }
    v27 = &v22[(_QWORD)v24];
    v27[2] = 32;
    *(_WORD *)v27 = 15648;
    a2[1] += 3;
    v21 = *(unsigned __int8 **)(a1 + 24);
  }
  result = (*(__int64 (__fastcall **)(unsigned __int8 *, char **))(*(_QWORD *)v21 + 24LL))(v21, a2);
  if ( v21[9] != 1 )
    return (*(__int64 (__fastcall **)(unsigned __int8 *, char **))(*(_QWORD *)v21 + 32LL))(v21, a2);
  return result;
}
