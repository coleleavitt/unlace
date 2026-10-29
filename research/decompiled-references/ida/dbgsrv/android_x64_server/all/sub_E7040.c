/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7040
// Address: 0x00000000000E7040

//----- (00000000000E7040) ----------------------------------------------------
char __fastcall sub_E7040(__int64 a1, char **a2)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 *v8; // r13
  char *v9; // rcx
  unsigned __int64 v10; // rsi
  char *v11; // rax
  _BYTE *v12; // rdi
  char v13; // al
  char *v14; // rcx
  unsigned __int64 v15; // rsi
  char *v16; // rax
  size_t v17; // rsi
  _BYTE *v18; // rdi
  char v19; // al
  char v20; // al
  char *v21; // rcx
  unsigned __int64 v22; // rsi
  char *v23; // rax
  size_t v24; // rsi
  char *v25; // rdi
  unsigned __int64 v26; // rsi
  char *v27; // rax
  size_t v28; // rsi
  char *v29; // rdi
  char result; // al
  size_t v31; // rsi
  __int64 v32; // rdi
  const void *v33; // r12
  size_t v34; // r14
  size_t v35; // rsi
  char *v36; // rax
  size_t v37; // rsi
  __int64 v38; // r14
  unsigned __int64 v39; // rsi
  char *v40; // rax
  size_t v41; // rsi

  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v4 + 8) == 10 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    if ( *(_BYTE *)(v5 + 8) == 7 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      if ( *(_QWORD *)(v5 + 24) - v6 == 11 )
      {
        if ( v6 == *(_QWORD *)(v5 + 24) )
        {
LABEL_8:
          v8 = (__int64 *)(a2 + 1);
          v9 = a2[1];
          v10 = (unsigned __int64)a2[2];
          if ( (unsigned __int64)(v9 + 3) >= v10 )
          {
            v31 = 2 * v10;
            if ( v31 < (unsigned __int64)(v9 + 3) )
              v31 = (size_t)(v9 + 3);
            a2[2] = (char *)v31;
            v11 = (char *)realloc(*a2, v31);
            *a2 = v11;
            v9 = a2[1];
          }
          else
          {
            v11 = *a2;
          }
          v9[(_QWORD)v11 + 2] = 60;
          *(_WORD *)&v9[(_QWORD)v11] = 25705;
          v32 = *v8 + 3;
          *v8 = v32;
          v33 = *(const void **)(v4 + 24);
          v34 = *(_QWORD *)(v4 + 32) - (_QWORD)v33;
          if ( v34 )
          {
            v35 = (size_t)a2[2];
            if ( v32 + v34 >= v35 )
            {
              v37 = 2 * v35;
              if ( v37 < v32 + v34 )
                v37 = v32 + v34;
              a2[2] = (char *)v37;
              v36 = (char *)realloc(*a2, v37);
              *a2 = v36;
              v32 = (__int64)a2[1];
            }
            else
            {
              v36 = *a2;
            }
            memmove(&v36[v32], v33, v34);
            v38 = *v8 + v34;
            *v8 = v38;
            v32 = v38;
          }
          v39 = (unsigned __int64)a2[2];
          if ( v32 + 1 >= v39 )
          {
            v41 = 2 * v39;
            if ( v41 < v32 + 1 )
              v41 = v32 + 1;
            a2[2] = (char *)v41;
            v40 = (char *)realloc(*a2, v41);
            *a2 = v40;
            v32 = (__int64)a2[1];
          }
          else
          {
            v40 = *a2;
          }
          v29 = &v40[v32];
          result = 62;
          goto LABEL_38;
        }
        v7 = 0;
        while ( *(_BYTE *)(v6 + v7) == aObjcObject[v7] )
        {
          if ( ++v7 == 11 )
            goto LABEL_8;
        }
      }
    }
  }
  (*(void (__fastcall **)(__int64, char **))(*(_QWORD *)v4 + 24LL))(v4, a2);
  v12 = *(_BYTE **)(a1 + 16);
  v13 = v12[10];
  if ( !v13 || v13 == 2 && (*(unsigned __int8 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v12 + 8LL))(v12, a2) )
  {
    v14 = a2[1];
    v15 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v14 + 1) >= v15 )
    {
      v17 = 2 * v15;
      if ( v17 < (unsigned __int64)(v14 + 1) )
        v17 = (size_t)(v14 + 1);
      a2[2] = (char *)v17;
      v16 = (char *)realloc(*a2, v17);
      *a2 = v16;
      v14 = a2[1];
    }
    else
    {
      v16 = *a2;
    }
    v14[(_QWORD)v16] = 32;
    ++a2[1];
  }
  v18 = *(_BYTE **)(a1 + 16);
  v19 = v18[10];
  if ( !v19 )
    goto LABEL_26;
  if ( v19 == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v18 + 8LL))(v18, a2) )
    {
LABEL_26:
      v21 = a2[1];
      v22 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v21 + 1) >= v22 )
      {
        v24 = 2 * v22;
        if ( v24 < (unsigned __int64)(v21 + 1) )
          v24 = (size_t)(v21 + 1);
        a2[2] = (char *)v24;
        v23 = (char *)realloc(*a2, v24);
        *a2 = v23;
        v21 = a2[1];
      }
      else
      {
        v23 = *a2;
      }
      v21[(_QWORD)v23] = 40;
      ++a2[1];
      goto LABEL_32;
    }
    v18 = *(_BYTE **)(a1 + 16);
  }
  v20 = v18[11];
  if ( !v20 || v20 == 2 && (*(unsigned __int8 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v18 + 16LL))(v18, a2) )
    goto LABEL_26;
LABEL_32:
  v25 = a2[1];
  v26 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v25 + 1) >= v26 )
  {
    v28 = 2 * v26;
    if ( v28 < (unsigned __int64)(v25 + 1) )
      v28 = (size_t)(v25 + 1);
    a2[2] = (char *)v28;
    v27 = (char *)realloc(*a2, v28);
    *a2 = v27;
    v25 = a2[1];
  }
  else
  {
    v27 = *a2;
  }
  v29 = &v25[(_QWORD)v27];
  result = 42;
  v8 = (__int64 *)(a2 + 1);
LABEL_38:
  *v29 = result;
  ++*v8;
  return result;
}
