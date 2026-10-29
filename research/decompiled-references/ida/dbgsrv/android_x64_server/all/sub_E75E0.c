/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E75E0
// Address: 0x00000000000E75E0

//----- (00000000000E75E0) ----------------------------------------------------
__int64 __fastcall sub_E75E0(__int64 a1, char **a2)
{
  _BYTE *v4; // rdi
  char v5; // al
  char *v6; // rcx
  unsigned __int64 v7; // rsi
  char *v8; // rax
  size_t v9; // rsi
  _BYTE *v10; // rdi
  char v11; // al
  char v12; // al
  char *v13; // rcx
  unsigned __int64 v14; // rsi
  char *v15; // rax
  size_t v16; // rsi
  _QWORD *v17; // rbx
  __int64 result; // rax
  char *v19; // rcx
  unsigned __int64 v20; // rsi
  char *v21; // rax
  size_t v22; // rsi

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v4 = *(_BYTE **)(a1 + 16);
  v5 = v4[10];
  if ( !v5 || v5 == 2 && (*(unsigned __int8 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 8LL))(v4, a2) )
  {
    v6 = a2[1];
    v7 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v6 + 1) >= v7 )
    {
      v9 = 2 * v7;
      if ( v9 < (unsigned __int64)(v6 + 1) )
        v9 = (size_t)(v6 + 1);
      a2[2] = (char *)v9;
      v8 = (char *)realloc(*a2, v9);
      *a2 = v8;
      v6 = a2[1];
    }
    else
    {
      v8 = *a2;
    }
    v6[(_QWORD)v8] = 32;
    ++a2[1];
  }
  v10 = *(_BYTE **)(a1 + 16);
  v11 = v10[10];
  if ( !v11 )
    goto LABEL_17;
  if ( v11 == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 8LL))(v10, a2) )
    {
LABEL_17:
      v13 = a2[1];
      v14 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v13 + 3) >= v14 )
      {
        v16 = 2 * v14;
        if ( v16 < (unsigned __int64)(v13 + 3) )
          v16 = (size_t)(v13 + 3);
        a2[2] = (char *)v16;
        v15 = (char *)realloc(*a2, v16);
        *a2 = v15;
        v13 = a2[1];
      }
      else
      {
        v15 = *a2;
      }
      v17 = a2 + 1;
      v13[(_QWORD)v15 + 2] = 38;
      *(_WORD *)&v13[(_QWORD)v15] = 9768;
      result = 3;
      goto LABEL_29;
    }
    v10 = *(_BYTE **)(a1 + 16);
  }
  v12 = v10[11];
  if ( !v12 || v12 == 2 && (*(unsigned __int8 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 16LL))(v10, a2) )
    goto LABEL_17;
  v19 = a2[1];
  v20 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v19 + 2) >= v20 )
  {
    v22 = 2 * v20;
    if ( v22 < (unsigned __int64)(v19 + 2) )
      v22 = (size_t)(v19 + 2);
    a2[2] = (char *)v22;
    v21 = (char *)realloc(*a2, v22);
    *a2 = v21;
    v19 = a2[1];
  }
  else
  {
    v21 = *a2;
  }
  v17 = a2 + 1;
  *(_WORD *)&v19[(_QWORD)v21] = 9766;
  result = 2;
LABEL_29:
  *v17 += result;
  return result;
}
