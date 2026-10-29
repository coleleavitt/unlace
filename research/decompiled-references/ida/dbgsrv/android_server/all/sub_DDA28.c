/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DDA28
// Address: 0x00000000000DDA28

//----- (00000000000DDA28) ----------------------------------------------------
char *__fastcall sub_DDA28(__int64 a1)
{
  unsigned __int8 *v1; // x8
  unsigned __int8 *v2; // x9
  int v4; // w11
  char *result; // x0
  unsigned __int8 *v6; // x8
  __int64 v7; // x10
  __int64 v8; // x11
  unsigned __int8 *v9; // x8
  _BYTE *v10; // x25
  __int64 v11; // x24
  char *v12; // x8
  char *v13; // x20
  _BYTE *v14; // x21
  size_t v15; // x23
  __int64 v16; // x27
  __int64 v17; // x26
  char *v18; // x22
  char *v19; // x0
  _QWORD *v20; // x23
  __int64 v21; // x9
  __int64 v22; // x10
  const void *v23; // x21
  __int64 v24; // x8
  _QWORD *v25; // x9
  signed __int64 v26; // x20
  unsigned __int64 v27; // x22
  _QWORD *v28; // x0
  char *v29; // x22
  _QWORD *v30; // x0
  __int64 v31; // x10
  _QWORD *v32; // x8
  __int64 v33; // x9
  __int64 v34; // x20
  _QWORD *v35; // x0

  v1 = *(unsigned __int8 **)a1;
  v2 = *(unsigned __int8 **)(a1 + 8);
  if ( v2 == *(unsigned __int8 **)a1 )
    return (char *)sub_DB210(a1);
  v4 = *v1;
  if ( v4 == 74 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(_QWORD *)(a1 + 24);
    v9 = v1 + 1;
    v10 = (_BYTE *)(a1 + 40);
    *(_QWORD *)a1 = v9;
    v11 = (v8 - v7) >> 3;
    if ( v9 == v2 )
      goto LABEL_14;
LABEL_11:
    if ( *v9 != 69 )
    {
LABEL_14:
      while ( 1 )
      {
        result = sub_DDA28(a1);
        if ( !result )
          return result;
        v12 = *(char **)(a1 + 24);
        v13 = result;
        if ( v12 == *(char **)(a1 + 32) )
        {
          v14 = *(_BYTE **)(a1 + 16);
          v15 = v12 - v14;
          v16 = (v12 - v14) >> 3;
          v17 = (v12 - v14) >> 2;
          if ( v10 == v14 )
          {
            v19 = (char *)malloc(2 * (v12 - v14));
            v18 = v19;
            if ( v15 )
              memmove(v19, v14, v15);
          }
          else
          {
            v18 = (char *)realloc(*(void **)(a1 + 16), 2 * (v12 - v14));
          }
          v12 = &v18[8 * v16];
          *(_QWORD *)(a1 + 16) = v18;
          *(_QWORD *)(a1 + 24) = v12;
          *(_QWORD *)(a1 + 32) = &v18[8 * v17];
        }
        *(_QWORD *)(a1 + 24) = v12 + 8;
        *(_QWORD *)v12 = v13;
        v9 = *(unsigned __int8 **)a1;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
          goto LABEL_11;
      }
    }
    v20 = *(_QWORD **)(a1 + 4832);
    v21 = *(_QWORD *)(a1 + 16);
    v22 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)a1 = v9 + 1;
    v23 = (const void *)(v21 + 8 * v11);
    v25 = v20 + 1;
    v24 = v20[1];
    v26 = v22 - (_QWORD)v23;
    v27 = ((_DWORD)v22 - (_DWORD)v23 + 15) & 0xFFFFFFF0;
    if ( v27 + v24 >= 0xFF0 )
    {
      if ( v27 >= 0xFF1 )
      {
        v28 = (_QWORD *)operator new[](v27 + 16);
        v29 = (char *)(v28 + 2);
        *v28 = *v20;
        v28[1] = 0;
        *v20 = v28;
        if ( !v26 )
          goto LABEL_34;
        goto LABEL_33;
      }
      v30 = (_QWORD *)operator new[](0x1000u);
      v24 = 0;
      *v30 = v20;
      v30[1] = 0;
      v25 = v30 + 1;
      v20 = v30;
      *(_QWORD *)(a1 + 4832) = v30;
    }
    v31 = v24 + v27;
    v29 = (char *)v20 + v24 + 16;
    *v25 = v31;
    if ( !v26 )
    {
LABEL_34:
      *(_QWORD *)(a1 + 24) = v23;
      v32 = v20 + 1;
      v33 = v20[1];
      v34 = v26 >> 3;
      if ( (unsigned __int64)(v33 + 32) >= 0xFF0 )
      {
        v35 = (_QWORD *)operator new[](0x1000u);
        v33 = 0;
        *v35 = v20;
        v35[1] = 0;
        v32 = v35 + 1;
        v20 = v35;
        *(_QWORD *)(a1 + 4832) = v35;
      }
      *v32 = v33 + 32;
      *(_QWORD *)((char *)v20 + v33 + 16) = off_162CE8;
      result = (char *)v20 + v33 + 16;
      *((_DWORD *)result + 2) = 16843036;
      *((_QWORD *)result + 2) = v29;
      *((_QWORD *)result + 3) = v34;
      return result;
    }
LABEL_33:
    memmove(v29, v23, v26);
    v20 = *(_QWORD **)(a1 + 4832);
    v23 = (const void *)(*(_QWORD *)(a1 + 16) + 8 * v11);
    goto LABEL_34;
  }
  if ( v4 != 76 )
  {
    if ( v4 == 88 )
    {
      *(_QWORD *)a1 = v1 + 1;
      result = sub_DFE94((unsigned __int8 **)a1);
      if ( !result )
        return result;
      goto LABEL_6;
    }
    return (char *)sub_DB210(a1);
  }
  if ( (unsigned __int64)&v2[-*(_QWORD *)a1] < 2 || v1[1] != 90 )
    JUMPOUT(0xE22DC);
  *(_QWORD *)a1 = v1 + 2;
  result = sub_DA368((unsigned __int8 **)a1);
  if ( result )
  {
LABEL_6:
    v6 = *(unsigned __int8 **)a1;
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v6 != 69 )
      return nullptr;
    else
      *(_QWORD *)a1 = v6 + 1;
  }
  return result;
}
// DDBD4: control flows out of bounds to E22DC
// 162CE8: using guessed type __int64 (__fastcall *off_162CE8[7])();
