/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E6D30
// Address: 0x00000000000E6D30

//----- (00000000000E6D30) ----------------------------------------------------
char *__fastcall sub_E6D30(__int64 a1, char **a2)
{
  _BYTE *v4; // rdi
  char v5; // al
  char v6; // al
  char *v7; // rcx
  unsigned __int64 v8; // rsi
  char *v9; // rax
  size_t v10; // rsi
  char *v11; // rcx
  char v12; // al
  char *v13; // rcx
  unsigned __int64 v14; // rsi
  char *v15; // rax
  size_t v16; // rsi
  _BYTE *v17; // rbx
  char *v18; // rcx
  unsigned __int64 v19; // rsi
  char *result; // rax
  size_t v21; // rsi

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  v4 = *(_BYTE **)(a1 + 24);
  v5 = v4[10];
  if ( !v5 )
    goto LABEL_8;
  if ( v5 == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 8LL))(v4, a2) )
    {
LABEL_8:
      v7 = a2[1];
      v8 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v7 + 1) >= v8 )
      {
        v10 = 2 * v8;
        if ( v10 < (unsigned __int64)(v7 + 1) )
          v10 = (size_t)(v7 + 1);
        a2[2] = (char *)v10;
        v9 = (char *)realloc(*a2, v10);
        *a2 = v9;
        v7 = a2[1];
      }
      else
      {
        v9 = *a2;
      }
      v11 = &v7[(_QWORD)v9];
      v12 = 40;
      goto LABEL_20;
    }
    v4 = *(_BYTE **)(a1 + 24);
  }
  v6 = v4[11];
  if ( !v6 || v6 == 2 && (*(unsigned __int8 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 16LL))(v4, a2) )
    goto LABEL_8;
  v13 = a2[1];
  v14 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v13 + 1) >= v14 )
  {
    v16 = 2 * v14;
    if ( v16 < (unsigned __int64)(v13 + 1) )
      v16 = (size_t)(v13 + 1);
    a2[2] = (char *)v16;
    v15 = (char *)realloc(*a2, v16);
    *a2 = v15;
    v13 = a2[1];
  }
  else
  {
    v15 = *a2;
  }
  v11 = &v13[(_QWORD)v15];
  v12 = 32;
LABEL_20:
  *v11 = v12;
  ++a2[1];
  v17 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 24LL))(v17, a2);
  if ( v17[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 32LL))(v17, a2);
  v18 = a2[1];
  v19 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v18 + 3) >= v19 )
  {
    v21 = 2 * v19;
    if ( v21 < (unsigned __int64)(v18 + 3) )
      v21 = (size_t)(v18 + 3);
    a2[2] = (char *)v21;
    result = (char *)realloc(*a2, v21);
    *a2 = result;
    v18 = a2[1];
  }
  else
  {
    result = *a2;
  }
  v18[(_QWORD)result + 2] = 42;
  *(_WORD *)&v18[(_QWORD)result] = 14906;
  a2[1] += 3;
  return result;
}
